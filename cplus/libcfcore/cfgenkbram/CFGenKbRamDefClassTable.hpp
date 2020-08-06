#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for DefClass.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
 *	
 *		This file is part of MSS Code Factory.
 *	
 *		MSS Code Factory is available under dual commercial license from Mark Stephen
 *		Sobkow, or under the terms of the GNU Lesser General Public License, Version 3
 *		or later.
 *	
 *	    MSS Code Factory is free software: you can redistribute it and/or modify
 *	    it under the terms of the GNU Lesser General Public License as published by
 *	    the Free Software Foundation, either version 3 of the License, or
 *	    (at your option) any later version.
 *	
 *	    MSS Code Factory is distributed in the hope that it will be useful,
 *	    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	    GNU Lesser General Public License for more details.
 *	
 *	    You should have received a copy of the GNU Lesser General Public License
 *	    along with MSS Code Factory.  If not, see <https://www.gnu.org/licenses/>.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>


namespace cfcore {

	class CFGenKbRamDefClassTable
	: public virtual cfcore::ICFGenKbDefClassTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbDefClassPKey,
			cfcore::CFGenKbDefClassBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbDefClassByNameIdxKey,
			cfcore::CFGenKbDefClassBuff*>* dictByNameIdx;
		std::map<cfcore::CFGenKbDefClassByBaseIdxKey,
			std::map<cfcore::CFGenKbDefClassPKey,
				cfcore::CFGenKbDefClassBuff*>*>* dictByBaseIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamDefClassTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamDefClassTable();

		virtual cfcore::CFGenKbDefClassBuff* createDefClass( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbDefClassBuff* Buff );

		virtual cfcore::CFGenKbDefClassBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassPKey* PKey );

		virtual cfcore::CFGenKbDefClassBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbDefClassBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> readDerivedByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* BaseId );

		virtual cfcore::CFGenKbDefClassBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id );

		virtual cfcore::CFGenKbDefClassBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassPKey* PKey );

		virtual cfcore::CFGenKbDefClassBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbDefClassBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id );

		virtual cfcore::CFGenKbDefClassBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> readBuffByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* BaseId );

		virtual cfcore::CFGenKbDefClassBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbDefClassBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbDefClassBuff* updateDefClass( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbDefClassBuff* Buff );

		virtual void deleteDefClass( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbDefClassBuff* Buff );
		virtual void deleteDefClassByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId );

		virtual void deleteDefClassByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassPKey* argKey );

		virtual void deleteDefClassByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName );

		virtual void deleteDefClassByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassByNameIdxKey* argKey );

		virtual void deleteDefClassByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argBaseId );

		virtual void deleteDefClassByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbDefClassByBaseIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
