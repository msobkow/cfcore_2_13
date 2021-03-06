#pragma once

// Description: C++18 Interface of a Tenant 64-bit in-memory RAM Id Generator object.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

namespace cfcore {

	class CFGenKbRamTenantId64Gen
	{
	protected:
		int64_t requiredId;
		int16_t sliceId = 0;
		int64_t nextId = 1;
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
	CFGenKbRamTenantId64Gen();
	~CFGenKbRamTenantId64Gen();

		int64_t getNextId();
		virtual const int64_t getRequiredId() const;
		virtual const int64_t* getRequiredIdReference() const;
		virtual void setRequiredId( const int64_t value );

	int16_t getRequiredSliceId() const;
	void setRequiredSliceId( int16_t value );

	size_t hashCode() const;

		bool operator <( const cfcore::CFGenKbRamTenantId64Gen& rhs );

		bool operator <=( const cfcore::CFGenKbRamTenantId64Gen& rhs );

		bool operator ==( const cfcore::CFGenKbRamTenantId64Gen& rhs );

		bool operator !=( const cfcore::CFGenKbRamTenantId64Gen& rhs );

		bool operator >=( const cfcore::CFGenKbRamTenantId64Gen& rhs );

		bool operator >( const cfcore::CFGenKbRamTenantId64Gen& rhs );
		CFGenKbRamTenantId64Gen operator =( CFGenKbRamTenantId64Gen& src );

	};
}

namespace std {

	bool operator <(const cfcore::CFGenKbRamTenantId64Gen& lhs, const cfcore::CFGenKbRamTenantId64Gen& rhs );

	bool operator <=(const cfcore::CFGenKbRamTenantId64Gen& lhs, const cfcore::CFGenKbRamTenantId64Gen& rhs );

	bool operator ==(const cfcore::CFGenKbRamTenantId64Gen& lhs, const cfcore::CFGenKbRamTenantId64Gen& rhs );

	bool operator !=(const cfcore::CFGenKbRamTenantId64Gen& lhs, const cfcore::CFGenKbRamTenantId64Gen& rhs );

	bool operator >=(const cfcore::CFGenKbRamTenantId64Gen& lhs, const cfcore::CFGenKbRamTenantId64Gen& rhs );

	bool operator >(const cfcore::CFGenKbRamTenantId64Gen& lhs, const cfcore::CFGenKbRamTenantId64Gen& rhs );

	template<> struct hash<cfcore::CFGenKbRamTenantId64Gen> {
		typedef cfcore::CFGenKbRamTenantId64Gen argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};


}
