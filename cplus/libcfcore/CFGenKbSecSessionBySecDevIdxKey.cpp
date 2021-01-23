// Description: C++18 implementation for a SecSession by SecDevIdx index key object.

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

#include <cfgenkb/CFGenKbSecSessionBySecDevIdxKey.hpp>
#include <cfgenkb/CFGenKbSecSessionBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecSessionBySecDevIdxKey::CLASS_NAME( "CFGenKbSecSessionBySecDevIdxKey" );
	const std::string CFGenKbSecSessionBySecDevIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecSessionBySecDevIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecSessionBySecDevIdxKey::CFGenKbSecSessionBySecDevIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		optionalSecDevName = NULL;
	}

	CFGenKbSecSessionBySecDevIdxKey::CFGenKbSecSessionBySecDevIdxKey( const CFGenKbSecSessionBySecDevIdxKey& src ) {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		optionalSecDevName = NULL;
		setRequiredSecUserId( src.getRequiredSecUserId() );
		if( src.isOptionalSecDevNameNull() ) {
			setOptionalSecDevNameNull();
		}
		else {
			setOptionalSecDevNameValue( src.getOptionalSecDevNameValue() );
		}
	}

	CFGenKbSecSessionBySecDevIdxKey::~CFGenKbSecSessionBySecDevIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		if( optionalSecDevName != NULL ) {
			delete optionalSecDevName;
			optionalSecDevName = NULL;
		}
	}

	const uuid_ptr_t CFGenKbSecSessionBySecDevIdxKey::getRequiredSecUserId() const {
		return( requiredSecUserId );
	}

	const uuid_ptr_t CFGenKbSecSessionBySecDevIdxKey::getRequiredSecUserIdReference() const {
		return( requiredSecUserId );
	}

	void CFGenKbSecSessionBySecDevIdxKey::setRequiredSecUserId( const uuid_ptr_t value ) {
		static const std::string S_ProcName( "setRequiredSecUserId" );
		uuid_copy( requiredSecUserId, value );
	}

	void CFGenKbSecSessionBySecDevIdxKey::generateRequiredSecUserId() {
		uuid_generate_random( requiredSecUserId );
	}

	const std::string& CFGenKbSecSessionBySecDevIdxKey::getOptionalSecDevNameValue() const {
		static const std::string S_ProcName( "getOptionalSecDevNameValue" );
		if( optionalSecDevName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalSecDevName );
	}

	const std::string* CFGenKbSecSessionBySecDevIdxKey::getOptionalSecDevNameReference() const {
		return( optionalSecDevName );
	}

	const bool CFGenKbSecSessionBySecDevIdxKey::isOptionalSecDevNameNull() const {
		return( optionalSecDevName == NULL );
	}

	void CFGenKbSecSessionBySecDevIdxKey::setOptionalSecDevNameNull() {
		if( optionalSecDevName != NULL ) {
			delete optionalSecDevName;
			optionalSecDevName = NULL;
		}
	}

	void CFGenKbSecSessionBySecDevIdxKey::setOptionalSecDevNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalSecDevNameValue" );
		if( value.length() > CFGenKbSecSessionBuff::SECDEVNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecSessionBuff::SECDEVNAME_MAX_LEN );
		}
		if( optionalSecDevName != NULL ) {
			delete optionalSecDevName;
			optionalSecDevName = NULL;
		}
		optionalSecDevName = new std::string( value );
	}

	size_t CFGenKbSecSessionBySecDevIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredSecUserId() );
		if( ! isOptionalSecDevNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalSecDevNameValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbSecSessionBySecDevIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecSessionBySecDevIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_SecDevName( "SecDevName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, getRequiredSecUserId() ) );
		if( ! isOptionalSecDevNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SecDevName, getOptionalSecDevNameValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator <( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator <( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator <=( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator <=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator ==( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				if( getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator ==( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				if( getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator !=( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator !=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator >=( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator >=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator >( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbSecSessionBySecDevIdxKey::operator >( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbSecSessionBySecDevIdxKey CFGenKbSecSessionBySecDevIdxKey::operator =( cfcore::CFGenKbSecSessionBySecDevIdxKey& src ) {
		setRequiredSecUserId( src.getRequiredSecUserId() );
		if( src.isOptionalSecDevNameNull() ) {
			setOptionalSecDevNameNull();
		}
		else {
			setOptionalSecDevNameValue( src.getOptionalSecDevNameValue() );
		}
		return( *this );
	}

	CFGenKbSecSessionBySecDevIdxKey CFGenKbSecSessionBySecDevIdxKey::operator =( cfcore::CFGenKbSecSessionBuff& src ) {
		setRequiredSecUserId( src.getRequiredSecUserId() );
		if( src.isOptionalSecDevNameNull() ) {
			setOptionalSecDevNameNull();
		}
		else {
			setOptionalSecDevNameValue( src.getOptionalSecDevNameValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				if( lhs.getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				if( lhs.getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBySecDevIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

