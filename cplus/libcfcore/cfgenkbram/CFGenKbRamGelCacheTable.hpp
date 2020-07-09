#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GelCache.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>


namespace cfcore {

	class CFGenKbRamGelCacheTable
	: public virtual cfcore::ICFGenKbGelCacheTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGelCachePKey,
			cfcore::CFGenKbGelCacheBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbGelCacheByTenantIdxKey,
			std::map<cfcore::CFGenKbGelCachePKey,
				cfcore::CFGenKbGelCacheBuff*>*>* dictByTenantIdx;
		std::map<cfcore::CFGenKbGelCacheByAltIdxKey,
			cfcore::CFGenKbGelCacheBuff*>* dictByAltIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGelCacheTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGelCacheTable();

		virtual cfcore::CFGenKbGelCacheBuff* createGelCache( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCacheBuff* Buff );

		virtual cfcore::CFGenKbGelCacheBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCachePKey* PKey );

		virtual cfcore::CFGenKbGelCacheBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCachePKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual cfcore::CFGenKbGelCacheBuff* readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& CacheName );

		virtual cfcore::CFGenKbGelCacheBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual cfcore::CFGenKbGelCacheBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCachePKey* PKey );

		virtual cfcore::CFGenKbGelCacheBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCachePKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGelCacheBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual cfcore::CFGenKbGelCacheBuff* readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& CacheName );

		virtual cfcore::CFGenKbGelCacheBuff* updateGelCache( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCacheBuff* Buff );

		virtual void deleteGelCache( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCacheBuff* Buff );
		virtual void deleteGelCacheByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId );

		virtual void deleteGelCacheByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCachePKey* argKey );

		virtual void deleteGelCacheByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGelCacheByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCacheByTenantIdxKey* argKey );

		virtual void deleteGelCacheByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argCacheName );

		virtual void deleteGelCacheByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCacheByAltIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
