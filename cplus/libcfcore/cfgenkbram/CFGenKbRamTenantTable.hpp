#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for Tenant.

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

#include <cfgenkbram/CFGenKbRamTenantId32Gen.hpp>
#include <cfgenkbram/CFGenKbRamTenantId64Gen.hpp>

namespace cfcore {

	class CFGenKbRamTenantTable
	: public virtual cfcore::ICFGenKbTenantTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbTenantPKey,
			cfcore::CFGenKbTenantBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbTenantByClusterIdxKey,
			std::map<cfcore::CFGenKbTenantPKey,
				cfcore::CFGenKbTenantBuff*>*>* dictByClusterIdx;
		std::map<cfcore::CFGenKbTenantByUNameIdxKey,
			cfcore::CFGenKbTenantBuff*>* dictByUNameIdx;
		std::map<cfcore::CFGenKbRamTenantId32Gen, cfcore::CFGenKbRamTenantId32Gen*>* id32Generator;
		std::map<cfcore::CFGenKbRamTenantId64Gen, cfcore::CFGenKbRamTenantId64Gen*>* id64Generator;
		virtual int32_t generateNextId32( int64_t argId,
			int16_t argSliceId );

		virtual int64_t generateNextId64( int64_t argId,
			int16_t argSliceId );

	public:
		static const std::string CLASS_NAME;
		CFGenKbRamTenantTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamTenantTable();

		virtual int32_t nextTSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* pkey );

		virtual int32_t nextTSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int64_t nextTSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* pkey );

		virtual int64_t nextTSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int64_t nextTSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* pkey );

		virtual int64_t nextTSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int64_t nextGelCacheIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* pkey );

		virtual int64_t nextGelCacheIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int64_t nextGelInstructionIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* pkey );

		virtual int64_t nextGelInstructionIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int64_t nextGenItemIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* pkey );

		virtual int64_t nextGenItemIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int64_t nextRuleCartIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* pkey );

		virtual int64_t nextRuleCartIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual cfcore::CFGenKbTenantBuff* createTenant( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTenantBuff* Buff );

		virtual cfcore::CFGenKbTenantBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey );

		virtual cfcore::CFGenKbTenantBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual cfcore::CFGenKbTenantBuff* readDerivedByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& TenantName );

		virtual cfcore::CFGenKbTenantBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id );

		virtual cfcore::CFGenKbTenantBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey );

		virtual cfcore::CFGenKbTenantBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorId );

		virtual cfcore::CFGenKbTenantBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual cfcore::CFGenKbTenantBuff* readBuffByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& TenantName );

		virtual cfcore::CFGenKbTenantBuff* readBuffByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& TenantName,
			bool forceRead = false );

		virtual cfcore::CFGenKbTenantBuff* readDerivedByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& TenantName,
			bool forceRead = false );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorId );

		virtual cfcore::CFGenKbTenantBuff* updateTenant( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTenantBuff* Buff );

		virtual void deleteTenant( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTenantBuff* Buff );
		virtual void deleteTenantByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId );

		virtual void deleteTenantByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* argKey );

		virtual void deleteTenantByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId );

		virtual void deleteTenantByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantByClusterIdxKey* argKey );

		virtual void deleteTenantByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argTenantName );

		virtual void deleteTenantByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantByUNameIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
