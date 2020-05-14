#pragma once

// Description: C++18 specification for a GelCall by PrevInstIdx index key object.

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

	class CFGenKbGelCallBuff;

	class CFGenKbGelCallByPrevInstIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalPrevInstTenantId;
		cflib::CFLibNullableInt64 optionalPrevInstGelCacheId;
		cflib::CFLibNullableInt64 optionalPrevInstGelInstId;
	public:
		CFGenKbGelCallByPrevInstIdxKey();
		CFGenKbGelCallByPrevInstIdxKey( const CFGenKbGelCallByPrevInstIdxKey& src );
		virtual ~CFGenKbGelCallByPrevInstIdxKey();

		virtual const int64_t getOptionalPrevInstTenantIdValue() const;
		virtual const int64_t* getOptionalPrevInstTenantIdReference() const;
		virtual const bool isOptionalPrevInstTenantIdNull() const;
		virtual void setOptionalPrevInstTenantIdNull();
		virtual void setOptionalPrevInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalPrevInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalPrevInstGelCacheIdReference() const;
		virtual const bool isOptionalPrevInstGelCacheIdNull() const;
		virtual void setOptionalPrevInstGelCacheIdNull();
		virtual void setOptionalPrevInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalPrevInstGelInstIdValue() const;
		virtual const int64_t* getOptionalPrevInstGelInstIdReference() const;
		virtual const bool isOptionalPrevInstGelInstIdNull() const;
		virtual void setOptionalPrevInstGelInstIdNull();
		virtual void setOptionalPrevInstGelInstIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator <( const CFGenKbGelCallBuff& rhs );

		bool operator <=( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator <=( const CFGenKbGelCallBuff& rhs );

		bool operator ==( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator ==( const CFGenKbGelCallBuff& rhs );

		bool operator !=( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator !=( const CFGenKbGelCallBuff& rhs );

		bool operator >=( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator >=( const CFGenKbGelCallBuff& rhs );

		bool operator >( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator >( const CFGenKbGelCallBuff& rhs );
		cfcore::CFGenKbGelCallByPrevInstIdxKey operator =( cfcore::CFGenKbGelCallByPrevInstIdxKey& src );
		cfcore::CFGenKbGelCallByPrevInstIdxKey operator =( cfcore::CFGenKbGelCallBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelCallByPrevInstIdxKey> {
		typedef cfcore::CFGenKbGelCallByPrevInstIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

