#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SecGroupForm.

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

	class CFGenKbRamSecGroupFormTable
	: public virtual cfcore::ICFGenKbSecGroupFormTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbSecGroupFormByClusterIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>*>* dictByClusterIdx;
		std::map<cfcore::CFGenKbSecGroupFormByGroupIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>*>* dictByGroupIdx;
		std::map<cfcore::CFGenKbSecGroupFormByAppIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>*>* dictByAppIdx;
		std::map<cfcore::CFGenKbSecGroupFormByFormIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>*>* dictByFormIdx;
		std::map<cfcore::CFGenKbSecGroupFormByUFormIdxKey,
			cfcore::CFGenKbSecGroupFormBuff*>* dictByUFormIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamSecGroupFormTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamSecGroupFormTable();

		virtual cfcore::CFGenKbSecGroupFormBuff* createSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupFormBuff* Buff );

		virtual cfcore::CFGenKbSecGroupFormBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormPKey* PKey );

		virtual cfcore::CFGenKbSecGroupFormBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readDerivedByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readDerivedByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId );

		virtual cfcore::CFGenKbSecGroupFormBuff* readDerivedByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId );

		virtual cfcore::CFGenKbSecGroupFormBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGroupFormId );

		virtual cfcore::CFGenKbSecGroupFormBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormPKey* PKey );

		virtual cfcore::CFGenKbSecGroupFormBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId );

		virtual cfcore::CFGenKbSecGroupFormBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGroupFormId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readBuffByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> readBuffByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId );

		virtual cfcore::CFGenKbSecGroupFormBuff* readBuffByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> pageBuffByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> pageBuffByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId );

		virtual cfcore::CFGenKbSecGroupFormBuff* updateSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupFormBuff* Buff );

		virtual void deleteSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecGroupFormBuff* Buff );
		virtual void deleteSecGroupFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argSecGroupFormId );

		virtual void deleteSecGroupFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormPKey* argKey );

		virtual void deleteSecGroupFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId );

		virtual void deleteSecGroupFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormByClusterIdxKey* argKey );

		virtual void deleteSecGroupFormByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId );

		virtual void deleteSecGroupFormByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormByGroupIdxKey* argKey );

		virtual void deleteSecGroupFormByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId );

		virtual void deleteSecGroupFormByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormByAppIdxKey* argKey );

		virtual void deleteSecGroupFormByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecFormId );

		virtual void deleteSecGroupFormByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormByFormIdxKey* argKey );

		virtual void deleteSecGroupFormByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId,
			const int32_t argSecFormId );

		virtual void deleteSecGroupFormByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecGroupFormByUFormIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
