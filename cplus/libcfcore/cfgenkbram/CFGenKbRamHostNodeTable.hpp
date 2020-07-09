#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for HostNode.

/*
 *	org.msscf.msscf.CFCore
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

	class CFGenKbRamHostNodeTable
	: public virtual cfcore::ICFGenKbHostNodeTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbHostNodeByClusterIdxKey,
			std::map<cfcore::CFGenKbHostNodePKey,
				cfcore::CFGenKbHostNodeBuff*>*>* dictByClusterIdx;
		std::map<cfcore::CFGenKbHostNodeByUDescrIdxKey,
			cfcore::CFGenKbHostNodeBuff*>* dictByUDescrIdx;
		std::map<cfcore::CFGenKbHostNodeByHostNameIdxKey,
			cfcore::CFGenKbHostNodeBuff*>* dictByHostNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamHostNodeTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamHostNodeTable();

		virtual cfcore::CFGenKbHostNodeBuff* createHostNode( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbHostNodeBuff* Buff );

		virtual cfcore::CFGenKbHostNodeBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodePKey* PKey );

		virtual cfcore::CFGenKbHostNodeBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodePKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual cfcore::CFGenKbHostNodeBuff* readDerivedByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Description );

		virtual cfcore::CFGenKbHostNodeBuff* readDerivedByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& HostName );

		virtual cfcore::CFGenKbHostNodeBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t HostNodeId );

		virtual cfcore::CFGenKbHostNodeBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodePKey* PKey );

		virtual cfcore::CFGenKbHostNodeBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodePKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorHostNodeId );

		virtual cfcore::CFGenKbHostNodeBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t HostNodeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual cfcore::CFGenKbHostNodeBuff* readBuffByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Description );

		virtual cfcore::CFGenKbHostNodeBuff* readBuffByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& HostName );

		virtual cfcore::CFGenKbHostNodeBuff* readBuffByLookupHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& HostName,
			bool forceRead = false );

		virtual cfcore::CFGenKbHostNodeBuff* readDerivedByLookupHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& HostName,
			bool forceRead = false );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorHostNodeId );

		virtual cfcore::CFGenKbHostNodeBuff* updateHostNode( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbHostNodeBuff* Buff );

		virtual void deleteHostNode( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbHostNodeBuff* Buff );
		virtual void deleteHostNodeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argHostNodeId );

		virtual void deleteHostNodeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodePKey* argKey );

		virtual void deleteHostNodeByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId );

		virtual void deleteHostNodeByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodeByClusterIdxKey* argKey );

		virtual void deleteHostNodeByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argDescription );

		virtual void deleteHostNodeByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodeByUDescrIdxKey* argKey );

		virtual void deleteHostNodeByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argHostName );

		virtual void deleteHostNodeByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbHostNodeByHostNameIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
