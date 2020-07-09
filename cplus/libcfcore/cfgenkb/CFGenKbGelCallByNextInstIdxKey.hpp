#pragma once

// Description: C++18 specification for a GelCall by NextInstIdx index key object.

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

	class CFGenKbGelCallBuff;

	class CFGenKbGelCallByNextInstIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalNextInstTenantId;
		cflib::CFLibNullableInt64 optionalNextInstGelCacheId;
		cflib::CFLibNullableInt64 optionalNextInstGelInstId;
	public:
		CFGenKbGelCallByNextInstIdxKey();
		CFGenKbGelCallByNextInstIdxKey( const CFGenKbGelCallByNextInstIdxKey& src );
		virtual ~CFGenKbGelCallByNextInstIdxKey();

		virtual const int64_t getOptionalNextInstTenantIdValue() const;
		virtual const int64_t* getOptionalNextInstTenantIdReference() const;
		virtual const bool isOptionalNextInstTenantIdNull() const;
		virtual void setOptionalNextInstTenantIdNull();
		virtual void setOptionalNextInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalNextInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalNextInstGelCacheIdReference() const;
		virtual const bool isOptionalNextInstGelCacheIdNull() const;
		virtual void setOptionalNextInstGelCacheIdNull();
		virtual void setOptionalNextInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalNextInstGelInstIdValue() const;
		virtual const int64_t* getOptionalNextInstGelInstIdReference() const;
		virtual const bool isOptionalNextInstGelInstIdNull() const;
		virtual void setOptionalNextInstGelInstIdNull();
		virtual void setOptionalNextInstGelInstIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator <( const CFGenKbGelCallBuff& rhs );

		bool operator <=( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator <=( const CFGenKbGelCallBuff& rhs );

		bool operator ==( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator ==( const CFGenKbGelCallBuff& rhs );

		bool operator !=( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator !=( const CFGenKbGelCallBuff& rhs );

		bool operator >=( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator >=( const CFGenKbGelCallBuff& rhs );

		bool operator >( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator >( const CFGenKbGelCallBuff& rhs );
		cfcore::CFGenKbGelCallByNextInstIdxKey operator =( cfcore::CFGenKbGelCallByNextInstIdxKey& src );
		cfcore::CFGenKbGelCallByNextInstIdxKey operator =( cfcore::CFGenKbGelCallBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelCallByNextInstIdxKey> {
		typedef cfcore::CFGenKbGelCallByNextInstIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

