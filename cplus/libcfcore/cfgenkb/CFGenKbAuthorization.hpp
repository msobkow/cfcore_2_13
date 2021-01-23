#pragma once

// Description: C++18 CFGenKb Authorization Specification

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>
#include <cfgenkbobj/ICFGenKbClusterObj.hpp>
#include <cfgenkbobj/ICFGenKbTenantObj.hpp>
#include <cfgenkbobj/ICFGenKbSecSessionObj.hpp>
#include <cfgenkbobj/ICFGenKbSecUserObj.hpp>


namespace cfcore {

	class CFGenKbAuthorization
	{
		protected:
			uuid_t authUUID;
			std::string authUUIDStr;

			int64_t secClusterId;
			int64_t secTenantId;
			uuid_t secSessionId;
			uuid_t secUserId;

		public:
			CFGenKbAuthorization();
			virtual ~CFGenKbAuthorization();

			const uuid_ptr_t getAuthUUID() const;
			void setAuthUUID( const uuid_ptr_t value );
			void generateAuthUUID();
			const std::string getAuthUUIDStr();

			int64_t getSecClusterId() const;
			void setSecClusterId( int64_t clusterId );
			void setSecCluster( cfcore::ICFGenKbClusterObj& value );

			int64_t getSecTenantId() const;
			void setSecTenantId( int64_t tenantId );
			void setSecTenant( cfcore::ICFGenKbTenantObj& value );

			const uuid_ptr_t getSecSessionId() const;
			void setSecSessionId( const uuid_ptr_t sessionId );
			void generateSecSessionId();
			void setSecSession( cfcore::ICFGenKbSecSessionObj* value );

			const uuid_ptr_t getSecUserId() const;
			void setSecUserId( const uuid_ptr_t userId );
			void generateSecUserId();
	};
}
