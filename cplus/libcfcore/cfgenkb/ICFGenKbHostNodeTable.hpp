#pragma once

// Description: C++18 DbIO interface for HostNode.

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
#include <cfgenkb/CFGenKbHostNodeBuff.hpp>
#include <cfgenkb/CFGenKbHostNodePKey.hpp>
#include <cfgenkb/CFGenKbHostNodeByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbHostNodeByUDescrIdxKey.hpp>
#include <cfgenkb/CFGenKbHostNodeByHostNameIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbHostNodeObj;

	class ICFGenKbHostNodeTable
	{
	public:
		ICFGenKbHostNodeTable();
		virtual ~ICFGenKbHostNodeTable();

		virtual cfcore::CFGenKbHostNodeBuff* createHostNode( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbHostNodeBuff* Buff ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* updateHostNode( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbHostNodeBuff* Buff ) = 0;

		virtual void deleteHostNode( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbHostNodeBuff* Buff ) = 0;
		virtual void deleteHostNodeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argHostNodeId ) = 0;

		virtual void deleteHostNodeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodePKey* argKey ) = 0;
		virtual void deleteHostNodeByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId ) = 0;

		virtual void deleteHostNodeByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodeByClusterIdxKey* argKey ) = 0;
		virtual void deleteHostNodeByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argDescription ) = 0;

		virtual void deleteHostNodeByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodeByUDescrIdxKey* argKey ) = 0;
		virtual void deleteHostNodeByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argHostName ) = 0;

		virtual void deleteHostNodeByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodeByHostNameIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodePKey* PKey ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t HostNodeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* readDerivedByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Description ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* readDerivedByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& HostName ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodePKey* PKey ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorHostNodeId ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t HostNodeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* readBuffByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Description ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* readBuffByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& HostName ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* readBuffByLookupHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& HostName,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbHostNodeBuff* readDerivedByLookupHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& HostName,
			bool forceRead = false ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorHostNodeId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
