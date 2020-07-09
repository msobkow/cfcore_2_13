#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SecForm.

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

	class CFGenKbRamSecFormTable
	: public virtual cfcore::ICFGenKbSecFormTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbSecFormByClusterIdxKey,
			std::map<cfcore::CFGenKbSecFormPKey,
				cfcore::CFGenKbSecFormBuff*>*>* dictByClusterIdx;
		std::map<cfcore::CFGenKbSecFormBySecAppIdxKey,
			std::map<cfcore::CFGenKbSecFormPKey,
				cfcore::CFGenKbSecFormBuff*>*>* dictBySecAppIdx;
		std::map<cfcore::CFGenKbSecFormByUJEEServletIdxKey,
			cfcore::CFGenKbSecFormBuff*>* dictByUJEEServletIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamSecFormTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamSecFormTable();

		virtual cfcore::CFGenKbSecFormBuff* createSecForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecFormBuff* Buff );

		virtual cfcore::CFGenKbSecFormBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormPKey* PKey );

		virtual cfcore::CFGenKbSecFormBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readDerivedBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId );

		virtual cfcore::CFGenKbSecFormBuff* readDerivedByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName );

		virtual cfcore::CFGenKbSecFormBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId );

		virtual cfcore::CFGenKbSecFormBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormPKey* PKey );

		virtual cfcore::CFGenKbSecFormBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId );

		virtual cfcore::CFGenKbSecFormBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readBuffBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId );

		virtual cfcore::CFGenKbSecFormBuff* readBuffByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName );

		virtual cfcore::CFGenKbSecFormBuff* readBuffByLookupUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId, const std::string& JEEServletMapName,
			bool forceRead = false );

		virtual cfcore::CFGenKbSecFormBuff* readDerivedByLookupUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId, const std::string& JEEServletMapName,
			bool forceRead = false );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> pageBuffBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId );

		virtual cfcore::CFGenKbSecFormBuff* updateSecForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecFormBuff* Buff );

		virtual void deleteSecForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecFormBuff* Buff );
		virtual void deleteSecFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecFormId );

		virtual void deleteSecFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormPKey* argKey );

		virtual void deleteSecFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId );

		virtual void deleteSecFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormByClusterIdxKey* argKey );

		virtual void deleteSecFormBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId );

		virtual void deleteSecFormBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormBySecAppIdxKey* argKey );

		virtual void deleteSecFormByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId,
			const std::string& argJEEServletMapName );

		virtual void deleteSecFormByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormByUJEEServletIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
