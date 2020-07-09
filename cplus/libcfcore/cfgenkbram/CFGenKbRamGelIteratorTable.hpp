#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GelIterator.

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

	class CFGenKbRamGelIteratorTable
	: public virtual cfcore::ICFGenKbGelIteratorTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbGelIteratorByBeforeIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>* dictByBeforeIdx;
		std::map<cfcore::CFGenKbGelIteratorByFirstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>* dictByFirstIdx;
		std::map<cfcore::CFGenKbGelIteratorByEachIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>* dictByEachIdx;
		std::map<cfcore::CFGenKbGelIteratorByLastIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>* dictByLastIdx;
		std::map<cfcore::CFGenKbGelIteratorByLoneIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>* dictByLoneIdx;
		std::map<cfcore::CFGenKbGelIteratorByEmptyIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>* dictByEmptyIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGelIteratorTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGelIteratorTable();

		virtual cfcore::CFGenKbGelIteratorBuff* createGelIterator( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelIteratorBuff* Buff );

		virtual cfcore::CFGenKbGelIteratorBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual cfcore::CFGenKbGelIteratorBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readDerivedByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty );

		virtual cfcore::CFGenKbGelIteratorBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual cfcore::CFGenKbGelIteratorBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual cfcore::CFGenKbGelIteratorBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGelIteratorBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> readBuffByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> pageBuffByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> pageBuffByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> pageBuffByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> pageBuffByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> pageBuffByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> pageBuffByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual cfcore::CFGenKbGelIteratorBuff* updateGelIterator( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelIteratorBuff* Buff );

		virtual void deleteGelIterator( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelIteratorBuff* Buff );
		virtual void deleteGelIteratorByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandBefore );

		virtual void deleteGelIteratorByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByBeforeIdxKey* argKey );

		virtual void deleteGelIteratorByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandFirst );

		virtual void deleteGelIteratorByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByFirstIdxKey* argKey );

		virtual void deleteGelIteratorByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argExpandEach );

		virtual void deleteGelIteratorByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByEachIdxKey* argKey );

		virtual void deleteGelIteratorByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLast );

		virtual void deleteGelIteratorByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByLastIdxKey* argKey );

		virtual void deleteGelIteratorByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLone );

		virtual void deleteGelIteratorByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByLoneIdxKey* argKey );

		virtual void deleteGelIteratorByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandEmpty );

		virtual void deleteGelIteratorByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelIteratorByEmptyIdxKey* argKey );

		virtual void deleteGelIteratorByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId );

		virtual void deleteGelIteratorByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey );

		virtual void deleteGelIteratorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGelIteratorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey );

		virtual void deleteGelIteratorByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId );

		virtual void deleteGelIteratorByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey );

		virtual void deleteGelIteratorByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId );

		virtual void deleteGelIteratorByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
