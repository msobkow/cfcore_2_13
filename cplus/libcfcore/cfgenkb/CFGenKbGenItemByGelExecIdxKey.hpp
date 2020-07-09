#pragma once

// Description: C++18 specification for a GenItem by GelExecIdx index key object.

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

	class CFGenKbGenItemBuff;

	class CFGenKbGenItemByGelExecIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalGelExecutableTenantId;
		cflib::CFLibNullableInt64 optionalGelExecutableGelCacheId;
		cflib::CFLibNullableInt64 optionalGelExecutableId;
	public:
		CFGenKbGenItemByGelExecIdxKey();
		CFGenKbGenItemByGelExecIdxKey( const CFGenKbGenItemByGelExecIdxKey& src );
		virtual ~CFGenKbGenItemByGelExecIdxKey();

		virtual const int64_t getOptionalGelExecutableTenantIdValue() const;
		virtual const int64_t* getOptionalGelExecutableTenantIdReference() const;
		virtual const bool isOptionalGelExecutableTenantIdNull() const;
		virtual void setOptionalGelExecutableTenantIdNull();
		virtual void setOptionalGelExecutableTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalGelExecutableGelCacheIdValue() const;
		virtual const int64_t* getOptionalGelExecutableGelCacheIdReference() const;
		virtual const bool isOptionalGelExecutableGelCacheIdNull() const;
		virtual void setOptionalGelExecutableGelCacheIdNull();
		virtual void setOptionalGelExecutableGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalGelExecutableIdValue() const;
		virtual const int64_t* getOptionalGelExecutableIdReference() const;
		virtual const bool isOptionalGelExecutableIdNull() const;
		virtual void setOptionalGelExecutableIdNull();
		virtual void setOptionalGelExecutableIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator <( const CFGenKbGenItemBuff& rhs );

		bool operator <=( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemBuff& rhs );

		bool operator ==( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemBuff& rhs );

		bool operator !=( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemBuff& rhs );

		bool operator >=( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemBuff& rhs );

		bool operator >( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator >( const CFGenKbGenItemBuff& rhs );
		cfcore::CFGenKbGenItemByGelExecIdxKey operator =( cfcore::CFGenKbGenItemByGelExecIdxKey& src );
		cfcore::CFGenKbGenItemByGelExecIdxKey operator =( cfcore::CFGenKbGenItemBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenItemByGelExecIdxKey> {
		typedef cfcore::CFGenKbGenItemByGelExecIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

