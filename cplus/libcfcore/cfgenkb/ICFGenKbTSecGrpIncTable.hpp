#pragma once

// Description: C++18 DbIO interface for TSecGrpInc.

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
#include <cfgenkb/CFGenKbTSecGrpIncBuff.hpp>
#include <cfgenkb/CFGenKbTSecGrpIncPKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpIncByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpIncByGroupIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpIncByIncludeIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpIncByUIncludeIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbTSecGrpIncObj;

	class ICFGenKbTSecGrpIncTable
	{
	public:
		ICFGenKbTSecGrpIncTable();
		virtual ~ICFGenKbTSecGrpIncTable();

		virtual cfcore::CFGenKbTSecGrpIncBuff* createTSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGrpIncBuff* Buff ) = 0;

		virtual cfcore::CFGenKbTSecGrpIncBuff* updateTSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGrpIncBuff* Buff ) = 0;

		virtual void deleteTSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGrpIncBuff* Buff ) = 0;
		virtual void deleteTSecGrpIncByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTSecGrpIncId ) = 0;

		virtual void deleteTSecGrpIncByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpIncPKey* argKey ) = 0;
		virtual void deleteTSecGrpIncByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteTSecGrpIncByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpIncByTenantIdxKey* argKey ) = 0;
		virtual void deleteTSecGrpIncByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId ) = 0;

		virtual void deleteTSecGrpIncByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpIncByGroupIdxKey* argKey ) = 0;
		virtual void deleteTSecGrpIncByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argIncludeGroupId ) = 0;

		virtual void deleteTSecGrpIncByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpIncByIncludeIdxKey* argKey ) = 0;
		virtual void deleteTSecGrpIncByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId,
			const int32_t argIncludeGroupId ) = 0;

		virtual void deleteTSecGrpIncByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbTSecGrpIncBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpIncPKey* PKey ) = 0;

		virtual cfcore::CFGenKbTSecGrpIncBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpIncPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbTSecGrpIncBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpIncId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> readDerivedByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t IncludeGroupId ) = 0;

		virtual cfcore::CFGenKbTSecGrpIncBuff* readDerivedByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId ) = 0;

		virtual cfcore::CFGenKbTSecGrpIncBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpIncPKey* PKey ) = 0;

		virtual cfcore::CFGenKbTSecGrpIncBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpIncPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId ) = 0;

		virtual cfcore::CFGenKbTSecGrpIncBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpIncId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> readBuffByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t IncludeGroupId ) = 0;

		virtual cfcore::CFGenKbTSecGrpIncBuff* readBuffByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> pageBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> pageBuffByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t IncludeGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
