#pragma once

// Description: C++18 DbIO interface for GelCache.

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
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbGelCacheBuff.hpp>
#include <cfgenkb/CFGenKbGelCachePKey.hpp>
#include <cfgenkb/CFGenKbGelCacheByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCacheByAltIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbGelCacheObj;

	class ICFGenKbGelCacheTable
	{
	public:
		ICFGenKbGelCacheTable();
		virtual ~ICFGenKbGelCacheTable();

		virtual cfcore::CFGenKbGelCacheBuff* createGelCache( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCacheBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGelCacheBuff* updateGelCache( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCacheBuff* Buff ) = 0;

		virtual void deleteGelCache( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCacheBuff* Buff ) = 0;
		virtual void deleteGelCacheByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId ) = 0;

		virtual void deleteGelCacheByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCachePKey* argKey ) = 0;
		virtual void deleteGelCacheByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGelCacheByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCacheByTenantIdxKey* argKey ) = 0;
		virtual void deleteGelCacheByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argCacheName ) = 0;

		virtual void deleteGelCacheByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCacheByAltIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGelCacheBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCachePKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelCacheBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCachePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelCacheBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual cfcore::CFGenKbGelCacheBuff* readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& CacheName ) = 0;

		virtual cfcore::CFGenKbGelCacheBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCachePKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelCacheBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCachePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelCacheBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual cfcore::CFGenKbGelCacheBuff* readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& CacheName ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
