#pragma once

// Description: C++18 specification for a GelCall by CallInstIdx index key object.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */
#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGelCallBuff;

	class CFGenKbGelCallByCallInstIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalCallInstTenantId;
		cflib::CFLibNullableInt64 optionalCallInstGelCacheId;
		cflib::CFLibNullableInt64 optionalCallInstId;
	public:
		CFGenKbGelCallByCallInstIdxKey();
		CFGenKbGelCallByCallInstIdxKey( const CFGenKbGelCallByCallInstIdxKey& src );
		virtual ~CFGenKbGelCallByCallInstIdxKey();

		virtual const int64_t getOptionalCallInstTenantIdValue() const;
		virtual const int64_t* getOptionalCallInstTenantIdReference() const;
		virtual const bool isOptionalCallInstTenantIdNull() const;
		virtual void setOptionalCallInstTenantIdNull();
		virtual void setOptionalCallInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalCallInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalCallInstGelCacheIdReference() const;
		virtual const bool isOptionalCallInstGelCacheIdNull() const;
		virtual void setOptionalCallInstGelCacheIdNull();
		virtual void setOptionalCallInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalCallInstIdValue() const;
		virtual const int64_t* getOptionalCallInstIdReference() const;
		virtual const bool isOptionalCallInstIdNull() const;
		virtual void setOptionalCallInstIdNull();
		virtual void setOptionalCallInstIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator <( const CFGenKbGelCallBuff& rhs );

		bool operator <=( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator <=( const CFGenKbGelCallBuff& rhs );

		bool operator ==( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator ==( const CFGenKbGelCallBuff& rhs );

		bool operator !=( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator !=( const CFGenKbGelCallBuff& rhs );

		bool operator >=( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator >=( const CFGenKbGelCallBuff& rhs );

		bool operator >( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator >( const CFGenKbGelCallBuff& rhs );
		cfcore::CFGenKbGelCallByCallInstIdxKey operator =( cfcore::CFGenKbGelCallByCallInstIdxKey& src );
		cfcore::CFGenKbGelCallByCallInstIdxKey operator =( cfcore::CFGenKbGelCallBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelCallByCallInstIdxKey> {
		typedef cfcore::CFGenKbGelCallByCallInstIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

