// Description: C++18 implementation for a GenRule buffer object.

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
#include <cfgenkb/CFGenKbGenRuleByBodyIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGenRuleBuff::GENDEFNAME( "GenRule" );
	const classcode_t CFGenKbGenRuleBuff::CLASS_CODE = 0xa923L;
	const std::string CFGenKbGenRuleBuff::CLASS_NAME( "CFGenKbGenRuleBuff" );
		const std::string CFGenKbGenRuleBuff::COLNAME_DEFINEDNEAR( "DefinedNear" );
		const std::string CFGenKbGenRuleBuff::COLNAME_BODY( "Body" );
		const std::string CFGenKbGenRuleBuff::COLNAME_BODYTENANTID( "BodyTenantId" );
		const std::string CFGenKbGenRuleBuff::COLNAME_BODYGELCACHEID( "BodyGelCacheId" );
		const std::string CFGenKbGenRuleBuff::COLNAME_BODYGELID( "BodyGelId" );
	const int64_t CFGenKbGenRuleBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::CARTRIDGEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::ITEMID_INIT_VALUE = 0LL;
	const std::string CFGenKbGenRuleBuff::DEFINEDNEAR_INIT_VALUE( "internal" );
	const std::string CFGenKbGenRuleBuff::BODY_INIT_VALUE( "" );
	const int64_t CFGenKbGenRuleBuff::BODYTENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::BODYGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::BODYGELID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::CARTRIDGEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::ITEMID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::BODYTENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::BODYGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::BODYGELID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenRuleBuff::ITEMID_MAX_VALUE = 2147483647LL;
	const std::string::size_type CFGenKbGenRuleBuff::DEFINEDNEAR_MAX_LEN = 2000;
	const std::string::size_type CFGenKbGenRuleBuff::BODY_MAX_LEN = 999999;

	CFGenKbGenRuleBuff::CFGenKbGenRuleBuff()
	: CFGenKbGenItemBuff()
	{
		requiredDefinedNear = new std::string( cfcore::CFGenKbGenRuleBuff::DEFINEDNEAR_INIT_VALUE );
		requiredBody = new std::string( cfcore::CFGenKbGenRuleBuff::BODY_INIT_VALUE );
		optionalBodyTenantId.setNull();
		optionalBodyGelCacheId.setNull();
		optionalBodyGelId.setNull();
	}

	CFGenKbGenRuleBuff::CFGenKbGenRuleBuff( const CFGenKbGenRuleBuff& src )
	: CFGenKbGenItemBuff()
	{
		requiredDefinedNear = new std::string( cfcore::CFGenKbGenRuleBuff::DEFINEDNEAR_INIT_VALUE );
		requiredBody = new std::string( cfcore::CFGenKbGenRuleBuff::BODY_INIT_VALUE );
		optionalBodyTenantId.setNull();
		optionalBodyGelCacheId.setNull();
		optionalBodyGelId.setNull();
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
		setRequiredDefinedNear( src.getRequiredDefinedNear() );
		setRequiredBody( src.getRequiredBody() );
		if( src.isOptionalBodyTenantIdNull() ) {
			setOptionalBodyTenantIdNull();
		}
		else {
			setOptionalBodyTenantIdValue( src.getOptionalBodyTenantIdValue() );
		}
		if( src.isOptionalBodyGelCacheIdNull() ) {
			setOptionalBodyGelCacheIdNull();
		}
		else {
			setOptionalBodyGelCacheIdValue( src.getOptionalBodyGelCacheIdValue() );
		}
		if( src.isOptionalBodyGelIdNull() ) {
			setOptionalBodyGelIdNull();
		}
		else {
			setOptionalBodyGelIdValue( src.getOptionalBodyGelIdValue() );
		}
	}

	CFGenKbGenRuleBuff::~CFGenKbGenRuleBuff() {
		if( requiredDefinedNear != NULL ) {
			delete requiredDefinedNear;
			requiredDefinedNear = NULL;
		}
		if( requiredBody != NULL ) {
			delete requiredBody;
			requiredBody = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbGenRuleBuff::clone() {
		CFGenKbGenRuleBuff* copy = new CFGenKbGenRuleBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGenRuleBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGenRuleBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGenRuleBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfcore::CFGenKbGenItemBuff::implementsClassCode( argClassCode ) );
		}
	}

	const std::string& CFGenKbGenRuleBuff::getRequiredDefinedNear() const {
		return( *requiredDefinedNear );
	}

	const std::string* CFGenKbGenRuleBuff::getRequiredDefinedNearReference() const {
		return( requiredDefinedNear );
	}

	void CFGenKbGenRuleBuff::setRequiredDefinedNear( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredDefinedNear" );
		if( value.length() > CFGenKbGenRuleBuff::DEFINEDNEAR_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenRuleBuff::DEFINEDNEAR_MAX_LEN );
		}
		if( requiredDefinedNear != NULL ) {
			delete requiredDefinedNear;
			requiredDefinedNear = NULL;
		}
		requiredDefinedNear = new std::string( value );
	}

	const std::string& CFGenKbGenRuleBuff::getRequiredBody() const {
		return( *requiredBody );
	}

	const std::string* CFGenKbGenRuleBuff::getRequiredBodyReference() const {
		return( requiredBody );
	}

	void CFGenKbGenRuleBuff::setRequiredBody( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredBody" );
		if( value.length() > CFGenKbGenRuleBuff::BODY_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenRuleBuff::BODY_MAX_LEN );
		}
		if( requiredBody != NULL ) {
			delete requiredBody;
			requiredBody = NULL;
		}
		requiredBody = new std::string( value );
	}

	const bool CFGenKbGenRuleBuff::isOptionalBodyTenantIdNull() const {
		return( optionalBodyTenantId.isNull() );
	}

	const int64_t CFGenKbGenRuleBuff::getOptionalBodyTenantIdValue() const {
		return( optionalBodyTenantId.getValue() );
	}

	const int64_t* CFGenKbGenRuleBuff::getOptionalBodyTenantIdReference() const {
		return( optionalBodyTenantId.getReference() );
	}

	void CFGenKbGenRuleBuff::setOptionalBodyTenantIdNull() {
		optionalBodyTenantId.setNull();
	}

	void CFGenKbGenRuleBuff::setOptionalBodyTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBodyTenantIdValue" );
		if( value < cfcore::CFGenKbGenRuleBuff::BODYTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenRuleBuff::BODYTENANTID_MIN_VALUE );
		}
		optionalBodyTenantId.setValue( value );
	}

	const bool CFGenKbGenRuleBuff::isOptionalBodyGelCacheIdNull() const {
		return( optionalBodyGelCacheId.isNull() );
	}

	const int64_t CFGenKbGenRuleBuff::getOptionalBodyGelCacheIdValue() const {
		return( optionalBodyGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenRuleBuff::getOptionalBodyGelCacheIdReference() const {
		return( optionalBodyGelCacheId.getReference() );
	}

	void CFGenKbGenRuleBuff::setOptionalBodyGelCacheIdNull() {
		optionalBodyGelCacheId.setNull();
	}

	void CFGenKbGenRuleBuff::setOptionalBodyGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBodyGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenRuleBuff::BODYGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenRuleBuff::BODYGELCACHEID_MIN_VALUE );
		}
		optionalBodyGelCacheId.setValue( value );
	}

	const bool CFGenKbGenRuleBuff::isOptionalBodyGelIdNull() const {
		return( optionalBodyGelId.isNull() );
	}

	const int64_t CFGenKbGenRuleBuff::getOptionalBodyGelIdValue() const {
		return( optionalBodyGelId.getValue() );
	}

	const int64_t* CFGenKbGenRuleBuff::getOptionalBodyGelIdReference() const {
		return( optionalBodyGelId.getReference() );
	}

	void CFGenKbGenRuleBuff::setOptionalBodyGelIdNull() {
		optionalBodyGelId.setNull();
	}

	void CFGenKbGenRuleBuff::setOptionalBodyGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBodyGelIdValue" );
		if( value < cfcore::CFGenKbGenRuleBuff::BODYGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenRuleBuff::BODYGELID_MIN_VALUE );
		}
		optionalBodyGelId.setValue( value );
	}

	size_t CFGenKbGenRuleBuff::hashCode() const {
		size_t hashCode = CFGenKbGenItemBuff::hashCode();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredDefinedNear() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredBody() );
		if( ! isOptionalBodyTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBodyTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBodyGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalBodyGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBodyGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFGenKbGenRuleBuff CFGenKbGenRuleBuff::operator =( cfcore::CFGenKbGenRuleBuff& src ) {
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
		setRequiredDefinedNear( src.getRequiredDefinedNear() );
		setRequiredBody( src.getRequiredBody() );
		if( src.isOptionalBodyTenantIdNull() ) {
			setOptionalBodyTenantIdNull();
		}
		else {
			setOptionalBodyTenantIdValue( src.getOptionalBodyTenantIdValue() );
		}
		if( src.isOptionalBodyGelCacheIdNull() ) {
			setOptionalBodyGelCacheIdNull();
		}
		else {
			setOptionalBodyGelCacheIdValue( src.getOptionalBodyGelCacheIdValue() );
		}
		if( src.isOptionalBodyGelIdNull() ) {
			setOptionalBodyGelIdNull();
		}
		else {
			setOptionalBodyGelIdValue( src.getOptionalBodyGelIdValue() );
		}
		return( *this );
	}

	bool CFGenKbGenRuleBuff::operator <( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenRuleBuff::operator <( const CFGenKbGenItemPKey& rhs ) {
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

	bool CFGenKbGenRuleBuff::operator <( const CFGenKbGenRuleBuff& rhs ) {
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
		if( getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( getRequiredBody() > rhs.getRequiredBody() ) {
			return( false );
		}
		else if( getRequiredBody() < rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenRuleBuff::operator <=( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleBuff::operator <=( const CFGenKbGenItemPKey& rhs ) {
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

	bool CFGenKbGenRuleBuff::operator <=( const CFGenKbGenRuleBuff& rhs ) {
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
		if( getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( getRequiredBody() > rhs.getRequiredBody() ) {
			return( false );
		}
		else if( getRequiredBody() < rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleBuff::operator ==( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				if( getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				if( getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				if( getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleBuff::operator ==( const CFGenKbGenItemPKey& rhs ) {
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

	bool CFGenKbGenRuleBuff::operator ==( const CFGenKbGenRuleBuff& rhs ) {
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
		if( getRequiredDefinedNear() != rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		if( getRequiredBody() != rhs.getRequiredBody() ) {
			return( false );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				if( getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				if( getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				if( getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleBuff::operator !=( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenRuleBuff::operator !=( const CFGenKbGenItemPKey& rhs ) {
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

	bool CFGenKbGenRuleBuff::operator !=( const CFGenKbGenRuleBuff& rhs ) {
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
		if( getRequiredDefinedNear() != rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( getRequiredBody() != rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenRuleBuff::operator >=( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleBuff::operator >=( const CFGenKbGenItemPKey& rhs ) {
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

	bool CFGenKbGenRuleBuff::operator >=( const CFGenKbGenRuleBuff& rhs ) {
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
		if( getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( getRequiredBody() < rhs.getRequiredBody() ) {
			return( false );
		}
		else if( getRequiredBody() > rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleBuff::operator >( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenRuleBuff::operator >( const CFGenKbGenItemPKey& rhs ) {
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

	bool CFGenKbGenRuleBuff::operator >( const CFGenKbGenRuleBuff& rhs ) {
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
		if( getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( getRequiredBody() < rhs.getRequiredBody() ) {
			return( false );
		}
		else if( getRequiredBody() > rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbGenRuleBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenRuleBuff" );
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
		static const std::string S_DefinedNear( "DefinedNear" );
		static const std::string S_Body( "Body" );
		static const std::string S_BodyTenantId( "BodyTenantId" );
		static const std::string S_BodyGelCacheId( "BodyGelCacheId" );
		static const std::string S_BodyGelId( "BodyGelId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DefinedNear, getRequiredDefinedNear() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Body, getRequiredBody() ) );
		if( ! isOptionalBodyTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyTenantId, getOptionalBodyTenantIdValue() ) );
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyGelCacheId, getOptionalBodyGelCacheIdValue() ) );
		}
		if( ! isOptionalBodyGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyGelId, getOptionalBodyGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
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
		if( lhs.getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( lhs.getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( lhs.getRequiredBody() > rhs.getRequiredBody() ) {
			return( false );
		}
		else if( lhs.getRequiredBody() < rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
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
		if( lhs.getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( lhs.getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( lhs.getRequiredBody() > rhs.getRequiredBody() ) {
			return( false );
		}
		else if( lhs.getRequiredBody() < rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				if( lhs.getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				if( lhs.getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				if( lhs.getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
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
		if( lhs.getRequiredDefinedNear() != rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		if( lhs.getRequiredBody() != rhs.getRequiredBody() ) {
			return( false );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				if( lhs.getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				if( lhs.getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				if( lhs.getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
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
		if( lhs.getRequiredDefinedNear() != rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( lhs.getRequiredBody() != rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
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
		if( lhs.getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( lhs.getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( lhs.getRequiredBody() < rhs.getRequiredBody() ) {
			return( false );
		}
		else if( lhs.getRequiredBody() > rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGenRuleBuff& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
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
		if( lhs.getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( lhs.getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( lhs.getRequiredBody() < rhs.getRequiredBody() ) {
			return( false );
		}
		else if( lhs.getRequiredBody() > rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

