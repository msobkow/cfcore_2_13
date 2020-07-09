#pragma once

// Description: C++18 specification of a SecGrpInc primary key object.

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

	class CFGenKbSecGrpIncBuff;

	class CFGenKbSecGrpIncPKey
	{
	protected:

		int64_t requiredClusterId;
		int64_t requiredSecGrpIncId;
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;

		CFGenKbSecGrpIncPKey();
		CFGenKbSecGrpIncPKey( const CFGenKbSecGrpIncPKey& src );
		virtual ~CFGenKbSecGrpIncPKey();

		virtual const int64_t getRequiredClusterId() const;
		virtual const int64_t* getRequiredClusterIdReference() const;
		virtual void setRequiredClusterId( const int64_t value );

		virtual const int64_t getRequiredSecGrpIncId() const;
		virtual const int64_t* getRequiredSecGrpIncIdReference() const;
		virtual void setRequiredSecGrpIncId( const int64_t value );

		bool operator <( const CFGenKbSecGrpIncPKey& rhs );
		bool operator <( const CFGenKbSecGrpIncBuff& rhs );

		bool operator <=( const CFGenKbSecGrpIncPKey& rhs );
		bool operator <=( const CFGenKbSecGrpIncBuff& rhs );

		bool operator ==( const CFGenKbSecGrpIncPKey& rhs );
		bool operator ==( const CFGenKbSecGrpIncBuff& rhs );

		bool operator !=( const CFGenKbSecGrpIncPKey& rhs );
		bool operator !=( const CFGenKbSecGrpIncBuff& rhs );

		bool operator >=( const CFGenKbSecGrpIncPKey& rhs );
		bool operator >=( const CFGenKbSecGrpIncBuff& rhs );

		bool operator >( const CFGenKbSecGrpIncPKey& rhs );
		bool operator >( const CFGenKbSecGrpIncBuff& rhs );
		virtual size_t hashCode() const;

		virtual std::string toString();

		cfcore::CFGenKbSecGrpIncPKey operator =( cfcore::CFGenKbSecGrpIncPKey& src );
		cfcore::CFGenKbSecGrpIncPKey operator =( cfcore::CFGenKbSecGrpIncBuff& src );
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator >(const  cfcore::CFGenKbSecGrpIncPKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	template<> struct hash<cfcore::CFGenKbSecGrpIncPKey> {
		typedef cfcore::CFGenKbSecGrpIncPKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

