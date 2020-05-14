#pragma once

// Description: C++18 DbIO interface for GelPop.

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
#include <cfgenkb/CFGenKbGelPopBuff.hpp>
#include <cfgenkb/CFGenKbGelInstructionPKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelPopByRemainderIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbGelPopObj;

	class ICFGenKbGelPopTable
	{
	public:
		ICFGenKbGelPopTable();
		virtual ~ICFGenKbGelPopTable();

		virtual cfcore::CFGenKbGelPopBuff* createGelPop( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelPopBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGelPopBuff* updateGelPop( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelPopBuff* Buff ) = 0;

		virtual void deleteGelPop( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelPopBuff* Buff ) = 0;
		virtual void deleteGelPopByRemainderIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argRemainderTenantId,
			const int64_t argRemainderGelCacheId,
			const int64_t* argRemainderInstId ) = 0;

		virtual void deleteGelPopByRemainderIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelPopByRemainderIdxKey* argKey ) = 0;
		virtual void deleteGelPopByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId ) = 0;

		virtual void deleteGelPopByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey ) = 0;
		virtual void deleteGelPopByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGelPopByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey ) = 0;
		virtual void deleteGelPopByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId ) = 0;

		virtual void deleteGelPopByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey ) = 0;
		virtual void deleteGelPopByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId ) = 0;

		virtual void deleteGelPopByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGelPopBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelPopBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelPopBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelPopBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelPopBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelPopBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelPopBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelPopBuff*> readDerivedByRemainderIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* RemainderTenantId,
			const int64_t RemainderGelCacheId,
			const int64_t* RemainderInstId ) = 0;

		virtual cfcore::CFGenKbGelPopBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelPopBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelPopBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelPopBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelPopBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelPopBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelPopBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelPopBuff*> readBuffByRemainderIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* RemainderTenantId,
			const int64_t RemainderGelCacheId,
			const int64_t* RemainderInstId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
