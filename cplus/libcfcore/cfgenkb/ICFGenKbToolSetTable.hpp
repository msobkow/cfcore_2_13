#pragma once

// Description: C++18 DbIO interface for ToolSet.

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
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbToolSetBuff.hpp>
#include <cfgenkb/CFGenKbToolSetPKey.hpp>
#include <cfgenkb/CFGenKbToolSetByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool0IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool1IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool2IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool3IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool4IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool5IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool6IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool7IdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbToolSetObj;

	class ICFGenKbToolSetTable
	{
	public:
		ICFGenKbToolSetTable();
		virtual ~ICFGenKbToolSetTable();

		virtual cfcore::CFGenKbToolSetBuff* createToolSet( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolSetBuff* Buff ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* updateToolSet( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolSetBuff* Buff ) = 0;

		virtual void deleteToolSet( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbToolSetBuff* Buff ) = 0;
		virtual void deleteToolSetByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId ) = 0;

		virtual void deleteToolSetByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetPKey* argKey ) = 0;
		virtual void deleteToolSetByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName ) = 0;

		virtual void deleteToolSetByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByNameIdxKey* argKey ) = 0;
		virtual void deleteToolSetByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolId0 ) = 0;

		virtual void deleteToolSetByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool0IdxKey* argKey ) = 0;
		virtual void deleteToolSetByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId1 ) = 0;

		virtual void deleteToolSetByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool1IdxKey* argKey ) = 0;
		virtual void deleteToolSetByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId2 ) = 0;

		virtual void deleteToolSetByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool2IdxKey* argKey ) = 0;
		virtual void deleteToolSetByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId3 ) = 0;

		virtual void deleteToolSetByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool3IdxKey* argKey ) = 0;
		virtual void deleteToolSetByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId4 ) = 0;

		virtual void deleteToolSetByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool4IdxKey* argKey ) = 0;
		virtual void deleteToolSetByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId5 ) = 0;

		virtual void deleteToolSetByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool5IdxKey* argKey ) = 0;
		virtual void deleteToolSetByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId6 ) = 0;

		virtual void deleteToolSetByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool6IdxKey* argKey ) = 0;
		virtual void deleteToolSetByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId7 ) = 0;

		virtual void deleteToolSetByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetByTool7IdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetPKey* PKey ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolId0 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId1 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId2 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId3 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId4 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId5 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId6 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readDerivedByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId7 ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetPKey* PKey ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbToolSetPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolId0 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId1 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId2 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId3 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId4 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId5 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId6 ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> readBuffByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId7 ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbToolSetBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
