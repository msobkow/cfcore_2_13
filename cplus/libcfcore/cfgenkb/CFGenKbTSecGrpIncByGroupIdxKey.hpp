#pragma once

// Description: C++18 specification for a TSecGrpInc by GroupIdx index key object.

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

namespace cfcore {

	class CFGenKbTSecGrpIncBuff;

	class CFGenKbTSecGrpIncByGroupIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredTenantId;
		int32_t requiredTSecGroupId;
	public:
		CFGenKbTSecGrpIncByGroupIdxKey();
		CFGenKbTSecGrpIncByGroupIdxKey( const CFGenKbTSecGrpIncByGroupIdxKey& src );
		virtual ~CFGenKbTSecGrpIncByGroupIdxKey();

		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int32_t getRequiredTSecGroupId() const;
		virtual const int32_t* getRequiredTSecGroupIdReference() const;
		virtual void setRequiredTSecGroupId( const int32_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator <( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator <=( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator <=( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator ==( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator ==( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator !=( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator !=( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator >=( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator >=( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator >( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator >( const CFGenKbTSecGrpIncBuff& rhs );
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey operator =( cfcore::CFGenKbTSecGrpIncByGroupIdxKey& src );
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey operator =( cfcore::CFGenKbTSecGrpIncBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator >(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbTSecGrpIncByGroupIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	template<> struct hash<cfcore::CFGenKbTSecGrpIncByGroupIdxKey> {
		typedef cfcore::CFGenKbTSecGrpIncByGroupIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

