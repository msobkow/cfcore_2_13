#pragma once

// Description: C++18 specification for a GelModifier buffer object.

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

#include <cfgenkb/CFGenKbGelInstructionBuff.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGelInstructionPKey;
	class CFGenKbGelModifierByRemainderIdxKey;

	class CFGenKbGelModifierBuff : public CFGenKbGelInstructionBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_REMAINDERTENANTID;
		static const std::string COLNAME_REMAINDERGELCACHEID;
		static const std::string COLNAME_REMAINDERINSTID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const int64_t GELINSTID_INIT_VALUE;
		static const int64_t REMAINDERTENANTID_INIT_VALUE;
		static const int64_t REMAINDERGELCACHEID_INIT_VALUE;
		static const int64_t REMAINDERINSTID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const int64_t GELINSTID_MIN_VALUE;
		static const int64_t REMAINDERTENANTID_MIN_VALUE;
		static const int64_t REMAINDERGELCACHEID_MIN_VALUE;
		static const int64_t REMAINDERINSTID_MIN_VALUE;
	protected:
		cflib::CFLibNullableInt64 optionalRemainderTenantId;
		int64_t requiredRemainderGelCacheId;
		cflib::CFLibNullableInt64 optionalRemainderInstId;
	public:
		CFGenKbGelModifierBuff();
		CFGenKbGelModifierBuff( const CFGenKbGelModifierBuff& src );
		virtual ~CFGenKbGelModifierBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
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

		bool operator <( const CFGenKbGelModifierByRemainderIdxKey& rhs );
		bool operator <( const CFGenKbGelInstructionPKey& rhs );
		bool operator <( const CFGenKbGelModifierBuff& rhs );

		bool operator <=( const CFGenKbGelModifierByRemainderIdxKey& rhs );
		bool operator <=( const CFGenKbGelInstructionPKey& rhs );
		bool operator <=( const CFGenKbGelModifierBuff& rhs );

		bool operator ==( const CFGenKbGelModifierByRemainderIdxKey& rhs );
		bool operator ==( const CFGenKbGelInstructionPKey& rhs );
		bool operator ==( const CFGenKbGelModifierBuff& rhs );

		bool operator !=( const CFGenKbGelModifierByRemainderIdxKey& rhs );
		bool operator !=( const CFGenKbGelInstructionPKey& rhs );
		bool operator !=( const CFGenKbGelModifierBuff& rhs );

		bool operator >=( const CFGenKbGelModifierByRemainderIdxKey& rhs );
		bool operator >=( const CFGenKbGelInstructionPKey& rhs );
		bool operator >=( const CFGenKbGelModifierBuff& rhs );

		bool operator >( const CFGenKbGelModifierByRemainderIdxKey& rhs );
		bool operator >( const CFGenKbGelInstructionPKey& rhs );
		bool operator >( const CFGenKbGelModifierBuff& rhs );
		cfcore::CFGenKbGelModifierBuff operator =( cfcore::CFGenKbGelModifierBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelModifierBuff> {
		typedef cfcore::CFGenKbGelModifierBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

