// Description: C++18 implementation of a SecGrpInc primary key object.

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

#include <cfgenkb/CFGenKbSecGrpIncPKey.hpp>
#include <cfgenkb/CFGenKbSecGrpIncBuff.hpp>

namespace cfcore {

	const std::string CFGenKbSecGrpIncPKey::CLASS_NAME( "CFGenKbSecGrpIncPKey" );
	const std::string CFGenKbSecGrpIncPKey::S_VALUE( "value" );
	const std::string CFGenKbSecGrpIncPKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbSecGrpIncPKey::CFGenKbSecGrpIncPKey() {
		requiredClusterId = cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_INIT_VALUE;
		requiredSecGrpIncId = cfcore::CFGenKbSecGrpIncBuff::SECGRPINCID_INIT_VALUE;
	}

	CFGenKbSecGrpIncPKey::CFGenKbSecGrpIncPKey( const CFGenKbSecGrpIncPKey& src ) {
		requiredClusterId = cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_INIT_VALUE;
		requiredSecGrpIncId = cfcore::CFGenKbSecGrpIncBuff::SECGRPINCID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGrpIncId( src.getRequiredSecGrpIncId() );
	}

	CFGenKbSecGrpIncPKey::~CFGenKbSecGrpIncPKey() {
	}

	const int64_t CFGenKbSecGrpIncPKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecGrpIncPKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecGrpIncPKey::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const int64_t CFGenKbSecGrpIncPKey::getRequiredSecGrpIncId() const {
		return( requiredSecGrpIncId );
	}

	const int64_t* CFGenKbSecGrpIncPKey::getRequiredSecGrpIncIdReference() const {
		return( &requiredSecGrpIncId );
	}

	void CFGenKbSecGrpIncPKey::setRequiredSecGrpIncId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSecGrpIncId" );
		if( value < cfcore::CFGenKbSecGrpIncBuff::SECGRPINCID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpIncBuff::SECGRPINCID_MIN_VALUE );
		}
		requiredSecGrpIncId = value;
	}

	bool CFGenKbSecGrpIncPKey::operator <( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncPKey::operator <( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncPKey::operator <=( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncPKey::operator <=( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncPKey::operator ==( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncPKey::operator ==( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncPKey::operator !=( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncPKey::operator !=( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncPKey::operator >=( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncPKey::operator >=( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncPKey::operator >( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncPKey::operator >( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbSecGrpIncPKey CFGenKbSecGrpIncPKey::operator =( cfcore::CFGenKbSecGrpIncPKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGrpIncId( src.getRequiredSecGrpIncId() );
		return( *this );
	}

	CFGenKbSecGrpIncPKey CFGenKbSecGrpIncPKey::operator =( cfcore::CFGenKbSecGrpIncBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGrpIncId( src.getRequiredSecGrpIncId() );
		return( *this );
	}

	size_t CFGenKbSecGrpIncPKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + (int)( getRequiredSecGrpIncId() );
		return( hashCode );
	}

	std::string CFGenKbSecGrpIncPKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGrpIncPKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGrpIncId( "SecGrpIncId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SecGrpIncId, getRequiredSecGrpIncId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}
}

