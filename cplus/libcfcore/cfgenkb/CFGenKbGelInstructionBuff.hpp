#pragma once

// Description: C++18 specification for a GelInstruction buffer object.

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

	class CFGenKbGelInstructionPKey;
	class CFGenKbGelInstructionByTenantIdxKey;
	class CFGenKbGelInstructionByGelCacheIdxKey;
	class CFGenKbGelInstructionByChainIdxKey;

	class CFGenKbGelInstructionBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TENANTID;
		static const std::string COLNAME_GELCACHEID;
		static const std::string COLNAME_GELINSTID;
		static const std::string COLNAME_CHAININSTTENANTID;
		static const std::string COLNAME_CHAININSTGELCACHEID;
		static const std::string COLNAME_CHAININSTGELINSTID;
		static const std::string COLNAME_SOURCETEXT;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const int64_t GELINSTID_INIT_VALUE;
		static const int64_t CHAININSTTENANTID_INIT_VALUE;
		static const int64_t CHAININSTGELCACHEID_INIT_VALUE;
		static const int64_t CHAININSTGELINSTID_INIT_VALUE;
		static const std::string SOURCETEXT_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const int64_t GELINSTID_MIN_VALUE;
		static const int64_t CHAININSTTENANTID_MIN_VALUE;
		static const int64_t CHAININSTGELCACHEID_MIN_VALUE;
		static const int64_t CHAININSTGELINSTID_MIN_VALUE;
		static const std::string::size_type SOURCETEXT_MAX_LEN;
	protected:
		int64_t requiredTenantId;
		int64_t requiredGelCacheId;
		int64_t requiredGelInstId;
		cflib::CFLibNullableInt64 optionalChainInstTenantId;
		cflib::CFLibNullableInt64 optionalChainInstGelCacheId;
		cflib::CFLibNullableInt64 optionalChainInstGelInstId;
		std::string* requiredSourceText;
		int32_t requiredRevision;
	public:
		CFGenKbGelInstructionBuff();

		CFGenKbGelInstructionBuff( const CFGenKbGelInstructionBuff& src );

		virtual ~CFGenKbGelInstructionBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredGelCacheId() const;
		virtual const int64_t* getRequiredGelCacheIdReference() const;
		virtual void setRequiredGelCacheId( const int64_t value );

		virtual const int64_t getRequiredGelInstId() const;
		virtual const int64_t* getRequiredGelInstIdReference() const;
		virtual void setRequiredGelInstId( const int64_t value );

		virtual const int64_t getOptionalChainInstTenantIdValue() const;
		virtual const int64_t* getOptionalChainInstTenantIdReference() const;
		virtual const bool isOptionalChainInstTenantIdNull() const;
		virtual void setOptionalChainInstTenantIdNull();
		virtual void setOptionalChainInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalChainInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalChainInstGelCacheIdReference() const;
		virtual const bool isOptionalChainInstGelCacheIdNull() const;
		virtual void setOptionalChainInstGelCacheIdNull();
		virtual void setOptionalChainInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalChainInstGelInstIdValue() const;
		virtual const int64_t* getOptionalChainInstGelInstIdReference() const;
		virtual const bool isOptionalChainInstGelInstIdNull() const;
		virtual void setOptionalChainInstGelInstIdNull();
		virtual void setOptionalChainInstGelInstIdValue( const int64_t value );

		virtual const std::string& getRequiredSourceText() const;
		virtual const std::string* getRequiredSourceTextReference() const;
		virtual void setRequiredSourceText( const std::string& value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGelInstructionByTenantIdxKey& rhs );
		bool operator <( const CFGenKbGelInstructionByGelCacheIdxKey& rhs );
		bool operator <( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator <( const CFGenKbGelInstructionPKey& rhs );
		bool operator <( const CFGenKbGelInstructionBuff& rhs );

		bool operator <=( const CFGenKbGelInstructionByTenantIdxKey& rhs );
		bool operator <=( const CFGenKbGelInstructionByGelCacheIdxKey& rhs );
		bool operator <=( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator <=( const CFGenKbGelInstructionPKey& rhs );
		bool operator <=( const CFGenKbGelInstructionBuff& rhs );

		bool operator ==( const CFGenKbGelInstructionByTenantIdxKey& rhs );
		bool operator ==( const CFGenKbGelInstructionByGelCacheIdxKey& rhs );
		bool operator ==( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator ==( const CFGenKbGelInstructionPKey& rhs );
		bool operator ==( const CFGenKbGelInstructionBuff& rhs );

		bool operator !=( const CFGenKbGelInstructionByTenantIdxKey& rhs );
		bool operator !=( const CFGenKbGelInstructionByGelCacheIdxKey& rhs );
		bool operator !=( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator !=( const CFGenKbGelInstructionPKey& rhs );
		bool operator !=( const CFGenKbGelInstructionBuff& rhs );

		bool operator >=( const CFGenKbGelInstructionByTenantIdxKey& rhs );
		bool operator >=( const CFGenKbGelInstructionByGelCacheIdxKey& rhs );
		bool operator >=( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator >=( const CFGenKbGelInstructionPKey& rhs );
		bool operator >=( const CFGenKbGelInstructionBuff& rhs );

		bool operator >( const CFGenKbGelInstructionByTenantIdxKey& rhs );
		bool operator >( const CFGenKbGelInstructionByGelCacheIdxKey& rhs );
		bool operator >( const CFGenKbGelInstructionByChainIdxKey& rhs );
		bool operator >( const CFGenKbGelInstructionPKey& rhs );
		bool operator >( const CFGenKbGelInstructionBuff& rhs );
		cfcore::CFGenKbGelInstructionBuff operator =( cfcore::CFGenKbGelInstructionBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByTenantIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByTenantIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByTenantIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByTenantIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByTenantIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByTenantIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByGelCacheIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionByChainIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelInstructionBuff& lhs, const cfcore::CFGenKbGelInstructionBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelInstructionBuff> {
		typedef cfcore::CFGenKbGelInstructionBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

