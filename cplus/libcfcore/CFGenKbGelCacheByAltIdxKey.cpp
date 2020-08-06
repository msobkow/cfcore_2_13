// Description: C++18 implementation for a GelCache by AltIdx index key object.

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

#include <cfgenkb/CFGenKbGelCacheByAltIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCacheBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelCacheByAltIdxKey::CLASS_NAME( "CFGenKbGelCacheByAltIdxKey" );
	const std::string CFGenKbGelCacheByAltIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelCacheByAltIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelCacheByAltIdxKey::CFGenKbGelCacheByAltIdxKey() {
		requiredTenantId = cfcore::CFGenKbGelCacheBuff::TENANTID_INIT_VALUE;
		requiredCacheName = new std::string( cfcore::CFGenKbGelCacheBuff::CACHENAME_INIT_VALUE );
	}

	CFGenKbGelCacheByAltIdxKey::CFGenKbGelCacheByAltIdxKey( const CFGenKbGelCacheByAltIdxKey& src ) {
		requiredTenantId = cfcore::CFGenKbGelCacheBuff::TENANTID_INIT_VALUE;
		requiredCacheName = new std::string( cfcore::CFGenKbGelCacheBuff::CACHENAME_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredCacheName( src.getRequiredCacheName() );
	}

	CFGenKbGelCacheByAltIdxKey::~CFGenKbGelCacheByAltIdxKey() {
		if( requiredCacheName != NULL ) {
			delete requiredCacheName;
			requiredCacheName = NULL;
		}
	}

	const int64_t CFGenKbGelCacheByAltIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbGelCacheByAltIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbGelCacheByAltIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbGelCacheBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCacheBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const std::string& CFGenKbGelCacheByAltIdxKey::getRequiredCacheName() const {
		return( *requiredCacheName );
	}

	const std::string* CFGenKbGelCacheByAltIdxKey::getRequiredCacheNameReference() const {
		return( requiredCacheName );
	}

	void CFGenKbGelCacheByAltIdxKey::setRequiredCacheName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredCacheName" );
		if( value.length() > CFGenKbGelCacheBuff::CACHENAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelCacheBuff::CACHENAME_MAX_LEN );
		}
		if( requiredCacheName != NULL ) {
			delete requiredCacheName;
			requiredCacheName = NULL;
		}
		requiredCacheName = new std::string( value );
	}

	size_t CFGenKbGelCacheByAltIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredCacheName() );
		return( hashCode );
	}

	std::string CFGenKbGelCacheByAltIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCacheByAltIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_CacheName( "CacheName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CacheName, getRequiredCacheName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator <( const CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator <( const CFGenKbGelCacheBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator <=( const CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator <=( const CFGenKbGelCacheBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator ==( const CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator ==( const CFGenKbGelCacheBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator !=( const CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator !=( const CFGenKbGelCacheBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator >=( const CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator >=( const CFGenKbGelCacheBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator >( const CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheByAltIdxKey::operator >( const CFGenKbGelCacheBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbGelCacheByAltIdxKey CFGenKbGelCacheByAltIdxKey::operator =( cfcore::CFGenKbGelCacheByAltIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredCacheName( src.getRequiredCacheName() );
		return( *this );
	}

	CFGenKbGelCacheByAltIdxKey CFGenKbGelCacheByAltIdxKey::operator =( cfcore::CFGenKbGelCacheBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredCacheName( src.getRequiredCacheName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCacheByAltIdxKey& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}
}

