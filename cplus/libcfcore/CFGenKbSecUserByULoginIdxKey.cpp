// Description: C++18 implementation for a SecUser by ULoginIdx index key object.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>

using namespace std;

#include <cfgenkb/CFGenKbSecUserByULoginIdxKey.hpp>
#include <cfgenkb/CFGenKbSecUserBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecUserByULoginIdxKey::CLASS_NAME( "CFGenKbSecUserByULoginIdxKey" );
	const std::string CFGenKbSecUserByULoginIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecUserByULoginIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecUserByULoginIdxKey::CFGenKbSecUserByULoginIdxKey() {
		requiredLoginId = new std::string( cfcore::CFGenKbSecUserBuff::LOGINID_INIT_VALUE );
	}

	CFGenKbSecUserByULoginIdxKey::CFGenKbSecUserByULoginIdxKey( const CFGenKbSecUserByULoginIdxKey& src ) {
		requiredLoginId = new std::string( cfcore::CFGenKbSecUserBuff::LOGINID_INIT_VALUE );
		setRequiredLoginId( src.getRequiredLoginId() );
	}

	CFGenKbSecUserByULoginIdxKey::~CFGenKbSecUserByULoginIdxKey() {
		if( requiredLoginId != NULL ) {
			delete requiredLoginId;
			requiredLoginId = NULL;
		}
	}

	const std::string& CFGenKbSecUserByULoginIdxKey::getRequiredLoginId() const {
		return( *requiredLoginId );
	}

	const std::string* CFGenKbSecUserByULoginIdxKey::getRequiredLoginIdReference() const {
		return( requiredLoginId );
	}

	void CFGenKbSecUserByULoginIdxKey::setRequiredLoginId( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredLoginId" );
		if( value.length() > CFGenKbSecUserBuff::LOGINID_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecUserBuff::LOGINID_MAX_LEN );
		}
		if( requiredLoginId != NULL ) {
			delete requiredLoginId;
			requiredLoginId = NULL;
		}
		requiredLoginId = new std::string( value );
	}

	size_t CFGenKbSecUserByULoginIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredLoginId() );
		return( hashCode );
	}

	std::string CFGenKbSecUserByULoginIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecUserByULoginIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_LoginId( "LoginId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LoginId, getRequiredLoginId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator <( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator <( const CFGenKbSecUserBuff& rhs ) {
		if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator <=( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator <=( const CFGenKbSecUserBuff& rhs ) {
		if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator ==( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator ==( const CFGenKbSecUserBuff& rhs ) {
		if( getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator !=( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator !=( const CFGenKbSecUserBuff& rhs ) {
		if( getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator >=( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator >=( const CFGenKbSecUserBuff& rhs ) {
		if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator >( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserByULoginIdxKey::operator >( const CFGenKbSecUserBuff& rhs ) {
		if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbSecUserByULoginIdxKey CFGenKbSecUserByULoginIdxKey::operator =( cfcore::CFGenKbSecUserByULoginIdxKey& src ) {
		setRequiredLoginId( src.getRequiredLoginId() );
		return( *this );
	}

	CFGenKbSecUserByULoginIdxKey CFGenKbSecUserByULoginIdxKey::operator =( cfcore::CFGenKbSecUserBuff& src ) {
		setRequiredLoginId( src.getRequiredLoginId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( lhs.getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( lhs.getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecUserByULoginIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}
}

