#pragma once

// Description: C++18 specification for a GelCall buffer object.

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
	class CFGenKbGelCallByCacheIdxKey;
	class CFGenKbGelCallBySeqIdxKey;
	class CFGenKbGelCallByCallInstIdxKey;
	class CFGenKbGelCallByPrevInstIdxKey;
	class CFGenKbGelCallByNextInstIdxKey;

	class CFGenKbGelCallBuff : public CFGenKbGelInstructionBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_SEQINSTTENANTID;
		static const std::string COLNAME_SEQINSTGELCACHEID;
		static const std::string COLNAME_SEQINSTID;
		static const std::string COLNAME_CALLINSTTENANTID;
		static const std::string COLNAME_CALLINSTGELCACHEID;
		static const std::string COLNAME_CALLINSTID;
		static const std::string COLNAME_PREVINSTTENANTID;
		static const std::string COLNAME_PREVINSTGELCACHEID;
		static const std::string COLNAME_PREVINSTGELINSTID;
		static const std::string COLNAME_NEXTINSTTENANTID;
		static const std::string COLNAME_NEXTINSTGELCACHEID;
		static const std::string COLNAME_NEXTINSTGELINSTID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const int64_t GELINSTID_INIT_VALUE;
		static const int64_t SEQINSTTENANTID_INIT_VALUE;
		static const int64_t SEQINSTGELCACHEID_INIT_VALUE;
		static const int64_t SEQINSTID_INIT_VALUE;
		static const int64_t CALLINSTTENANTID_INIT_VALUE;
		static const int64_t CALLINSTGELCACHEID_INIT_VALUE;
		static const int64_t CALLINSTID_INIT_VALUE;
		static const int64_t PREVINSTTENANTID_INIT_VALUE;
		static const int64_t PREVINSTGELCACHEID_INIT_VALUE;
		static const int64_t PREVINSTGELINSTID_INIT_VALUE;
		static const int64_t NEXTINSTTENANTID_INIT_VALUE;
		static const int64_t NEXTINSTGELCACHEID_INIT_VALUE;
		static const int64_t NEXTINSTGELINSTID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const int64_t GELINSTID_MIN_VALUE;
		static const int64_t SEQINSTTENANTID_MIN_VALUE;
		static const int64_t SEQINSTGELCACHEID_MIN_VALUE;
		static const int64_t SEQINSTID_MIN_VALUE;
		static const int64_t CALLINSTTENANTID_MIN_VALUE;
		static const int64_t CALLINSTGELCACHEID_MIN_VALUE;
		static const int64_t CALLINSTID_MIN_VALUE;
		static const int64_t PREVINSTTENANTID_MIN_VALUE;
		static const int64_t PREVINSTGELCACHEID_MIN_VALUE;
		static const int64_t PREVINSTGELINSTID_MIN_VALUE;
		static const int64_t NEXTINSTTENANTID_MIN_VALUE;
		static const int64_t NEXTINSTGELCACHEID_MIN_VALUE;
		static const int64_t NEXTINSTGELINSTID_MIN_VALUE;
	protected:
		cflib::CFLibNullableInt64 optionalSeqInstTenantId;
		cflib::CFLibNullableInt64 optionalSeqInstGelCacheId;
		cflib::CFLibNullableInt64 optionalSeqInstId;
		cflib::CFLibNullableInt64 optionalCallInstTenantId;
		cflib::CFLibNullableInt64 optionalCallInstGelCacheId;
		cflib::CFLibNullableInt64 optionalCallInstId;
		cflib::CFLibNullableInt64 optionalPrevInstTenantId;
		cflib::CFLibNullableInt64 optionalPrevInstGelCacheId;
		cflib::CFLibNullableInt64 optionalPrevInstGelInstId;
		cflib::CFLibNullableInt64 optionalNextInstTenantId;
		cflib::CFLibNullableInt64 optionalNextInstGelCacheId;
		cflib::CFLibNullableInt64 optionalNextInstGelInstId;
	public:
		CFGenKbGelCallBuff();
		CFGenKbGelCallBuff( const CFGenKbGelCallBuff& src );
		virtual ~CFGenKbGelCallBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getOptionalSeqInstTenantIdValue() const;
		virtual const int64_t* getOptionalSeqInstTenantIdReference() const;
		virtual const bool isOptionalSeqInstTenantIdNull() const;
		virtual void setOptionalSeqInstTenantIdNull();
		virtual void setOptionalSeqInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalSeqInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalSeqInstGelCacheIdReference() const;
		virtual const bool isOptionalSeqInstGelCacheIdNull() const;
		virtual void setOptionalSeqInstGelCacheIdNull();
		virtual void setOptionalSeqInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalSeqInstIdValue() const;
		virtual const int64_t* getOptionalSeqInstIdReference() const;
		virtual const bool isOptionalSeqInstIdNull() const;
		virtual void setOptionalSeqInstIdNull();
		virtual void setOptionalSeqInstIdValue( const int64_t value );

		virtual const int64_t getOptionalCallInstTenantIdValue() const;
		virtual const int64_t* getOptionalCallInstTenantIdReference() const;
		virtual const bool isOptionalCallInstTenantIdNull() const;
		virtual void setOptionalCallInstTenantIdNull();
		virtual void setOptionalCallInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalCallInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalCallInstGelCacheIdReference() const;
		virtual const bool isOptionalCallInstGelCacheIdNull() const;
		virtual void setOptionalCallInstGelCacheIdNull();
		virtual void setOptionalCallInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalCallInstIdValue() const;
		virtual const int64_t* getOptionalCallInstIdReference() const;
		virtual const bool isOptionalCallInstIdNull() const;
		virtual void setOptionalCallInstIdNull();
		virtual void setOptionalCallInstIdValue( const int64_t value );

		virtual const int64_t getOptionalPrevInstTenantIdValue() const;
		virtual const int64_t* getOptionalPrevInstTenantIdReference() const;
		virtual const bool isOptionalPrevInstTenantIdNull() const;
		virtual void setOptionalPrevInstTenantIdNull();
		virtual void setOptionalPrevInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalPrevInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalPrevInstGelCacheIdReference() const;
		virtual const bool isOptionalPrevInstGelCacheIdNull() const;
		virtual void setOptionalPrevInstGelCacheIdNull();
		virtual void setOptionalPrevInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalPrevInstGelInstIdValue() const;
		virtual const int64_t* getOptionalPrevInstGelInstIdReference() const;
		virtual const bool isOptionalPrevInstGelInstIdNull() const;
		virtual void setOptionalPrevInstGelInstIdNull();
		virtual void setOptionalPrevInstGelInstIdValue( const int64_t value );

		virtual const int64_t getOptionalNextInstTenantIdValue() const;
		virtual const int64_t* getOptionalNextInstTenantIdReference() const;
		virtual const bool isOptionalNextInstTenantIdNull() const;
		virtual void setOptionalNextInstTenantIdNull();
		virtual void setOptionalNextInstTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalNextInstGelCacheIdValue() const;
		virtual const int64_t* getOptionalNextInstGelCacheIdReference() const;
		virtual const bool isOptionalNextInstGelCacheIdNull() const;
		virtual void setOptionalNextInstGelCacheIdNull();
		virtual void setOptionalNextInstGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalNextInstGelInstIdValue() const;
		virtual const int64_t* getOptionalNextInstGelInstIdReference() const;
		virtual const bool isOptionalNextInstGelInstIdNull() const;
		virtual void setOptionalNextInstGelInstIdNull();
		virtual void setOptionalNextInstGelInstIdValue( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGelCallByCacheIdxKey& rhs );
		bool operator <( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator <( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator <( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator <( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator <( const CFGenKbGelInstructionPKey& rhs );
		bool operator <( const CFGenKbGelCallBuff& rhs );

		bool operator <=( const CFGenKbGelCallByCacheIdxKey& rhs );
		bool operator <=( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator <=( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator <=( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator <=( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator <=( const CFGenKbGelInstructionPKey& rhs );
		bool operator <=( const CFGenKbGelCallBuff& rhs );

		bool operator ==( const CFGenKbGelCallByCacheIdxKey& rhs );
		bool operator ==( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator ==( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator ==( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator ==( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator ==( const CFGenKbGelInstructionPKey& rhs );
		bool operator ==( const CFGenKbGelCallBuff& rhs );

		bool operator !=( const CFGenKbGelCallByCacheIdxKey& rhs );
		bool operator !=( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator !=( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator !=( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator !=( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator !=( const CFGenKbGelInstructionPKey& rhs );
		bool operator !=( const CFGenKbGelCallBuff& rhs );

		bool operator >=( const CFGenKbGelCallByCacheIdxKey& rhs );
		bool operator >=( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator >=( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator >=( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator >=( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator >=( const CFGenKbGelInstructionPKey& rhs );
		bool operator >=( const CFGenKbGelCallBuff& rhs );

		bool operator >( const CFGenKbGelCallByCacheIdxKey& rhs );
		bool operator >( const CFGenKbGelCallBySeqIdxKey& rhs );
		bool operator >( const CFGenKbGelCallByCallInstIdxKey& rhs );
		bool operator >( const CFGenKbGelCallByPrevInstIdxKey& rhs );
		bool operator >( const CFGenKbGelCallByNextInstIdxKey& rhs );
		bool operator >( const CFGenKbGelInstructionPKey& rhs );
		bool operator >( const CFGenKbGelCallBuff& rhs );
		cfcore::CFGenKbGelCallBuff operator =( cfcore::CFGenKbGelCallBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelCallBuff> {
		typedef cfcore::CFGenKbGelCallBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

