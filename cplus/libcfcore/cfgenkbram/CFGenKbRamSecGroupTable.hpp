#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SecGroup.

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

	class CFGenKbRamSecGroupTable
	: public virtual cfcore::ICFGenKbSecGroupTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbSecGroupByClusterIdxKey,
			std::map<cfcore::CFGenKbSecGroupPKey,
				cfcore::CFGenKbSecGroupBuff*>*>* dictByClusterIdx;
		std::map<cfcore::CFGenKbSecGroupByClusterVisIdxKey,
			std::map<cfcore::CFGenKbSecGroupPKey,
				cfcore::CFGenKbSecGroupBuff*>*>* dictByClusterVisIdx;
		std::map<cfcore::CFGenKbSecGroupByUNameIdxKey,
			cfcore::CFGenKbSecGroupBuff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamSecGroupTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamSecGroupTable();

		virtual cfcore::CFGenKbSecGroupBuff* createSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupBuff* Buff );

		virtual cfcore::CFGenKbSecGroupBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupPKey* PKey );

		virtual cfcore::CFGenKbSecGroupBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readDerivedByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const bool IsVisible );

		virtual cfcore::CFGenKbSecGroupBuff* readDerivedByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Name );

		virtual cfcore::CFGenKbSecGroupBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual cfcore::CFGenKbSecGroupBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupPKey* PKey );

		virtual cfcore::CFGenKbSecGroupBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbSecGroupBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> readBuffByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const bool IsVisible );

		virtual cfcore::CFGenKbSecGroupBuff* readBuffByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Name );

		virtual cfcore::CFGenKbSecGroupBuff* readBuffByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbSecGroupBuff* readDerivedByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbSecGroupBuff* updateSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupBuff* Buff );

		virtual void deleteSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupBuff* Buff );
		virtual void deleteSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId );

		virtual void deleteSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupPKey* argKey );

		virtual void deleteSecGroupByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId );

		virtual void deleteSecGroupByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupByClusterIdxKey* argKey );

		virtual void deleteSecGroupByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const bool argIsVisible );

		virtual void deleteSecGroupByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupByClusterVisIdxKey* argKey );

		virtual void deleteSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argName );

		virtual void deleteSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupByUNameIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
