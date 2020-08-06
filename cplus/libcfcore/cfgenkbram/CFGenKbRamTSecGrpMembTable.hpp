#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for TSecGrpMemb.

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

	class CFGenKbRamTSecGrpMembTable
	: public virtual cfcore::ICFGenKbTSecGrpMembTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbTSecGrpMembByTenantIdxKey,
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>*>* dictByTenantIdx;
		std::map<cfcore::CFGenKbTSecGrpMembByGroupIdxKey,
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>*>* dictByGroupIdx;
		std::map<cfcore::CFGenKbTSecGrpMembByUserIdxKey,
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>*>* dictByUserIdx;
		std::map<cfcore::CFGenKbTSecGrpMembByUUserIdxKey,
			cfcore::CFGenKbTSecGrpMembBuff*>* dictByUUserIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamTSecGrpMembTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamTSecGrpMembTable();

		virtual cfcore::CFGenKbTSecGrpMembBuff* createTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGrpMembBuff* Buff );

		virtual cfcore::CFGenKbTSecGrpMembBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembPKey* PKey );

		virtual cfcore::CFGenKbTSecGrpMembBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readDerivedByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId );

		virtual cfcore::CFGenKbTSecGrpMembBuff* readDerivedByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const uuid_ptr_t SecUserId );

		virtual cfcore::CFGenKbTSecGrpMembBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpMembId );

		virtual cfcore::CFGenKbTSecGrpMembBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembPKey* PKey );

		virtual cfcore::CFGenKbTSecGrpMembBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId );

		virtual cfcore::CFGenKbTSecGrpMembBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpMembId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> readBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId );

		virtual cfcore::CFGenKbTSecGrpMembBuff* readBuffByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const uuid_ptr_t SecUserId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> pageBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> pageBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId );

		virtual cfcore::CFGenKbTSecGrpMembBuff* updateTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGrpMembBuff* Buff );

		virtual void deleteTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbTSecGrpMembBuff* Buff );
		virtual void deleteTSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTSecGrpMembId );

		virtual void deleteTSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembPKey* argKey );

		virtual void deleteTSecGrpMembByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteTSecGrpMembByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembByTenantIdxKey* argKey );

		virtual void deleteTSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId );

		virtual void deleteTSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembByGroupIdxKey* argKey );

		virtual void deleteTSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId );

		virtual void deleteTSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembByUserIdxKey* argKey );

		virtual void deleteTSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId,
			const uuid_ptr_t argSecUserId );

		virtual void deleteTSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbTSecGrpMembByUUserIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
