#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SecSession.

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

	class CFGenKbRamSecSessionTable
	: public virtual cfcore::ICFGenKbSecSessionTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbSecSessionBySecUserIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>*>* dictBySecUserIdx;
		std::map<cfcore::CFGenKbSecSessionBySecDevIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>*>* dictBySecDevIdx;
		std::map<cfcore::CFGenKbSecSessionByStartIdxKey,
			cfcore::CFGenKbSecSessionBuff*>* dictByStartIdx;
		std::map<cfcore::CFGenKbSecSessionByFinishIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>*>* dictByFinishIdx;
		std::map<cfcore::CFGenKbSecSessionBySecProxyIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>*>* dictBySecProxyIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamSecSessionTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamSecSessionTable();

		virtual cfcore::CFGenKbSecSessionBuff* createSecSession( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecSessionBuff* Buff );

		virtual cfcore::CFGenKbSecSessionBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionPKey* PKey );

		virtual cfcore::CFGenKbSecSessionBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readDerivedBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readDerivedBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string* SecDevName );

		virtual cfcore::CFGenKbSecSessionBuff* readDerivedByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readDerivedByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readDerivedBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecProxyId );

		virtual cfcore::CFGenKbSecSessionBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecSessionId );

		virtual cfcore::CFGenKbSecSessionBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionPKey* PKey );

		virtual cfcore::CFGenKbSecSessionBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t priorSecSessionId );

		virtual cfcore::CFGenKbSecSessionBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecSessionId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readBuffBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readBuffBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string* SecDevName );

		virtual cfcore::CFGenKbSecSessionBuff* readBuffByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readBuffByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> readBuffBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecProxyId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> pageBuffBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const uuid_ptr_t priorSecSessionId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> pageBuffBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string* SecDevName,
			const uuid_ptr_t priorSecSessionId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> pageBuffByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish,
			const uuid_ptr_t priorSecSessionId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> pageBuffBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecProxyId,
			const uuid_ptr_t priorSecSessionId );

		virtual cfcore::CFGenKbSecSessionBuff* updateSecSession( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecSessionBuff* Buff );

		virtual void deleteSecSession( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecSessionBuff* Buff );
		virtual void deleteSecSessionByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecSessionId );

		virtual void deleteSecSessionByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionPKey* argKey );

		virtual void deleteSecSessionBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId );

		virtual void deleteSecSessionBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionBySecUserIdxKey* argKey );

		virtual void deleteSecSessionBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::string* argSecDevName );

		virtual void deleteSecSessionBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionBySecDevIdxKey* argKey );

		virtual void deleteSecSessionByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::chrono::system_clock::time_point& argStart );

		virtual void deleteSecSessionByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionByStartIdxKey* argKey );

		virtual void deleteSecSessionByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::chrono::system_clock::time_point* argFinish );

		virtual void deleteSecSessionByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionByFinishIdxKey* argKey );

		virtual void deleteSecSessionBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecProxyId );

		virtual void deleteSecSessionBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecSessionBySecProxyIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
