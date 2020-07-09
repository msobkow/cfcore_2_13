#pragma once

// Description: C++18 DbIO interface for GenItem.

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
#include <cfgenkb/CFGenKbGenItemBuff.hpp>
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
	class ICFGenKbGenItemObj;

	class ICFGenKbGenItemTable
	{
	public:
		ICFGenKbGenItemTable();
		virtual ~ICFGenKbGenItemTable();

		virtual cfcore::CFGenKbGenItemBuff* createGenItem( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenItemBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGenItemBuff* updateGenItem( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenItemBuff* Buff ) = 0;

		virtual void deleteGenItem( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenItemBuff* Buff ) = 0;
		virtual void deleteGenItemByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId ) = 0;

		virtual void deleteGenItemByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* argKey ) = 0;
		virtual void deleteGenItemByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGenItemByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByTenantIdxKey* argKey ) = 0;
		virtual void deleteGenItemByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId ) = 0;

		virtual void deleteGenItemByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByCartIdxKey* argKey ) = 0;
		virtual void deleteGenItemByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId ) = 0;

		virtual void deleteGenItemByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey ) = 0;
		virtual void deleteGenItemByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId ) = 0;

		virtual void deleteGenItemByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey ) = 0;
		virtual void deleteGenItemByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId ) = 0;

		virtual void deleteGenItemByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByScopeIdxKey* argKey ) = 0;
		virtual void deleteGenItemByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId ) = 0;

		virtual void deleteGenItemByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey ) = 0;
		virtual void deleteGenItemByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName,
			const int16_t argToolSetId,
			const int16_t* argScopeDefId,
			const int16_t argGenDefId ) = 0;

		virtual void deleteGenItemByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByAltIdxKey* argKey ) = 0;
		virtual void deleteGenItemByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argGelExecutableTenantId,
			const int64_t* argGelExecutableGelCacheId,
			const int64_t* argGelExecutableId ) = 0;

		virtual void deleteGenItemByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey ) = 0;
		virtual void deleteGenItemByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argProbeTenantId,
			const int64_t* argProbeCartridgeId,
			const int64_t* argProbeGenItemId ) = 0;

		virtual void deleteGenItemByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByProbeIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGenItemBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGenItemBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGenItemBuff* readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId ) = 0;

		virtual cfcore::CFGenKbGenItemBuff* readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) = 0;

		virtual cfcore::CFGenKbGenItemBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGenItemBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGenItemBuff* readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId ) = 0;

		virtual cfcore::CFGenKbGenItemBuff* readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
