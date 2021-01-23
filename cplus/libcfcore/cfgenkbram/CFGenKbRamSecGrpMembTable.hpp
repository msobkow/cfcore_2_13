#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SecGrpMemb.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>


namespace cfcore {

	class CFGenKbRamSecGrpMembTable
	: public virtual cfcore::ICFGenKbSecGrpMembTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbSecGrpMembByClusterIdxKey,
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>*>* dictByClusterIdx;
		std::map<cfcore::CFGenKbSecGrpMembByGroupIdxKey,
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>*>* dictByGroupIdx;
		std::map<cfcore::CFGenKbSecGrpMembByUserIdxKey,
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>*>* dictByUserIdx;
		std::map<cfcore::CFGenKbSecGrpMembByUUserIdxKey,
			cfcore::CFGenKbSecGrpMembBuff*>* dictByUUserIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamSecGrpMembTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamSecGrpMembTable();

		virtual cfcore::CFGenKbSecGrpMembBuff* createSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpMembBuff* Buff );

		virtual cfcore::CFGenKbSecGrpMembBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembPKey* PKey );

		virtual cfcore::CFGenKbSecGrpMembBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readDerivedByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId );

		virtual cfcore::CFGenKbSecGrpMembBuff* readDerivedByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const uuid_ptr_t SecUserId );

		virtual cfcore::CFGenKbSecGrpMembBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpMembId );

		virtual cfcore::CFGenKbSecGrpMembBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembPKey* PKey );

		virtual cfcore::CFGenKbSecGrpMembBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId );

		virtual cfcore::CFGenKbSecGrpMembBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpMembId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> readBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId );

		virtual cfcore::CFGenKbSecGrpMembBuff* readBuffByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const uuid_ptr_t SecUserId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> pageBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId );

		virtual cfcore::CFGenKbSecGrpMembBuff* updateSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpMembBuff* Buff );

		virtual void deleteSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpMembBuff* Buff );
		virtual void deleteSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argSecGrpMembId );

		virtual void deleteSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembPKey* argKey );

		virtual void deleteSecGrpMembByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId );

		virtual void deleteSecGrpMembByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembByClusterIdxKey* argKey );

		virtual void deleteSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId );

		virtual void deleteSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembByGroupIdxKey* argKey );

		virtual void deleteSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId );

		virtual void deleteSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembByUserIdxKey* argKey );

		virtual void deleteSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId,
			const uuid_ptr_t argSecUserId );

		virtual void deleteSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpMembByUUserIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
