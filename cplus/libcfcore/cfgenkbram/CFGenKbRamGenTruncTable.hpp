#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GenTrunc.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>


namespace cfcore {

	class CFGenKbRamGenTruncTable
	: public virtual cfcore::ICFGenKbGenTruncTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>* dictByPKey;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGenTruncTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGenTruncTable();

		virtual cfcore::CFGenKbGenTruncBuff* createGenTrunc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenTruncBuff* Buff );

		virtual cfcore::CFGenKbGenTruncBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual cfcore::CFGenKbGenTruncBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId );

		virtual cfcore::CFGenKbGenTruncBuff* readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readDerivedByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId );

		virtual cfcore::CFGenKbGenTruncBuff* readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual cfcore::CFGenKbGenTruncBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual cfcore::CFGenKbGenTruncBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGenTruncBuff* readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId );

		virtual cfcore::CFGenKbGenTruncBuff* readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> readBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> pageBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId );

		virtual cfcore::CFGenKbGenTruncBuff* updateGenTrunc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenTruncBuff* Buff );

		virtual void deleteGenTrunc( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenTruncBuff* Buff );
		virtual void deleteGenTruncByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argBodyTenantId,
			const int64_t* argBodyGelCacheId,
			const int64_t* argBodyGelId );

		virtual void deleteGenTruncByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenRuleByBodyIdxKey* argKey );

		virtual void deleteGenTruncByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId );

		virtual void deleteGenTruncByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* argKey );

		virtual void deleteGenTruncByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGenTruncByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByTenantIdxKey* argKey );

		virtual void deleteGenTruncByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId );

		virtual void deleteGenTruncByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByCartIdxKey* argKey );

		virtual void deleteGenTruncByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId );

		virtual void deleteGenTruncByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey );

		virtual void deleteGenTruncByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId );

		virtual void deleteGenTruncByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey );

		virtual void deleteGenTruncByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId );

		virtual void deleteGenTruncByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByScopeIdxKey* argKey );

		virtual void deleteGenTruncByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId );

		virtual void deleteGenTruncByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey );

		virtual void deleteGenTruncByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName,
			const int16_t argToolSetId,
			const int16_t* argScopeDefId,
			const int16_t argGenDefId );

		virtual void deleteGenTruncByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByAltIdxKey* argKey );

		virtual void deleteGenTruncByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argGelExecutableTenantId,
			const int64_t* argGelExecutableGelCacheId,
			const int64_t* argGelExecutableId );

		virtual void deleteGenTruncByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey );

		virtual void deleteGenTruncByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argProbeTenantId,
			const int64_t* argProbeCartridgeId,
			const int64_t* argProbeGenItemId );

		virtual void deleteGenTruncByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByProbeIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
