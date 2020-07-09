#pragma once

// Description: C++18 specification for a GelSwitchLimb by TenantIdx index key object.

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

	class CFGenKbGelSwitchLimbBuff;

	class CFGenKbGelSwitchLimbByTenantIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredTenantId;
	public:
		CFGenKbGelSwitchLimbByTenantIdxKey();
		CFGenKbGelSwitchLimbByTenantIdxKey( const CFGenKbGelSwitchLimbByTenantIdxKey& src );
		virtual ~CFGenKbGelSwitchLimbByTenantIdxKey();

		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator <( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator <=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator <=( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator ==( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator ==( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator !=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator !=( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator >=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator >=( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator >( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator >( const CFGenKbGelSwitchLimbBuff& rhs );
		cfcore::CFGenKbGelSwitchLimbByTenantIdxKey operator =( cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& src );
		cfcore::CFGenKbGelSwitchLimbByTenantIdxKey operator =( cfcore::CFGenKbGelSwitchLimbBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelSwitchLimbByTenantIdxKey> {
		typedef cfcore::CFGenKbGelSwitchLimbByTenantIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

