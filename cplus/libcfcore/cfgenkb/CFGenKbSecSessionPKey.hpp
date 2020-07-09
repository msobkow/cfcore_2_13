#pragma once

// Description: C++18 specification of a SecSession primary key object.

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

	class CFGenKbSecSessionBuff;

	class CFGenKbSecSessionPKey
	{
	protected:

		uuid_t requiredSecSessionId;
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;

		CFGenKbSecSessionPKey();
		CFGenKbSecSessionPKey( const CFGenKbSecSessionPKey& src );
		virtual ~CFGenKbSecSessionPKey();

		virtual const uuid_ptr_t getRequiredSecSessionId() const;
		virtual const uuid_ptr_t getRequiredSecSessionIdReference() const;
		virtual void setRequiredSecSessionId( const uuid_ptr_t value );
		virtual void generateRequiredSecSessionId();

		bool operator <( const CFGenKbSecSessionPKey& rhs );
		bool operator <( const CFGenKbSecSessionBuff& rhs );

		bool operator <=( const CFGenKbSecSessionPKey& rhs );
		bool operator <=( const CFGenKbSecSessionBuff& rhs );

		bool operator ==( const CFGenKbSecSessionPKey& rhs );
		bool operator ==( const CFGenKbSecSessionBuff& rhs );

		bool operator !=( const CFGenKbSecSessionPKey& rhs );
		bool operator !=( const CFGenKbSecSessionBuff& rhs );

		bool operator >=( const CFGenKbSecSessionPKey& rhs );
		bool operator >=( const CFGenKbSecSessionBuff& rhs );

		bool operator >( const CFGenKbSecSessionPKey& rhs );
		bool operator >( const CFGenKbSecSessionBuff& rhs );
		virtual size_t hashCode() const;

		virtual std::string toString();

		cfcore::CFGenKbSecSessionPKey operator =( cfcore::CFGenKbSecSessionPKey& src );
		cfcore::CFGenKbSecSessionPKey operator =( cfcore::CFGenKbSecSessionBuff& src );
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	bool operator >(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	template<> struct hash<cfcore::CFGenKbSecSessionPKey> {
		typedef cfcore::CFGenKbSecSessionPKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

