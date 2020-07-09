#pragma once

// Description: C++18 DbIO interface for RuleCart.

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
#include <cfgenkb/CFGenKbRuleCartBuff.hpp>
#include <cfgenkb/CFGenKbRuleCartPKey.hpp>
#include <cfgenkb/CFGenKbRuleCartByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbRuleCartByNameIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbRuleCartObj;

	class ICFGenKbRuleCartTable
	{
	public:
		ICFGenKbRuleCartTable();
		virtual ~ICFGenKbRuleCartTable();

		virtual cfcore::CFGenKbRuleCartBuff* createRuleCart( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleCartBuff* Buff ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* updateRuleCart( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleCartBuff* Buff ) = 0;

		virtual void deleteRuleCart( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleCartBuff* Buff ) = 0;
		virtual void deleteRuleCartByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteRuleCartByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartPKey* argKey ) = 0;
		virtual void deleteRuleCartByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteRuleCartByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartByTenantIdxKey* argKey ) = 0;
		virtual void deleteRuleCartByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argName ) = 0;

		virtual void deleteRuleCartByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartByNameIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartPKey* PKey ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleCartBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleCartBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& Name ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartPKey* PKey ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleCartPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleCartBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleCartBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& Name ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbRuleCartBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
