#pragma once

// Description: C++18 DbIO interface for GenBind.

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
#include <cfgenkb/CFGenKbGenBindBuff.hpp>
#include <cfgenkb/CFGenKbGenItemPKey.hpp>
#include <cfgenkb/CFGenKbGenItemByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByCartIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByRuleTypeIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByToolSetIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByScopeIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByGenDefIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByAltIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByGelExecIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByProbeIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbGenBindObj;

	class ICFGenKbGenBindTable
	{
	public:
		ICFGenKbGenBindTable();
		virtual ~ICFGenKbGenBindTable();

		virtual cfcore::CFGenKbGenBindBuff* createGenBind( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenBindBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGenBindBuff* updateGenBind( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenBindBuff* Buff ) = 0;

		virtual void deleteGenBind( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenBindBuff* Buff ) = 0;
		virtual void deleteGenBindByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId ) = 0;

		virtual void deleteGenBindByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* argKey ) = 0;
		virtual void deleteGenBindByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGenBindByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByTenantIdxKey* argKey ) = 0;
		virtual void deleteGenBindByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId ) = 0;

		virtual void deleteGenBindByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByCartIdxKey* argKey ) = 0;
		virtual void deleteGenBindByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId ) = 0;

		virtual void deleteGenBindByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey ) = 0;
		virtual void deleteGenBindByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId ) = 0;

		virtual void deleteGenBindByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey ) = 0;
		virtual void deleteGenBindByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId ) = 0;

		virtual void deleteGenBindByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByScopeIdxKey* argKey ) = 0;
		virtual void deleteGenBindByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId ) = 0;

		virtual void deleteGenBindByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey ) = 0;
		virtual void deleteGenBindByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName,
			const int16_t argToolSetId,
			const int16_t* argScopeDefId,
			const int16_t argGenDefId ) = 0;

		virtual void deleteGenBindByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByAltIdxKey* argKey ) = 0;
		virtual void deleteGenBindByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argGelExecutableTenantId,
			const int64_t* argGelExecutableGelCacheId,
			const int64_t* argGelExecutableId ) = 0;

		virtual void deleteGenBindByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey ) = 0;
		virtual void deleteGenBindByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argProbeTenantId,
			const int64_t* argProbeCartridgeId,
			const int64_t* argProbeGenItemId ) = 0;

		virtual void deleteGenBindByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByProbeIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGenBindBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGenBindBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGenBindBuff* readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId ) = 0;

		virtual cfcore::CFGenKbGenBindBuff* readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) = 0;

		virtual cfcore::CFGenKbGenBindBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGenBindBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGenBindBuff* readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId ) = 0;

		virtual cfcore::CFGenKbGenBindBuff* readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
