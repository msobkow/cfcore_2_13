#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GenIterator.

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

	class CFGenKbRamGenIteratorTable
	: public virtual cfcore::ICFGenKbGenIteratorTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>* dictByPKey;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGenIteratorTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGenIteratorTable();

		virtual cfcore::CFGenKbGenIteratorBuff* createGenIterator( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenIteratorBuff* Buff );

		virtual cfcore::CFGenKbGenIteratorBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual cfcore::CFGenKbGenIteratorBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId );

		virtual cfcore::CFGenKbGenIteratorBuff* readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual cfcore::CFGenKbGenIteratorBuff* readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual cfcore::CFGenKbGenIteratorBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual cfcore::CFGenKbGenIteratorBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGenIteratorBuff* readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId );

		virtual cfcore::CFGenKbGenIteratorBuff* readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual cfcore::CFGenKbGenIteratorBuff* updateGenIterator( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenIteratorBuff* Buff );

		virtual void deleteGenIterator( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenIteratorBuff* Buff );
		virtual void deleteGenIteratorByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId );

		virtual void deleteGenIteratorByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* argKey );

		virtual void deleteGenIteratorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGenIteratorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByTenantIdxKey* argKey );

		virtual void deleteGenIteratorByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId );

		virtual void deleteGenIteratorByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByCartIdxKey* argKey );

		virtual void deleteGenIteratorByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId );

		virtual void deleteGenIteratorByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey );

		virtual void deleteGenIteratorByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId );

		virtual void deleteGenIteratorByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey );

		virtual void deleteGenIteratorByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId );

		virtual void deleteGenIteratorByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByScopeIdxKey* argKey );

		virtual void deleteGenIteratorByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId );

		virtual void deleteGenIteratorByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey );

		virtual void deleteGenIteratorByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName,
			const int16_t argToolSetId,
			const int16_t* argScopeDefId,
			const int16_t argGenDefId );

		virtual void deleteGenIteratorByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByAltIdxKey* argKey );

		virtual void deleteGenIteratorByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argGelExecutableTenantId,
			const int64_t* argGelExecutableGelCacheId,
			const int64_t* argGelExecutableId );

		virtual void deleteGenIteratorByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey );

		virtual void deleteGenIteratorByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argProbeTenantId,
			const int64_t* argProbeCartridgeId,
			const int64_t* argProbeGenItemId );

		virtual void deleteGenIteratorByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByProbeIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
