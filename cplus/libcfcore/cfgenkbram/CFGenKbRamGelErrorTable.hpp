#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GelError.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>


namespace cfcore {

	class CFGenKbRamGelErrorTable
	: public virtual cfcore::ICFGenKbGelErrorTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelErrorBuff*>* dictByPKey;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGelErrorTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGelErrorTable();

		virtual cfcore::CFGenKbGelErrorBuff* createGelError( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelErrorBuff* Buff );

		virtual cfcore::CFGenKbGelErrorBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual cfcore::CFGenKbGelErrorBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelErrorBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelErrorBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelErrorBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelErrorBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual cfcore::CFGenKbGelErrorBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual cfcore::CFGenKbGelErrorBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual cfcore::CFGenKbGelErrorBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelErrorBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGelErrorBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelErrorBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelErrorBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelErrorBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual cfcore::CFGenKbGelErrorBuff* updateGelError( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelErrorBuff* Buff );

		virtual void deleteGelError( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelErrorBuff* Buff );
		virtual void deleteGelErrorByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId );

		virtual void deleteGelErrorByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey );

		virtual void deleteGelErrorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGelErrorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey );

		virtual void deleteGelErrorByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId );

		virtual void deleteGelErrorByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey );

		virtual void deleteGelErrorByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId );

		virtual void deleteGelErrorByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
