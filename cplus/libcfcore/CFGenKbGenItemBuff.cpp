// Description: C++18 implementation for a GenItem buffer object.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbGenItemByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByCartIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByRuleTypeIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByToolSetIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByScopeIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByGenDefIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByAltIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByGelExecIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByProbeIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGenItemBuff::S_VALUE( "value" );
	const std::string CFGenKbGenItemBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbGenItemBuff::GENDEFNAME( "GenItem" );
	const classcode_t CFGenKbGenItemBuff::CLASS_CODE = 0xa920L;
	const std::string CFGenKbGenItemBuff::CLASS_NAME( "CFGenKbGenItemBuff" );
		const std::string CFGenKbGenItemBuff::COLNAME_TENANTID( "TenantId" );
		const std::string CFGenKbGenItemBuff::COLNAME_CARTRIDGEID( "CartridgeId" );
		const std::string CFGenKbGenItemBuff::COLNAME_ITEMID( "ItemId" );
		const std::string CFGenKbGenItemBuff::COLNAME_RULETYPEID( "RuleTypeId" );
		const std::string CFGenKbGenItemBuff::COLNAME_NAME( "Name" );
		const std::string CFGenKbGenItemBuff::COLNAME_TOOLSETID( "ToolSetId" );
		const std::string CFGenKbGenItemBuff::COLNAME_SCOPEDEFID( "ScopeDefId" );
		const std::string CFGenKbGenItemBuff::COLNAME_GENDEFID( "GenDefId" );
		const std::string CFGenKbGenItemBuff::COLNAME_GELEXECUTABLETENANTID( "GelExecutableTenantId" );
		const std::string CFGenKbGenItemBuff::COLNAME_GELEXECUTABLEGELCACHEID( "GelExecutableGelCacheId" );
		const std::string CFGenKbGenItemBuff::COLNAME_GELEXECUTABLEID( "GelExecutableId" );
		const std::string CFGenKbGenItemBuff::COLNAME_PROBETENANTID( "ProbeTenantId" );
		const std::string CFGenKbGenItemBuff::COLNAME_PROBECARTRIDGEID( "ProbeCartridgeId" );
		const std::string CFGenKbGenItemBuff::COLNAME_PROBEGENITEMID( "ProbeGenItemId" );
	const int64_t CFGenKbGenItemBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::CARTRIDGEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::ITEMID_INIT_VALUE = 0LL;
	const int16_t CFGenKbGenItemBuff::RULETYPEID_INIT_VALUE = (int16_t)0;
	const std::string CFGenKbGenItemBuff::NAME_INIT_VALUE( "" );
	const int16_t CFGenKbGenItemBuff::TOOLSETID_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbGenItemBuff::SCOPEDEFID_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbGenItemBuff::GENDEFID_INIT_VALUE = (int16_t)0;
	const int64_t CFGenKbGenItemBuff::GELEXECUTABLETENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::GELEXECUTABLEGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::GELEXECUTABLEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::PROBETENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::PROBECARTRIDGEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::PROBEGENITEMID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::CARTRIDGEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::ITEMID_MIN_VALUE = 0LL;
	const int16_t CFGenKbGenItemBuff::RULETYPEID_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbGenItemBuff::TOOLSETID_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbGenItemBuff::SCOPEDEFID_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbGenItemBuff::GENDEFID_MIN_VALUE = (int16_t)0;
	const int64_t CFGenKbGenItemBuff::GELEXECUTABLETENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::GELEXECUTABLEGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::GELEXECUTABLEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::PROBETENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::PROBECARTRIDGEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::PROBEGENITEMID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenItemBuff::ITEMID_MAX_VALUE = 2147483647LL;
	const int16_t CFGenKbGenItemBuff::RULETYPEID_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbGenItemBuff::TOOLSETID_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbGenItemBuff::SCOPEDEFID_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbGenItemBuff::GENDEFID_MAX_VALUE = (int16_t)32767;
	const int64_t CFGenKbGenItemBuff::PROBEGENITEMID_MAX_VALUE = 2147483647LL;
	const std::string::size_type CFGenKbGenItemBuff::NAME_MAX_LEN = 127;

	CFGenKbGenItemBuff::CFGenKbGenItemBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredTenantId = cfcore::CFGenKbGenItemBuff::TENANTID_INIT_VALUE;
		requiredCartridgeId = cfcore::CFGenKbGenItemBuff::CARTRIDGEID_INIT_VALUE;
		requiredItemId = cfcore::CFGenKbGenItemBuff::ITEMID_INIT_VALUE;
		requiredRuleTypeId = cfcore::CFGenKbGenItemBuff::RULETYPEID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbGenItemBuff::NAME_INIT_VALUE );
		requiredToolSetId = cfcore::CFGenKbGenItemBuff::TOOLSETID_INIT_VALUE;
		optionalScopeDefId.setNull();
		requiredGenDefId = cfcore::CFGenKbGenItemBuff::GENDEFID_INIT_VALUE;
		optionalGelExecutableTenantId.setNull();
		optionalGelExecutableGelCacheId.setNull();
		optionalGelExecutableId.setNull();
		optionalProbeTenantId.setNull();
		optionalProbeCartridgeId.setNull();
		optionalProbeGenItemId.setNull();
	}

	CFGenKbGenItemBuff::CFGenKbGenItemBuff( const CFGenKbGenItemBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredTenantId = cfcore::CFGenKbGenItemBuff::TENANTID_INIT_VALUE;
		requiredCartridgeId = cfcore::CFGenKbGenItemBuff::CARTRIDGEID_INIT_VALUE;
		requiredItemId = cfcore::CFGenKbGenItemBuff::ITEMID_INIT_VALUE;
		requiredRuleTypeId = cfcore::CFGenKbGenItemBuff::RULETYPEID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbGenItemBuff::NAME_INIT_VALUE );
		requiredToolSetId = cfcore::CFGenKbGenItemBuff::TOOLSETID_INIT_VALUE;
		optionalScopeDefId.setNull();
		requiredGenDefId = cfcore::CFGenKbGenItemBuff::GENDEFID_INIT_VALUE;
		optionalGelExecutableTenantId.setNull();
		optionalGelExecutableGelCacheId.setNull();
		optionalGelExecutableId.setNull();
		optionalProbeTenantId.setNull();
		optionalProbeCartridgeId.setNull();
		optionalProbeGenItemId.setNull();
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredCartridgeId( src.getRequiredCartridgeId() );
		setRequiredItemId( src.getRequiredItemId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredRuleTypeId( src.getRequiredRuleTypeId() );
		setRequiredName( src.getRequiredName() );
		setRequiredToolSetId( src.getRequiredToolSetId() );
		if( src.isOptionalScopeDefIdNull() ) {
			setOptionalScopeDefIdNull();
		}
		else {
			setOptionalScopeDefIdValue( src.getOptionalScopeDefIdValue() );
		}
		setRequiredGenDefId( src.getRequiredGenDefId() );
		if( src.isOptionalGelExecutableTenantIdNull() ) {
			setOptionalGelExecutableTenantIdNull();
		}
		else {
			setOptionalGelExecutableTenantIdValue( src.getOptionalGelExecutableTenantIdValue() );
		}
		if( src.isOptionalGelExecutableGelCacheIdNull() ) {
			setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			setOptionalGelExecutableGelCacheIdValue( src.getOptionalGelExecutableGelCacheIdValue() );
		}
		if( src.isOptionalGelExecutableIdNull() ) {
			setOptionalGelExecutableIdNull();
		}
		else {
			setOptionalGelExecutableIdValue( src.getOptionalGelExecutableIdValue() );
		}
		if( src.isOptionalProbeTenantIdNull() ) {
			setOptionalProbeTenantIdNull();
		}
		else {
			setOptionalProbeTenantIdValue( src.getOptionalProbeTenantIdValue() );
		}
		if( src.isOptionalProbeCartridgeIdNull() ) {
			setOptionalProbeCartridgeIdNull();
		}
		else {
			setOptionalProbeCartridgeIdValue( src.getOptionalProbeCartridgeIdValue() );
		}
		if( src.isOptionalProbeGenItemIdNull() ) {
			setOptionalProbeGenItemIdNull();
		}
		else {
			setOptionalProbeGenItemIdValue( src.getOptionalProbeGenItemIdValue() );
		}
	}

	CFGenKbGenItemBuff::~CFGenKbGenItemBuff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbGenItemBuff::clone() {
		CFGenKbGenItemBuff* copy = new CFGenKbGenItemBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGenItemBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGenItemBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGenItemBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const int64_t CFGenKbGenItemBuff::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbGenItemBuff::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbGenItemBuff::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbGenItemBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFGenKbGenItemBuff::getRequiredCartridgeId() const {
		return( requiredCartridgeId );
	}

	const int64_t* CFGenKbGenItemBuff::getRequiredCartridgeIdReference() const {
		return( &requiredCartridgeId );
	}

	void CFGenKbGenItemBuff::setRequiredCartridgeId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredCartridgeId" );
		if( value < cfcore::CFGenKbGenItemBuff::CARTRIDGEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::CARTRIDGEID_MIN_VALUE );
		}
		requiredCartridgeId = value;
	}

	const int64_t CFGenKbGenItemBuff::getRequiredItemId() const {
		return( requiredItemId );
	}

	const int64_t* CFGenKbGenItemBuff::getRequiredItemIdReference() const {
		return( &requiredItemId );
	}

	void CFGenKbGenItemBuff::setRequiredItemId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredItemId" );
		if( value < cfcore::CFGenKbGenItemBuff::ITEMID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::ITEMID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGenItemBuff::ITEMID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::ITEMID_MAX_VALUE );
		}
		requiredItemId = value;
	}

	const int16_t CFGenKbGenItemBuff::getRequiredRuleTypeId() const {
		return( requiredRuleTypeId );
	}

	const int16_t* CFGenKbGenItemBuff::getRequiredRuleTypeIdReference() const {
		return( &requiredRuleTypeId );
	}

	void CFGenKbGenItemBuff::setRequiredRuleTypeId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredRuleTypeId" );
		if( value < cfcore::CFGenKbGenItemBuff::RULETYPEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::RULETYPEID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGenItemBuff::RULETYPEID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::RULETYPEID_MAX_VALUE );
		}
		requiredRuleTypeId = value;
	}

	const std::string& CFGenKbGenItemBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFGenKbGenItemBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFGenKbGenItemBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFGenKbGenItemBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenItemBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	const int16_t CFGenKbGenItemBuff::getRequiredToolSetId() const {
		return( requiredToolSetId );
	}

	const int16_t* CFGenKbGenItemBuff::getRequiredToolSetIdReference() const {
		return( &requiredToolSetId );
	}

	void CFGenKbGenItemBuff::setRequiredToolSetId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredToolSetId" );
		if( value < cfcore::CFGenKbGenItemBuff::TOOLSETID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::TOOLSETID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGenItemBuff::TOOLSETID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::TOOLSETID_MAX_VALUE );
		}
		requiredToolSetId = value;
	}

	const bool CFGenKbGenItemBuff::isOptionalScopeDefIdNull() const {
		return( optionalScopeDefId.isNull() );
	}

	const int16_t CFGenKbGenItemBuff::getOptionalScopeDefIdValue() const {
		return( optionalScopeDefId.getValue() );
	}

	const int16_t* CFGenKbGenItemBuff::getOptionalScopeDefIdReference() const {
		return( optionalScopeDefId.getReference() );
	}

	void CFGenKbGenItemBuff::setOptionalScopeDefIdNull() {
		optionalScopeDefId.setNull();
	}

	void CFGenKbGenItemBuff::setOptionalScopeDefIdValue( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalScopeDefIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::SCOPEDEFID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::SCOPEDEFID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGenItemBuff::SCOPEDEFID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::SCOPEDEFID_MAX_VALUE );
		}
		optionalScopeDefId.setValue( value );
	}

	const int16_t CFGenKbGenItemBuff::getRequiredGenDefId() const {
		return( requiredGenDefId );
	}

	const int16_t* CFGenKbGenItemBuff::getRequiredGenDefIdReference() const {
		return( &requiredGenDefId );
	}

	void CFGenKbGenItemBuff::setRequiredGenDefId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredGenDefId" );
		if( value < cfcore::CFGenKbGenItemBuff::GENDEFID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::GENDEFID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGenItemBuff::GENDEFID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::GENDEFID_MAX_VALUE );
		}
		requiredGenDefId = value;
	}

	const bool CFGenKbGenItemBuff::isOptionalGelExecutableTenantIdNull() const {
		return( optionalGelExecutableTenantId.isNull() );
	}

	const int64_t CFGenKbGenItemBuff::getOptionalGelExecutableTenantIdValue() const {
		return( optionalGelExecutableTenantId.getValue() );
	}

	const int64_t* CFGenKbGenItemBuff::getOptionalGelExecutableTenantIdReference() const {
		return( optionalGelExecutableTenantId.getReference() );
	}

	void CFGenKbGenItemBuff::setOptionalGelExecutableTenantIdNull() {
		optionalGelExecutableTenantId.setNull();
	}

	void CFGenKbGenItemBuff::setOptionalGelExecutableTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalGelExecutableTenantIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::GELEXECUTABLETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::GELEXECUTABLETENANTID_MIN_VALUE );
		}
		optionalGelExecutableTenantId.setValue( value );
	}

	const bool CFGenKbGenItemBuff::isOptionalGelExecutableGelCacheIdNull() const {
		return( optionalGelExecutableGelCacheId.isNull() );
	}

	const int64_t CFGenKbGenItemBuff::getOptionalGelExecutableGelCacheIdValue() const {
		return( optionalGelExecutableGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenItemBuff::getOptionalGelExecutableGelCacheIdReference() const {
		return( optionalGelExecutableGelCacheId.getReference() );
	}

	void CFGenKbGenItemBuff::setOptionalGelExecutableGelCacheIdNull() {
		optionalGelExecutableGelCacheId.setNull();
	}

	void CFGenKbGenItemBuff::setOptionalGelExecutableGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalGelExecutableGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::GELEXECUTABLEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::GELEXECUTABLEGELCACHEID_MIN_VALUE );
		}
		optionalGelExecutableGelCacheId.setValue( value );
	}

	const bool CFGenKbGenItemBuff::isOptionalGelExecutableIdNull() const {
		return( optionalGelExecutableId.isNull() );
	}

	const int64_t CFGenKbGenItemBuff::getOptionalGelExecutableIdValue() const {
		return( optionalGelExecutableId.getValue() );
	}

	const int64_t* CFGenKbGenItemBuff::getOptionalGelExecutableIdReference() const {
		return( optionalGelExecutableId.getReference() );
	}

	void CFGenKbGenItemBuff::setOptionalGelExecutableIdNull() {
		optionalGelExecutableId.setNull();
	}

	void CFGenKbGenItemBuff::setOptionalGelExecutableIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalGelExecutableIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::GELEXECUTABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::GELEXECUTABLEID_MIN_VALUE );
		}
		optionalGelExecutableId.setValue( value );
	}

	const bool CFGenKbGenItemBuff::isOptionalProbeTenantIdNull() const {
		return( optionalProbeTenantId.isNull() );
	}

	const int64_t CFGenKbGenItemBuff::getOptionalProbeTenantIdValue() const {
		return( optionalProbeTenantId.getValue() );
	}

	const int64_t* CFGenKbGenItemBuff::getOptionalProbeTenantIdReference() const {
		return( optionalProbeTenantId.getReference() );
	}

	void CFGenKbGenItemBuff::setOptionalProbeTenantIdNull() {
		optionalProbeTenantId.setNull();
	}

	void CFGenKbGenItemBuff::setOptionalProbeTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalProbeTenantIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::PROBETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::PROBETENANTID_MIN_VALUE );
		}
		optionalProbeTenantId.setValue( value );
	}

	const bool CFGenKbGenItemBuff::isOptionalProbeCartridgeIdNull() const {
		return( optionalProbeCartridgeId.isNull() );
	}

	const int64_t CFGenKbGenItemBuff::getOptionalProbeCartridgeIdValue() const {
		return( optionalProbeCartridgeId.getValue() );
	}

	const int64_t* CFGenKbGenItemBuff::getOptionalProbeCartridgeIdReference() const {
		return( optionalProbeCartridgeId.getReference() );
	}

	void CFGenKbGenItemBuff::setOptionalProbeCartridgeIdNull() {
		optionalProbeCartridgeId.setNull();
	}

	void CFGenKbGenItemBuff::setOptionalProbeCartridgeIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalProbeCartridgeIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::PROBECARTRIDGEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::PROBECARTRIDGEID_MIN_VALUE );
		}
		optionalProbeCartridgeId.setValue( value );
	}

	const bool CFGenKbGenItemBuff::isOptionalProbeGenItemIdNull() const {
		return( optionalProbeGenItemId.isNull() );
	}

	const int64_t CFGenKbGenItemBuff::getOptionalProbeGenItemIdValue() const {
		return( optionalProbeGenItemId.getValue() );
	}

	const int64_t* CFGenKbGenItemBuff::getOptionalProbeGenItemIdReference() const {
		return( optionalProbeGenItemId.getReference() );
	}

	void CFGenKbGenItemBuff::setOptionalProbeGenItemIdNull() {
		optionalProbeGenItemId.setNull();
	}

	void CFGenKbGenItemBuff::setOptionalProbeGenItemIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalProbeGenItemIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::PROBEGENITEMID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::PROBEGENITEMID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGenItemBuff::PROBEGENITEMID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::PROBEGENITEMID_MAX_VALUE );
		}
		optionalProbeGenItemId.setValue( value );
	}

	int32_t CFGenKbGenItemBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbGenItemBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbGenItemBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredCartridgeId() );
		hashCode = hashCode + (int)( getRequiredItemId() );
		hashCode = ( hashCode * 0x10000 ) + getRequiredRuleTypeId();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		hashCode = ( hashCode * 0x10000 ) + getRequiredToolSetId();
		if( ! isOptionalScopeDefIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalScopeDefIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		hashCode = ( hashCode * 0x10000 ) + getRequiredGenDefId();
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalGelExecutableTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalGelExecutableGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalGelExecutableIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalProbeTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalProbeCartridgeIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalProbeGenItemIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFGenKbGenItemBuff CFGenKbGenItemBuff::operator =( cfcore::CFGenKbGenItemBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredCartridgeId( src.getRequiredCartridgeId() );
		setRequiredItemId( src.getRequiredItemId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredRuleTypeId( src.getRequiredRuleTypeId() );
		setRequiredName( src.getRequiredName() );
		setRequiredToolSetId( src.getRequiredToolSetId() );
		if( src.isOptionalScopeDefIdNull() ) {
			setOptionalScopeDefIdNull();
		}
		else {
			setOptionalScopeDefIdValue( src.getOptionalScopeDefIdValue() );
		}
		setRequiredGenDefId( src.getRequiredGenDefId() );
		if( src.isOptionalGelExecutableTenantIdNull() ) {
			setOptionalGelExecutableTenantIdNull();
		}
		else {
			setOptionalGelExecutableTenantIdValue( src.getOptionalGelExecutableTenantIdValue() );
		}
		if( src.isOptionalGelExecutableGelCacheIdNull() ) {
			setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			setOptionalGelExecutableGelCacheIdValue( src.getOptionalGelExecutableGelCacheIdValue() );
		}
		if( src.isOptionalGelExecutableIdNull() ) {
			setOptionalGelExecutableIdNull();
		}
		else {
			setOptionalGelExecutableIdValue( src.getOptionalGelExecutableIdValue() );
		}
		if( src.isOptionalProbeTenantIdNull() ) {
			setOptionalProbeTenantIdNull();
		}
		else {
			setOptionalProbeTenantIdValue( src.getOptionalProbeTenantIdValue() );
		}
		if( src.isOptionalProbeCartridgeIdNull() ) {
			setOptionalProbeCartridgeIdNull();
		}
		else {
			setOptionalProbeCartridgeIdValue( src.getOptionalProbeCartridgeIdValue() );
		}
		if( src.isOptionalProbeGenItemIdNull() ) {
			setOptionalProbeGenItemIdNull();
		}
		else {
			setOptionalProbeGenItemIdValue( src.getOptionalProbeGenItemIdValue() );
		}
		return( *this );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemByAltIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemByAltIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator <=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! isOptionalScopeDefIdNull() ) {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				if( getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemByAltIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				if( getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				if( getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				if( getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				if( getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				if( getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				if( getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				if( getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		if( getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator ==( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		if( getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( false );
		}
		if( getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				if( getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				if( getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				if( getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				if( getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				if( getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				if( getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				if( getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemByAltIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator !=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( true );
		}
		if( getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemByAltIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemByAltIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemBuff::operator >( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbGenItemBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenItemBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_CartridgeId( "CartridgeId" );
		static const std::string S_ItemId( "ItemId" );
		static const std::string S_RuleTypeId( "RuleTypeId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ToolSetId( "ToolSetId" );
		static const std::string S_ScopeDefId( "ScopeDefId" );
		static const std::string S_GenDefId( "GenDefId" );
		static const std::string S_GelExecutableTenantId( "GelExecutableTenantId" );
		static const std::string S_GelExecutableGelCacheId( "GelExecutableGelCacheId" );
		static const std::string S_GelExecutableId( "GelExecutableId" );
		static const std::string S_ProbeTenantId( "ProbeTenantId" );
		static const std::string S_ProbeCartridgeId( "ProbeCartridgeId" );
		static const std::string S_ProbeGenItemId( "ProbeGenItemId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CartridgeId, getRequiredCartridgeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ItemId, getRequiredItemId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_RuleTypeId, getRequiredRuleTypeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolSetId, getRequiredToolSetId() ) );
		if( ! isOptionalScopeDefIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ScopeDefId, getOptionalScopeDefIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_GenDefId, getRequiredGenDefId() ) );
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableTenantId, getOptionalGelExecutableTenantIdValue() ) );
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableGelCacheId, getOptionalGelExecutableGelCacheIdValue() ) );
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableId, getOptionalGelExecutableIdValue() ) );
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeTenantId, getOptionalProbeTenantIdValue() ) );
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeCartridgeId, getOptionalProbeCartridgeIdValue() ) );
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeGenItemId, getOptionalProbeGenItemIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				if( lhs.getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				if( lhs.getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				if( lhs.getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				if( lhs.getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				if( lhs.getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				if( lhs.getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				if( lhs.getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				if( lhs.getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		if( lhs.getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		if( lhs.getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( false );
		}
		if( lhs.getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				if( lhs.getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				if( lhs.getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				if( lhs.getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				if( lhs.getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				if( lhs.getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				if( lhs.getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				if( lhs.getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( true );
		}
		if( lhs.getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByScopeIdxKey& rhs ) {
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemBuff& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

