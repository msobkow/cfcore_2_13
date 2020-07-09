#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for ToolSet.

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

	class CFGenKbRamToolSetTable
	: public virtual cfcore::ICFGenKbToolSetTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbToolSetByNameIdxKey,
			cfcore::CFGenKbToolSetBuff*>* dictByNameIdx;
		std::map<cfcore::CFGenKbToolSetByTool0IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>* dictByTool0Idx;
		std::map<cfcore::CFGenKbToolSetByTool1IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>* dictByTool1Idx;
		std::map<cfcore::CFGenKbToolSetByTool2IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>* dictByTool2Idx;
		std::map<cfcore::CFGenKbToolSetByTool3IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>* dictByTool3Idx;
		std::map<cfcore::CFGenKbToolSetByTool4IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>* dictByTool4Idx;
		std::map<cfcore::CFGenKbToolSetByTool5IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>* dictByTool5Idx;
		std::map<cfcore::CFGenKbToolSetByTool6IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>* dictByTool6Idx;
		std::map<cfcore::CFGenKbToolSetByTool7IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>* dictByTool7Idx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamToolSetTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamToolSetTable();

		virtual cfcore::CFGenKbToolSetBuff* createToolSet( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolSetBuff* Buff );

		virtual cfcore::CFGenKbToolSetBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetPKey* PKey );

		virtual cfcore::CFGenKbToolSetBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbToolSetBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolId0 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId1 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId2 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId3 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId4 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId5 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId6 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId7 );

		virtual cfcore::CFGenKbToolSetBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id );

		virtual cfcore::CFGenKbToolSetBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetPKey* PKey );

		virtual cfcore::CFGenKbToolSetBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbToolSetBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id );

		virtual cfcore::CFGenKbToolSetBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolId0 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId1 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId2 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId3 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId4 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId5 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId6 );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId7 );

		virtual cfcore::CFGenKbToolSetBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbToolSetBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false );

		virtual cfcore::CFGenKbToolSetBuff* updateToolSet( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolSetBuff* Buff );

		virtual void deleteToolSet( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolSetBuff* Buff );
		virtual void deleteToolSetByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId );

		virtual void deleteToolSetByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetPKey* argKey );

		virtual void deleteToolSetByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName );

		virtual void deleteToolSetByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByNameIdxKey* argKey );

		virtual void deleteToolSetByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolId0 );

		virtual void deleteToolSetByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool0IdxKey* argKey );

		virtual void deleteToolSetByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId1 );

		virtual void deleteToolSetByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool1IdxKey* argKey );

		virtual void deleteToolSetByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId2 );

		virtual void deleteToolSetByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool2IdxKey* argKey );

		virtual void deleteToolSetByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId3 );

		virtual void deleteToolSetByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool3IdxKey* argKey );

		virtual void deleteToolSetByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId4 );

		virtual void deleteToolSetByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool4IdxKey* argKey );

		virtual void deleteToolSetByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId5 );

		virtual void deleteToolSetByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool5IdxKey* argKey );

		virtual void deleteToolSetByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId6 );

		virtual void deleteToolSetByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool6IdxKey* argKey );

		virtual void deleteToolSetByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId7 );

		virtual void deleteToolSetByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool7IdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
