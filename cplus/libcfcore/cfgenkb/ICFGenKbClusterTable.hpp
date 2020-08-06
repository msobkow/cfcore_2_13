#pragma once

// Description: C++18 DbIO interface for Cluster.

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
#include <cfgenkb/CFGenKbClusterBuff.hpp>
#include <cfgenkb/CFGenKbClusterPKey.hpp>
#include <cfgenkb/CFGenKbClusterByUDomNameIdxKey.hpp>
#include <cfgenkb/CFGenKbClusterByUDescrIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbClusterObj;

	class ICFGenKbClusterTable
	{
	public:
		ICFGenKbClusterTable();
		virtual ~ICFGenKbClusterTable();

		virtual int32_t nextSecAppIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual int32_t nextSecAppIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int32_t nextSecFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual int32_t nextSecFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int32_t nextSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual int32_t nextSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int64_t nextHostNodeIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual int64_t nextHostNodeIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int64_t nextSecGroupFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual int64_t nextSecGroupFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int64_t nextSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual int64_t nextSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual int64_t nextSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual int64_t nextSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual cfcore::CFGenKbClusterBuff* createCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbClusterBuff* Buff ) = 0;

		virtual cfcore::CFGenKbClusterBuff* updateCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbClusterBuff* Buff ) = 0;

		virtual void deleteCluster( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbClusterBuff* Buff ) = 0;
		virtual void deleteClusterByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId ) = 0;

		virtual void deleteClusterByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* argKey ) = 0;
		virtual void deleteClusterByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argFullDomName ) = 0;

		virtual void deleteClusterByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterByUDomNameIdxKey* argKey ) = 0;
		virtual void deleteClusterByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argDescription ) = 0;

		virtual void deleteClusterByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterByUDescrIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbClusterBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual cfcore::CFGenKbClusterBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbClusterBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id ) = 0;

		virtual cfcore::CFGenKbClusterBuff* readDerivedByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& FullDomName ) = 0;

		virtual cfcore::CFGenKbClusterBuff* readDerivedByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Description ) = 0;

		virtual cfcore::CFGenKbClusterBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual cfcore::CFGenKbClusterBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbClusterPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorId ) = 0;

		virtual cfcore::CFGenKbClusterBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id ) = 0;

		virtual cfcore::CFGenKbClusterBuff* readBuffByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& FullDomName ) = 0;

		virtual cfcore::CFGenKbClusterBuff* readBuffByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Description ) = 0;

		virtual cfcore::CFGenKbClusterBuff* readBuffByLookupUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& FullDomName,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbClusterBuff* readDerivedByLookupUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& FullDomName,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
