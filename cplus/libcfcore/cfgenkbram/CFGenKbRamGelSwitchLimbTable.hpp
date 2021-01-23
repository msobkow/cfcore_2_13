#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GelSwitchLimb.

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

	class CFGenKbRamGelSwitchLimbTable
	: public virtual cfcore::ICFGenKbGelSwitchLimbTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			cfcore::CFGenKbGelSwitchLimbBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				cfcore::CFGenKbGelSwitchLimbBuff*>*>* dictByTenantIdx;
		std::map<cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				cfcore::CFGenKbGelSwitchLimbBuff*>*>* dictBySwitchIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGelSwitchLimbTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGelSwitchLimbTable();

		virtual cfcore::CFGenKbGelSwitchLimbBuff* createGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSwitchLimbBuff* Buff );

		virtual cfcore::CFGenKbGelSwitchLimbBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbPKey* PKey );

		virtual cfcore::CFGenKbGelSwitchLimbBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readDerivedBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual cfcore::CFGenKbGelSwitchLimbBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName );

		virtual cfcore::CFGenKbGelSwitchLimbBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbPKey* PKey );

		virtual cfcore::CFGenKbGelSwitchLimbBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGelSwitchLimbBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readBuffBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual cfcore::CFGenKbGelSwitchLimbBuff* updateGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSwitchLimbBuff* Buff );

		virtual void deleteGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSwitchLimbBuff* Buff );
		virtual void deleteGelSwitchLimbByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId,
			const std::string& argLimbName );

		virtual void deleteGelSwitchLimbByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbPKey* argKey );

		virtual void deleteGelSwitchLimbByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGelSwitchLimbByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey* argKey );

		virtual void deleteGelSwitchLimbBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId );

		virtual void deleteGelSwitchLimbBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
