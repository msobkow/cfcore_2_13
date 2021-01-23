#pragma once

// Description: C++18 specification for a SecGrpInc by UIncludeIdx index key object.

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

	class CFGenKbSecGrpIncBuff;

	class CFGenKbSecGrpIncByUIncludeIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredClusterId;
		int32_t requiredSecGroupId;
		int32_t requiredIncludeGroupId;
	public:
		CFGenKbSecGrpIncByUIncludeIdxKey();
		CFGenKbSecGrpIncByUIncludeIdxKey( const CFGenKbSecGrpIncByUIncludeIdxKey& src );
		virtual ~CFGenKbSecGrpIncByUIncludeIdxKey();

		virtual const int64_t getRequiredClusterId() const;
		virtual const int64_t* getRequiredClusterIdReference() const;
		virtual void setRequiredClusterId( const int64_t value );

		virtual const int32_t getRequiredSecGroupId() const;
		virtual const int32_t* getRequiredSecGroupIdReference() const;
		virtual void setRequiredSecGroupId( const int32_t value );

		virtual const int32_t getRequiredIncludeGroupId() const;
		virtual const int32_t* getRequiredIncludeGroupIdReference() const;
		virtual void setRequiredIncludeGroupId( const int32_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator <( const CFGenKbSecGrpIncBuff& rhs );

		bool operator <=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator <=( const CFGenKbSecGrpIncBuff& rhs );

		bool operator ==( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator ==( const CFGenKbSecGrpIncBuff& rhs );

		bool operator !=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator !=( const CFGenKbSecGrpIncBuff& rhs );

		bool operator >=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator >=( const CFGenKbSecGrpIncBuff& rhs );

		bool operator >( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator >( const CFGenKbSecGrpIncBuff& rhs );
		cfcore::CFGenKbSecGrpIncByUIncludeIdxKey operator =( cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& src );
		cfcore::CFGenKbSecGrpIncByUIncludeIdxKey operator =( cfcore::CFGenKbSecGrpIncBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	template<> struct hash<cfcore::CFGenKbSecGrpIncByUIncludeIdxKey> {
		typedef cfcore::CFGenKbSecGrpIncByUIncludeIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

