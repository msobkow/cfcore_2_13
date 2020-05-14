#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SecDevice.

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

	class CFGenKbRamSecDeviceTable
	: public virtual cfcore::ICFGenKbSecDeviceTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbSecDevicePKey,
			cfcore::CFGenKbSecDeviceBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbSecDeviceByNameIdxKey,
			cfcore::CFGenKbSecDeviceBuff*>* dictByNameIdx;
		std::map<cfcore::CFGenKbSecDeviceByUserIdxKey,
			std::map<cfcore::CFGenKbSecDevicePKey,
				cfcore::CFGenKbSecDeviceBuff*>*>* dictByUserIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamSecDeviceTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamSecDeviceTable();

		virtual cfcore::CFGenKbSecDeviceBuff* createSecDevice( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecDeviceBuff* Buff );

		virtual cfcore::CFGenKbSecDeviceBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDevicePKey* PKey );

		virtual cfcore::CFGenKbSecDeviceBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDevicePKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbSecDeviceBuff* readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> readDerivedByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId );

		virtual cfcore::CFGenKbSecDeviceBuff* readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName );

		virtual cfcore::CFGenKbSecDeviceBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDevicePKey* PKey );

		virtual cfcore::CFGenKbSecDeviceBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDevicePKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t priorSecUserId,
			const std::string* priorDevName );

		virtual cfcore::CFGenKbSecDeviceBuff* readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName );

		virtual cfcore::CFGenKbSecDeviceBuff* readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> readBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId );

		virtual cfcore::CFGenKbSecDeviceBuff* readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId, const std::string& DevName,
			bool forceRead = false );

		virtual cfcore::CFGenKbSecDeviceBuff* readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId, const std::string& DevName,
			bool forceRead = false );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> pageBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const uuid_ptr_t priorSecUserId,
			const std::string* priorDevName );

		virtual cfcore::CFGenKbSecDeviceBuff* updateSecDevice( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecDeviceBuff* Buff );

		virtual void deleteSecDevice( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbSecDeviceBuff* Buff );
		virtual void deleteSecDeviceByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::string& argDevName );

		virtual void deleteSecDeviceByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDevicePKey* argKey );

		virtual void deleteSecDeviceByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::string& argDevName );

		virtual void deleteSecDeviceByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDeviceByNameIdxKey* argKey );

		virtual void deleteSecDeviceByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId );

		virtual void deleteSecDeviceByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbSecDeviceByUserIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
