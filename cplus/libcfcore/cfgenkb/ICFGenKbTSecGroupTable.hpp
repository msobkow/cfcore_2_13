#pragma once

// Description: C++18 DbIO interface for TSecGroup.

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
#include <cfgenkb/CFGenKbTSecGroupBuff.hpp>
#include <cfgenkb/CFGenKbTSecGroupPKey.hpp>
#include <cfgenkb/CFGenKbTSecGroupByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGroupByTenantVisIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGroupByUNameIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbTSecGroupObj;

	class ICFGenKbTSecGroupTable
	{
	public:
		ICFGenKbTSecGroupTable();
		virtual ~ICFGenKbTSecGroupTable();

		virtual cfcore::CFGenKbTSecGroupBuff* createTSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGroupBuff* Buff ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* updateTSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGroupBuff* Buff ) = 0;

		virtual void deleteTSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGroupBuff* Buff ) = 0;
		virtual void deleteTSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId ) = 0;

		virtual void deleteTSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupPKey* argKey ) = 0;
		virtual void deleteTSecGroupByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteTSecGroupByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupByTenantIdxKey* argKey ) = 0;
		virtual void deleteTSecGroupByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const bool argIsVisible ) = 0;

		virtual void deleteTSecGroupByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupByTenantVisIdxKey* argKey ) = 0;
		virtual void deleteTSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argName ) = 0;

		virtual void deleteTSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupByUNameIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupPKey* PKey ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readDerivedByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const bool IsVisible ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* readDerivedByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& Name ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupPKey* PKey ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readBuffByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const bool IsVisible ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* readBuffByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& Name ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* readBuffByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbTSecGroupBuff* readDerivedByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
