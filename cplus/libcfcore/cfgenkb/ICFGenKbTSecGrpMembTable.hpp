#pragma once

// Description: C++18 DbIO interface for TSecGrpMemb.

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
#include <cfgenkb/CFGenKbTSecGrpMembBuff.hpp>
#include <cfgenkb/CFGenKbTSecGrpMembPKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpMembByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpMembByGroupIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpMembByUserIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpMembByUUserIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbTSecGrpMembObj;

	class ICFGenKbTSecGrpMembTable
	{
	public:
		ICFGenKbTSecGrpMembTable();
		virtual ~ICFGenKbTSecGrpMembTable();

		virtual cfcore::CFGenKbTSecGrpMembBuff* createTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGrpMembBuff* Buff ) = 0;

		virtual cfcore::CFGenKbTSecGrpMembBuff* updateTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGrpMembBuff* Buff ) = 0;

		virtual void deleteTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGrpMembBuff* Buff ) = 0;
		virtual void deleteTSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTSecGrpMembId ) = 0;

		virtual void deleteTSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembPKey* argKey ) = 0;
		virtual void deleteTSecGrpMembByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteTSecGrpMembByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembByTenantIdxKey* argKey ) = 0;
		virtual void deleteTSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId ) = 0;

		virtual void deleteTSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembByGroupIdxKey* argKey ) = 0;
		virtual void deleteTSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId ) = 0;

		virtual void deleteTSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembByUserIdxKey* argKey ) = 0;
		virtual void deleteTSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId,
			const uuid_ptr_t argSecUserId ) = 0;

		virtual void deleteTSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembByUUserIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbTSecGrpMembBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembPKey* PKey ) = 0;

		virtual cfcore::CFGenKbTSecGrpMembBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbTSecGrpMembBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpMembId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readDerivedByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId ) = 0;

		virtual cfcore::CFGenKbTSecGrpMembBuff* readDerivedByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const uuid_ptr_t SecUserId ) = 0;

		virtual cfcore::CFGenKbTSecGrpMembBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembPKey* PKey ) = 0;

		virtual cfcore::CFGenKbTSecGrpMembBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId ) = 0;

		virtual cfcore::CFGenKbTSecGrpMembBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpMembId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId ) = 0;

		virtual cfcore::CFGenKbTSecGrpMembBuff* readBuffByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const uuid_ptr_t SecUserId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> pageBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> pageBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
