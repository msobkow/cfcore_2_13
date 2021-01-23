#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SecApp.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>


namespace cfcore {

	class CFGenKbRamSecAppTable
	: public virtual cfcore::ICFGenKbSecAppTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbSecAppPKey,
			cfcore::CFGenKbSecAppBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbSecAppByClusterIdxKey,
			std::map<cfcore::CFGenKbSecAppPKey,
				cfcore::CFGenKbSecAppBuff*>*>* dictByClusterIdx;
		std::map<cfcore::CFGenKbSecAppByUJEEMountIdxKey,
			cfcore::CFGenKbSecAppBuff*>* dictByUJEEMountIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamSecAppTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamSecAppTable();

		virtual cfcore::CFGenKbSecAppBuff* createSecApp( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecAppBuff* Buff );

		virtual cfcore::CFGenKbSecAppBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppPKey* PKey );

		virtual cfcore::CFGenKbSecAppBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual cfcore::CFGenKbSecAppBuff* readDerivedByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& JEEMountName );

		virtual cfcore::CFGenKbSecAppBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId );

		virtual cfcore::CFGenKbSecAppBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppPKey* PKey );

		virtual cfcore::CFGenKbSecAppBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int32_t* priorSecAppId );

		virtual cfcore::CFGenKbSecAppBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual cfcore::CFGenKbSecAppBuff* readBuffByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& JEEMountName );

		virtual cfcore::CFGenKbSecAppBuff* readBuffByLookupUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& JEEMountName,
			bool forceRead = false );

		virtual cfcore::CFGenKbSecAppBuff* readDerivedByLookupUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& JEEMountName,
			bool forceRead = false );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int32_t* priorSecAppId );

		virtual cfcore::CFGenKbSecAppBuff* updateSecApp( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecAppBuff* Buff );

		virtual void deleteSecApp( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecAppBuff* Buff );
		virtual void deleteSecAppByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId );

		virtual void deleteSecAppByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppPKey* argKey );

		virtual void deleteSecAppByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId );

		virtual void deleteSecAppByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppByClusterIdxKey* argKey );

		virtual void deleteSecAppByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argJEEMountName );

		virtual void deleteSecAppByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecAppByUJEEMountIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
