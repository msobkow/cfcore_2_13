#pragma once

// Description: C++18 specification for a SecGrpMemb buffer object.

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

	class CFGenKbSecGrpMembPKey;
	class CFGenKbSecGrpMembByClusterIdxKey;
	class CFGenKbSecGrpMembByGroupIdxKey;
	class CFGenKbSecGrpMembByUserIdxKey;
	class CFGenKbSecGrpMembByUUserIdxKey;

	class CFGenKbSecGrpMembBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_CLUSTERID;
		static const std::string COLNAME_SECGRPMEMBID;
		static const std::string COLNAME_SECGROUPID;
		static const std::string COLNAME_SECUSERID;
		static const char* S_INIT_CREATEDBY;
		static const char* S_INIT_UPDATEDBY;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t CLUSTERID_INIT_VALUE;
		static const int64_t SECGRPMEMBID_INIT_VALUE;
		static const int SECGROUPID_INIT_VALUE;
		static const int64_t CLUSTERID_MIN_VALUE;
		static const int64_t SECGRPMEMBID_MIN_VALUE;
		static const int SECGROUPID_MIN_VALUE;
	protected:
		uuid_t createdByUserId;
		std::chrono::system_clock::time_point createdAt;
		uuid_t updatedByUserId;
		std::chrono::system_clock::time_point updatedAt;
		int64_t requiredClusterId;
		int64_t requiredSecGrpMembId;
		int32_t requiredSecGroupId;
		uuid_t requiredSecUserId;
		int32_t requiredRevision;
	public:
		CFGenKbSecGrpMembBuff();

		CFGenKbSecGrpMembBuff( const CFGenKbSecGrpMembBuff& src );

		virtual ~CFGenKbSecGrpMembBuff();

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

		virtual const int64_t getRequiredSecGrpMembId() const;
		virtual const int64_t* getRequiredSecGrpMembIdReference() const;
		virtual void setRequiredSecGrpMembId( const int64_t value );

		virtual const int32_t getRequiredSecGroupId() const;
		virtual const int32_t* getRequiredSecGroupIdReference() const;
		virtual void setRequiredSecGroupId( const int32_t value );

		virtual const uuid_ptr_t getRequiredSecUserId() const;
		virtual const uuid_ptr_t getRequiredSecUserIdReference() const;
		virtual void setRequiredSecUserId( const uuid_ptr_t value );
		virtual void generateRequiredSecUserId();

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbSecGrpMembByClusterIdxKey& rhs );
		bool operator <( const CFGenKbSecGrpMembByGroupIdxKey& rhs );
		bool operator <( const CFGenKbSecGrpMembByUserIdxKey& rhs );
		bool operator <( const CFGenKbSecGrpMembByUUserIdxKey& rhs );
		bool operator <( const CFGenKbSecGrpMembPKey& rhs );
		bool operator <( const CFGenKbSecGrpMembBuff& rhs );

		bool operator <=( const CFGenKbSecGrpMembByClusterIdxKey& rhs );
		bool operator <=( const CFGenKbSecGrpMembByGroupIdxKey& rhs );
		bool operator <=( const CFGenKbSecGrpMembByUserIdxKey& rhs );
		bool operator <=( const CFGenKbSecGrpMembByUUserIdxKey& rhs );
		bool operator <=( const CFGenKbSecGrpMembPKey& rhs );
		bool operator <=( const CFGenKbSecGrpMembBuff& rhs );

		bool operator ==( const CFGenKbSecGrpMembByClusterIdxKey& rhs );
		bool operator ==( const CFGenKbSecGrpMembByGroupIdxKey& rhs );
		bool operator ==( const CFGenKbSecGrpMembByUserIdxKey& rhs );
		bool operator ==( const CFGenKbSecGrpMembByUUserIdxKey& rhs );
		bool operator ==( const CFGenKbSecGrpMembPKey& rhs );
		bool operator ==( const CFGenKbSecGrpMembBuff& rhs );

		bool operator !=( const CFGenKbSecGrpMembByClusterIdxKey& rhs );
		bool operator !=( const CFGenKbSecGrpMembByGroupIdxKey& rhs );
		bool operator !=( const CFGenKbSecGrpMembByUserIdxKey& rhs );
		bool operator !=( const CFGenKbSecGrpMembByUUserIdxKey& rhs );
		bool operator !=( const CFGenKbSecGrpMembPKey& rhs );
		bool operator !=( const CFGenKbSecGrpMembBuff& rhs );

		bool operator >=( const CFGenKbSecGrpMembByClusterIdxKey& rhs );
		bool operator >=( const CFGenKbSecGrpMembByGroupIdxKey& rhs );
		bool operator >=( const CFGenKbSecGrpMembByUserIdxKey& rhs );
		bool operator >=( const CFGenKbSecGrpMembByUUserIdxKey& rhs );
		bool operator >=( const CFGenKbSecGrpMembPKey& rhs );
		bool operator >=( const CFGenKbSecGrpMembBuff& rhs );

		bool operator >( const CFGenKbSecGrpMembByClusterIdxKey& rhs );
		bool operator >( const CFGenKbSecGrpMembByGroupIdxKey& rhs );
		bool operator >( const CFGenKbSecGrpMembByUserIdxKey& rhs );
		bool operator >( const CFGenKbSecGrpMembByUUserIdxKey& rhs );
		bool operator >( const CFGenKbSecGrpMembPKey& rhs );
		bool operator >( const CFGenKbSecGrpMembBuff& rhs );
		cfcore::CFGenKbSecGrpMembBuff operator =( cfcore::CFGenKbSecGrpMembBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByGroupIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUserIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUUserIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByGroupIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUserIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUUserIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByGroupIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUserIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUUserIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByGroupIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUserIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUUserIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByGroupIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUserIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUUserIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByGroupIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUserIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembByUUserIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembPKey& rhs );
	bool operator >(const  cfcore::CFGenKbSecGrpMembBuff& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs );

	template<> struct hash<cfcore::CFGenKbSecGrpMembBuff> {
		typedef cfcore::CFGenKbSecGrpMembBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

