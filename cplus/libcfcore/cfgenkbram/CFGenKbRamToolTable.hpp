#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for Tool.

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

	class CFGenKbRamToolTable
	: public virtual cfcore::ICFGenKbToolTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbToolPKey,
			cfcore::CFGenKbToolBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbToolByNameIdxKey,
			cfcore::CFGenKbToolBuff*>* dictByNameIdx;
		std::map<cfcore::CFGenKbToolByReplacesIdxKey,
			std::map<cfcore::CFGenKbToolPKey,
				cfcore::CFGenKbToolBuff*>*>* dictByReplacesIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamToolTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamToolTable();

		virtual cfcore::CFGenKbToolBuff* createTool( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolBuff* Buff );

		virtual cfcore::CFGenKbToolBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolPKey* PKey );

		virtual cfcore::CFGenKbToolBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbToolBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> readDerivedByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ReplacesId );

		virtual cfcore::CFGenKbToolBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id );

		virtual cfcore::CFGenKbToolBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolPKey* PKey );

		virtual cfcore::CFGenKbToolBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbToolBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id );

		virtual cfcore::CFGenKbToolBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> readBuffByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ReplacesId );

		virtual cfcore::CFGenKbToolBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbToolBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbToolBuff* updateTool( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolBuff* Buff );

		virtual void deleteTool( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolBuff* Buff );
		virtual void deleteToolByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId );

		virtual void deleteToolByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolPKey* argKey );

		virtual void deleteToolByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName );

		virtual void deleteToolByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolByNameIdxKey* argKey );

		virtual void deleteToolByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argReplacesId );

		virtual void deleteToolByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolByReplacesIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
