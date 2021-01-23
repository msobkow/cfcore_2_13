#pragma once

// Description: C++18 specification for a GelIterator by BeforeIdx index key object.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */
#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGelIteratorBuff;

	class CFGenKbGelIteratorByBeforeIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		std::string* optionalExpandBefore;
	public:
		CFGenKbGelIteratorByBeforeIdxKey();
		CFGenKbGelIteratorByBeforeIdxKey( const CFGenKbGelIteratorByBeforeIdxKey& src );
		virtual ~CFGenKbGelIteratorByBeforeIdxKey();

		virtual const std::string& getOptionalExpandBeforeValue() const;
		virtual const std::string* getOptionalExpandBeforeReference() const;
		virtual const bool isOptionalExpandBeforeNull() const;
		virtual void setOptionalExpandBeforeNull();
		virtual void setOptionalExpandBeforeValue( const std::string& value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGelIteratorByBeforeIdxKey& rhs );
		bool operator <( const CFGenKbGelIteratorBuff& rhs );

		bool operator <=( const CFGenKbGelIteratorByBeforeIdxKey& rhs );
		bool operator <=( const CFGenKbGelIteratorBuff& rhs );

		bool operator ==( const CFGenKbGelIteratorByBeforeIdxKey& rhs );
		bool operator ==( const CFGenKbGelIteratorBuff& rhs );

		bool operator !=( const CFGenKbGelIteratorByBeforeIdxKey& rhs );
		bool operator !=( const CFGenKbGelIteratorBuff& rhs );

		bool operator >=( const CFGenKbGelIteratorByBeforeIdxKey& rhs );
		bool operator >=( const CFGenKbGelIteratorBuff& rhs );

		bool operator >( const CFGenKbGelIteratorByBeforeIdxKey& rhs );
		bool operator >( const CFGenKbGelIteratorBuff& rhs );
		cfcore::CFGenKbGelIteratorByBeforeIdxKey operator =( cfcore::CFGenKbGelIteratorByBeforeIdxKey& src );
		cfcore::CFGenKbGelIteratorByBeforeIdxKey operator =( cfcore::CFGenKbGelIteratorBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelIteratorByBeforeIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelIteratorByBeforeIdxKey> {
		typedef cfcore::CFGenKbGelIteratorByBeforeIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

