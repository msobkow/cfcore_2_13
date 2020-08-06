#pragma once

// Description: C++18 specification for a GenRule by BodyIdx index key object.

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

	class CFGenKbGenRuleBuff;

	class CFGenKbGenRuleByBodyIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalBodyTenantId;
		cflib::CFLibNullableInt64 optionalBodyGelCacheId;
		cflib::CFLibNullableInt64 optionalBodyGelId;
	public:
		CFGenKbGenRuleByBodyIdxKey();
		CFGenKbGenRuleByBodyIdxKey( const CFGenKbGenRuleByBodyIdxKey& src );
		virtual ~CFGenKbGenRuleByBodyIdxKey();

		virtual const int64_t getOptionalBodyTenantIdValue() const;
		virtual const int64_t* getOptionalBodyTenantIdReference() const;
		virtual const bool isOptionalBodyTenantIdNull() const;
		virtual void setOptionalBodyTenantIdNull();
		virtual void setOptionalBodyTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalBodyGelCacheIdValue() const;
		virtual const int64_t* getOptionalBodyGelCacheIdReference() const;
		virtual const bool isOptionalBodyGelCacheIdNull() const;
		virtual void setOptionalBodyGelCacheIdNull();
		virtual void setOptionalBodyGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalBodyGelIdValue() const;
		virtual const int64_t* getOptionalBodyGelIdReference() const;
		virtual const bool isOptionalBodyGelIdNull() const;
		virtual void setOptionalBodyGelIdNull();
		virtual void setOptionalBodyGelIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator <( const CFGenKbGenRuleBuff& rhs );

		bool operator <=( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator <=( const CFGenKbGenRuleBuff& rhs );

		bool operator ==( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator ==( const CFGenKbGenRuleBuff& rhs );

		bool operator !=( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator !=( const CFGenKbGenRuleBuff& rhs );

		bool operator >=( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator >=( const CFGenKbGenRuleBuff& rhs );

		bool operator >( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator >( const CFGenKbGenRuleBuff& rhs );
		cfcore::CFGenKbGenRuleByBodyIdxKey operator =( cfcore::CFGenKbGenRuleByBodyIdxKey& src );
		cfcore::CFGenKbGenRuleByBodyIdxKey operator =( cfcore::CFGenKbGenRuleBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenRuleByBodyIdxKey> {
		typedef cfcore::CFGenKbGenRuleByBodyIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

