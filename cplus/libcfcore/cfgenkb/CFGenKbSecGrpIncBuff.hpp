#pragma once

// Description: C++18 specification for a SecGrpInc buffer object.

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

	class CFGenKbSecGrpIncPKey;
	class CFGenKbSecGrpIncByClusterIdxKey;
	class CFGenKbSecGrpIncByGroupIdxKey;
	class CFGenKbSecGrpIncByIncludeIdxKey;
	class CFGenKbSecGrpIncByUIncludeIdxKey;

	class CFGenKbSecGrpIncBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_CLUSTERID;
		static const std::string COLNAME_SECGRPINCID;
		static const std::string COLNAME_SECGROUPID;
		static const std::string COLNAME_INCLUDEGROUPID;
		static const char* S_INIT_CREATEDBY;
		static const char* S_INIT_UPDATEDBY;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t CLUSTERID_INIT_VALUE;
		static const int64_t SECGRPINCID_INIT_VALUE;
		static const int SECGROUPID_INIT_VALUE;
		static const int INCLUDEGROUPID_INIT_VALUE;
		static const int64_t CLUSTERID_MIN_VALUE;
		static const int64_t SECGRPINCID_MIN_VALUE;
		static const int SECGROUPID_MIN_VALUE;
		static const int INCLUDEGROUPID_MIN_VALUE;
	protected:
		uuid_t createdByUserId;
		std::chrono::system_clock::time_point createdAt;
		uuid_t updatedByUserId;
		std::chrono::system_clock::time_point updatedAt;
		int64_t requiredClusterId;
		int64_t requiredSecGrpIncId;
		int32_t requiredSecGroupId;
		int32_t requiredIncludeGroupId;
		int32_t requiredRevision;
	public:
		CFGenKbSecGrpIncBuff();

		CFGenKbSecGrpIncBuff( const CFGenKbSecGrpIncBuff& src );

		virtual ~CFGenKbSecGrpIncBuff();

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

		virtual const int64_t getRequiredSecGrpIncId() const;
		virtual const int64_t* getRequiredSecGrpIncIdReference() const;
		virtual void setRequiredSecGrpIncId( const int64_t value );

		virtual const int32_t getRequiredSecGroupId() const;
		virtual const int32_t* getRequiredSecGroupIdReference() const;
		virtual void setRequiredSecGroupId( const int32_t value );

		virtual const int32_t getRequiredIncludeGroupId() const;
		virtual const int32_t* getRequiredIncludeGroupIdReference() const;
		virtual void setRequiredIncludeGroupId( const int32_t value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbSecGrpIncByClusterIdxKey& rhs );
		bool operator <( const CFGenKbSecGrpIncByGroupIdxKey& rhs );
		bool operator <( const CFGenKbSecGrpIncByIncludeIdxKey& rhs );
		bool operator <( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator <( const CFGenKbSecGrpIncPKey& rhs );
		bool operator <( const CFGenKbSecGrpIncBuff& rhs );

		bool operator <=( const CFGenKbSecGrpIncByClusterIdxKey& rhs );
		bool operator <=( const CFGenKbSecGrpIncByGroupIdxKey& rhs );
		bool operator <=( const CFGenKbSecGrpIncByIncludeIdxKey& rhs );
		bool operator <=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator <=( const CFGenKbSecGrpIncPKey& rhs );
		bool operator <=( const CFGenKbSecGrpIncBuff& rhs );

		bool operator ==( const CFGenKbSecGrpIncByClusterIdxKey& rhs );
		bool operator ==( const CFGenKbSecGrpIncByGroupIdxKey& rhs );
		bool operator ==( const CFGenKbSecGrpIncByIncludeIdxKey& rhs );
		bool operator ==( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator ==( const CFGenKbSecGrpIncPKey& rhs );
		bool operator ==( const CFGenKbSecGrpIncBuff& rhs );

		bool operator !=( const CFGenKbSecGrpIncByClusterIdxKey& rhs );
		bool operator !=( const CFGenKbSecGrpIncByGroupIdxKey& rhs );
		bool operator !=( const CFGenKbSecGrpIncByIncludeIdxKey& rhs );
		bool operator !=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator !=( const CFGenKbSecGrpIncPKey& rhs );
		bool operator !=( const CFGenKbSecGrpIncBuff& rhs );

		bool operator >=( const CFGenKbSecGrpIncByClusterIdxKey& rhs );
		bool operator >=( const CFGenKbSecGrpIncByGroupIdxKey& rhs );
		bool operator >=( const CFGenKbSecGrpIncByIncludeIdxKey& rhs );
		bool operator >=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator >=( const CFGenKbSecGrpIncPKey& rhs );
		bool operator >=( const CFGenKbSecGrpIncBuff& rhs );

		bool operator >( const CFGenKbSecGrpIncByClusterIdxKey& rhs );
		bool operator >( const CFGenKbSecGrpIncByGroupIdxKey& rhs );
		bool operator >( const CFGenKbSecGrpIncByIncludeIdxKey& rhs );
		bool operator >( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
		bool operator >( const CFGenKbSecGrpIncPKey& rhs );
		bool operator >( const CFGenKbSecGrpIncBuff& rhs );
		cfcore::CFGenKbSecGrpIncBuff operator =( cfcore::CFGenKbSecGrpIncBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs );
	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs );

	template<> struct hash<cfcore::CFGenKbSecGrpIncBuff> {
		typedef cfcore::CFGenKbSecGrpIncBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

