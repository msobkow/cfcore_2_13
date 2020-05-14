#pragma once

// Description: C++18 specification for a TSecGrpInc buffer object.

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

	class CFGenKbTSecGrpIncPKey;
	class CFGenKbTSecGrpIncByTenantIdxKey;
	class CFGenKbTSecGrpIncByGroupIdxKey;
	class CFGenKbTSecGrpIncByIncludeIdxKey;
	class CFGenKbTSecGrpIncByUIncludeIdxKey;

	class CFGenKbTSecGrpIncBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TENANTID;
		static const std::string COLNAME_TSECGRPINCID;
		static const std::string COLNAME_TSECGROUPID;
		static const std::string COLNAME_INCLUDEGROUPID;
		static const char* S_INIT_CREATEDBY;
		static const char* S_INIT_UPDATEDBY;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t TSECGRPINCID_INIT_VALUE;
		static const int TSECGROUPID_INIT_VALUE;
		static const int INCLUDEGROUPID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t TSECGRPINCID_MIN_VALUE;
		static const int TSECGROUPID_MIN_VALUE;
		static const int INCLUDEGROUPID_MIN_VALUE;
	protected:
		uuid_t createdByUserId;
		std::chrono::system_clock::time_point createdAt;
		uuid_t updatedByUserId;
		std::chrono::system_clock::time_point updatedAt;
		int64_t requiredTenantId;
		int64_t requiredTSecGrpIncId;
		int32_t requiredTSecGroupId;
		int32_t requiredIncludeGroupId;
		int32_t requiredRevision;
	public:
		CFGenKbTSecGrpIncBuff();

		CFGenKbTSecGrpIncBuff( const CFGenKbTSecGrpIncBuff& src );

		virtual ~CFGenKbTSecGrpIncBuff();

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
		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredTSecGrpIncId() const;
		virtual const int64_t* getRequiredTSecGrpIncIdReference() const;
		virtual void setRequiredTSecGrpIncId( const int64_t value );

		virtual const int32_t getRequiredTSecGroupId() const;
		virtual const int32_t* getRequiredTSecGroupIdReference() const;
		virtual void setRequiredTSecGroupId( const int32_t value );

		virtual const int32_t getRequiredIncludeGroupId() const;
		virtual const int32_t* getRequiredIncludeGroupIdReference() const;
		virtual void setRequiredIncludeGroupId( const int32_t value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbTSecGrpIncByTenantIdxKey& rhs );
		bool operator <( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator <( const CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
		bool operator <( const CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
		bool operator <( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator <( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator <=( const CFGenKbTSecGrpIncByTenantIdxKey& rhs );
		bool operator <=( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator <=( const CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
		bool operator <=( const CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
		bool operator <=( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator <=( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator ==( const CFGenKbTSecGrpIncByTenantIdxKey& rhs );
		bool operator ==( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator ==( const CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
		bool operator ==( const CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
		bool operator ==( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator ==( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator !=( const CFGenKbTSecGrpIncByTenantIdxKey& rhs );
		bool operator !=( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator !=( const CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
		bool operator !=( const CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
		bool operator !=( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator !=( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator >=( const CFGenKbTSecGrpIncByTenantIdxKey& rhs );
		bool operator >=( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator >=( const CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
		bool operator >=( const CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
		bool operator >=( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator >=( const CFGenKbTSecGrpIncBuff& rhs );

		bool operator >( const CFGenKbTSecGrpIncByTenantIdxKey& rhs );
		bool operator >( const CFGenKbTSecGrpIncByGroupIdxKey& rhs );
		bool operator >( const CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
		bool operator >( const CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
		bool operator >( const CFGenKbTSecGrpIncPKey& rhs );
		bool operator >( const CFGenKbTSecGrpIncBuff& rhs );
		cfcore::CFGenKbTSecGrpIncBuff operator =( cfcore::CFGenKbTSecGrpIncBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator <(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByIncludeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	bool operator >(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByGroupIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByIncludeIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncPKey& rhs );
	bool operator >(const  cfcore::CFGenKbTSecGrpIncBuff& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs );

	template<> struct hash<cfcore::CFGenKbTSecGrpIncBuff> {
		typedef cfcore::CFGenKbTSecGrpIncBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

