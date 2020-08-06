#pragma once

// Description: C++18 DbIO interface for GelSwitchLimb.

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
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbGelSwitchLimbBuff.hpp>
#include <cfgenkb/CFGenKbGelSwitchLimbPKey.hpp>
#include <cfgenkb/CFGenKbGelSwitchLimbByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSwitchLimbBySwitchIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbGelSwitchLimbObj;

	class ICFGenKbGelSwitchLimbTable
	{
	public:
		ICFGenKbGelSwitchLimbTable();
		virtual ~ICFGenKbGelSwitchLimbTable();

		virtual cfcore::CFGenKbGelSwitchLimbBuff* createGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSwitchLimbBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGelSwitchLimbBuff* updateGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSwitchLimbBuff* Buff ) = 0;

		virtual void deleteGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelSwitchLimbBuff* Buff ) = 0;
		virtual void deleteGelSwitchLimbByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId,
			const std::string& argLimbName ) = 0;

		virtual void deleteGelSwitchLimbByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbPKey* argKey ) = 0;
		virtual void deleteGelSwitchLimbByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGelSwitchLimbByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey* argKey ) = 0;
		virtual void deleteGelSwitchLimbBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId ) = 0;

		virtual void deleteGelSwitchLimbBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGelSwitchLimbBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelSwitchLimbBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelSwitchLimbBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readDerivedBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual cfcore::CFGenKbGelSwitchLimbBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGelSwitchLimbBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelSwitchLimbPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGelSwitchLimbBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> readBuffBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
