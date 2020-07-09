#pragma once

// Description: C++18 specification for a GelInstruction by ChainIdx index key object.

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

	class CFGenKbGelInstructionBuff;

	class CFGenKbGelInstructionByChainIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalChainInstTenantId;
		cflib::CFLibNullableInt64 optionalChainInstGelCacheId;
		cflib::CFLibNullableInt64 optionalChainInstGelInstId;
	public:
		CFGenKbGelInstructionByChainIdxKey();
		CFGenKbGelInstructionByChainIdxKey( const CFGenKbGelInstructionByChainIdxKey& src );
		virtual ~CFGenKbGelInstructionByChainIdxKey();

		virtual const int64_t getOptionalChainInstTenantIdValue() const;
		virtual const int64_t* getOptionalChainInstTenantIdReference() const;
		virtual const bool isOptionalChainInstTenantIdNull() const;
		virtual void setOptionalChainInstTenantIdNull();
		virtual void setOptionalChainInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalChainInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalChainInstGelCacheIdReference() const;
		virtual const bool isOptionalChainInstGelCacheIdNull() const;
		virtual void setOptionalChainInstGelCacheIdNull();
		virtual void setOptionalChainInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalChainInstGelInstIdValue() const;
		virtual const int64_t* getOptionalChainInstGelInstIdReference() const;
		virtual const bool isOptionalChainInstGelInstIdNull() const;
		virtual void setOptionalChainInstGelInstIdNull();
		virtual void setOptionalChainInstGelInstIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator <( const CFGenKbGelInstructionBuff& rhs );

		bool operator <=( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator <=( const CFGenKbGelInstructionBuff& rhs );

		bool operator ==( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator ==( const CFGenKbGelInstructionBuff& rhs );

		bool operator !=( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator !=( const CFGenKbGelInstructionBuff& rhs );

		bool operator >=( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator >=( const CFGenKbGelInstructionBuff& rhs );

		bool operator >( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator >( const CFGenKbGelInstructionBuff& rhs );
		cfcore::CFGenKbGelInstructionByChainIdxKey operator =( cfcore::CFGenKbGelInstructionByChainIdxKey& src );
		cfcore::CFGenKbGelInstructionByChainIdxKey operator =( cfcore::CFGenKbGelInstructionBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelInstructionByChainIdxKey& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelInstructionByChainIdxKey> {
		typedef cfcore::CFGenKbGelInstructionByChainIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

