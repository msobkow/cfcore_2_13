#pragma once

// Description: C++18 DbIO interface for SecGrpInc.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */


#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbSecGrpIncBuff.hpp>
#include <cfgenkb/CFGenKbSecGrpIncPKey.hpp>
#include <cfgenkb/CFGenKbSecGrpIncByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpIncByGroupIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpIncByIncludeIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpIncByUIncludeIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbSecGrpIncObj;

	class ICFGenKbSecGrpIncTable
	{
	public:
		ICFGenKbSecGrpIncTable();
		virtual ~ICFGenKbSecGrpIncTable();

		virtual cfcore::CFGenKbSecGrpIncBuff* createSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpIncBuff* Buff ) = 0;

		virtual cfcore::CFGenKbSecGrpIncBuff* updateSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpIncBuff* Buff ) = 0;

		virtual void deleteSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpIncBuff* Buff ) = 0;
		virtual void deleteSecGrpIncByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argSecGrpIncId ) = 0;

		virtual void deleteSecGrpIncByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncPKey* argKey ) = 0;
		virtual void deleteSecGrpIncByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId ) = 0;

		virtual void deleteSecGrpIncByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncByClusterIdxKey* argKey ) = 0;
		virtual void deleteSecGrpIncByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId ) = 0;

		virtual void deleteSecGrpIncByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncByGroupIdxKey* argKey ) = 0;
		virtual void deleteSecGrpIncByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argIncludeGroupId ) = 0;

		virtual void deleteSecGrpIncByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncByIncludeIdxKey* argKey ) = 0;
		virtual void deleteSecGrpIncByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId,
			const int32_t argIncludeGroupId ) = 0;

		virtual void deleteSecGrpIncByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbSecGrpIncBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecGrpIncBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSecGrpIncBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpIncId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readDerivedByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t IncludeGroupId ) = 0;

		virtual cfcore::CFGenKbSecGrpIncBuff* readDerivedByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t IncludeGroupId ) = 0;

		virtual cfcore::CFGenKbSecGrpIncBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecGrpIncBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId ) = 0;

		virtual cfcore::CFGenKbSecGrpIncBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpIncId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readBuffByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t IncludeGroupId ) = 0;

		virtual cfcore::CFGenKbSecGrpIncBuff* readBuffByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t IncludeGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> pageBuffByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t IncludeGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
