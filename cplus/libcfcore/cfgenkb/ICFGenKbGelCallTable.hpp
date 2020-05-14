#pragma once

// Description: C++18 DbIO interface for GelCall.

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
#include <cfgenkb/CFGenKbGelCallBuff.hpp>
#include <cfgenkb/CFGenKbGelInstructionPKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallByCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallBySeqIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallByCallInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallByPrevInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallByNextInstIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbGelCallObj;

	class ICFGenKbGelCallTable
	{
	public:
		ICFGenKbGelCallTable();
		virtual ~ICFGenKbGelCallTable();

		virtual cfcore::CFGenKbGelCallBuff* createGelCall( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCallBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGelCallBuff* updateGelCall( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCallBuff* Buff ) = 0;

		virtual void deleteGelCall( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCallBuff* Buff ) = 0;
		virtual void deleteGelCallByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId ) = 0;

		virtual void deleteGelCallByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCallByCacheIdxKey* argKey ) = 0;
		virtual void deleteGelCallBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argSeqInstTenantId,
			const int64_t* argSeqInstGelCacheId,
			const int64_t* argSeqInstId ) = 0;

		virtual void deleteGelCallBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCallBySeqIdxKey* argKey ) = 0;
		virtual void deleteGelCallByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argCallInstTenantId,
			const int64_t* argCallInstGelCacheId,
			const int64_t* argCallInstId ) = 0;

		virtual void deleteGelCallByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCallByCallInstIdxKey* argKey ) = 0;
		virtual void deleteGelCallByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argPrevInstTenantId,
			const int64_t* argPrevInstGelCacheId,
			const int64_t* argPrevInstGelInstId ) = 0;

		virtual void deleteGelCallByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCallByPrevInstIdxKey* argKey ) = 0;
		virtual void deleteGelCallByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argNextInstTenantId,
			const int64_t* argNextInstGelCacheId,
			const int64_t* argNextInstGelInstId ) = 0;

		virtual void deleteGelCallByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCallByNextInstIdxKey* argKey ) = 0;
		virtual void deleteGelCallByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId ) = 0;

		virtual void deleteGelCallByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey ) = 0;
		virtual void deleteGelCallByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGelCallByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey ) = 0;
		virtual void deleteGelCallByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId ) = 0;

		virtual void deleteGelCallByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey ) = 0;
		virtual void deleteGelCallByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId ) = 0;

		virtual void deleteGelCallByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGelCallBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelCallBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelCallBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId ) = 0;

		virtual cfcore::CFGenKbGelCallBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelCallBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelCallBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
