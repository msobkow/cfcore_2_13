#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SecUser.

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

	class CFGenKbRamSecUserTable
	: public virtual cfcore::ICFGenKbSecUserTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbSecUserByULoginIdxKey,
			cfcore::CFGenKbSecUserBuff*>* dictByULoginIdx;
		std::map<cfcore::CFGenKbSecUserByEMConfIdxKey,
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>*>* dictByEMConfIdx;
		std::map<cfcore::CFGenKbSecUserByPwdResetIdxKey,
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>*>* dictByPwdResetIdx;
		std::map<cfcore::CFGenKbSecUserByDefDevIdxKey,
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>*>* dictByDefDevIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamSecUserTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamSecUserTable();

		virtual cfcore::CFGenKbSecUserBuff* createSecUser( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecUserBuff* Buff );

		virtual cfcore::CFGenKbSecUserBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserPKey* PKey );

		virtual cfcore::CFGenKbSecUserBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbSecUserBuff* readDerivedByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& LoginId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readDerivedByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t EMailConfirmUuid );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readDerivedByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t PasswordResetUuid );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readDerivedByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName );

		virtual cfcore::CFGenKbSecUserBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId );

		virtual cfcore::CFGenKbSecUserBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserPKey* PKey );

		virtual cfcore::CFGenKbSecUserBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t priorSecUserId );

		virtual cfcore::CFGenKbSecUserBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId );

		virtual cfcore::CFGenKbSecUserBuff* readBuffByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& LoginId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readBuffByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t EMailConfirmUuid );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readBuffByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t PasswordResetUuid );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> readBuffByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName );

		virtual cfcore::CFGenKbSecUserBuff* readBuffByLookupULoginIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& LoginId,
			bool forceRead = false );

		virtual cfcore::CFGenKbSecUserBuff* readDerivedByLookupULoginIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& LoginId,
			bool forceRead = false );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> pageBuffByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t EMailConfirmUuid,
			const uuid_ptr_t priorSecUserId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> pageBuffByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t PasswordResetUuid,
			const uuid_ptr_t priorSecUserId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> pageBuffByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName,
			const uuid_ptr_t priorSecUserId );

		virtual cfcore::CFGenKbSecUserBuff* updateSecUser( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecUserBuff* Buff );

		virtual void deleteSecUser( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecUserBuff* Buff );
		virtual void deleteSecUserByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId );

		virtual void deleteSecUserByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserPKey* argKey );

		virtual void deleteSecUserByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argLoginId );

		virtual void deleteSecUserByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserByULoginIdxKey* argKey );

		virtual void deleteSecUserByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argEMailConfirmUuid );

		virtual void deleteSecUserByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserByEMConfIdxKey* argKey );

		virtual void deleteSecUserByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argPasswordResetUuid );

		virtual void deleteSecUserByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserByPwdResetIdxKey* argKey );

		virtual void deleteSecUserByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argDfltDevUserId,
			const std::string* argDfltDevName );

		virtual void deleteSecUserByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecUserByDefDevIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
