// Description: C++18 implementation of a TSecGrpInc primary key object.

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

#include <cfgenkb/CFGenKbTSecGrpIncPKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpIncBuff.hpp>

namespace cfcore {

	const std::string CFGenKbTSecGrpIncPKey::CLASS_NAME( "CFGenKbTSecGrpIncPKey" );
	const std::string CFGenKbTSecGrpIncPKey::S_VALUE( "value" );
	const std::string CFGenKbTSecGrpIncPKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbTSecGrpIncPKey::CFGenKbTSecGrpIncPKey() {
		requiredTenantId = cfcore::CFGenKbTSecGrpIncBuff::TENANTID_INIT_VALUE;
		requiredTSecGrpIncId = cfcore::CFGenKbTSecGrpIncBuff::TSECGRPINCID_INIT_VALUE;
	}

	CFGenKbTSecGrpIncPKey::CFGenKbTSecGrpIncPKey( const CFGenKbTSecGrpIncPKey& src ) {
		requiredTenantId = cfcore::CFGenKbTSecGrpIncBuff::TENANTID_INIT_VALUE;
		requiredTSecGrpIncId = cfcore::CFGenKbTSecGrpIncBuff::TSECGRPINCID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGrpIncId( src.getRequiredTSecGrpIncId() );
	}

	CFGenKbTSecGrpIncPKey::~CFGenKbTSecGrpIncPKey() {
	}

	const int64_t CFGenKbTSecGrpIncPKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbTSecGrpIncPKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbTSecGrpIncPKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbTSecGrpIncBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTSecGrpIncBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFGenKbTSecGrpIncPKey::getRequiredTSecGrpIncId() const {
		return( requiredTSecGrpIncId );
	}

	const int64_t* CFGenKbTSecGrpIncPKey::getRequiredTSecGrpIncIdReference() const {
		return( &requiredTSecGrpIncId );
	}

	void CFGenKbTSecGrpIncPKey::setRequiredTSecGrpIncId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTSecGrpIncId" );
		if( value < cfcore::CFGenKbTSecGrpIncBuff::TSECGRPINCID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTSecGrpIncBuff::TSECGRPINCID_MIN_VALUE );
		}
		requiredTSecGrpIncId = value;
	}

	bool CFGenKbTSecGrpIncPKey::operator <( const CFGenKbTSecGrpIncPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpIncPKey::operator <( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpIncPKey::operator <=( const CFGenKbTSecGrpIncPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncPKey::operator <=( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncPKey::operator ==( const CFGenKbTSecGrpIncPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTSecGrpIncId() != rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncPKey::operator ==( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTSecGrpIncId() != rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncPKey::operator !=( const CFGenKbTSecGrpIncPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpIncId() != rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpIncPKey::operator !=( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpIncId() != rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpIncPKey::operator >=( const CFGenKbTSecGrpIncPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncPKey::operator >=( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncPKey::operator >( const CFGenKbTSecGrpIncPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpIncPKey::operator >( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbTSecGrpIncPKey CFGenKbTSecGrpIncPKey::operator =( cfcore::CFGenKbTSecGrpIncPKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGrpIncId( src.getRequiredTSecGrpIncId() );
		return( *this );
	}

	CFGenKbTSecGrpIncPKey CFGenKbTSecGrpIncPKey::operator =( cfcore::CFGenKbTSecGrpIncBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGrpIncId( src.getRequiredTSecGrpIncId() );
		return( *this );
	}

	size_t CFGenKbTSecGrpIncPKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredTSecGrpIncId() );
		return( hashCode );
	}

	std::string CFGenKbTSecGrpIncPKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGrpIncPKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGrpIncId( "TSecGrpIncId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TSecGrpIncId, getRequiredTSecGrpIncId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGrpIncId() != rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGrpIncId() != rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpIncId() != rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpIncId() != rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}
}

