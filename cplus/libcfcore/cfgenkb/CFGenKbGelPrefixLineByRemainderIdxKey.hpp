#pragma once

// Description: C++18 specification for a GelPrefixLine by RemainderIdx index key object.

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

	class CFGenKbGelPrefixLineBuff;

	class CFGenKbGelPrefixLineByRemainderIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalRemainderTenantId;
		int64_t requiredRemainderGelCacheId;
		cflib::CFLibNullableInt64 optionalRemainderInstId;
	public:
		CFGenKbGelPrefixLineByRemainderIdxKey();
		CFGenKbGelPrefixLineByRemainderIdxKey( const CFGenKbGelPrefixLineByRemainderIdxKey& src );
		virtual ~CFGenKbGelPrefixLineByRemainderIdxKey();

		virtual const int64_t getOptionalRemainderTenantIdValue() const;
		virtual const int64_t* getOptionalRemainderTenantIdReference() const;
		virtual const bool isOptionalRemainderTenantIdNull() const;
		virtual void setOptionalRemainderTenantIdNull();
		virtual void setOptionalRemainderTenantIdValue( const int64_t value );

		virtual const int64_t getRequiredRemainderGelCacheId() const;
		virtual const int64_t* getRequiredRemainderGelCacheIdReference() const;
		virtual void setRequiredRemainderGelCacheId( const int64_t value );

		virtual const int64_t getOptionalRemainderInstIdValue() const;
		virtual const int64_t* getOptionalRemainderInstIdReference() const;
		virtual const bool isOptionalRemainderInstIdNull() const;
		virtual void setOptionalRemainderInstIdNull();
		virtual void setOptionalRemainderInstIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator <( const CFGenKbGelPrefixLineBuff& rhs );

		bool operator <=( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator <=( const CFGenKbGelPrefixLineBuff& rhs );

		bool operator ==( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator ==( const CFGenKbGelPrefixLineBuff& rhs );

		bool operator !=( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator !=( const CFGenKbGelPrefixLineBuff& rhs );

		bool operator >=( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator >=( const CFGenKbGelPrefixLineBuff& rhs );

		bool operator >( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator >( const CFGenKbGelPrefixLineBuff& rhs );
		cfcore::CFGenKbGelPrefixLineByRemainderIdxKey operator =( cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& src );
		cfcore::CFGenKbGelPrefixLineByRemainderIdxKey operator =( cfcore::CFGenKbGelPrefixLineBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelPrefixLineByRemainderIdxKey> {
		typedef cfcore::CFGenKbGelPrefixLineByRemainderIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

