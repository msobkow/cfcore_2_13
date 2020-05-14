#pragma once

// Description: C++18 specification for a GenItem buffer object.

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

	class CFGenKbGenItemPKey;
	class CFGenKbGenItemByTenantIdxKey;
	class CFGenKbGenItemByCartIdxKey;
	class CFGenKbGenItemByRuleTypeIdxKey;
	class CFGenKbGenItemByToolSetIdxKey;
	class CFGenKbGenItemByScopeIdxKey;
	class CFGenKbGenItemByGenDefIdxKey;
	class CFGenKbGenItemByAltIdxKey;
	class CFGenKbGenItemByGelExecIdxKey;
	class CFGenKbGenItemByProbeIdxKey;

	class CFGenKbGenItemBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TENANTID;
		static const std::string COLNAME_CARTRIDGEID;
		static const std::string COLNAME_ITEMID;
		static const std::string COLNAME_RULETYPEID;
		static const std::string COLNAME_NAME;
		static const std::string COLNAME_TOOLSETID;
		static const std::string COLNAME_SCOPEDEFID;
		static const std::string COLNAME_GENDEFID;
		static const std::string COLNAME_GELEXECUTABLETENANTID;
		static const std::string COLNAME_GELEXECUTABLEGELCACHEID;
		static const std::string COLNAME_GELEXECUTABLEID;
		static const std::string COLNAME_PROBETENANTID;
		static const std::string COLNAME_PROBECARTRIDGEID;
		static const std::string COLNAME_PROBEGENITEMID;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t CARTRIDGEID_INIT_VALUE;
		static const int64_t ITEMID_INIT_VALUE;
		static const int16_t RULETYPEID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int16_t TOOLSETID_INIT_VALUE;
		static const int16_t SCOPEDEFID_INIT_VALUE;
		static const int16_t GENDEFID_INIT_VALUE;
		static const int64_t GELEXECUTABLETENANTID_INIT_VALUE;
		static const int64_t GELEXECUTABLEGELCACHEID_INIT_VALUE;
		static const int64_t GELEXECUTABLEID_INIT_VALUE;
		static const int64_t PROBETENANTID_INIT_VALUE;
		static const int64_t PROBECARTRIDGEID_INIT_VALUE;
		static const int64_t PROBEGENITEMID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t CARTRIDGEID_MIN_VALUE;
		static const int64_t ITEMID_MIN_VALUE;
		static const int16_t RULETYPEID_MIN_VALUE;
		static const int16_t TOOLSETID_MIN_VALUE;
		static const int16_t SCOPEDEFID_MIN_VALUE;
		static const int16_t GENDEFID_MIN_VALUE;
		static const int64_t GELEXECUTABLETENANTID_MIN_VALUE;
		static const int64_t GELEXECUTABLEGELCACHEID_MIN_VALUE;
		static const int64_t GELEXECUTABLEID_MIN_VALUE;
		static const int64_t PROBETENANTID_MIN_VALUE;
		static const int64_t PROBECARTRIDGEID_MIN_VALUE;
		static const int64_t PROBEGENITEMID_MIN_VALUE;
		static const int64_t ITEMID_MAX_VALUE;
		static const int16_t RULETYPEID_MAX_VALUE;
		static const int16_t TOOLSETID_MAX_VALUE;
		static const int16_t SCOPEDEFID_MAX_VALUE;
		static const int16_t GENDEFID_MAX_VALUE;
		static const int64_t PROBEGENITEMID_MAX_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
	protected:
		int64_t requiredTenantId;
		int64_t requiredCartridgeId;
		int64_t requiredItemId;
		int16_t requiredRuleTypeId;
		std::string* requiredName;
		int16_t requiredToolSetId;
		cflib::CFLibNullableInt16 optionalScopeDefId;
		int16_t requiredGenDefId;
		cflib::CFLibNullableInt64 optionalGelExecutableTenantId;
		cflib::CFLibNullableInt64 optionalGelExecutableGelCacheId;
		cflib::CFLibNullableInt64 optionalGelExecutableId;
		cflib::CFLibNullableInt64 optionalProbeTenantId;
		cflib::CFLibNullableInt64 optionalProbeCartridgeId;
		cflib::CFLibNullableInt64 optionalProbeGenItemId;
		int32_t requiredRevision;
	public:
		CFGenKbGenItemBuff();

		CFGenKbGenItemBuff( const CFGenKbGenItemBuff& src );

		virtual ~CFGenKbGenItemBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredCartridgeId() const;
		virtual const int64_t* getRequiredCartridgeIdReference() const;
		virtual void setRequiredCartridgeId( const int64_t value );

		virtual const int64_t getRequiredItemId() const;
		virtual const int64_t* getRequiredItemIdReference() const;
		virtual void setRequiredItemId( const int64_t value );

		virtual const int16_t getRequiredRuleTypeId() const;
		virtual const int16_t* getRequiredRuleTypeIdReference() const;
		virtual void setRequiredRuleTypeId( const int16_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual const int16_t getRequiredToolSetId() const;
		virtual const int16_t* getRequiredToolSetIdReference() const;
		virtual void setRequiredToolSetId( const int16_t value );

		virtual const int16_t getOptionalScopeDefIdValue() const;
		virtual const int16_t* getOptionalScopeDefIdReference() const;
		virtual const bool isOptionalScopeDefIdNull() const;
		virtual void setOptionalScopeDefIdNull();
		virtual void setOptionalScopeDefIdValue( const int16_t value );

		virtual const int16_t getRequiredGenDefId() const;
		virtual const int16_t* getRequiredGenDefIdReference() const;
		virtual void setRequiredGenDefId( const int16_t value );

		virtual const int64_t getOptionalGelExecutableTenantIdValue() const;
		virtual const int64_t* getOptionalGelExecutableTenantIdReference() const;
		virtual const bool isOptionalGelExecutableTenantIdNull() const;
		virtual void setOptionalGelExecutableTenantIdNull();
		virtual void setOptionalGelExecutableTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalGelExecutableGelCacheIdValue() const;
		virtual const int64_t* getOptionalGelExecutableGelCacheIdReference() const;
		virtual const bool isOptionalGelExecutableGelCacheIdNull() const;
		virtual void setOptionalGelExecutableGelCacheIdNull();
		virtual void setOptionalGelExecutableGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalGelExecutableIdValue() const;
		virtual const int64_t* getOptionalGelExecutableIdReference() const;
		virtual const bool isOptionalGelExecutableIdNull() const;
		virtual void setOptionalGelExecutableIdNull();
		virtual void setOptionalGelExecutableIdValue( const int64_t value );

		virtual const int64_t getOptionalProbeTenantIdValue() const;
		virtual const int64_t* getOptionalProbeTenantIdReference() const;
		virtual const bool isOptionalProbeTenantIdNull() const;
		virtual void setOptionalProbeTenantIdNull();
		virtual void setOptionalProbeTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalProbeCartridgeIdValue() const;
		virtual const int64_t* getOptionalProbeCartridgeIdReference() const;
		virtual const bool isOptionalProbeCartridgeIdNull() const;
		virtual void setOptionalProbeCartridgeIdNull();
		virtual void setOptionalProbeCartridgeIdValue( const int64_t value );

		virtual const int64_t getOptionalProbeGenItemIdValue() const;
		virtual const int64_t* getOptionalProbeGenItemIdReference() const;
		virtual const bool isOptionalProbeGenItemIdNull() const;
		virtual void setOptionalProbeGenItemIdNull();
		virtual void setOptionalProbeGenItemIdValue( const int64_t value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGenItemByTenantIdxKey& rhs );
		bool operator <( const CFGenKbGenItemByCartIdxKey& rhs );
		bool operator <( const CFGenKbGenItemByRuleTypeIdxKey& rhs );
		bool operator <( const CFGenKbGenItemByToolSetIdxKey& rhs );
		bool operator <( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator <( const CFGenKbGenItemByGenDefIdxKey& rhs );
		bool operator <( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator <( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator <( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator <( const CFGenKbGenItemPKey& rhs );
		bool operator <( const CFGenKbGenItemBuff& rhs );

		bool operator <=( const CFGenKbGenItemByTenantIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemByCartIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemByRuleTypeIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemByToolSetIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemByGenDefIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemPKey& rhs );
		bool operator <=( const CFGenKbGenItemBuff& rhs );

		bool operator ==( const CFGenKbGenItemByTenantIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemByCartIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemByRuleTypeIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemByToolSetIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemByGenDefIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemPKey& rhs );
		bool operator ==( const CFGenKbGenItemBuff& rhs );

		bool operator !=( const CFGenKbGenItemByTenantIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemByCartIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemByRuleTypeIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemByToolSetIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemByGenDefIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemPKey& rhs );
		bool operator !=( const CFGenKbGenItemBuff& rhs );

		bool operator >=( const CFGenKbGenItemByTenantIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemByCartIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemByRuleTypeIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemByToolSetIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemByGenDefIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemPKey& rhs );
		bool operator >=( const CFGenKbGenItemBuff& rhs );

		bool operator >( const CFGenKbGenItemByTenantIdxKey& rhs );
		bool operator >( const CFGenKbGenItemByCartIdxKey& rhs );
		bool operator >( const CFGenKbGenItemByRuleTypeIdxKey& rhs );
		bool operator >( const CFGenKbGenItemByToolSetIdxKey& rhs );
		bool operator >( const CFGenKbGenItemByScopeIdxKey& rhs );
		bool operator >( const CFGenKbGenItemByGenDefIdxKey& rhs );
		bool operator >( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator >( const CFGenKbGenItemByGelExecIdxKey& rhs );
		bool operator >( const CFGenKbGenItemByProbeIdxKey& rhs );
		bool operator >( const CFGenKbGenItemPKey& rhs );
		bool operator >( const CFGenKbGenItemBuff& rhs );
		cfcore::CFGenKbGenItemBuff operator =( cfcore::CFGenKbGenItemBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenItemBuff> {
		typedef cfcore::CFGenKbGenItemBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

