#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GenBind.

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

	class CFGenKbRamGenBindTable
	: public virtual cfcore::ICFGenKbGenBindTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenBindBuff*>* dictByPKey;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGenBindTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGenBindTable();

		virtual cfcore::CFGenKbGenBindBuff* createGenBind( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenBindBuff* Buff );

		virtual cfcore::CFGenKbGenBindBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual cfcore::CFGenKbGenBindBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId );

		virtual cfcore::CFGenKbGenBindBuff* readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual cfcore::CFGenKbGenBindBuff* readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual cfcore::CFGenKbGenBindBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual cfcore::CFGenKbGenBindBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGenBindBuff* readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId );

		virtual cfcore::CFGenKbGenBindBuff* readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenBindBuff*> readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual cfcore::CFGenKbGenBindBuff* updateGenBind( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenBindBuff* Buff );

		virtual void deleteGenBind( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenBindBuff* Buff );
		virtual void deleteGenBindByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId );

		virtual void deleteGenBindByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* argKey );

		virtual void deleteGenBindByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGenBindByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByTenantIdxKey* argKey );

		virtual void deleteGenBindByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId );

		virtual void deleteGenBindByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByCartIdxKey* argKey );

		virtual void deleteGenBindByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId );

		virtual void deleteGenBindByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey );

		virtual void deleteGenBindByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId );

		virtual void deleteGenBindByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey );

		virtual void deleteGenBindByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId );

		virtual void deleteGenBindByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByScopeIdxKey* argKey );

		virtual void deleteGenBindByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId );

		virtual void deleteGenBindByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey );

		virtual void deleteGenBindByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName,
			const int16_t argToolSetId,
			const int16_t* argScopeDefId,
			const int16_t argGenDefId );

		virtual void deleteGenBindByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByAltIdxKey* argKey );

		virtual void deleteGenBindByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argGelExecutableTenantId,
			const int64_t* argGelExecutableGelCacheId,
			const int64_t* argGelExecutableId );

		virtual void deleteGenBindByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey );

		virtual void deleteGenBindByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argProbeTenantId,
			const int64_t* argProbeCartridgeId,
			const int64_t* argProbeGenItemId );

		virtual void deleteGenBindByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByProbeIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
