#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for TSecGroup.

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


namespace cfcore {

	class CFGenKbRamTSecGroupTable
	: public virtual cfcore::ICFGenKbTSecGroupTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbTSecGroupByTenantIdxKey,
			std::map<cfcore::CFGenKbTSecGroupPKey,
				cfcore::CFGenKbTSecGroupBuff*>*>* dictByTenantIdx;
		std::map<cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
			std::map<cfcore::CFGenKbTSecGroupPKey,
				cfcore::CFGenKbTSecGroupBuff*>*>* dictByTenantVisIdx;
		std::map<cfcore::CFGenKbTSecGroupByUNameIdxKey,
			cfcore::CFGenKbTSecGroupBuff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamTSecGroupTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamTSecGroupTable();

		virtual cfcore::CFGenKbTSecGroupBuff* createTSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGroupBuff* Buff );

		virtual cfcore::CFGenKbTSecGroupBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupPKey* PKey );

		virtual cfcore::CFGenKbTSecGroupBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readDerivedByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const bool IsVisible );

		virtual cfcore::CFGenKbTSecGroupBuff* readDerivedByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& Name );

		virtual cfcore::CFGenKbTSecGroupBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId );

		virtual cfcore::CFGenKbTSecGroupBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupPKey* PKey );

		virtual cfcore::CFGenKbTSecGroupBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbTSecGroupBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> readBuffByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const bool IsVisible );

		virtual cfcore::CFGenKbTSecGroupBuff* readBuffByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& Name );

		virtual cfcore::CFGenKbTSecGroupBuff* readBuffByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbTSecGroupBuff* readDerivedByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbTSecGroupBuff* updateTSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGroupBuff* Buff );

		virtual void deleteTSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGroupBuff* Buff );
		virtual void deleteTSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId );

		virtual void deleteTSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupPKey* argKey );

		virtual void deleteTSecGroupByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteTSecGroupByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupByTenantIdxKey* argKey );

		virtual void deleteTSecGroupByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const bool argIsVisible );

		virtual void deleteTSecGroupByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupByTenantVisIdxKey* argKey );

		virtual void deleteTSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argName );

		virtual void deleteTSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGroupByUNameIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
