#pragma once

// Description: C++18 DbIO interface for SecSession.

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
#include <cfgenkb/CFGenKbSecSessionBuff.hpp>
#include <cfgenkb/CFGenKbSecSessionPKey.hpp>
#include <cfgenkb/CFGenKbSecSessionBySecUserIdxKey.hpp>
#include <cfgenkb/CFGenKbSecSessionBySecDevIdxKey.hpp>
#include <cfgenkb/CFGenKbSecSessionByStartIdxKey.hpp>
#include <cfgenkb/CFGenKbSecSessionByFinishIdxKey.hpp>
#include <cfgenkb/CFGenKbSecSessionBySecProxyIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbSecSessionObj;

	class ICFGenKbSecSessionTable
	{
	public:
		ICFGenKbSecSessionTable();
		virtual ~ICFGenKbSecSessionTable();

		virtual cfcore::CFGenKbSecSessionBuff* createSecSession( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecSessionBuff* Buff ) = 0;

		virtual cfcore::CFGenKbSecSessionBuff* updateSecSession( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecSessionBuff* Buff ) = 0;

		virtual void deleteSecSession( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecSessionBuff* Buff ) = 0;
		virtual void deleteSecSessionByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecSessionId ) = 0;

		virtual void deleteSecSessionByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionPKey* argKey ) = 0;
		virtual void deleteSecSessionBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId ) = 0;

		virtual void deleteSecSessionBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionBySecUserIdxKey* argKey ) = 0;
		virtual void deleteSecSessionBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::string* argSecDevName ) = 0;

		virtual void deleteSecSessionBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionBySecDevIdxKey* argKey ) = 0;
		virtual void deleteSecSessionByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::chrono::system_clock::time_point& argStart ) = 0;

		virtual void deleteSecSessionByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionByStartIdxKey* argKey ) = 0;
		virtual void deleteSecSessionByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::chrono::system_clock::time_point* argFinish ) = 0;

		virtual void deleteSecSessionByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionByFinishIdxKey* argKey ) = 0;
		virtual void deleteSecSessionBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecProxyId ) = 0;

		virtual void deleteSecSessionBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionBySecProxyIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbSecSessionBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecSessionBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSecSessionBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecSessionId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readDerivedBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readDerivedBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string* SecDevName ) = 0;

		virtual cfcore::CFGenKbSecSessionBuff* readDerivedByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readDerivedByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readDerivedBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecProxyId ) = 0;

		virtual cfcore::CFGenKbSecSessionBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecSessionBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t priorSecSessionId ) = 0;

		virtual cfcore::CFGenKbSecSessionBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecSessionId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readBuffBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readBuffBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string* SecDevName ) = 0;

		virtual cfcore::CFGenKbSecSessionBuff* readBuffByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readBuffByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readBuffBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecProxyId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> pageBuffBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const uuid_ptr_t priorSecSessionId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> pageBuffBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string* SecDevName,
			const uuid_ptr_t priorSecSessionId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> pageBuffByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish,
			const uuid_ptr_t priorSecSessionId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> pageBuffBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecProxyId,
			const uuid_ptr_t priorSecSessionId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
