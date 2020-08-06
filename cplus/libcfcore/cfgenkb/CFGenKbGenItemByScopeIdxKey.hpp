#pragma once

// Description: C++18 specification for a GenItem by ScopeIdx index key object.

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

	class CFGenKbGenItemBuff;

	class CFGenKbGenItemByScopeIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt16 optionalScopeDefId;
	public:
		CFGenKbGenItemByScopeIdxKey();
		CFGenKbGenItemByScopeIdxKey( const CFGenKbGenItemByScopeIdxKey& src );
		virtual ~CFGenKbGenItemByScopeIdxKey();

		virtual const int16_t getOptionalScopeDefIdValue() const;
		virtual const int16_t* getOptionalScopeDefIdReference() const;
		virtual const bool isOptionalScopeDefIdNull() const;
		virtual void setOptionalScopeDefIdNull();
		virtual void setOptionalScopeDefIdValue( const int16_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator <( const CFGenKbGenItemBuff& rhs );

		bool operator <=( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemBuff& rhs );

		bool operator ==( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemBuff& rhs );

		bool operator !=( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemBuff& rhs );

		bool operator >=( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemBuff& rhs );

		bool operator >( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator >( const CFGenKbGenItemBuff& rhs );
		cfcore::CFGenKbGenItemByScopeIdxKey operator =( cfcore::CFGenKbGenItemByScopeIdxKey& src );
		cfcore::CFGenKbGenItemByScopeIdxKey operator =( cfcore::CFGenKbGenItemBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenItemByScopeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenItemByScopeIdxKey> {
		typedef cfcore::CFGenKbGenItemByScopeIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

