// Description: C++18 implementation of a SecGrpMemb primary key object.

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

#include <cfgenkb/CFGenKbSecGrpMembPKey.hpp>
#include <cfgenkb/CFGenKbSecGrpMembBuff.hpp>

namespace cfcore {

	const std::string CFGenKbSecGrpMembPKey::CLASS_NAME( "CFGenKbSecGrpMembPKey" );
	const std::string CFGenKbSecGrpMembPKey::S_VALUE( "value" );
	const std::string CFGenKbSecGrpMembPKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbSecGrpMembPKey::CFGenKbSecGrpMembPKey() {
		requiredClusterId = cfcore::CFGenKbSecGrpMembBuff::CLUSTERID_INIT_VALUE;
		requiredSecGrpMembId = cfcore::CFGenKbSecGrpMembBuff::SECGRPMEMBID_INIT_VALUE;
	}

	CFGenKbSecGrpMembPKey::CFGenKbSecGrpMembPKey( const CFGenKbSecGrpMembPKey& src ) {
		requiredClusterId = cfcore::CFGenKbSecGrpMembBuff::CLUSTERID_INIT_VALUE;
		requiredSecGrpMembId = cfcore::CFGenKbSecGrpMembBuff::SECGRPMEMBID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGrpMembId( src.getRequiredSecGrpMembId() );
	}

	CFGenKbSecGrpMembPKey::~CFGenKbSecGrpMembPKey() {
	}

	const int64_t CFGenKbSecGrpMembPKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecGrpMembPKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecGrpMembPKey::setRequiredClusterId( const int64_t value ) {
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

	const int64_t CFGenKbSecGrpMembPKey::getRequiredSecGrpMembId() const {
		return( requiredSecGrpMembId );
	}

	const int64_t* CFGenKbSecGrpMembPKey::getRequiredSecGrpMembIdReference() const {
		return( &requiredSecGrpMembId );
	}

	void CFGenKbSecGrpMembPKey::setRequiredSecGrpMembId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSecGrpMembId" );
		if( value < cfcore::CFGenKbSecGrpMembBuff::SECGRPMEMBID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpMembBuff::SECGRPMEMBID_MIN_VALUE );
		}
		requiredSecGrpMembId = value;
	}

	bool CFGenKbSecGrpMembPKey::operator <( const CFGenKbSecGrpMembPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpMembPKey::operator <( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpMembPKey::operator <=( const CFGenKbSecGrpMembPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembPKey::operator <=( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembPKey::operator ==( const CFGenKbSecGrpMembPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGrpMembId() != rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembPKey::operator ==( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGrpMembId() != rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembPKey::operator !=( const CFGenKbSecGrpMembPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpMembId() != rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpMembPKey::operator !=( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpMembId() != rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpMembPKey::operator >=( const CFGenKbSecGrpMembPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembPKey::operator >=( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembPKey::operator >( const CFGenKbSecGrpMembPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpMembPKey::operator >( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbSecGrpMembPKey CFGenKbSecGrpMembPKey::operator =( cfcore::CFGenKbSecGrpMembPKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGrpMembId( src.getRequiredSecGrpMembId() );
		return( *this );
	}

	CFGenKbSecGrpMembPKey CFGenKbSecGrpMembPKey::operator =( cfcore::CFGenKbSecGrpMembBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGrpMembId( src.getRequiredSecGrpMembId() );
		return( *this );
	}

	size_t CFGenKbSecGrpMembPKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + (int)( getRequiredSecGrpMembId() );
		return( hashCode );
	}

	std::string CFGenKbSecGrpMembPKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGrpMembPKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGrpMembId( "SecGrpMembId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SecGrpMembId, getRequiredSecGrpMembId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGrpMembId() != rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGrpMembId() != rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpMembId() != rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpMembId() != rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpMembPKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpMembId() < rhs.getRequiredSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpMembId() > rhs.getRequiredSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}
}

