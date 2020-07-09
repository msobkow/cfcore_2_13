#pragma once

// Description: C++18 DbIO interface for SecForm.

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
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbSecFormBuff.hpp>
#include <cfgenkb/CFGenKbSecFormPKey.hpp>
#include <cfgenkb/CFGenKbSecFormByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecFormBySecAppIdxKey.hpp>
#include <cfgenkb/CFGenKbSecFormByUJEEServletIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbSecFormObj;

	class ICFGenKbSecFormTable
	{
	public:
		ICFGenKbSecFormTable();
		virtual ~ICFGenKbSecFormTable();

		virtual cfcore::CFGenKbSecFormBuff* createSecForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecFormBuff* Buff ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* updateSecForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecFormBuff* Buff ) = 0;

		virtual void deleteSecForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecFormBuff* Buff ) = 0;
		virtual void deleteSecFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecFormId ) = 0;

		virtual void deleteSecFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormPKey* argKey ) = 0;
		virtual void deleteSecFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId ) = 0;

		virtual void deleteSecFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormByClusterIdxKey* argKey ) = 0;
		virtual void deleteSecFormBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId ) = 0;

		virtual void deleteSecFormBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormBySecAppIdxKey* argKey ) = 0;
		virtual void deleteSecFormByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId,
			const std::string& argJEEServletMapName ) = 0;

		virtual void deleteSecFormByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormByUJEEServletIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readDerivedBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* readDerivedByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecFormPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> readBuffBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* readBuffByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* readBuffByLookupUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId, const std::string& JEEServletMapName,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbSecFormBuff* readDerivedByLookupUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId, const std::string& JEEServletMapName,
			bool forceRead = false ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> pageBuffBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
