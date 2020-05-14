#pragma once

// Description: C++18 DbIO interface for SecDevice.

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
#include <cfgenkb/CFGenKbSecDeviceBuff.hpp>
#include <cfgenkb/CFGenKbSecDevicePKey.hpp>
#include <cfgenkb/CFGenKbSecDeviceByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbSecDeviceByUserIdxKey.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbSecDeviceObj;

	class ICFGenKbSecDeviceTable
	{
	public:
		ICFGenKbSecDeviceTable();
		virtual ~ICFGenKbSecDeviceTable();

		virtual cfcore::CFGenKbSecDeviceBuff* createSecDevice( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecDeviceBuff* Buff ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* updateSecDevice( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecDeviceBuff* Buff ) = 0;

		virtual void deleteSecDevice( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecDeviceBuff* Buff ) = 0;
		virtual void deleteSecDeviceByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::string& argDevName ) = 0;

		virtual void deleteSecDeviceByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDevicePKey* argKey ) = 0;
		virtual void deleteSecDeviceByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::string& argDevName ) = 0;

		virtual void deleteSecDeviceByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDeviceByNameIdxKey* argKey ) = 0;
		virtual void deleteSecDeviceByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId ) = 0;

		virtual void deleteSecDeviceByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDeviceByUserIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDevicePKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDevicePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> readDerivedByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDevicePKey* PKey ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDevicePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t priorSecUserId,
			const std::string* priorDevName ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> readBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId, const std::string& DevName,
			bool forceRead = false ) = 0;

		virtual cfcore::CFGenKbSecDeviceBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId, const std::string& DevName,
			bool forceRead = false ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> pageBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const uuid_ptr_t priorSecUserId,
			const std::string* priorDevName ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
