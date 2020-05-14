#pragma once

// Description: C++18 DbIO interface for Tenant.

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
#include <cfgenkb/CFGenKbTenantBuff.hpp>
#include <cfgenkb/CFGenKbTenantPKey.hpp>
#include <cfgenkb/CFGenKbTenantByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbTenantByUNameIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbTenantObj;

	class ICFGenKbTenantTable
	{
	public:
		ICFGenKbTenantTable();
		virtual ~ICFGenKbTenantTable();

		virtual int32_t nextTSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual int32_t nextTSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int64_t nextTSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual int64_t nextTSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int64_t nextTSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual int64_t nextTSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int64_t nextGelCacheIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual int64_t nextGelCacheIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int64_t nextGelInstructionIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual int64_t nextGelInstructionIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int64_t nextGenItemIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual int64_t nextGenItemIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int64_t nextRuleCartIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual int64_t nextRuleCartIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual cfcore::CFGenKbTenantBuff* createTenant( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTenantBuff* Buff ) = 0;

		virtual cfcore::CFGenKbTenantBuff* updateTenant( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTenantBuff* Buff ) = 0;

		virtual void deleteTenant( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTenantBuff* Buff ) = 0;
		virtual void deleteTenantByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual void deleteTenantByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* argKey ) = 0;
		virtual void deleteTenantByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId ) = 0;

		virtual void deleteTenantByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantByClusterIdxKey* argKey ) = 0;
		virtual void deleteTenantByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argTenantName ) = 0;

		virtual void deleteTenantByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantByUNameIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbTenantBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual cfcore::CFGenKbTenantBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbTenantBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual cfcore::CFGenKbTenantBuff* readDerivedByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& TenantName ) = 0;

		virtual cfcore::CFGenKbTenantBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual cfcore::CFGenKbTenantBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTenantPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorId ) = 0;

		virtual cfcore::CFGenKbTenantBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual cfcore::CFGenKbTenantBuff* readBuffByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& TenantName ) = 0;

		virtual cfcore::CFGenKbTenantBuff* readBuffByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& TenantName,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbTenantBuff* readDerivedByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& TenantName,
			bool forceRead = false ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
