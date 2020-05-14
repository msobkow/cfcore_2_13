#pragma once

// Description: C++18 DbIO interface for GelSpread.

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
#include <cfgenkb/CFGenKbGelSpreadBuff.hpp>
#include <cfgenkb/CFGenKbGelInstructionPKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByBetweenIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByBeforeIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByFirstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByEachIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByLastIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByLoneIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByEmptyIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbGelSpreadObj;

	class ICFGenKbGelSpreadTable
	{
	public:
		ICFGenKbGelSpreadTable();
		virtual ~ICFGenKbGelSpreadTable();

		virtual cfcore::CFGenKbGelSpreadBuff* createGelSpread( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSpreadBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGelSpreadBuff* updateGelSpread( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSpreadBuff* Buff ) = 0;

		virtual void deleteGelSpread( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSpreadBuff* Buff ) = 0;
		virtual void deleteGelSpreadByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandBetween ) = 0;

		virtual void deleteGelSpreadByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByBetweenIdxKey* argKey ) = 0;
		virtual void deleteGelSpreadByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandBefore ) = 0;

		virtual void deleteGelSpreadByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByBeforeIdxKey* argKey ) = 0;
		virtual void deleteGelSpreadByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandFirst ) = 0;

		virtual void deleteGelSpreadByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByFirstIdxKey* argKey ) = 0;
		virtual void deleteGelSpreadByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argExpandEach ) = 0;

		virtual void deleteGelSpreadByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByEachIdxKey* argKey ) = 0;
		virtual void deleteGelSpreadByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLast ) = 0;

		virtual void deleteGelSpreadByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByLastIdxKey* argKey ) = 0;
		virtual void deleteGelSpreadByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLone ) = 0;

		virtual void deleteGelSpreadByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByLoneIdxKey* argKey ) = 0;
		virtual void deleteGelSpreadByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandEmpty ) = 0;

		virtual void deleteGelSpreadByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByEmptyIdxKey* argKey ) = 0;
		virtual void deleteGelSpreadByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId ) = 0;

		virtual void deleteGelSpreadByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey ) = 0;
		virtual void deleteGelSpreadByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGelSpreadByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey ) = 0;
		virtual void deleteGelSpreadByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId ) = 0;

		virtual void deleteGelSpreadByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey ) = 0;
		virtual void deleteGelSpreadByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId ) = 0;

		virtual void deleteGelSpreadByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGelSpreadBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelSpreadBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelSpreadBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBetween ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty ) = 0;

		virtual cfcore::CFGenKbGelSpreadBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelSpreadBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelSpreadBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBetween ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
