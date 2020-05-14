#pragma once

// Description: C++18 specification of a GelSwitchLimb primary key object.

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

	class CFGenKbGelSwitchLimbBuff;

	class CFGenKbGelSwitchLimbPKey
	{
	protected:

		int64_t requiredTenantId;
		int64_t requiredGelCacheId;
		int64_t requiredGelInstId;
		std::string* requiredLimbName;
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;

		CFGenKbGelSwitchLimbPKey();
		CFGenKbGelSwitchLimbPKey( const CFGenKbGelSwitchLimbPKey& src );
		virtual ~CFGenKbGelSwitchLimbPKey();

		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredGelCacheId() const;
		virtual const int64_t* getRequiredGelCacheIdReference() const;
		virtual void setRequiredGelCacheId( const int64_t value );

		virtual const int64_t getRequiredGelInstId() const;
		virtual const int64_t* getRequiredGelInstIdReference() const;
		virtual void setRequiredGelInstId( const int64_t value );

		virtual const std::string& getRequiredLimbName() const;
		virtual const std::string* getRequiredLimbNameReference() const;
		virtual void setRequiredLimbName( const std::string& value );

		bool operator <( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator <( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator <=( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator <=( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator ==( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator ==( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator !=( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator !=( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator >=( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator >=( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator >( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator >( const CFGenKbGelSwitchLimbBuff& rhs );
		virtual size_t hashCode() const;

		virtual std::string toString();

		cfcore::CFGenKbGelSwitchLimbPKey operator =( cfcore::CFGenKbGelSwitchLimbPKey& src );
		cfcore::CFGenKbGelSwitchLimbPKey operator =( cfcore::CFGenKbGelSwitchLimbBuff& src );
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelSwitchLimbPKey> {
		typedef cfcore::CFGenKbGelSwitchLimbPKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

