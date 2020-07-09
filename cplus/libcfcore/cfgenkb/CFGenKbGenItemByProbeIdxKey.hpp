#pragma once

// Description: C++18 specification for a GenItem by ProbeIdx index key object.

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

	class CFGenKbGenItemByProbeIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalProbeTenantId;
		cflib::CFLibNullableInt64 optionalProbeCartridgeId;
		cflib::CFLibNullableInt64 optionalProbeGenItemId;
	public:
		CFGenKbGenItemByProbeIdxKey();
		CFGenKbGenItemByProbeIdxKey( const CFGenKbGenItemByProbeIdxKey& src );
		virtual ~CFGenKbGenItemByProbeIdxKey();

		virtual const int64_t getOptionalProbeTenantIdValue() const;
		virtual const int64_t* getOptionalProbeTenantIdReference() const;
		virtual const bool isOptionalProbeTenantIdNull() const;
		virtual void setOptionalProbeTenantIdNull();
		virtual void setOptionalProbeTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalProbeCartridgeIdValue() const;
		virtual const int64_t* getOptionalProbeCartridgeIdReference() const;
		virtual const bool isOptionalProbeCartridgeIdNull() const;
		virtual void setOptionalProbeCartridgeIdNull();
		virtual void setOptionalProbeCartridgeIdValue( const int64_t value );

		virtual const int64_t getOptionalProbeGenItemIdValue() const;
		virtual const int64_t* getOptionalProbeGenItemIdReference() const;
		virtual const bool isOptionalProbeGenItemIdNull() const;
		virtual void setOptionalProbeGenItemIdNull();
		virtual void setOptionalProbeGenItemIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator <( const CFGenKbGenItemBuff& rhs );

		bool operator <=( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemBuff& rhs );

		bool operator ==( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemBuff& rhs );

		bool operator !=( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemBuff& rhs );

		bool operator >=( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemBuff& rhs );

		bool operator >( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator >( const CFGenKbGenItemBuff& rhs );
		cfcore::CFGenKbGenItemByProbeIdxKey operator =( cfcore::CFGenKbGenItemByProbeIdxKey& src );
		cfcore::CFGenKbGenItemByProbeIdxKey operator =( cfcore::CFGenKbGenItemBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenItemByProbeIdxKey> {
		typedef cfcore::CFGenKbGenItemByProbeIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

