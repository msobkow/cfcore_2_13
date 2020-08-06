#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for Cluster.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <cfgenkbram/CFGenKbRamClusterId32Gen.hpp>
#include <cfgenkbram/CFGenKbRamClusterId64Gen.hpp>

namespace cfcore {

	class CFGenKbRamClusterTable
	: public virtual cfcore::ICFGenKbClusterTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbClusterPKey,
			cfcore::CFGenKbClusterBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbClusterByUDomNameIdxKey,
			cfcore::CFGenKbClusterBuff*>* dictByUDomNameIdx;
		std::map<cfcore::CFGenKbClusterByUDescrIdxKey,
			cfcore::CFGenKbClusterBuff*>* dictByUDescrIdx;
		std::map<cfcore::CFGenKbRamClusterId32Gen, cfcore::CFGenKbRamClusterId32Gen*>* id32Generator;
		std::map<cfcore::CFGenKbRamClusterId64Gen, cfcore::CFGenKbRamClusterId64Gen*>* id64Generator;
		virtual int32_t generateNextId32( int64_t argId,
			int16_t argSliceId );

		virtual int64_t generateNextId64( int64_t argId,
			int16_t argSliceId );

	public:
		static const std::string CLASS_NAME;
		CFGenKbRamClusterTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamClusterTable();

		virtual int32_t nextSecAppIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* pkey );

		virtual int32_t nextSecAppIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int32_t nextSecFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* pkey );

		virtual int32_t nextSecFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int32_t nextSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* pkey );

		virtual int32_t nextSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int64_t nextHostNodeIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* pkey );

		virtual int64_t nextHostNodeIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int64_t nextSecGroupFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* pkey );

		virtual int64_t nextSecGroupFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int64_t nextSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* pkey );

		virtual int64_t nextSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual int64_t nextSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* pkey );

		virtual int64_t nextSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			int64_t argId );

		virtual cfcore::CFGenKbClusterBuff* createCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbClusterBuff* Buff );

		virtual cfcore::CFGenKbClusterBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey );

		virtual cfcore::CFGenKbClusterBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbClusterBuff* readDerivedByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& FullDomName );

		virtual cfcore::CFGenKbClusterBuff* readDerivedByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Description );

		virtual cfcore::CFGenKbClusterBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id );

		virtual cfcore::CFGenKbClusterBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey );

		virtual cfcore::CFGenKbClusterBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorId );

		virtual cfcore::CFGenKbClusterBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id );

		virtual cfcore::CFGenKbClusterBuff* readBuffByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& FullDomName );

		virtual cfcore::CFGenKbClusterBuff* readBuffByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Description );

		virtual cfcore::CFGenKbClusterBuff* readBuffByLookupUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& FullDomName,
			bool forceRead = false );

		virtual cfcore::CFGenKbClusterBuff* readDerivedByLookupUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& FullDomName,
			bool forceRead = false );

		virtual cfcore::CFGenKbClusterBuff* updateCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbClusterBuff* Buff );

		virtual void deleteCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbClusterBuff* Buff );
		virtual void deleteClusterByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId );

		virtual void deleteClusterByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* argKey );

		virtual void deleteClusterByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argFullDomName );

		virtual void deleteClusterByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterByUDomNameIdxKey* argKey );

		virtual void deleteClusterByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argDescription );

		virtual void deleteClusterByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterByUDescrIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
