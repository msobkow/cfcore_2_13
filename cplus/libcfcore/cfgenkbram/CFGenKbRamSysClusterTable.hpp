#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SysCluster.

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

	class CFGenKbRamSysClusterTable
	: public virtual cfcore::ICFGenKbSysClusterTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbSysClusterPKey,
			cfcore::CFGenKbSysClusterBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbSysClusterByClusterIdxKey,
			std::map<cfcore::CFGenKbSysClusterPKey,
				cfcore::CFGenKbSysClusterBuff*>*>* dictByClusterIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamSysClusterTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamSysClusterTable();

		virtual cfcore::CFGenKbSysClusterBuff* createSysCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSysClusterBuff* Buff );

		virtual cfcore::CFGenKbSysClusterBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterPKey* PKey );

		virtual cfcore::CFGenKbSysClusterBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSysClusterBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSysClusterBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual cfcore::CFGenKbSysClusterBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int32_t SingletonId );

		virtual cfcore::CFGenKbSysClusterBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterPKey* PKey );

		virtual cfcore::CFGenKbSysClusterBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSysClusterBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbSysClusterBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int32_t SingletonId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSysClusterBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual cfcore::CFGenKbSysClusterBuff* updateSysCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSysClusterBuff* Buff );

		virtual void deleteSysCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSysClusterBuff* Buff );
		virtual void deleteSysClusterByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int32_t argSingletonId );

		virtual void deleteSysClusterByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterPKey* argKey );

		virtual void deleteSysClusterByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId );

		virtual void deleteSysClusterByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSysClusterByClusterIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
