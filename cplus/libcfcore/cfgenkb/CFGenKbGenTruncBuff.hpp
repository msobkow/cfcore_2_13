#pragma once

// Description: C++18 specification for a GenTrunc buffer object.

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

#include <cfgenkb/CFGenKbGenRuleBuff.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGenItemPKey;

	class CFGenKbGenTruncBuff : public CFGenKbGenRuleBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TRUNCATEAT;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t CARTRIDGEID_INIT_VALUE;
		static const int64_t ITEMID_INIT_VALUE;
		static const int TRUNCATEAT_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t CARTRIDGEID_MIN_VALUE;
		static const int64_t ITEMID_MIN_VALUE;
		static const int TRUNCATEAT_MIN_VALUE;
		static const int64_t ITEMID_MAX_VALUE;
		static const int TRUNCATEAT_MAX_VALUE;
	protected:
		int32_t requiredTruncateAt;
	public:
		CFGenKbGenTruncBuff();
		CFGenKbGenTruncBuff( const CFGenKbGenTruncBuff& src );
		virtual ~CFGenKbGenTruncBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int32_t getRequiredTruncateAt() const;
		virtual const int32_t* getRequiredTruncateAtReference() const;
		virtual void setRequiredTruncateAt( const int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGenItemPKey& rhs );
		bool operator <( const CFGenKbGenTruncBuff& rhs );

		bool operator <=( const CFGenKbGenItemPKey& rhs );
		bool operator <=( const CFGenKbGenTruncBuff& rhs );

		bool operator ==( const CFGenKbGenItemPKey& rhs );
		bool operator ==( const CFGenKbGenTruncBuff& rhs );

		bool operator !=( const CFGenKbGenItemPKey& rhs );
		bool operator !=( const CFGenKbGenTruncBuff& rhs );

		bool operator >=( const CFGenKbGenItemPKey& rhs );
		bool operator >=( const CFGenKbGenTruncBuff& rhs );

		bool operator >( const CFGenKbGenItemPKey& rhs );
		bool operator >( const CFGenKbGenTruncBuff& rhs );
		cfcore::CFGenKbGenTruncBuff operator =( cfcore::CFGenKbGenTruncBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenTruncBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenTruncBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenTruncBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenTruncBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenTruncBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenTruncBuff& lhs, const cfcore::CFGenKbGenTruncBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenTruncBuff> {
		typedef cfcore::CFGenKbGenTruncBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

