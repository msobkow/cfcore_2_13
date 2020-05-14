#pragma once

// Description: C++18 DbIO interface for SysCluster.

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
#include <cfgenkb/CFGenKbSysClusterBuff.hpp>
#include <cfgenkb/CFGenKbSysClusterPKey.hpp>
#include <cfgenkb/CFGenKbSysClusterByClusterIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbSysClusterObj;

	class ICFGenKbSysClusterTable
	{
	public:
		ICFGenKbSysClusterTable();
		virtual ~ICFGenKbSysClusterTable();

		virtual cfcore::CFGenKbSysClusterBuff* createSysCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSysClusterBuff* Buff ) = 0;

		virtual cfcore::CFGenKbSysClusterBuff* updateSysCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSysClusterBuff* Buff ) = 0;

		virtual void deleteSysCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSysClusterBuff* Buff ) = 0;
		virtual void deleteSysClusterByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int32_t argSingletonId ) = 0;

		virtual void deleteSysClusterByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterPKey* argKey ) = 0;
		virtual void deleteSysClusterByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId ) = 0;

		virtual void deleteSysClusterByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterByClusterIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbSysClusterBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSysClusterBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSysClusterBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSysClusterBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int32_t SingletonId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSysClusterBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual cfcore::CFGenKbSysClusterBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSysClusterBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSysClusterBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSysClusterBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int32_t SingletonId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSysClusterBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
