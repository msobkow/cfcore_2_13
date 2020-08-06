#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GelSpread.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>


namespace cfcore {

	class CFGenKbRamGelSpreadTable
	: public virtual cfcore::ICFGenKbGelSpreadTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbGelSpreadByBetweenIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>* dictByBetweenIdx;
		std::map<cfcore::CFGenKbGelSpreadByBeforeIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>* dictByBeforeIdx;
		std::map<cfcore::CFGenKbGelSpreadByFirstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>* dictByFirstIdx;
		std::map<cfcore::CFGenKbGelSpreadByEachIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>* dictByEachIdx;
		std::map<cfcore::CFGenKbGelSpreadByLastIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>* dictByLastIdx;
		std::map<cfcore::CFGenKbGelSpreadByLoneIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>* dictByLoneIdx;
		std::map<cfcore::CFGenKbGelSpreadByEmptyIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>* dictByEmptyIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGelSpreadTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGelSpreadTable();

		virtual cfcore::CFGenKbGelSpreadBuff* createGelSpread( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSpreadBuff* Buff );

		virtual cfcore::CFGenKbGelSpreadBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual cfcore::CFGenKbGelSpreadBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBetween );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readDerivedByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty );

		virtual cfcore::CFGenKbGelSpreadBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual cfcore::CFGenKbGelSpreadBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual cfcore::CFGenKbGelSpreadBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGelSpreadBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBetween );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> readBuffByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> pageBuffByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBetween,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> pageBuffByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> pageBuffByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> pageBuffByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> pageBuffByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> pageBuffByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> pageBuffByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual cfcore::CFGenKbGelSpreadBuff* updateGelSpread( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSpreadBuff* Buff );

		virtual void deleteGelSpread( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSpreadBuff* Buff );
		virtual void deleteGelSpreadByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandBetween );

		virtual void deleteGelSpreadByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByBetweenIdxKey* argKey );

		virtual void deleteGelSpreadByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandBefore );

		virtual void deleteGelSpreadByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByBeforeIdxKey* argKey );

		virtual void deleteGelSpreadByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandFirst );

		virtual void deleteGelSpreadByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByFirstIdxKey* argKey );

		virtual void deleteGelSpreadByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argExpandEach );

		virtual void deleteGelSpreadByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByEachIdxKey* argKey );

		virtual void deleteGelSpreadByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLast );

		virtual void deleteGelSpreadByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByLastIdxKey* argKey );

		virtual void deleteGelSpreadByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLone );

		virtual void deleteGelSpreadByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByLoneIdxKey* argKey );

		virtual void deleteGelSpreadByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandEmpty );

		virtual void deleteGelSpreadByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSpreadByEmptyIdxKey* argKey );

		virtual void deleteGelSpreadByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId );

		virtual void deleteGelSpreadByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey );

		virtual void deleteGelSpreadByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGelSpreadByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey );

		virtual void deleteGelSpreadByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId );

		virtual void deleteGelSpreadByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey );

		virtual void deleteGelSpreadByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId );

		virtual void deleteGelSpreadByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
