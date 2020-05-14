#pragma once

// Description: C++18 specification of a TSecGrpInc primary key object.

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
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbTSecGrpIncBuff;

	class CFGenKbTSecGrpIncPKey
	{
	protected:

		int64_t requiredTenantId;
		int64_t requiredTSecGrpIncId;
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;

		CFGenKbTSecGrpIncPKey();
		CFGenKbTSecGrpIncPKey( const CFGenKbTSecGrpIncPKey& src );
		virtual ~CFGenKbTSecGrpIncPKey();

		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredTSecGrpIncId() const;
		virtual const int64_t* getRequiredTSecGrpIncIdReference() const;
		virtual void setRequiredTSecGrpIncId( const int64_t value );

		bool operator <( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator <( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator <=( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator <=( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator ==( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator ==( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator !=( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator !=( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator >=( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator >=( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator >( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator >( const CFGenKbTSecGrpIncBuff& rhs );
		virtual size_t hashCode() const;

		virtual std::string toString();

		cfcore::CFGenKbTSecGrpIncPKey operator =( cfcore::CFGenKbTSecGrpIncPKey& src );
		cfcore::CFGenKbTSecGrpIncPKey operator =( cfcore::CFGenKbTSecGrpIncBuff& src );
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator <(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator >(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator >(const  cfcore::CFGenKbTSecGrpIncPKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	template<> struct hash<cfcore::CFGenKbTSecGrpIncPKey> {
		typedef cfcore::CFGenKbTSecGrpIncPKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

