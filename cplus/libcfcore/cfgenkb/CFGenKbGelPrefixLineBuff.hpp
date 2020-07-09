#pragma once

// Description: C++18 specification for a GelPrefixLine buffer object.

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

#include <cfgenkb/CFGenKbGelInstructionBuff.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGelInstructionPKey;
	class CFGenKbGelPrefixLineByRemainderIdxKey;

	class CFGenKbGelPrefixLineBuff : public CFGenKbGelInstructionBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_PREFIXNAME;
		static const std::string COLNAME_REMAINDERTENANTID;
		static const std::string COLNAME_REMAINDERGELCACHEID;
		static const std::string COLNAME_REMAINDERINSTID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const int64_t GELINSTID_INIT_VALUE;
		static const std::string PREFIXNAME_INIT_VALUE;
		static const int64_t REMAINDERTENANTID_INIT_VALUE;
		static const int64_t REMAINDERGELCACHEID_INIT_VALUE;
		static const int64_t REMAINDERINSTID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const int64_t GELINSTID_MIN_VALUE;
		static const int64_t REMAINDERTENANTID_MIN_VALUE;
		static const int64_t REMAINDERGELCACHEID_MIN_VALUE;
		static const int64_t REMAINDERINSTID_MIN_VALUE;
		static const std::string::size_type PREFIXNAME_MAX_LEN;
	protected:
		std::string* requiredPrefixName;
		cflib::CFLibNullableInt64 optionalRemainderTenantId;
		int64_t requiredRemainderGelCacheId;
		cflib::CFLibNullableInt64 optionalRemainderInstId;
	public:
		CFGenKbGelPrefixLineBuff();
		CFGenKbGelPrefixLineBuff( const CFGenKbGelPrefixLineBuff& src );
		virtual ~CFGenKbGelPrefixLineBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const std::string& getRequiredPrefixName() const;
		virtual const std::string* getRequiredPrefixNameReference() const;
		virtual void setRequiredPrefixName( const std::string& value );

		virtual const int64_t getOptionalRemainderTenantIdValue() const;
		virtual const int64_t* getOptionalRemainderTenantIdReference() const;
		virtual const bool isOptionalRemainderTenantIdNull() const;
		virtual void setOptionalRemainderTenantIdNull();
		virtual void setOptionalRemainderTenantIdValue( const int64_t value );

		virtual const int64_t getRequiredRemainderGelCacheId() const;
		virtual const int64_t* getRequiredRemainderGelCacheIdReference() const;
		virtual void setRequiredRemainderGelCacheId( const int64_t value );

		virtual const int64_t getOptionalRemainderInstIdValue() const;
		virtual const int64_t* getOptionalRemainderInstIdReference() const;
		virtual const bool isOptionalRemainderInstIdNull() const;
		virtual void setOptionalRemainderInstIdNull();
		virtual void setOptionalRemainderInstIdValue( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator <( const CFGenKbGelInstructionPKey& rhs );
		bool operator <( const CFGenKbGelPrefixLineBuff& rhs );

		bool operator <=( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator <=( const CFGenKbGelInstructionPKey& rhs );
		bool operator <=( const CFGenKbGelPrefixLineBuff& rhs );

		bool operator ==( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator ==( const CFGenKbGelInstructionPKey& rhs );
		bool operator ==( const CFGenKbGelPrefixLineBuff& rhs );

		bool operator !=( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator !=( const CFGenKbGelInstructionPKey& rhs );
		bool operator !=( const CFGenKbGelPrefixLineBuff& rhs );

		bool operator >=( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator >=( const CFGenKbGelInstructionPKey& rhs );
		bool operator >=( const CFGenKbGelPrefixLineBuff& rhs );

		bool operator >( const CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
		bool operator >( const CFGenKbGelInstructionPKey& rhs );
		bool operator >( const CFGenKbGelPrefixLineBuff& rhs );
		cfcore::CFGenKbGelPrefixLineBuff operator =( cfcore::CFGenKbGelPrefixLineBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelPrefixLineBuff& lhs, const cfcore::CFGenKbGelPrefixLineBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelPrefixLineBuff> {
		typedef cfcore::CFGenKbGelPrefixLineBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

