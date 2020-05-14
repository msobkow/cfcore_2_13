#pragma once

// Description: C++18 specification for a GelCall by SeqIdx index key object.

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

	class CFGenKbGelCallBySeqIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalSeqInstTenantId;
		cflib::CFLibNullableInt64 optionalSeqInstGelCacheId;
		cflib::CFLibNullableInt64 optionalSeqInstId;
	public:
		CFGenKbGelCallBySeqIdxKey();
		CFGenKbGelCallBySeqIdxKey( const CFGenKbGelCallBySeqIdxKey& src );
		virtual ~CFGenKbGelCallBySeqIdxKey();

		virtual const int64_t getOptionalSeqInstTenantIdValue() const;
		virtual const int64_t* getOptionalSeqInstTenantIdReference() const;
		virtual const bool isOptionalSeqInstTenantIdNull() const;
		virtual void setOptionalSeqInstTenantIdNull();
		virtual void setOptionalSeqInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalSeqInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalSeqInstGelCacheIdReference() const;
		virtual const bool isOptionalSeqInstGelCacheIdNull() const;
		virtual void setOptionalSeqInstGelCacheIdNull();
		virtual void setOptionalSeqInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalSeqInstIdValue() const;
		virtual const int64_t* getOptionalSeqInstIdReference() const;
		virtual const bool isOptionalSeqInstIdNull() const;
		virtual void setOptionalSeqInstIdNull();
		virtual void setOptionalSeqInstIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator <( const CFGenKbGelCallBuff& rhs );

		bool operator <=( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator <=( const CFGenKbGelCallBuff& rhs );

		bool operator ==( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator ==( const CFGenKbGelCallBuff& rhs );

		bool operator !=( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator !=( const CFGenKbGelCallBuff& rhs );

		bool operator >=( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator >=( const CFGenKbGelCallBuff& rhs );

		bool operator >( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator >( const CFGenKbGelCallBuff& rhs );
		cfcore::CFGenKbGelCallBySeqIdxKey operator =( cfcore::CFGenKbGelCallBySeqIdxKey& src );
		cfcore::CFGenKbGelCallBySeqIdxKey operator =( cfcore::CFGenKbGelCallBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelCallBySeqIdxKey> {
		typedef cfcore::CFGenKbGelCallBySeqIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

