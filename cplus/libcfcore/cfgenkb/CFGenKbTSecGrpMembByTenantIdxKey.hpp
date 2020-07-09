#pragma once

// Description: C++18 specification for a TSecGrpMemb by TenantIdx index key object.

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
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbTSecGrpMembBuff;

	class CFGenKbTSecGrpMembByTenantIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredTenantId;
	public:
		CFGenKbTSecGrpMembByTenantIdxKey();
		CFGenKbTSecGrpMembByTenantIdxKey( const CFGenKbTSecGrpMembByTenantIdxKey& src );
		virtual ~CFGenKbTSecGrpMembByTenantIdxKey();

		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbTSecGrpMembByTenantIdxKey& rhs );
		bool operator <( const CFGenKbTSecGrpMembBuff& rhs );

		bool operator <=( const CFGenKbTSecGrpMembByTenantIdxKey& rhs );
		bool operator <=( const CFGenKbTSecGrpMembBuff& rhs );

		bool operator ==( const CFGenKbTSecGrpMembByTenantIdxKey& rhs );
		bool operator ==( const CFGenKbTSecGrpMembBuff& rhs );

		bool operator !=( const CFGenKbTSecGrpMembByTenantIdxKey& rhs );
		bool operator !=( const CFGenKbTSecGrpMembBuff& rhs );

		bool operator >=( const CFGenKbTSecGrpMembByTenantIdxKey& rhs );
		bool operator >=( const CFGenKbTSecGrpMembBuff& rhs );

		bool operator >( const CFGenKbTSecGrpMembByTenantIdxKey& rhs );
		bool operator >( const CFGenKbTSecGrpMembBuff& rhs );
		cfcore::CFGenKbTSecGrpMembByTenantIdxKey operator =( cfcore::CFGenKbTSecGrpMembByTenantIdxKey& src );
		cfcore::CFGenKbTSecGrpMembByTenantIdxKey operator =( cfcore::CFGenKbTSecGrpMembBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs );

	bool operator >(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbTSecGrpMembByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs );

	template<> struct hash<cfcore::CFGenKbTSecGrpMembByTenantIdxKey> {
		typedef cfcore::CFGenKbTSecGrpMembByTenantIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

