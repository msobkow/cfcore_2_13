#pragma once

// Description: C++18 specification for a ToolSet by NameIdx index key object.

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

	class CFGenKbToolSetBuff;

	class CFGenKbToolSetByNameIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		std::string* requiredName;
	public:
		CFGenKbToolSetByNameIdxKey();
		CFGenKbToolSetByNameIdxKey( const CFGenKbToolSetByNameIdxKey& src );
		virtual ~CFGenKbToolSetByNameIdxKey();

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator <( const CFGenKbToolSetBuff& rhs );

		bool operator <=( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator <=( const CFGenKbToolSetBuff& rhs );

		bool operator ==( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator ==( const CFGenKbToolSetBuff& rhs );

		bool operator !=( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator !=( const CFGenKbToolSetBuff& rhs );

		bool operator >=( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator >=( const CFGenKbToolSetBuff& rhs );

		bool operator >( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator >( const CFGenKbToolSetBuff& rhs );
		cfcore::CFGenKbToolSetByNameIdxKey operator =( cfcore::CFGenKbToolSetByNameIdxKey& src );
		cfcore::CFGenKbToolSetByNameIdxKey operator =( cfcore::CFGenKbToolSetBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbToolSetByNameIdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	template<> struct hash<cfcore::CFGenKbToolSetByNameIdxKey> {
		typedef cfcore::CFGenKbToolSetByNameIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

