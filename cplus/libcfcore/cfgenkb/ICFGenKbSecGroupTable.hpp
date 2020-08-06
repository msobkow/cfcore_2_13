#pragma once

// Description: C++18 DbIO interface for SecGroup.

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
#include <cfgenkb/CFGenKbSecGroupBuff.hpp>
#include <cfgenkb/CFGenKbSecGroupPKey.hpp>
#include <cfgenkb/CFGenKbSecGroupByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupByClusterVisIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupByUNameIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbSecGroupObj;

	class ICFGenKbSecGroupTable
	{
	public:
		ICFGenKbSecGroupTable();
		virtual ~ICFGenKbSecGroupTable();

		virtual cfcore::CFGenKbSecGroupBuff* createSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupBuff* Buff ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* updateSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupBuff* Buff ) = 0;

		virtual void deleteSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupBuff* Buff ) = 0;
		virtual void deleteSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId ) = 0;

		virtual void deleteSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupPKey* argKey ) = 0;
		virtual void deleteSecGroupByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId ) = 0;

		virtual void deleteSecGroupByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupByClusterIdxKey* argKey ) = 0;
		virtual void deleteSecGroupByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const bool argIsVisible ) = 0;

		virtual void deleteSecGroupByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupByClusterVisIdxKey* argKey ) = 0;
		virtual void deleteSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argName ) = 0;

		virtual void deleteSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupByUNameIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readDerivedByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const bool IsVisible ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* readDerivedByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Name ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readBuffByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const bool IsVisible ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* readBuffByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Name ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* readBuffByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbSecGroupBuff* readDerivedByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
