#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SecGrpInc.

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

	class CFGenKbRamSecGrpIncTable
	: public virtual cfcore::ICFGenKbSecGrpIncTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbSecGrpIncPKey,
			cfcore::CFGenKbSecGrpIncBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbSecGrpIncByClusterIdxKey,
			std::map<cfcore::CFGenKbSecGrpIncPKey,
				cfcore::CFGenKbSecGrpIncBuff*>*>* dictByClusterIdx;
		std::map<cfcore::CFGenKbSecGrpIncByGroupIdxKey,
			std::map<cfcore::CFGenKbSecGrpIncPKey,
				cfcore::CFGenKbSecGrpIncBuff*>*>* dictByGroupIdx;
		std::map<cfcore::CFGenKbSecGrpIncByIncludeIdxKey,
			std::map<cfcore::CFGenKbSecGrpIncPKey,
				cfcore::CFGenKbSecGrpIncBuff*>*>* dictByIncludeIdx;
		std::map<cfcore::CFGenKbSecGrpIncByUIncludeIdxKey,
			cfcore::CFGenKbSecGrpIncBuff*>* dictByUIncludeIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamSecGrpIncTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamSecGrpIncTable();

		virtual cfcore::CFGenKbSecGrpIncBuff* createSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpIncBuff* Buff );

		virtual cfcore::CFGenKbSecGrpIncBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncPKey* PKey );

		virtual cfcore::CFGenKbSecGrpIncBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readDerivedByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t IncludeGroupId );

		virtual cfcore::CFGenKbSecGrpIncBuff* readDerivedByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t IncludeGroupId );

		virtual cfcore::CFGenKbSecGrpIncBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpIncId );

		virtual cfcore::CFGenKbSecGrpIncBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncPKey* PKey );

		virtual cfcore::CFGenKbSecGrpIncBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId );

		virtual cfcore::CFGenKbSecGrpIncBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpIncId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> readBuffByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t IncludeGroupId );

		virtual cfcore::CFGenKbSecGrpIncBuff* readBuffByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t IncludeGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> pageBuffByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t IncludeGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId );

		virtual cfcore::CFGenKbSecGrpIncBuff* updateSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpIncBuff* Buff );

		virtual void deleteSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGrpIncBuff* Buff );
		virtual void deleteSecGrpIncByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argSecGrpIncId );

		virtual void deleteSecGrpIncByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncPKey* argKey );

		virtual void deleteSecGrpIncByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId );

		virtual void deleteSecGrpIncByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncByClusterIdxKey* argKey );

		virtual void deleteSecGrpIncByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId );

		virtual void deleteSecGrpIncByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncByGroupIdxKey* argKey );

		virtual void deleteSecGrpIncByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argIncludeGroupId );

		virtual void deleteSecGrpIncByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncByIncludeIdxKey* argKey );

		virtual void deleteSecGrpIncByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId,
			const int32_t argIncludeGroupId );

		virtual void deleteSecGrpIncByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
