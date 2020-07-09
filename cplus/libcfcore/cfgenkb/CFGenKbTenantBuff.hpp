#pragma once

// Description: C++18 specification for a Tenant buffer object.

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

	class CFGenKbTenantPKey;
	class CFGenKbTenantByClusterIdxKey;
	class CFGenKbTenantByUNameIdxKey;

	class CFGenKbTenantBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_CLUSTERID;
		static const std::string COLNAME_ID;
		static const std::string COLNAME_TENANTNAME;
		static const char* S_INIT_CREATEDBY;
		static const char* S_INIT_UPDATEDBY;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t CLUSTERID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const std::string TENANTNAME_INIT_VALUE;
		static const int64_t CLUSTERID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const std::string::size_type TENANTNAME_MAX_LEN;
	protected:
		uuid_t createdByUserId;
		std::chrono::system_clock::time_point createdAt;
		uuid_t updatedByUserId;
		std::chrono::system_clock::time_point updatedAt;
		int64_t requiredClusterId;
		int64_t requiredId;
		std::string* requiredTenantName;
		int32_t requiredRevision;
	public:
		CFGenKbTenantBuff();

		CFGenKbTenantBuff( const CFGenKbTenantBuff& src );

		virtual ~CFGenKbTenantBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const uuid_ptr_t getCreatedByUserId() const;
		virtual void setCreatedByUserId( const uuid_ptr_t value );
		virtual const std::chrono::system_clock::time_point& getCreatedAt() const;
		virtual void setCreatedAt( const std::chrono::system_clock::time_point& value );
		virtual const uuid_ptr_t getUpdatedByUserId() const;
		virtual void setUpdatedByUserId( const uuid_ptr_t value );
		virtual const std::chrono::system_clock::time_point& getUpdatedAt() const;
		virtual void setUpdatedAt( const std::chrono::system_clock::time_point& value );
		virtual const int64_t getRequiredClusterId() const;
		virtual const int64_t* getRequiredClusterIdReference() const;
		virtual void setRequiredClusterId( const int64_t value );

		virtual const int64_t getRequiredId() const;
		virtual const int64_t* getRequiredIdReference() const;
		virtual void setRequiredId( const int64_t value );

		virtual const std::string& getRequiredTenantName() const;
		virtual const std::string* getRequiredTenantNameReference() const;
		virtual void setRequiredTenantName( const std::string& value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbTenantByClusterIdxKey& rhs );
		bool operator <( const CFGenKbTenantByUNameIdxKey& rhs );
		bool operator <( const CFGenKbTenantPKey& rhs );
		bool operator <( const CFGenKbTenantBuff& rhs );

		bool operator <=( const CFGenKbTenantByClusterIdxKey& rhs );
		bool operator <=( const CFGenKbTenantByUNameIdxKey& rhs );
		bool operator <=( const CFGenKbTenantPKey& rhs );
		bool operator <=( const CFGenKbTenantBuff& rhs );

		bool operator ==( const CFGenKbTenantByClusterIdxKey& rhs );
		bool operator ==( const CFGenKbTenantByUNameIdxKey& rhs );
		bool operator ==( const CFGenKbTenantPKey& rhs );
		bool operator ==( const CFGenKbTenantBuff& rhs );

		bool operator !=( const CFGenKbTenantByClusterIdxKey& rhs );
		bool operator !=( const CFGenKbTenantByUNameIdxKey& rhs );
		bool operator !=( const CFGenKbTenantPKey& rhs );
		bool operator !=( const CFGenKbTenantBuff& rhs );

		bool operator >=( const CFGenKbTenantByClusterIdxKey& rhs );
		bool operator >=( const CFGenKbTenantByUNameIdxKey& rhs );
		bool operator >=( const CFGenKbTenantPKey& rhs );
		bool operator >=( const CFGenKbTenantBuff& rhs );

		bool operator >( const CFGenKbTenantByClusterIdxKey& rhs );
		bool operator >( const CFGenKbTenantByUNameIdxKey& rhs );
		bool operator >( const CFGenKbTenantPKey& rhs );
		bool operator >( const CFGenKbTenantBuff& rhs );
		cfcore::CFGenKbTenantBuff operator =( cfcore::CFGenKbTenantBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantPKey& rhs );
	bool operator <(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantBuff& rhs );

	bool operator >(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantPKey& rhs );
	bool operator >(const  cfcore::CFGenKbTenantBuff& lhs, const cfcore::CFGenKbTenantBuff& rhs );

	template<> struct hash<cfcore::CFGenKbTenantBuff> {
		typedef cfcore::CFGenKbTenantBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

