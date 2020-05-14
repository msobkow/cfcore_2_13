#pragma once

// Description: C++18 specification for a GelSequence by FirstInstIdx index key object.

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

	class CFGenKbGelSequenceBuff;

	class CFGenKbGelSequenceByFirstInstIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalFirstInstTenantId;
		cflib::CFLibNullableInt64 optionalFirstInstGelCacheId;
		cflib::CFLibNullableInt64 optionalFirstInstId;
	public:
		CFGenKbGelSequenceByFirstInstIdxKey();
		CFGenKbGelSequenceByFirstInstIdxKey( const CFGenKbGelSequenceByFirstInstIdxKey& src );
		virtual ~CFGenKbGelSequenceByFirstInstIdxKey();

		virtual const int64_t getOptionalFirstInstTenantIdValue() const;
		virtual const int64_t* getOptionalFirstInstTenantIdReference() const;
		virtual const bool isOptionalFirstInstTenantIdNull() const;
		virtual void setOptionalFirstInstTenantIdNull();
		virtual void setOptionalFirstInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalFirstInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalFirstInstGelCacheIdReference() const;
		virtual const bool isOptionalFirstInstGelCacheIdNull() const;
		virtual void setOptionalFirstInstGelCacheIdNull();
		virtual void setOptionalFirstInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalFirstInstIdValue() const;
		virtual const int64_t* getOptionalFirstInstIdReference() const;
		virtual const bool isOptionalFirstInstIdNull() const;
		virtual void setOptionalFirstInstIdNull();
		virtual void setOptionalFirstInstIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator <( const CFGenKbGelSequenceBuff& rhs );

		bool operator <=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator <=( const CFGenKbGelSequenceBuff& rhs );

		bool operator ==( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator ==( const CFGenKbGelSequenceBuff& rhs );

		bool operator !=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator !=( const CFGenKbGelSequenceBuff& rhs );

		bool operator >=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator >=( const CFGenKbGelSequenceBuff& rhs );

		bool operator >( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator >( const CFGenKbGelSequenceBuff& rhs );
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey operator =( cfcore::CFGenKbGelSequenceByFirstInstIdxKey& src );
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey operator =( cfcore::CFGenKbGelSequenceBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelSequenceByFirstInstIdxKey> {
		typedef cfcore::CFGenKbGelSequenceByFirstInstIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

