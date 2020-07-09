#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GenItem.

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

	class CFGenKbRamGenItemTable
	: public virtual cfcore::ICFGenKbGenItemTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>* dictByTenantIdx;
		std::map<cfcore::CFGenKbGenItemByCartIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>* dictByCartIdx;
		std::map<cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>* dictByRuleTypeIdx;
		std::map<cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>* dictByToolSetIdx;
		std::map<cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>* dictByScopeIdx;
		std::map<cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>* dictByGenDefIdx;
		std::map<cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::CFGenKbGenItemBuff*>* dictByAltIdx;
		std::map<cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>* dictByGelExecIdx;
		std::map<cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>* dictByProbeIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGenItemTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGenItemTable();

		virtual cfcore::CFGenKbGenItemBuff* createGenItem( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenItemBuff* Buff );

		virtual cfcore::CFGenKbGenItemBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual cfcore::CFGenKbGenItemBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId );

		virtual cfcore::CFGenKbGenItemBuff* readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual cfcore::CFGenKbGenItemBuff* readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual cfcore::CFGenKbGenItemBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual cfcore::CFGenKbGenItemBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGenItemBuff* readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId );

		virtual cfcore::CFGenKbGenItemBuff* readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual cfcore::CFGenKbGenItemBuff* updateGenItem( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenItemBuff* Buff );

		virtual void deleteGenItem( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenItemBuff* Buff );
		virtual void deleteGenItemByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId );

		virtual void deleteGenItemByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* argKey );

		virtual void deleteGenItemByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGenItemByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByTenantIdxKey* argKey );

		virtual void deleteGenItemByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId );

		virtual void deleteGenItemByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByCartIdxKey* argKey );

		virtual void deleteGenItemByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId );

		virtual void deleteGenItemByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey );

		virtual void deleteGenItemByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId );

		virtual void deleteGenItemByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey );

		virtual void deleteGenItemByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId );

		virtual void deleteGenItemByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByScopeIdxKey* argKey );

		virtual void deleteGenItemByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId );

		virtual void deleteGenItemByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey );

		virtual void deleteGenItemByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName,
			const int16_t argToolSetId,
			const int16_t* argScopeDefId,
			const int16_t argGenDefId );

		virtual void deleteGenItemByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByAltIdxKey* argKey );

		virtual void deleteGenItemByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argGelExecutableTenantId,
			const int64_t* argGelExecutableGelCacheId,
			const int64_t* argGelExecutableId );

		virtual void deleteGenItemByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey );

		virtual void deleteGenItemByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argProbeTenantId,
			const int64_t* argProbeCartridgeId,
			const int64_t* argProbeGenItemId );

		virtual void deleteGenItemByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByProbeIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
