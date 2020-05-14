#pragma once

// Description: C++18 DbIO interface for SecGrpMemb.

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
#include <cfgenkb/CFGenKbSecGrpMembBuff.hpp>
#include <cfgenkb/CFGenKbSecGrpMembPKey.hpp>
#include <cfgenkb/CFGenKbSecGrpMembByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpMembByGroupIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpMembByUserIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpMembByUUserIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbSecGrpMembObj;

	class ICFGenKbSecGrpMembTable
	{
	public:
		ICFGenKbSecGrpMembTable();
		virtual ~ICFGenKbSecGrpMembTable();

		virtual cfcore::CFGenKbSecGrpMembBuff* createSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpMembBuff* Buff ) = 0;

		virtual cfcore::CFGenKbSecGrpMembBuff* updateSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpMembBuff* Buff ) = 0;

		virtual void deleteSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpMembBuff* Buff ) = 0;
		virtual void deleteSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argSecGrpMembId ) = 0;

		virtual void deleteSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembPKey* argKey ) = 0;
		virtual void deleteSecGrpMembByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId ) = 0;

		virtual void deleteSecGrpMembByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembByClusterIdxKey* argKey ) = 0;
		virtual void deleteSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId ) = 0;

		virtual void deleteSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembByGroupIdxKey* argKey ) = 0;
		virtual void deleteSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId ) = 0;

		virtual void deleteSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembByUserIdxKey* argKey ) = 0;
		virtual void deleteSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId,
			const uuid_ptr_t argSecUserId ) = 0;

		virtual void deleteSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembByUUserIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbSecGrpMembBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecGrpMembBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSecGrpMembBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpMembId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readDerivedByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId ) = 0;

		virtual cfcore::CFGenKbSecGrpMembBuff* readDerivedByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const uuid_ptr_t SecUserId ) = 0;

		virtual cfcore::CFGenKbSecGrpMembBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecGrpMembBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId ) = 0;

		virtual cfcore::CFGenKbSecGrpMembBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpMembId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId ) = 0;

		virtual cfcore::CFGenKbSecGrpMembBuff* readBuffByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const uuid_ptr_t SecUserId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> pageBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
