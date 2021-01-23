#pragma once

// Description: C++18 specification for a GelSequence buffer object.

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
	class CFGenKbGelSequenceByFirstInstIdxKey;
	class CFGenKbGelSequenceByLastInstIdxKey;

	class CFGenKbGelSequenceBuff : public CFGenKbGelInstructionBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_FIRSTINSTTENANTID;
		static const std::string COLNAME_FIRSTINSTGELCACHEID;
		static const std::string COLNAME_FIRSTINSTID;
		static const std::string COLNAME_LASTINSTTENANTID;
		static const std::string COLNAME_LASTINSTGELCACHEID;
		static const std::string COLNAME_LASTINSTID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const int64_t GELINSTID_INIT_VALUE;
		static const int64_t FIRSTINSTTENANTID_INIT_VALUE;
		static const int64_t FIRSTINSTGELCACHEID_INIT_VALUE;
		static const int64_t FIRSTINSTID_INIT_VALUE;
		static const int64_t LASTINSTTENANTID_INIT_VALUE;
		static const int64_t LASTINSTGELCACHEID_INIT_VALUE;
		static const int64_t LASTINSTID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const int64_t GELINSTID_MIN_VALUE;
		static const int64_t FIRSTINSTTENANTID_MIN_VALUE;
		static const int64_t FIRSTINSTGELCACHEID_MIN_VALUE;
		static const int64_t FIRSTINSTID_MIN_VALUE;
		static const int64_t LASTINSTTENANTID_MIN_VALUE;
		static const int64_t LASTINSTGELCACHEID_MIN_VALUE;
		static const int64_t LASTINSTID_MIN_VALUE;
	protected:
		cflib::CFLibNullableInt64 optionalFirstInstTenantId;
		cflib::CFLibNullableInt64 optionalFirstInstGelCacheId;
		cflib::CFLibNullableInt64 optionalFirstInstId;
		cflib::CFLibNullableInt64 optionalLastInstTenantId;
		cflib::CFLibNullableInt64 optionalLastInstGelCacheId;
		cflib::CFLibNullableInt64 optionalLastInstId;
	public:
		CFGenKbGelSequenceBuff();
		CFGenKbGelSequenceBuff( const CFGenKbGelSequenceBuff& src );
		virtual ~CFGenKbGelSequenceBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getOptionalFirstInstTenantIdValue() const;
		virtual const int64_t* getOptionalFirstInstTenantIdReference() const;
		virtual const bool isOptionalFirstInstTenantIdNull() const;
		virtual void setOptionalFirstInstTenantIdNull();
		virtual void setOptionalFirstInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalFirstInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalFirstInstGelCacheIdReference() const;
		virtual const bool isOptionalFirstInstGelCacheIdNull() const;
		virtual void setOptionalFirstInstGelCacheIdNull();
		virtual void setOptionalFirstInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalFirstInstIdValue() const;
		virtual const int64_t* getOptionalFirstInstIdReference() const;
		virtual const bool isOptionalFirstInstIdNull() const;
		virtual void setOptionalFirstInstIdNull();
		virtual void setOptionalFirstInstIdValue( const int64_t value );

		virtual const int64_t getOptionalLastInstTenantIdValue() const;
		virtual const int64_t* getOptionalLastInstTenantIdReference() const;
		virtual const bool isOptionalLastInstTenantIdNull() const;
		virtual void setOptionalLastInstTenantIdNull();
		virtual void setOptionalLastInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalLastInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalLastInstGelCacheIdReference() const;
		virtual const bool isOptionalLastInstGelCacheIdNull() const;
		virtual void setOptionalLastInstGelCacheIdNull();
		virtual void setOptionalLastInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalLastInstIdValue() const;
		virtual const int64_t* getOptionalLastInstIdReference() const;
		virtual const bool isOptionalLastInstIdNull() const;
		virtual void setOptionalLastInstIdNull();
		virtual void setOptionalLastInstIdValue( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator <( const CFGenKbGelSequenceByLastInstIdxKey& rhs );
		bool operator <( const CFGenKbGelInstructionPKey& rhs );
		bool operator <( const CFGenKbGelSequenceBuff& rhs );

		bool operator <=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator <=( const CFGenKbGelSequenceByLastInstIdxKey& rhs );
		bool operator <=( const CFGenKbGelInstructionPKey& rhs );
		bool operator <=( const CFGenKbGelSequenceBuff& rhs );

		bool operator ==( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator ==( const CFGenKbGelSequenceByLastInstIdxKey& rhs );
		bool operator ==( const CFGenKbGelInstructionPKey& rhs );
		bool operator ==( const CFGenKbGelSequenceBuff& rhs );

		bool operator !=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator !=( const CFGenKbGelSequenceByLastInstIdxKey& rhs );
		bool operator !=( const CFGenKbGelInstructionPKey& rhs );
		bool operator !=( const CFGenKbGelSequenceBuff& rhs );

		bool operator >=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator >=( const CFGenKbGelSequenceByLastInstIdxKey& rhs );
		bool operator >=( const CFGenKbGelInstructionPKey& rhs );
		bool operator >=( const CFGenKbGelSequenceBuff& rhs );

		bool operator >( const CFGenKbGelSequenceByFirstInstIdxKey& rhs );
		bool operator >( const CFGenKbGelSequenceByLastInstIdxKey& rhs );
		bool operator >( const CFGenKbGelInstructionPKey& rhs );
		bool operator >( const CFGenKbGelSequenceBuff& rhs );
		cfcore::CFGenKbGelSequenceBuff operator =( cfcore::CFGenKbGelSequenceBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelSequenceBuff> {
		typedef cfcore::CFGenKbGelSequenceBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

