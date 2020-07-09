// Description: C++18 implementation for a GelInstruction by GelCacheIdx index key object.

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

#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelInstructionByGelCacheIdxKey::CLASS_NAME( "CFGenKbGelInstructionByGelCacheIdxKey" );
	const std::string CFGenKbGelInstructionByGelCacheIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelInstructionByGelCacheIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelInstructionByGelCacheIdxKey::CFGenKbGelInstructionByGelCacheIdxKey() {
		requiredTenantId = cfcore::CFGenKbGelInstructionBuff::TENANTID_INIT_VALUE;
		requiredGelCacheId = cfcore::CFGenKbGelInstructionBuff::GELCACHEID_INIT_VALUE;
	}

	CFGenKbGelInstructionByGelCacheIdxKey::CFGenKbGelInstructionByGelCacheIdxKey( const CFGenKbGelInstructionByGelCacheIdxKey& src ) {
		requiredTenantId = cfcore::CFGenKbGelInstructionBuff::TENANTID_INIT_VALUE;
		requiredGelCacheId = cfcore::CFGenKbGelInstructionBuff::GELCACHEID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
	}

	CFGenKbGelInstructionByGelCacheIdxKey::~CFGenKbGelInstructionByGelCacheIdxKey() {
	}

	const int64_t CFGenKbGelInstructionByGelCacheIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbGelInstructionByGelCacheIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbGelInstructionByGelCacheIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbGelInstructionBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelInstructionBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFGenKbGelInstructionByGelCacheIdxKey::getRequiredGelCacheId() const {
		return( requiredGelCacheId );
	}

	const int64_t* CFGenKbGelInstructionByGelCacheIdxKey::getRequiredGelCacheIdReference() const {
		return( &requiredGelCacheId );
	}

	void CFGenKbGelInstructionByGelCacheIdxKey::setRequiredGelCacheId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredGelCacheId" );
		if( value < cfcore::CFGenKbGelInstructionBuff::GELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelInstructionBuff::GELCACHEID_MIN_VALUE );
		}
		requiredGelCacheId = value;
	}

	size_t CFGenKbGelInstructionByGelCacheIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredGelCacheId() );
		return( hashCode );
	}

	std::string CFGenKbGelInstructionByGelCacheIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelInstructionByGelCacheIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, getRequiredGelCacheId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator <( const CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator <( const CFGenKbGelInstructionBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator <=( const CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator <=( const CFGenKbGelInstructionBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator ==( const CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator ==( const CFGenKbGelInstructionBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator !=( const CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator !=( const CFGenKbGelInstructionBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator >=( const CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator >=( const CFGenKbGelInstructionBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator >( const CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelInstructionByGelCacheIdxKey::operator >( const CFGenKbGelInstructionBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbGelInstructionByGelCacheIdxKey CFGenKbGelInstructionByGelCacheIdxKey::operator =( cfcore::CFGenKbGelInstructionByGelCacheIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		return( *this );
	}

	CFGenKbGelInstructionByGelCacheIdxKey CFGenKbGelInstructionByGelCacheIdxKey::operator =( cfcore::CFGenKbGelInstructionBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelInstructionByGelCacheIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}
}

