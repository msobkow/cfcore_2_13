#pragma once

// Description: C++18 specification for a SecUser by DefDevIdx index key object.

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

	class CFGenKbSecUserBuff;

	class CFGenKbSecUserByDefDevIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		uuid_t optionalDfltDevUserId;
		std::string* optionalDfltDevName;
	public:
		CFGenKbSecUserByDefDevIdxKey();
		CFGenKbSecUserByDefDevIdxKey( const CFGenKbSecUserByDefDevIdxKey& src );
		virtual ~CFGenKbSecUserByDefDevIdxKey();

		virtual const uuid_ptr_t getOptionalDfltDevUserIdValue() const;
		virtual const uuid_ptr_t getOptionalDfltDevUserIdReference() const;
		virtual const bool isOptionalDfltDevUserIdNull() const;
		virtual void setOptionalDfltDevUserIdNull();
		virtual void setOptionalDfltDevUserIdValue( const uuid_ptr_t value );
		virtual void generateOptionalDfltDevUserId();

		virtual const std::string& getOptionalDfltDevNameValue() const;
		virtual const std::string* getOptionalDfltDevNameReference() const;
		virtual const bool isOptionalDfltDevNameNull() const;
		virtual void setOptionalDfltDevNameNull();
		virtual void setOptionalDfltDevNameValue( const std::string& value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator <( const CFGenKbSecUserBuff& rhs );

		bool operator <=( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator <=( const CFGenKbSecUserBuff& rhs );

		bool operator ==( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator ==( const CFGenKbSecUserBuff& rhs );

		bool operator !=( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator !=( const CFGenKbSecUserBuff& rhs );

		bool operator >=( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator >=( const CFGenKbSecUserBuff& rhs );

		bool operator >( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator >( const CFGenKbSecUserBuff& rhs );
		cfcore::CFGenKbSecUserByDefDevIdxKey operator =( cfcore::CFGenKbSecUserByDefDevIdxKey& src );
		cfcore::CFGenKbSecUserByDefDevIdxKey operator =( cfcore::CFGenKbSecUserBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	bool operator >(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	template<> struct hash<cfcore::CFGenKbSecUserByDefDevIdxKey> {
		typedef cfcore::CFGenKbSecUserByDefDevIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

