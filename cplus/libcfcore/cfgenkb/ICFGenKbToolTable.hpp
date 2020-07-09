#pragma once

// Description: C++18 DbIO interface for Tool.

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
#include <cfgenkb/CFGenKbToolBuff.hpp>
#include <cfgenkb/CFGenKbToolPKey.hpp>
#include <cfgenkb/CFGenKbToolByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbToolByReplacesIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbToolObj;

	class ICFGenKbToolTable
	{
	public:
		ICFGenKbToolTable();
		virtual ~ICFGenKbToolTable();

		virtual cfcore::CFGenKbToolBuff* createTool( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolBuff* Buff ) = 0;

		virtual cfcore::CFGenKbToolBuff* updateTool( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolBuff* Buff ) = 0;

		virtual void deleteTool( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolBuff* Buff ) = 0;
		virtual void deleteToolByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId ) = 0;

		virtual void deleteToolByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolPKey* argKey ) = 0;
		virtual void deleteToolByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName ) = 0;

		virtual void deleteToolByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolByNameIdxKey* argKey ) = 0;
		virtual void deleteToolByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argReplacesId ) = 0;

		virtual void deleteToolByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolByReplacesIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbToolBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolPKey* PKey ) = 0;

		virtual cfcore::CFGenKbToolBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbToolBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id ) = 0;

		virtual cfcore::CFGenKbToolBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> readDerivedByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ReplacesId ) = 0;

		virtual cfcore::CFGenKbToolBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolPKey* PKey ) = 0;

		virtual cfcore::CFGenKbToolBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbToolBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id ) = 0;

		virtual cfcore::CFGenKbToolBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> readBuffByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ReplacesId ) = 0;

		virtual cfcore::CFGenKbToolBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbToolBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
