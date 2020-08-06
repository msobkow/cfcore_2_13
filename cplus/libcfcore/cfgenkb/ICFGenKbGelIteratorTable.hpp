#pragma once

// Description: C++18 DbIO interface for GelIterator.

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
#include <cfgenkb/CFGenKbGelIteratorBuff.hpp>
#include <cfgenkb/CFGenKbGelInstructionPKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByBeforeIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByFirstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByEachIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByLastIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByLoneIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByEmptyIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbGelIteratorObj;

	class ICFGenKbGelIteratorTable
	{
	public:
		ICFGenKbGelIteratorTable();
		virtual ~ICFGenKbGelIteratorTable();

		virtual cfcore::CFGenKbGelIteratorBuff* createGelIterator( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelIteratorBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGelIteratorBuff* updateGelIterator( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelIteratorBuff* Buff ) = 0;

		virtual void deleteGelIterator( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelIteratorBuff* Buff ) = 0;
		virtual void deleteGelIteratorByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandBefore ) = 0;

		virtual void deleteGelIteratorByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByBeforeIdxKey* argKey ) = 0;
		virtual void deleteGelIteratorByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandFirst ) = 0;

		virtual void deleteGelIteratorByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByFirstIdxKey* argKey ) = 0;
		virtual void deleteGelIteratorByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argExpandEach ) = 0;

		virtual void deleteGelIteratorByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByEachIdxKey* argKey ) = 0;
		virtual void deleteGelIteratorByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLast ) = 0;

		virtual void deleteGelIteratorByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByLastIdxKey* argKey ) = 0;
		virtual void deleteGelIteratorByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLone ) = 0;

		virtual void deleteGelIteratorByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByLoneIdxKey* argKey ) = 0;
		virtual void deleteGelIteratorByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandEmpty ) = 0;

		virtual void deleteGelIteratorByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByEmptyIdxKey* argKey ) = 0;
		virtual void deleteGelIteratorByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId ) = 0;

		virtual void deleteGelIteratorByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey ) = 0;
		virtual void deleteGelIteratorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGelIteratorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey ) = 0;
		virtual void deleteGelIteratorByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId ) = 0;

		virtual void deleteGelIteratorByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey ) = 0;
		virtual void deleteGelIteratorByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId ) = 0;

		virtual void deleteGelIteratorByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGelIteratorBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelIteratorBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelIteratorBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty ) = 0;

		virtual cfcore::CFGenKbGelIteratorBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelIteratorBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelIteratorBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
