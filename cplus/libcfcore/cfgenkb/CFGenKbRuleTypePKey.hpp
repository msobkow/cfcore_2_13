#pragma once

// Description: C++18 specification of a RuleType primary key object.

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

	class CFGenKbRuleTypeBuff;

	class CFGenKbRuleTypePKey
	{
	protected:

		int16_t requiredId;
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;

		CFGenKbRuleTypePKey();
		CFGenKbRuleTypePKey( const CFGenKbRuleTypePKey& src );
		virtual ~CFGenKbRuleTypePKey();

		virtual const int16_t getRequiredId() const;
		virtual const int16_t* getRequiredIdReference() const;
		virtual void setRequiredId( const int16_t value );

		bool operator <( const CFGenKbRuleTypePKey& rhs );
		bool operator <( const CFGenKbRuleTypeBuff& rhs );

		bool operator <=( const CFGenKbRuleTypePKey& rhs );
		bool operator <=( const CFGenKbRuleTypeBuff& rhs );

		bool operator ==( const CFGenKbRuleTypePKey& rhs );
		bool operator ==( const CFGenKbRuleTypeBuff& rhs );

		bool operator !=( const CFGenKbRuleTypePKey& rhs );
		bool operator !=( const CFGenKbRuleTypeBuff& rhs );

		bool operator >=( const CFGenKbRuleTypePKey& rhs );
		bool operator >=( const CFGenKbRuleTypeBuff& rhs );

		bool operator >( const CFGenKbRuleTypePKey& rhs );
		bool operator >( const CFGenKbRuleTypeBuff& rhs );
		virtual size_t hashCode() const;

		virtual std::string toString();

		cfcore::CFGenKbRuleTypePKey operator =( cfcore::CFGenKbRuleTypePKey& src );
		cfcore::CFGenKbRuleTypePKey operator =( cfcore::CFGenKbRuleTypeBuff& src );
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs );
	bool operator <(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs );
	bool operator <=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs );
	bool operator ==(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs );
	bool operator !=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs );
	bool operator >=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs );

	bool operator >(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs );
	bool operator >(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs );

	template<> struct hash<cfcore::CFGenKbRuleTypePKey> {
		typedef cfcore::CFGenKbRuleTypePKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

