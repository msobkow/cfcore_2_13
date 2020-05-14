#pragma once

// Description: C++18 specification for a GelCounter buffer object.

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

#include <cfgenkb/CFGenKbGelInstructionBuff.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGelInstructionPKey;

	class CFGenKbGelCounterBuff : public CFGenKbGelInstructionBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_COUNTERNAME;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const int64_t GELINSTID_INIT_VALUE;
		static const std::string COUNTERNAME_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const int64_t GELINSTID_MIN_VALUE;
		static const std::string::size_type COUNTERNAME_MAX_LEN;
	protected:
		std::string* requiredCounterName;
	public:
		CFGenKbGelCounterBuff();
		CFGenKbGelCounterBuff( const CFGenKbGelCounterBuff& src );
		virtual ~CFGenKbGelCounterBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const std::string& getRequiredCounterName() const;
		virtual const std::string* getRequiredCounterNameReference() const;
		virtual void setRequiredCounterName( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGelInstructionPKey& rhs );
		bool operator <( const CFGenKbGelCounterBuff& rhs );

		bool operator <=( const CFGenKbGelInstructionPKey& rhs );
		bool operator <=( const CFGenKbGelCounterBuff& rhs );

		bool operator ==( const CFGenKbGelInstructionPKey& rhs );
		bool operator ==( const CFGenKbGelCounterBuff& rhs );

		bool operator !=( const CFGenKbGelInstructionPKey& rhs );
		bool operator !=( const CFGenKbGelCounterBuff& rhs );

		bool operator >=( const CFGenKbGelInstructionPKey& rhs );
		bool operator >=( const CFGenKbGelCounterBuff& rhs );

		bool operator >( const CFGenKbGelInstructionPKey& rhs );
		bool operator >( const CFGenKbGelCounterBuff& rhs );
		cfcore::CFGenKbGelCounterBuff operator =( cfcore::CFGenKbGelCounterBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelCounterBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelCounterBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelCounterBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelCounterBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelCounterBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelCounterBuff& lhs, const cfcore::CFGenKbGelCounterBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelCounterBuff> {
		typedef cfcore::CFGenKbGelCounterBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

