// Description: C++18 implementation for a SecApp by UJEEMountIdx index key object.

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

#include <cfgenkb/CFGenKbSecAppByUJEEMountIdxKey.hpp>
#include <cfgenkb/CFGenKbSecAppBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecAppByUJEEMountIdxKey::CLASS_NAME( "CFGenKbSecAppByUJEEMountIdxKey" );
	const std::string CFGenKbSecAppByUJEEMountIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecAppByUJEEMountIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecAppByUJEEMountIdxKey::CFGenKbSecAppByUJEEMountIdxKey() {
		requiredClusterId = cfcore::CFGenKbSecAppBuff::CLUSTERID_INIT_VALUE;
		requiredJEEMountName = new std::string( cfcore::CFGenKbSecAppBuff::JEEMOUNTNAME_INIT_VALUE );
	}

	CFGenKbSecAppByUJEEMountIdxKey::CFGenKbSecAppByUJEEMountIdxKey( const CFGenKbSecAppByUJEEMountIdxKey& src ) {
		requiredClusterId = cfcore::CFGenKbSecAppBuff::CLUSTERID_INIT_VALUE;
		requiredJEEMountName = new std::string( cfcore::CFGenKbSecAppBuff::JEEMOUNTNAME_INIT_VALUE );
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredJEEMountName( src.getRequiredJEEMountName() );
	}

	CFGenKbSecAppByUJEEMountIdxKey::~CFGenKbSecAppByUJEEMountIdxKey() {
		if( requiredJEEMountName != NULL ) {
			delete requiredJEEMountName;
			requiredJEEMountName = NULL;
		}
	}

	const int64_t CFGenKbSecAppByUJEEMountIdxKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecAppByUJEEMountIdxKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecAppByUJEEMountIdxKey::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecAppBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecAppBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const std::string& CFGenKbSecAppByUJEEMountIdxKey::getRequiredJEEMountName() const {
		return( *requiredJEEMountName );
	}

	const std::string* CFGenKbSecAppByUJEEMountIdxKey::getRequiredJEEMountNameReference() const {
		return( requiredJEEMountName );
	}

	void CFGenKbSecAppByUJEEMountIdxKey::setRequiredJEEMountName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredJEEMountName" );
		if( value.length() > CFGenKbSecAppBuff::JEEMOUNTNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecAppBuff::JEEMOUNTNAME_MAX_LEN );
		}
		if( requiredJEEMountName != NULL ) {
			delete requiredJEEMountName;
			requiredJEEMountName = NULL;
		}
		requiredJEEMountName = new std::string( value );
	}

	size_t CFGenKbSecAppByUJEEMountIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredJEEMountName() );
		return( hashCode );
	}

	std::string CFGenKbSecAppByUJEEMountIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecAppByUJEEMountIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_JEEMountName( "JEEMountName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEEMountName, getRequiredJEEMountName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator <( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator <( const CFGenKbSecAppBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator <=( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator <=( const CFGenKbSecAppBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator ==( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator ==( const CFGenKbSecAppBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator !=( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator !=( const CFGenKbSecAppBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator >=( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator >=( const CFGenKbSecAppBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator >( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppByUJEEMountIdxKey::operator >( const CFGenKbSecAppBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbSecAppByUJEEMountIdxKey CFGenKbSecAppByUJEEMountIdxKey::operator =( cfcore::CFGenKbSecAppByUJEEMountIdxKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredJEEMountName( src.getRequiredJEEMountName() );
		return( *this );
	}

	CFGenKbSecAppByUJEEMountIdxKey CFGenKbSecAppByUJEEMountIdxKey::operator =( cfcore::CFGenKbSecAppBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredJEEMountName( src.getRequiredJEEMountName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecAppByUJEEMountIdxKey& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}
}

