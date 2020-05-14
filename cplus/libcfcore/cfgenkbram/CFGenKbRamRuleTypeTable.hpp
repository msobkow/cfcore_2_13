#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for RuleType.

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

	class CFGenKbRamRuleTypeTable
	: public virtual cfcore::ICFGenKbRuleTypeTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbRuleTypePKey,
			cfcore::CFGenKbRuleTypeBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbRuleTypeByNameIdxKey,
			cfcore::CFGenKbRuleTypeBuff*>* dictByNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamRuleTypeTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamRuleTypeTable();

		virtual cfcore::CFGenKbRuleTypeBuff* createRuleType( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleTypeBuff* Buff );

		virtual cfcore::CFGenKbRuleTypeBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypePKey* PKey );

		virtual cfcore::CFGenKbRuleTypeBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypePKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbRuleTypeBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name );

		virtual cfcore::CFGenKbRuleTypeBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id );

		virtual cfcore::CFGenKbRuleTypeBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypePKey* PKey );

		virtual cfcore::CFGenKbRuleTypeBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypePKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbRuleTypeBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id );

		virtual cfcore::CFGenKbRuleTypeBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name );

		virtual cfcore::CFGenKbRuleTypeBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbRuleTypeBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbRuleTypeBuff* updateRuleType( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleTypeBuff* Buff );

		virtual void deleteRuleType( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbRuleTypeBuff* Buff );
		virtual void deleteRuleTypeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId );

		virtual void deleteRuleTypeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypePKey* argKey );

		virtual void deleteRuleTypeByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName );

		virtual void deleteRuleTypeByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbRuleTypeByNameIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
