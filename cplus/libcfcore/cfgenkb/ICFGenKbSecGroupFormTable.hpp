#pragma once

// Description: C++18 DbIO interface for SecGroupForm.

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
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbSecGroupFormBuff.hpp>
#include <cfgenkb/CFGenKbSecGroupFormPKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormByGroupIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormByAppIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormByFormIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormByUFormIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbSecGroupFormObj;

	class ICFGenKbSecGroupFormTable
	{
	public:
		ICFGenKbSecGroupFormTable();
		virtual ~ICFGenKbSecGroupFormTable();

		virtual cfcore::CFGenKbSecGroupFormBuff* createSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupFormBuff* Buff ) = 0;

		virtual cfcore::CFGenKbSecGroupFormBuff* updateSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupFormBuff* Buff ) = 0;

		virtual void deleteSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupFormBuff* Buff ) = 0;
		virtual void deleteSecGroupFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argSecGroupFormId ) = 0;

		virtual void deleteSecGroupFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormPKey* argKey ) = 0;
		virtual void deleteSecGroupFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId ) = 0;

		virtual void deleteSecGroupFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormByClusterIdxKey* argKey ) = 0;
		virtual void deleteSecGroupFormByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId ) = 0;

		virtual void deleteSecGroupFormByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormByGroupIdxKey* argKey ) = 0;
		virtual void deleteSecGroupFormByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId ) = 0;

		virtual void deleteSecGroupFormByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormByAppIdxKey* argKey ) = 0;
		virtual void deleteSecGroupFormByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecFormId ) = 0;

		virtual void deleteSecGroupFormByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormByFormIdxKey* argKey ) = 0;
		virtual void deleteSecGroupFormByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId,
			const int32_t argSecFormId ) = 0;

		virtual void deleteSecGroupFormByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormByUFormIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbSecGroupFormBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecGroupFormBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSecGroupFormBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGroupFormId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readDerivedByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readDerivedByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId ) = 0;

		virtual cfcore::CFGenKbSecGroupFormBuff* readDerivedByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId ) = 0;

		virtual cfcore::CFGenKbSecGroupFormBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecGroupFormBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId ) = 0;

		virtual cfcore::CFGenKbSecGroupFormBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGroupFormId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readBuffByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readBuffByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId ) = 0;

		virtual cfcore::CFGenKbSecGroupFormBuff* readBuffByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> pageBuffByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> pageBuffByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
