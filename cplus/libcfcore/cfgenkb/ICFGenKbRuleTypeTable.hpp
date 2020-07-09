#pragma once

// Description: C++18 DbIO interface for RuleType.

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
#include <cfgenkb/CFGenKbRuleTypeBuff.hpp>
#include <cfgenkb/CFGenKbRuleTypePKey.hpp>
#include <cfgenkb/CFGenKbRuleTypeByNameIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbRuleTypeObj;

	class ICFGenKbRuleTypeTable
	{
	public:
		ICFGenKbRuleTypeTable();
		virtual ~ICFGenKbRuleTypeTable();

		virtual cfcore::CFGenKbRuleTypeBuff* createRuleType( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleTypeBuff* Buff ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* updateRuleType( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleTypeBuff* Buff ) = 0;

		virtual void deleteRuleType( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleTypeBuff* Buff ) = 0;
		virtual void deleteRuleTypeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId ) = 0;

		virtual void deleteRuleTypeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypePKey* argKey ) = 0;
		virtual void deleteRuleTypeByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName ) = 0;

		virtual void deleteRuleTypeByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypeByNameIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypePKey* PKey ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypePKey* PKey ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbRuleTypeBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
