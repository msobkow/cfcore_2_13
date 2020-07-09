#pragma once

// Description: C++18 specification for a ToolSet by Tool0Idx index key object.

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

	class CFGenKbToolSetBuff;

	class CFGenKbToolSetByTool0IdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int16_t requiredToolId0;
	public:
		CFGenKbToolSetByTool0IdxKey();
		CFGenKbToolSetByTool0IdxKey( const CFGenKbToolSetByTool0IdxKey& src );
		virtual ~CFGenKbToolSetByTool0IdxKey();

		virtual const int16_t getRequiredToolId0() const;
		virtual const int16_t* getRequiredToolId0Reference() const;
		virtual void setRequiredToolId0( const int16_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator <( const CFGenKbToolSetBuff& rhs );

		bool operator <=( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator <=( const CFGenKbToolSetBuff& rhs );

		bool operator ==( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator ==( const CFGenKbToolSetBuff& rhs );

		bool operator !=( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator !=( const CFGenKbToolSetBuff& rhs );

		bool operator >=( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator >=( const CFGenKbToolSetBuff& rhs );

		bool operator >( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator >( const CFGenKbToolSetBuff& rhs );
		cfcore::CFGenKbToolSetByTool0IdxKey operator =( cfcore::CFGenKbToolSetByTool0IdxKey& src );
		cfcore::CFGenKbToolSetByTool0IdxKey operator =( cfcore::CFGenKbToolSetBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	template<> struct hash<cfcore::CFGenKbToolSetByTool0IdxKey> {
		typedef cfcore::CFGenKbToolSetByTool0IdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

