#pragma once

// Description: C++18 DbIO interface for SecApp.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */


#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbSecAppBuff.hpp>
#include <cfgenkb/CFGenKbSecAppPKey.hpp>
#include <cfgenkb/CFGenKbSecAppByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecAppByUJEEMountIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbSecAppObj;

	class ICFGenKbSecAppTable
	{
	public:
		ICFGenKbSecAppTable();
		virtual ~ICFGenKbSecAppTable();

		virtual cfcore::CFGenKbSecAppBuff* createSecApp( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecAppBuff* Buff ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* updateSecApp( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecAppBuff* Buff ) = 0;

		virtual void deleteSecApp( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecAppBuff* Buff ) = 0;
		virtual void deleteSecAppByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId ) = 0;

		virtual void deleteSecAppByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppPKey* argKey ) = 0;
		virtual void deleteSecAppByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId ) = 0;

		virtual void deleteSecAppByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppByClusterIdxKey* argKey ) = 0;
		virtual void deleteSecAppByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argJEEMountName ) = 0;

		virtual void deleteSecAppByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppByUJEEMountIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* readDerivedByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& JEEMountName ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int32_t* priorSecAppId ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* readBuffByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& JEEMountName ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* readBuffByLookupUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& JEEMountName,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbSecAppBuff* readDerivedByLookupUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& JEEMountName,
			bool forceRead = false ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int32_t* priorSecAppId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
