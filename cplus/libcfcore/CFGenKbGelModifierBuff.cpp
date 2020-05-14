// Description: C++18 implementation for a GelModifier buffer object.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelModifierByRemainderIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGelModifierBuff::GENDEFNAME( "GelModifier" );
	const classcode_t CFGenKbGelModifierBuff::CLASS_CODE = 0xa930L;
	const std::string CFGenKbGelModifierBuff::CLASS_NAME( "CFGenKbGelModifierBuff" );
		const std::string CFGenKbGelModifierBuff::COLNAME_REMAINDERTENANTID( "RemainderTenantId" );
		const std::string CFGenKbGelModifierBuff::COLNAME_REMAINDERGELCACHEID( "RemainderGelCacheId" );
		const std::string CFGenKbGelModifierBuff::COLNAME_REMAINDERINSTID( "RemainderInstId" );
	const int64_t CFGenKbGelModifierBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::GELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::GELINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::REMAINDERTENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::REMAINDERGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::REMAINDERINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::GELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::GELINSTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::REMAINDERTENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::REMAINDERGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelModifierBuff::REMAINDERINSTID_MIN_VALUE = 0LL;

	CFGenKbGelModifierBuff::CFGenKbGelModifierBuff()
	: CFGenKbGelInstructionBuff()
	{
		optionalRemainderTenantId.setNull();
		requiredRemainderGelCacheId = cfcore::CFGenKbGelModifierBuff::REMAINDERGELCACHEID_INIT_VALUE;
		optionalRemainderInstId.setNull();
	}

	CFGenKbGelModifierBuff::CFGenKbGelModifierBuff( const CFGenKbGelModifierBuff& src )
	: CFGenKbGelInstructionBuff()
	{
		optionalRemainderTenantId.setNull();
		requiredRemainderGelCacheId = cfcore::CFGenKbGelModifierBuff::REMAINDERGELCACHEID_INIT_VALUE;
		optionalRemainderInstId.setNull();
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredGelInstId( src.getRequiredGelInstId() );
		setRequiredRevision( src.getRequiredRevision() );
		if( src.isOptionalChainInstTenantIdNull() ) {
			setOptionalChainInstTenantIdNull();
		}
		else {
			setOptionalChainInstTenantIdValue( src.getOptionalChainInstTenantIdValue() );
		}
		if( src.isOptionalChainInstGelCacheIdNull() ) {
			setOptionalChainInstGelCacheIdNull();
		}
		else {
			setOptionalChainInstGelCacheIdValue( src.getOptionalChainInstGelCacheIdValue() );
		}
		if( src.isOptionalChainInstGelInstIdNull() ) {
			setOptionalChainInstGelInstIdNull();
		}
		else {
			setOptionalChainInstGelInstIdValue( src.getOptionalChainInstGelInstIdValue() );
		}
		setRequiredSourceText( src.getRequiredSourceText() );
		if( src.isOptionalRemainderTenantIdNull() ) {
			setOptionalRemainderTenantIdNull();
		}
		else {
			setOptionalRemainderTenantIdValue( src.getOptionalRemainderTenantIdValue() );
		}
		setRequiredRemainderGelCacheId( src.getRequiredRemainderGelCacheId() );
		if( src.isOptionalRemainderInstIdNull() ) {
			setOptionalRemainderInstIdNull();
		}
		else {
			setOptionalRemainderInstIdValue( src.getOptionalRemainderInstIdValue() );
		}
	}

	CFGenKbGelModifierBuff::~CFGenKbGelModifierBuff() {
	}

	cflib::ICFLibCloneableObj* CFGenKbGelModifierBuff::clone() {
		CFGenKbGelModifierBuff* copy = new CFGenKbGelModifierBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGelModifierBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelModifierBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelModifierBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfcore::CFGenKbGelInstructionBuff::implementsClassCode( argClassCode ) );
		}
	}

	const bool CFGenKbGelModifierBuff::isOptionalRemainderTenantIdNull() const {
		return( optionalRemainderTenantId.isNull() );
	}

	const int64_t CFGenKbGelModifierBuff::getOptionalRemainderTenantIdValue() const {
		return( optionalRemainderTenantId.getValue() );
	}

	const int64_t* CFGenKbGelModifierBuff::getOptionalRemainderTenantIdReference() const {
		return( optionalRemainderTenantId.getReference() );
	}

	void CFGenKbGelModifierBuff::setOptionalRemainderTenantIdNull() {
		optionalRemainderTenantId.setNull();
	}

	void CFGenKbGelModifierBuff::setOptionalRemainderTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRemainderTenantIdValue" );
		if( value < cfcore::CFGenKbGelModifierBuff::REMAINDERTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelModifierBuff::REMAINDERTENANTID_MIN_VALUE );
		}
		optionalRemainderTenantId.setValue( value );
	}

	const int64_t CFGenKbGelModifierBuff::getRequiredRemainderGelCacheId() const {
		return( requiredRemainderGelCacheId );
	}

	const int64_t* CFGenKbGelModifierBuff::getRequiredRemainderGelCacheIdReference() const {
		return( &requiredRemainderGelCacheId );
	}

	void CFGenKbGelModifierBuff::setRequiredRemainderGelCacheId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredRemainderGelCacheId" );
		if( value < cfcore::CFGenKbGelModifierBuff::REMAINDERGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelModifierBuff::REMAINDERGELCACHEID_MIN_VALUE );
		}
		requiredRemainderGelCacheId = value;
	}

	const bool CFGenKbGelModifierBuff::isOptionalRemainderInstIdNull() const {
		return( optionalRemainderInstId.isNull() );
	}

	const int64_t CFGenKbGelModifierBuff::getOptionalRemainderInstIdValue() const {
		return( optionalRemainderInstId.getValue() );
	}

	const int64_t* CFGenKbGelModifierBuff::getOptionalRemainderInstIdReference() const {
		return( optionalRemainderInstId.getReference() );
	}

	void CFGenKbGelModifierBuff::setOptionalRemainderInstIdNull() {
		optionalRemainderInstId.setNull();
	}

	void CFGenKbGelModifierBuff::setOptionalRemainderInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRemainderInstIdValue" );
		if( value < cfcore::CFGenKbGelModifierBuff::REMAINDERINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelModifierBuff::REMAINDERINSTID_MIN_VALUE );
		}
		optionalRemainderInstId.setValue( value );
	}

	size_t CFGenKbGelModifierBuff::hashCode() const {
		size_t hashCode = CFGenKbGelInstructionBuff::hashCode();
		if( ! isOptionalRemainderTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRemainderTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		hashCode = hashCode + (int)( getRequiredRemainderGelCacheId() );
		if( ! isOptionalRemainderInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRemainderInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFGenKbGelModifierBuff CFGenKbGelModifierBuff::operator =( cfcore::CFGenKbGelModifierBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredGelInstId( src.getRequiredGelInstId() );
		setRequiredRevision( src.getRequiredRevision() );
		if( src.isOptionalChainInstTenantIdNull() ) {
			setOptionalChainInstTenantIdNull();
		}
		else {
			setOptionalChainInstTenantIdValue( src.getOptionalChainInstTenantIdValue() );
		}
		if( src.isOptionalChainInstGelCacheIdNull() ) {
			setOptionalChainInstGelCacheIdNull();
		}
		else {
			setOptionalChainInstGelCacheIdValue( src.getOptionalChainInstGelCacheIdValue() );
		}
		if( src.isOptionalChainInstGelInstIdNull() ) {
			setOptionalChainInstGelInstIdNull();
		}
		else {
			setOptionalChainInstGelInstIdValue( src.getOptionalChainInstGelInstIdValue() );
		}
		setRequiredSourceText( src.getRequiredSourceText() );
		if( src.isOptionalRemainderTenantIdNull() ) {
			setOptionalRemainderTenantIdNull();
		}
		else {
			setOptionalRemainderTenantIdValue( src.getOptionalRemainderTenantIdValue() );
		}
		setRequiredRemainderGelCacheId( src.getRequiredRemainderGelCacheId() );
		if( src.isOptionalRemainderInstIdNull() ) {
			setOptionalRemainderInstIdNull();
		}
		else {
			setOptionalRemainderInstIdValue( src.getOptionalRemainderInstIdValue() );
		}
		return( *this );
	}

	bool CFGenKbGelModifierBuff::operator <( const CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelModifierBuff::operator <( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelModifierBuff::operator <( const CFGenKbGelModifierBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelModifierBuff::operator <=( const CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelModifierBuff::operator <=( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelModifierBuff::operator <=( const CFGenKbGelModifierBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelModifierBuff::operator ==( const CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				if( getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				if( getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelModifierBuff::operator ==( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelModifierBuff::operator ==( const CFGenKbGelModifierBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				if( getOptionalChainInstTenantIdValue() != rhs.getOptionalChainInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				if( getOptionalChainInstGelCacheIdValue() != rhs.getOptionalChainInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				if( getOptionalChainInstGelInstIdValue() != rhs.getOptionalChainInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( getRequiredSourceText() != rhs.getRequiredSourceText() ) {
			return( false );
		}
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				if( getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				if( getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelModifierBuff::operator !=( const CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelModifierBuff::operator !=( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelModifierBuff::operator !=( const CFGenKbGelModifierBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstTenantIdValue() != rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelCacheIdValue() != rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelInstIdValue() != rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSourceText() != rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelModifierBuff::operator >=( const CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelModifierBuff::operator >=( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelModifierBuff::operator >=( const CFGenKbGelModifierBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelModifierBuff::operator >( const CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelModifierBuff::operator >( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelModifierBuff::operator >( const CFGenKbGelModifierBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbGelModifierBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelModifierBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_RemainderTenantId( "RemainderTenantId" );
		static const std::string S_RemainderGelCacheId( "RemainderGelCacheId" );
		static const std::string S_RemainderInstId( "RemainderInstId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelInstId, getRequiredGelInstId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		if( ! isOptionalChainInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstTenantId, getOptionalChainInstTenantIdValue() ) );
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstGelCacheId, getOptionalChainInstGelCacheIdValue() ) );
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstGelInstId, getOptionalChainInstGelInstIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SourceText, getRequiredSourceText() ) );
		if( ! isOptionalRemainderTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderTenantId, getOptionalRemainderTenantIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderGelCacheId, getRequiredRemainderGelCacheId() ) );
		if( ! isOptionalRemainderInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderInstId, getOptionalRemainderInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( lhs.getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( lhs.getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				if( lhs.getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				if( lhs.getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				if( lhs.getOptionalChainInstTenantIdValue() != rhs.getOptionalChainInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				if( lhs.getOptionalChainInstGelCacheIdValue() != rhs.getOptionalChainInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				if( lhs.getOptionalChainInstGelInstIdValue() != rhs.getOptionalChainInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSourceText() != rhs.getRequiredSourceText() ) {
			return( false );
		}
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				if( lhs.getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				if( lhs.getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstTenantIdValue() != rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelCacheIdValue() != rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelInstIdValue() != rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSourceText() != rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( lhs.getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelModifierBuff& lhs, const cfcore::CFGenKbGelModifierBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( lhs.getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

