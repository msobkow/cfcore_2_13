#pragma once

// Description: C++18 specification for a RuleCart buffer object.

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

#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbRuleCartPKey;
	class CFGenKbRuleCartByTenantIdxKey;
	class CFGenKbRuleCartByNameIdxKey;

	class CFGenKbRuleCartBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TENANTID;
		static const std::string COLNAME_ID;
		static const std::string COLNAME_NAME;
		static const std::string COLNAME_DESCR;
		static const std::string COLNAME_REVISIONSTRING;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
		static const std::string::size_type DESCR_MAX_LEN;
		static const std::string::size_type REVISIONSTRING_MAX_LEN;
	protected:
		int64_t requiredTenantId;
		int64_t requiredId;
		std::string* requiredName;
		std::string* optionalDescr;
		std::string* optionalRevisionString;
		int32_t requiredRevision;
	public:
		CFGenKbRuleCartBuff();

		CFGenKbRuleCartBuff( const CFGenKbRuleCartBuff& src );

		virtual ~CFGenKbRuleCartBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredId() const;
		virtual const int64_t* getRequiredIdReference() const;
		virtual void setRequiredId( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual const std::string& getOptionalDescrValue() const;
		virtual const std::string* getOptionalDescrReference() const;
		virtual const bool isOptionalDescrNull() const;
		virtual void setOptionalDescrNull();
		virtual void setOptionalDescrValue( const std::string& value );

		virtual const std::string& getOptionalRevisionStringValue() const;
		virtual const std::string* getOptionalRevisionStringReference() const;
		virtual const bool isOptionalRevisionStringNull() const;
		virtual void setOptionalRevisionStringNull();
		virtual void setOptionalRevisionStringValue( const std::string& value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbRuleCartByTenantIdxKey& rhs );
		bool operator <( const CFGenKbRuleCartByNameIdxKey& rhs );
		bool operator <( const CFGenKbRuleCartPKey& rhs );
		bool operator <( const CFGenKbRuleCartBuff& rhs );

		bool operator <=( const CFGenKbRuleCartByTenantIdxKey& rhs );
		bool operator <=( const CFGenKbRuleCartByNameIdxKey& rhs );
		bool operator <=( const CFGenKbRuleCartPKey& rhs );
		bool operator <=( const CFGenKbRuleCartBuff& rhs );

		bool operator ==( const CFGenKbRuleCartByTenantIdxKey& rhs );
		bool operator ==( const CFGenKbRuleCartByNameIdxKey& rhs );
		bool operator ==( const CFGenKbRuleCartPKey& rhs );
		bool operator ==( const CFGenKbRuleCartBuff& rhs );

		bool operator !=( const CFGenKbRuleCartByTenantIdxKey& rhs );
		bool operator !=( const CFGenKbRuleCartByNameIdxKey& rhs );
		bool operator !=( const CFGenKbRuleCartPKey& rhs );
		bool operator !=( const CFGenKbRuleCartBuff& rhs );

		bool operator >=( const CFGenKbRuleCartByTenantIdxKey& rhs );
		bool operator >=( const CFGenKbRuleCartByNameIdxKey& rhs );
		bool operator >=( const CFGenKbRuleCartPKey& rhs );
		bool operator >=( const CFGenKbRuleCartBuff& rhs );

		bool operator >( const CFGenKbRuleCartByTenantIdxKey& rhs );
		bool operator >( const CFGenKbRuleCartByNameIdxKey& rhs );
		bool operator >( const CFGenKbRuleCartPKey& rhs );
		bool operator >( const CFGenKbRuleCartBuff& rhs );
		cfcore::CFGenKbRuleCartBuff operator =( cfcore::CFGenKbRuleCartBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs );
	bool operator <(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs );

	bool operator >(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs );
	bool operator >(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs );

	template<> struct hash<cfcore::CFGenKbRuleCartBuff> {
		typedef cfcore::CFGenKbRuleCartBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

