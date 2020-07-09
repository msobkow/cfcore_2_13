#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GelExecutable.

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

	class CFGenKbRamGelExecutableTable
	: public virtual cfcore::ICFGenKbGelExecutableTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbGelExecutableByGenItemIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelExecutableBuff*>*>* dictByGenItemIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGelExecutableTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGelExecutableTable();

		virtual cfcore::CFGenKbGelExecutableBuff* createGelExecutable( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelExecutableBuff* Buff );

		virtual cfcore::CFGenKbGelExecutableBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual cfcore::CFGenKbGelExecutableBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readDerivedByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual cfcore::CFGenKbGelExecutableBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual cfcore::CFGenKbGelExecutableBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual cfcore::CFGenKbGelExecutableBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGelExecutableBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> readBuffByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> pageBuffByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> pageBuffByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> pageBuffByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual cfcore::CFGenKbGelExecutableBuff* updateGelExecutable( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelExecutableBuff* Buff );

		virtual void deleteGelExecutable( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelExecutableBuff* Buff );
		virtual void deleteGelExecutableByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId );

		virtual void deleteGelExecutableByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelExecutableByGenItemIdxKey* argKey );

		virtual void deleteGelExecutableByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argFirstInstTenantId,
			const int64_t* argFirstInstGelCacheId,
			const int64_t* argFirstInstId );

		virtual void deleteGelExecutableByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSequenceByFirstInstIdxKey* argKey );

		virtual void deleteGelExecutableByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argLastInstTenantId,
			const int64_t* argLastInstGelCacheId,
			const int64_t* argLastInstId );

		virtual void deleteGelExecutableByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSequenceByLastInstIdxKey* argKey );

		virtual void deleteGelExecutableByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId );

		virtual void deleteGelExecutableByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey );

		virtual void deleteGelExecutableByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGelExecutableByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey );

		virtual void deleteGelExecutableByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId );

		virtual void deleteGelExecutableByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey );

		virtual void deleteGelExecutableByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId );

		virtual void deleteGelExecutableByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
