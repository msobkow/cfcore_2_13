#pragma once

// Description: C++18 DbIO interface for GelExecutable.

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
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbGelExecutableBuff.hpp>
#include <cfgenkb/CFGenKbGelInstructionPKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSequenceByFirstInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSequenceByLastInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelExecutableByGenItemIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbGelExecutableObj;

	class ICFGenKbGelExecutableTable
	{
	public:
		ICFGenKbGelExecutableTable();
		virtual ~ICFGenKbGelExecutableTable();

		virtual cfcore::CFGenKbGelExecutableBuff* createGelExecutable( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelExecutableBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGelExecutableBuff* updateGelExecutable( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelExecutableBuff* Buff ) = 0;

		virtual void deleteGelExecutable( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelExecutableBuff* Buff ) = 0;
		virtual void deleteGelExecutableByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId ) = 0;

		virtual void deleteGelExecutableByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelExecutableByGenItemIdxKey* argKey ) = 0;
		virtual void deleteGelExecutableByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argFirstInstTenantId,
			const int64_t* argFirstInstGelCacheId,
			const int64_t* argFirstInstId ) = 0;

		virtual void deleteGelExecutableByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSequenceByFirstInstIdxKey* argKey ) = 0;
		virtual void deleteGelExecutableByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argLastInstTenantId,
			const int64_t* argLastInstGelCacheId,
			const int64_t* argLastInstId ) = 0;

		virtual void deleteGelExecutableByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSequenceByLastInstIdxKey* argKey ) = 0;
		virtual void deleteGelExecutableByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId ) = 0;

		virtual void deleteGelExecutableByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey ) = 0;
		virtual void deleteGelExecutableByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGelExecutableByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey ) = 0;
		virtual void deleteGelExecutableByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId ) = 0;

		virtual void deleteGelExecutableByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey ) = 0;
		virtual void deleteGelExecutableByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId ) = 0;

		virtual void deleteGelExecutableByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGelExecutableBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelExecutableBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelExecutableBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual cfcore::CFGenKbGelExecutableBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelExecutableBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelExecutableBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
