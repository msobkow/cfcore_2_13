#pragma once

// Description: C++18 specification for a GelPop buffer object.

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
	class CFGenKbGelPopByRemainderIdxKey;

	class CFGenKbGelPopBuff : public CFGenKbGelInstructionBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_GOALTYPENAME;
		static const std::string COLNAME_REMAINDERTENANTID;
		static const std::string COLNAME_REMAINDERGELCACHEID;
		static const std::string COLNAME_REMAINDERINSTID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const int64_t GELINSTID_INIT_VALUE;
		static const std::string GOALTYPENAME_INIT_VALUE;
		static const int64_t REMAINDERTENANTID_INIT_VALUE;
		static const int64_t REMAINDERGELCACHEID_INIT_VALUE;
		static const int64_t REMAINDERINSTID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const int64_t GELINSTID_MIN_VALUE;
		static const int64_t REMAINDERTENANTID_MIN_VALUE;
		static const int64_t REMAINDERGELCACHEID_MIN_VALUE;
		static const int64_t REMAINDERINSTID_MIN_VALUE;
		static const std::string::size_type GOALTYPENAME_MAX_LEN;
	protected:
		std::string* requiredGoalTypeName;
		cflib::CFLibNullableInt64 optionalRemainderTenantId;
		int64_t requiredRemainderGelCacheId;
		cflib::CFLibNullableInt64 optionalRemainderInstId;
	public:
		CFGenKbGelPopBuff();
		CFGenKbGelPopBuff( const CFGenKbGelPopBuff& src );
		virtual ~CFGenKbGelPopBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const std::string& getRequiredGoalTypeName() const;
		virtual const std::string* getRequiredGoalTypeNameReference() const;
		virtual void setRequiredGoalTypeName( const std::string& value );

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

		bool operator <( const CFGenKbGelPopByRemainderIdxKey& rhs );
		bool operator <( const CFGenKbGelInstructionPKey& rhs );
		bool operator <( const CFGenKbGelPopBuff& rhs );

		bool operator <=( const CFGenKbGelPopByRemainderIdxKey& rhs );
		bool operator <=( const CFGenKbGelInstructionPKey& rhs );
		bool operator <=( const CFGenKbGelPopBuff& rhs );

		bool operator ==( const CFGenKbGelPopByRemainderIdxKey& rhs );
		bool operator ==( const CFGenKbGelInstructionPKey& rhs );
		bool operator ==( const CFGenKbGelPopBuff& rhs );

		bool operator !=( const CFGenKbGelPopByRemainderIdxKey& rhs );
		bool operator !=( const CFGenKbGelInstructionPKey& rhs );
		bool operator !=( const CFGenKbGelPopBuff& rhs );

		bool operator >=( const CFGenKbGelPopByRemainderIdxKey& rhs );
		bool operator >=( const CFGenKbGelInstructionPKey& rhs );
		bool operator >=( const CFGenKbGelPopBuff& rhs );

		bool operator >( const CFGenKbGelPopByRemainderIdxKey& rhs );
		bool operator >( const CFGenKbGelInstructionPKey& rhs );
		bool operator >( const CFGenKbGelPopBuff& rhs );
		cfcore::CFGenKbGelPopBuff operator =( cfcore::CFGenKbGelPopBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopByRemainderIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopByRemainderIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopByRemainderIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopByRemainderIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopByRemainderIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopByRemainderIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelPopBuff& lhs, const cfcore::CFGenKbGelPopBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelPopBuff> {
		typedef cfcore::CFGenKbGelPopBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

