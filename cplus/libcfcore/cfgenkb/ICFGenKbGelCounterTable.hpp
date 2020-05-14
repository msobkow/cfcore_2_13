#pragma once

// Description: C++18 DbIO interface for GelCounter.

/*
 *	com.github.msobkow.CFCore
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
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbGelCounterBuff.hpp>
#include <cfgenkb/CFGenKbGelInstructionPKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbGelCounterObj;

	class ICFGenKbGelCounterTable
	{
	public:
		ICFGenKbGelCounterTable();
		virtual ~ICFGenKbGelCounterTable();

		virtual cfcore::CFGenKbGelCounterBuff* createGelCounter( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCounterBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGelCounterBuff* updateGelCounter( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCounterBuff* Buff ) = 0;

		virtual void deleteGelCounter( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCounterBuff* Buff ) = 0;
		virtual void deleteGelCounterByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId ) = 0;

		virtual void deleteGelCounterByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey ) = 0;
		virtual void deleteGelCounterByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGelCounterByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey ) = 0;
		virtual void deleteGelCounterByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId ) = 0;

		virtual void deleteGelCounterByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey ) = 0;
		virtual void deleteGelCounterByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId ) = 0;

		virtual void deleteGelCounterByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGelCounterBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelCounterBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCounterBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelCounterBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCounterBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCounterBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCounterBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual cfcore::CFGenKbGelCounterBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelCounterBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCounterBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelCounterBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCounterBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCounterBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCounterBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
