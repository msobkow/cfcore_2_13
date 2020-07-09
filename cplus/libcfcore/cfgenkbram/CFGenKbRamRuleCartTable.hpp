#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for RuleCart.

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

	class CFGenKbRamRuleCartTable
	: public virtual cfcore::ICFGenKbRuleCartTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbRuleCartPKey,
			cfcore::CFGenKbRuleCartBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbRuleCartByTenantIdxKey,
			std::map<cfcore::CFGenKbRuleCartPKey,
				cfcore::CFGenKbRuleCartBuff*>*>* dictByTenantIdx;
		std::map<cfcore::CFGenKbRuleCartByNameIdxKey,
			cfcore::CFGenKbRuleCartBuff*>* dictByNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamRuleCartTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamRuleCartTable();

		virtual cfcore::CFGenKbRuleCartBuff* createRuleCart( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleCartBuff* Buff );

		virtual cfcore::CFGenKbRuleCartBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartPKey* PKey );

		virtual cfcore::CFGenKbRuleCartBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleCartBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleCartBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual cfcore::CFGenKbRuleCartBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& Name );

		virtual cfcore::CFGenKbRuleCartBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfcore::CFGenKbRuleCartBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartPKey* PKey );

		virtual cfcore::CFGenKbRuleCartBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleCartBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbRuleCartBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleCartBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual cfcore::CFGenKbRuleCartBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& Name );

		virtual cfcore::CFGenKbRuleCartBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbRuleCartBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbRuleCartBuff* updateRuleCart( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleCartBuff* Buff );

		virtual void deleteRuleCart( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleCartBuff* Buff );
		virtual void deleteRuleCartByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteRuleCartByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartPKey* argKey );

		virtual void deleteRuleCartByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteRuleCartByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartByTenantIdxKey* argKey );

		virtual void deleteRuleCartByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argName );

		virtual void deleteRuleCartByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartByNameIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
