#pragma once

// Description: C++18 DbIO interface for SecUser.

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
#include <cfgenkb/CFGenKbSecUserBuff.hpp>
#include <cfgenkb/CFGenKbSecUserPKey.hpp>
#include <cfgenkb/CFGenKbSecUserByULoginIdxKey.hpp>
#include <cfgenkb/CFGenKbSecUserByEMConfIdxKey.hpp>
#include <cfgenkb/CFGenKbSecUserByPwdResetIdxKey.hpp>
#include <cfgenkb/CFGenKbSecUserByDefDevIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbSecUserObj;

	class ICFGenKbSecUserTable
	{
	public:
		ICFGenKbSecUserTable();
		virtual ~ICFGenKbSecUserTable();

		virtual cfcore::CFGenKbSecUserBuff* createSecUser( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecUserBuff* Buff ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* updateSecUser( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecUserBuff* Buff ) = 0;

		virtual void deleteSecUser( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecUserBuff* Buff ) = 0;
		virtual void deleteSecUserByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId ) = 0;

		virtual void deleteSecUserByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserPKey* argKey ) = 0;
		virtual void deleteSecUserByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argLoginId ) = 0;

		virtual void deleteSecUserByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserByULoginIdxKey* argKey ) = 0;
		virtual void deleteSecUserByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argEMailConfirmUuid ) = 0;

		virtual void deleteSecUserByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserByEMConfIdxKey* argKey ) = 0;
		virtual void deleteSecUserByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argPasswordResetUuid ) = 0;

		virtual void deleteSecUserByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserByPwdResetIdxKey* argKey ) = 0;
		virtual void deleteSecUserByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argDfltDevUserId,
			const std::string* argDfltDevName ) = 0;

		virtual void deleteSecUserByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserByDefDevIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* readDerivedByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& LoginId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readDerivedByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t EMailConfirmUuid ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readDerivedByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t PasswordResetUuid ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readDerivedByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserPKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t priorSecUserId ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* readBuffByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& LoginId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readBuffByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t EMailConfirmUuid ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readBuffByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t PasswordResetUuid ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readBuffByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* readBuffByLookupULoginIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& LoginId,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbSecUserBuff* readDerivedByLookupULoginIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& LoginId,
			bool forceRead = false ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> pageBuffByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t EMailConfirmUuid,
			const uuid_ptr_t priorSecUserId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> pageBuffByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t PasswordResetUuid,
			const uuid_ptr_t priorSecUserId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> pageBuffByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName,
			const uuid_ptr_t priorSecUserId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
