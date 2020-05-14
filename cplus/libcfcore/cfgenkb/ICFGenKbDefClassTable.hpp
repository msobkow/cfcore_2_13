#pragma once

// Description: C++18 DbIO interface for DefClass.

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
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbDefClassBuff.hpp>
#include <cfgenkb/CFGenKbDefClassPKey.hpp>
#include <cfgenkb/CFGenKbDefClassByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbDefClassByBaseIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbDefClassObj;

	class ICFGenKbDefClassTable
	{
	public:
		ICFGenKbDefClassTable();
		virtual ~ICFGenKbDefClassTable();

		virtual cfcore::CFGenKbDefClassBuff* createDefClass( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbDefClassBuff* Buff ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* updateDefClass( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbDefClassBuff* Buff ) = 0;

		virtual void deleteDefClass( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbDefClassBuff* Buff ) = 0;
		virtual void deleteDefClassByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId ) = 0;

		virtual void deleteDefClassByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassPKey* argKey ) = 0;
		virtual void deleteDefClassByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName ) = 0;

		virtual void deleteDefClassByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassByNameIdxKey* argKey ) = 0;
		virtual void deleteDefClassByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argBaseId ) = 0;

		virtual void deleteDefClassByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassByBaseIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassPKey* PKey ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> readDerivedByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* BaseId ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassPKey* PKey ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> readBuffByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* BaseId ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbDefClassBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
