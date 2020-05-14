// Description: C++18 CFGenKb Authorization Implementation

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkbobj/ICFGenKbClusterObj.hpp>
#include <cfgenkbobj/ICFGenKbTenantObj.hpp>
#include <cfgenkbobj/ICFGenKbSecSessionObj.hpp>
#include <cfgenkbobj/ICFGenKbSecUserObj.hpp>
#include <cfgenkbobj/ICFGenKbClusterTableObj.hpp>
#include <cfgenkbobj/ICFGenKbTenantTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecSessionTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecUserTableObj.hpp>

namespace cfcore {

	CFGenKbAuthorization::CFGenKbAuthorization()
	{
		uuid_generate_random( authUUID );
		authUUIDStr = cflib::CFLibXmlUtil::formatUuid( authUUID );
		secClusterId = 0L;
		secTenantId = 0L;
		for( int i = 0; i < 16; i++ ) {
			secSessionId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			secUserId[i] = 0;
		}
	}

	CFGenKbAuthorization::~CFGenKbAuthorization() {
	}

	const uuid_ptr_t CFGenKbAuthorization::getAuthUUID() const {
		return( authUUID );
	}

	void CFGenKbAuthorization::setAuthUUID( const uuid_ptr_t value ) {
		uuid_copy( authUUID, value );
		authUUIDStr = cflib::CFLibXmlUtil::formatUuid( authUUID );
	}

	const std::string CFGenKbAuthorization::getAuthUUIDStr() {
		return( authUUIDStr );
	}

	int64_t CFGenKbAuthorization::getSecClusterId() const {
		return( secClusterId );
	}

	void CFGenKbAuthorization::setSecClusterId( int64_t clusterId ) {
		secClusterId = clusterId;
	}

	void CFGenKbAuthorization::setSecCluster( cfcore::ICFGenKbClusterObj& value ) {
		secClusterId = value.getRequiredId();
	}

	int64_t CFGenKbAuthorization::getSecTenantId() const {
		return( secTenantId );
	}

	void CFGenKbAuthorization::setSecTenantId( int64_t tenantId ) {
		secTenantId = tenantId;
	}

	void CFGenKbAuthorization::setSecTenant( cfcore::ICFGenKbTenantObj& value ) {
		secTenantId = value.getRequiredId();
	}

	const uuid_ptr_t CFGenKbAuthorization::getSecSessionId() const {
		return( secSessionId );
	}

	void CFGenKbAuthorization::setSecSessionId( const uuid_ptr_t sessionId ) {
		uuid_copy( secSessionId, sessionId );
	}

	void CFGenKbAuthorization::setSecSession( cfcore::ICFGenKbSecSessionObj* value ) {
		if( value == NULL ) {
			for( int i = 0; i < 16; i ++ ) {
				secSessionId[ i ] = 0;
			}
			return;
		}
		else {
			uuid_copy( secSessionId, value->getRequiredSecSessionId() );
		}
	}

	const uuid_ptr_t CFGenKbAuthorization::getSecUserId() const {
		return( secUserId );
	}

	void CFGenKbAuthorization::setSecUserId( const uuid_ptr_t userId ) {
		uuid_copy( secUserId, userId );
	}

}
