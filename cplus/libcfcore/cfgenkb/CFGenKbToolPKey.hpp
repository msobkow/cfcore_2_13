#pragma once

// Description: C++18 specification of a Tool primary key object.

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

	class CFGenKbToolBuff;

	class CFGenKbToolPKey
	{
	protected:

		int16_t requiredId;
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;

		CFGenKbToolPKey();
		CFGenKbToolPKey( const CFGenKbToolPKey& src );
		virtual ~CFGenKbToolPKey();

		virtual const int16_t getRequiredId() const;
		virtual const int16_t* getRequiredIdReference() const;
		virtual void setRequiredId( const int16_t value );

		bool operator <( const CFGenKbToolPKey& rhs );
		bool operator <( const CFGenKbToolBuff& rhs );

		bool operator <=( const CFGenKbToolPKey& rhs );
		bool operator <=( const CFGenKbToolBuff& rhs );

		bool operator ==( const CFGenKbToolPKey& rhs );
		bool operator ==( const CFGenKbToolBuff& rhs );

		bool operator !=( const CFGenKbToolPKey& rhs );
		bool operator !=( const CFGenKbToolBuff& rhs );

		bool operator >=( const CFGenKbToolPKey& rhs );
		bool operator >=( const CFGenKbToolBuff& rhs );

		bool operator >( const CFGenKbToolPKey& rhs );
		bool operator >( const CFGenKbToolBuff& rhs );
		virtual size_t hashCode() const;

		virtual std::string toString();

		cfcore::CFGenKbToolPKey operator =( cfcore::CFGenKbToolPKey& src );
		cfcore::CFGenKbToolPKey operator =( cfcore::CFGenKbToolBuff& src );
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolPKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolBuff& rhs );

	bool operator >(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolPKey& rhs );
	bool operator >(const  cfcore::CFGenKbToolPKey& lhs, const cfcore::CFGenKbToolBuff& rhs );

	template<> struct hash<cfcore::CFGenKbToolPKey> {
		typedef cfcore::CFGenKbToolPKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

