// Description: C++18 implementation for a GelCache buffer object.

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

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbGelCacheByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCacheByAltIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGelCacheBuff::S_VALUE( "value" );
	const std::string CFGenKbGelCacheBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbGelCacheBuff::GENDEFNAME( "GelCache" );
	const classcode_t CFGenKbGelCacheBuff::CLASS_CODE = 0xa915L;
	const std::string CFGenKbGelCacheBuff::CLASS_NAME( "CFGenKbGelCacheBuff" );
		const std::string CFGenKbGelCacheBuff::COLNAME_TENANTID( "TenantId" );
		const std::string CFGenKbGelCacheBuff::COLNAME_GELCACHEID( "GelCacheId" );
		const std::string CFGenKbGelCacheBuff::COLNAME_CACHENAME( "CacheName" );
	const int64_t CFGenKbGelCacheBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCacheBuff::GELCACHEID_INIT_VALUE = 0LL;
	const std::string CFGenKbGelCacheBuff::CACHENAME_INIT_VALUE( "" );
	const int64_t CFGenKbGelCacheBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCacheBuff::GELCACHEID_MIN_VALUE = 0LL;
	const std::string::size_type CFGenKbGelCacheBuff::CACHENAME_MAX_LEN = 511;

	CFGenKbGelCacheBuff::CFGenKbGelCacheBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredTenantId = cfcore::CFGenKbGelCacheBuff::TENANTID_INIT_VALUE;
		requiredGelCacheId = cfcore::CFGenKbGelCacheBuff::GELCACHEID_INIT_VALUE;
		requiredCacheName = new std::string( cfcore::CFGenKbGelCacheBuff::CACHENAME_INIT_VALUE );
	}

	CFGenKbGelCacheBuff::CFGenKbGelCacheBuff( const CFGenKbGelCacheBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredTenantId = cfcore::CFGenKbGelCacheBuff::TENANTID_INIT_VALUE;
		requiredGelCacheId = cfcore::CFGenKbGelCacheBuff::GELCACHEID_INIT_VALUE;
		requiredCacheName = new std::string( cfcore::CFGenKbGelCacheBuff::CACHENAME_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredCacheName( src.getRequiredCacheName() );
	}

	CFGenKbGelCacheBuff::~CFGenKbGelCacheBuff() {
		if( requiredCacheName != NULL ) {
			delete requiredCacheName;
			requiredCacheName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbGelCacheBuff::clone() {
		CFGenKbGelCacheBuff* copy = new CFGenKbGelCacheBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGelCacheBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelCacheBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelCacheBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const int64_t CFGenKbGelCacheBuff::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbGelCacheBuff::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbGelCacheBuff::setRequiredTenantId( const int64_t value ) {
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

	const int64_t CFGenKbGelCacheBuff::getRequiredGelCacheId() const {
		return( requiredGelCacheId );
	}

	const int64_t* CFGenKbGelCacheBuff::getRequiredGelCacheIdReference() const {
		return( &requiredGelCacheId );
	}

	void CFGenKbGelCacheBuff::setRequiredGelCacheId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredGelCacheId" );
		if( value < cfcore::CFGenKbGelCacheBuff::GELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCacheBuff::GELCACHEID_MIN_VALUE );
		}
		requiredGelCacheId = value;
	}

	const std::string& CFGenKbGelCacheBuff::getRequiredCacheName() const {
		return( *requiredCacheName );
	}

	const std::string* CFGenKbGelCacheBuff::getRequiredCacheNameReference() const {
		return( requiredCacheName );
	}

	void CFGenKbGelCacheBuff::setRequiredCacheName( const std::string& value ) {
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

	int32_t CFGenKbGelCacheBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbGelCacheBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbGelCacheBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredGelCacheId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredCacheName() );
		return( hashCode );
	}

	CFGenKbGelCacheBuff CFGenKbGelCacheBuff::operator =( cfcore::CFGenKbGelCacheBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredCacheName( src.getRequiredCacheName() );
		return( *this );
	}

	bool CFGenKbGelCacheBuff::operator <( const CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheBuff::operator <( const CFGenKbGelCacheByAltIdxKey& rhs ) {
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

	bool CFGenKbGelCacheBuff::operator <( const CFGenKbGelCachePKey& rhs ) {
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

	bool CFGenKbGelCacheBuff::operator <( const CFGenKbGelCacheBuff& rhs ) {
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
		if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheBuff::operator <=( const CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelCacheBuff::operator <=( const CFGenKbGelCacheByAltIdxKey& rhs ) {
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

	bool CFGenKbGelCacheBuff::operator <=( const CFGenKbGelCachePKey& rhs ) {
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

	bool CFGenKbGelCacheBuff::operator <=( const CFGenKbGelCacheBuff& rhs ) {
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
		if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelCacheBuff::operator ==( const CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelCacheBuff::operator ==( const CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelCacheBuff::operator ==( const CFGenKbGelCachePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelCacheBuff::operator ==( const CFGenKbGelCacheBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelCacheBuff::operator !=( const CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheBuff::operator !=( const CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheBuff::operator !=( const CFGenKbGelCachePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheBuff::operator !=( const CFGenKbGelCacheBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheBuff::operator >=( const CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelCacheBuff::operator >=( const CFGenKbGelCacheByAltIdxKey& rhs ) {
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

	bool CFGenKbGelCacheBuff::operator >=( const CFGenKbGelCachePKey& rhs ) {
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

	bool CFGenKbGelCacheBuff::operator >=( const CFGenKbGelCacheBuff& rhs ) {
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
		if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelCacheBuff::operator >( const CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCacheBuff::operator >( const CFGenKbGelCacheByAltIdxKey& rhs ) {
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

	bool CFGenKbGelCacheBuff::operator >( const CFGenKbGelCachePKey& rhs ) {
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

	bool CFGenKbGelCacheBuff::operator >( const CFGenKbGelCacheBuff& rhs ) {
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
		if( getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbGelCacheBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCacheBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_CacheName( "CacheName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CacheName, getRequiredCacheName() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
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
		if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
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
		if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( lhs.getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredCacheName() != rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
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
		if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs ) {
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
		if( lhs.getRequiredCacheName() < rhs.getRequiredCacheName() ) {
			return( false );
		}
		else if( lhs.getRequiredCacheName() > rhs.getRequiredCacheName() ) {
			return( true );
		}
		return( false );
	}
}

