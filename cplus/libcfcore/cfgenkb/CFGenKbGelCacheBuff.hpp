#pragma once

// Description: C++18 specification for a GelCache buffer object.

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

#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGelCachePKey;
	class CFGenKbGelCacheByTenantIdxKey;
	class CFGenKbGelCacheByAltIdxKey;

	class CFGenKbGelCacheBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TENANTID;
		static const std::string COLNAME_GELCACHEID;
		static const std::string COLNAME_CACHENAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const std::string CACHENAME_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const std::string::size_type CACHENAME_MAX_LEN;
	protected:
		int64_t requiredTenantId;
		int64_t requiredGelCacheId;
		std::string* requiredCacheName;
		int32_t requiredRevision;
	public:
		CFGenKbGelCacheBuff();

		CFGenKbGelCacheBuff( const CFGenKbGelCacheBuff& src );

		virtual ~CFGenKbGelCacheBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredGelCacheId() const;
		virtual const int64_t* getRequiredGelCacheIdReference() const;
		virtual void setRequiredGelCacheId( const int64_t value );

		virtual const std::string& getRequiredCacheName() const;
		virtual const std::string* getRequiredCacheNameReference() const;
		virtual void setRequiredCacheName( const std::string& value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGelCacheByTenantIdxKey& rhs );
		bool operator <( const CFGenKbGelCacheByAltIdxKey& rhs );
		bool operator <( const CFGenKbGelCachePKey& rhs );
		bool operator <( const CFGenKbGelCacheBuff& rhs );

		bool operator <=( const CFGenKbGelCacheByTenantIdxKey& rhs );
		bool operator <=( const CFGenKbGelCacheByAltIdxKey& rhs );
		bool operator <=( const CFGenKbGelCachePKey& rhs );
		bool operator <=( const CFGenKbGelCacheBuff& rhs );

		bool operator ==( const CFGenKbGelCacheByTenantIdxKey& rhs );
		bool operator ==( const CFGenKbGelCacheByAltIdxKey& rhs );
		bool operator ==( const CFGenKbGelCachePKey& rhs );
		bool operator ==( const CFGenKbGelCacheBuff& rhs );

		bool operator !=( const CFGenKbGelCacheByTenantIdxKey& rhs );
		bool operator !=( const CFGenKbGelCacheByAltIdxKey& rhs );
		bool operator !=( const CFGenKbGelCachePKey& rhs );
		bool operator !=( const CFGenKbGelCacheBuff& rhs );

		bool operator >=( const CFGenKbGelCacheByTenantIdxKey& rhs );
		bool operator >=( const CFGenKbGelCacheByAltIdxKey& rhs );
		bool operator >=( const CFGenKbGelCachePKey& rhs );
		bool operator >=( const CFGenKbGelCacheBuff& rhs );

		bool operator >( const CFGenKbGelCacheByTenantIdxKey& rhs );
		bool operator >( const CFGenKbGelCacheByAltIdxKey& rhs );
		bool operator >( const CFGenKbGelCachePKey& rhs );
		bool operator >( const CFGenKbGelCacheBuff& rhs );
		cfcore::CFGenKbGelCacheBuff operator =( cfcore::CFGenKbGelCacheBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByTenantIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheByAltIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCachePKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelCacheBuff& lhs, const cfcore::CFGenKbGelCacheBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelCacheBuff> {
		typedef cfcore::CFGenKbGelCacheBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

