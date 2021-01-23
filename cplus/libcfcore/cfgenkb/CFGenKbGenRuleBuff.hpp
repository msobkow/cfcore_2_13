#pragma once

// Description: C++18 specification for a GenRule buffer object.

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

#include <cfgenkb/CFGenKbGenItemBuff.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGenItemPKey;
	class CFGenKbGenRuleByBodyIdxKey;

	class CFGenKbGenRuleBuff : public CFGenKbGenItemBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_DEFINEDNEAR;
		static const std::string COLNAME_BODY;
		static const std::string COLNAME_BODYTENANTID;
		static const std::string COLNAME_BODYGELCACHEID;
		static const std::string COLNAME_BODYGELID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t CARTRIDGEID_INIT_VALUE;
		static const int64_t ITEMID_INIT_VALUE;
		static const std::string DEFINEDNEAR_INIT_VALUE;
		static const std::string BODY_INIT_VALUE;
		static const int64_t BODYTENANTID_INIT_VALUE;
		static const int64_t BODYGELCACHEID_INIT_VALUE;
		static const int64_t BODYGELID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t CARTRIDGEID_MIN_VALUE;
		static const int64_t ITEMID_MIN_VALUE;
		static const int64_t BODYTENANTID_MIN_VALUE;
		static const int64_t BODYGELCACHEID_MIN_VALUE;
		static const int64_t BODYGELID_MIN_VALUE;
		static const int64_t ITEMID_MAX_VALUE;
		static const std::string::size_type DEFINEDNEAR_MAX_LEN;
		static const std::string::size_type BODY_MAX_LEN;
	protected:
		std::string* requiredDefinedNear;
		std::string* requiredBody;
		cflib::CFLibNullableInt64 optionalBodyTenantId;
		cflib::CFLibNullableInt64 optionalBodyGelCacheId;
		cflib::CFLibNullableInt64 optionalBodyGelId;
	public:
		CFGenKbGenRuleBuff();
		CFGenKbGenRuleBuff( const CFGenKbGenRuleBuff& src );
		virtual ~CFGenKbGenRuleBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const std::string& getRequiredDefinedNear() const;
		virtual const std::string* getRequiredDefinedNearReference() const;
		virtual void setRequiredDefinedNear( const std::string& value );

		virtual const std::string& getRequiredBody() const;
		virtual const std::string* getRequiredBodyReference() const;
		virtual void setRequiredBody( const std::string& value );

		virtual const int64_t getOptionalBodyTenantIdValue() const;
		virtual const int64_t* getOptionalBodyTenantIdReference() const;
		virtual const bool isOptionalBodyTenantIdNull() const;
		virtual void setOptionalBodyTenantIdNull();
		virtual void setOptionalBodyTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalBodyGelCacheIdValue() const;
		virtual const int64_t* getOptionalBodyGelCacheIdReference() const;
		virtual const bool isOptionalBodyGelCacheIdNull() const;
		virtual void setOptionalBodyGelCacheIdNull();
		virtual void setOptionalBodyGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalBodyGelIdValue() const;
		virtual const int64_t* getOptionalBodyGelIdReference() const;
		virtual const bool isOptionalBodyGelIdNull() const;
		virtual void setOptionalBodyGelIdNull();
		virtual void setOptionalBodyGelIdValue( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator <( const CFGenKbGenItemPKey& rhs );
		bool operator <( const CFGenKbGenRuleBuff& rhs );

		bool operator <=( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemPKey& rhs );
		bool operator <=( const CFGenKbGenRuleBuff& rhs );

		bool operator ==( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemPKey& rhs );
		bool operator ==( const CFGenKbGenRuleBuff& rhs );

		bool operator !=( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemPKey& rhs );
		bool operator !=( const CFGenKbGenRuleBuff& rhs );

		bool operator >=( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemPKey& rhs );
		bool operator >=( const CFGenKbGenRuleBuff& rhs );

		bool operator >( const CFGenKbGenRuleByBodyIdxKey& rhs );
		bool operator >( const CFGenKbGenItemPKey& rhs );
		bool operator >( const CFGenKbGenRuleBuff& rhs );
		cfcore::CFGenKbGenRuleBuff operator =( cfcore::CFGenKbGenRuleBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenRuleBuff> {
		typedef cfcore::CFGenKbGenRuleBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

