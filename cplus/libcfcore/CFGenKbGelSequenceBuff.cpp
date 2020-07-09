// Description: C++18 implementation for a GelSequence buffer object.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSequenceByFirstInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSequenceByLastInstIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGelSequenceBuff::GENDEFNAME( "GelSequence" );
	const classcode_t CFGenKbGelSequenceBuff::CLASS_CODE = 0xa91dL;
	const std::string CFGenKbGelSequenceBuff::CLASS_NAME( "CFGenKbGelSequenceBuff" );
		const std::string CFGenKbGelSequenceBuff::COLNAME_FIRSTINSTTENANTID( "FirstInstTenantId" );
		const std::string CFGenKbGelSequenceBuff::COLNAME_FIRSTINSTGELCACHEID( "FirstInstGelCacheId" );
		const std::string CFGenKbGelSequenceBuff::COLNAME_FIRSTINSTID( "FirstInstId" );
		const std::string CFGenKbGelSequenceBuff::COLNAME_LASTINSTTENANTID( "LastInstTenantId" );
		const std::string CFGenKbGelSequenceBuff::COLNAME_LASTINSTGELCACHEID( "LastInstGelCacheId" );
		const std::string CFGenKbGelSequenceBuff::COLNAME_LASTINSTID( "LastInstId" );
	const int64_t CFGenKbGelSequenceBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::GELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::GELINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::FIRSTINSTTENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::FIRSTINSTGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::FIRSTINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::LASTINSTTENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::LASTINSTGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::LASTINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::GELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::GELINSTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::FIRSTINSTTENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::FIRSTINSTGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::FIRSTINSTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::LASTINSTTENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::LASTINSTGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSequenceBuff::LASTINSTID_MIN_VALUE = 0LL;

	CFGenKbGelSequenceBuff::CFGenKbGelSequenceBuff()
	: CFGenKbGelInstructionBuff()
	{
		optionalFirstInstTenantId.setNull();
		optionalFirstInstGelCacheId.setNull();
		optionalFirstInstId.setNull();
		optionalLastInstTenantId.setNull();
		optionalLastInstGelCacheId.setNull();
		optionalLastInstId.setNull();
	}

	CFGenKbGelSequenceBuff::CFGenKbGelSequenceBuff( const CFGenKbGelSequenceBuff& src )
	: CFGenKbGelInstructionBuff()
	{
		optionalFirstInstTenantId.setNull();
		optionalFirstInstGelCacheId.setNull();
		optionalFirstInstId.setNull();
		optionalLastInstTenantId.setNull();
		optionalLastInstGelCacheId.setNull();
		optionalLastInstId.setNull();
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
		if( src.isOptionalFirstInstTenantIdNull() ) {
			setOptionalFirstInstTenantIdNull();
		}
		else {
			setOptionalFirstInstTenantIdValue( src.getOptionalFirstInstTenantIdValue() );
		}
		if( src.isOptionalFirstInstGelCacheIdNull() ) {
			setOptionalFirstInstGelCacheIdNull();
		}
		else {
			setOptionalFirstInstGelCacheIdValue( src.getOptionalFirstInstGelCacheIdValue() );
		}
		if( src.isOptionalFirstInstIdNull() ) {
			setOptionalFirstInstIdNull();
		}
		else {
			setOptionalFirstInstIdValue( src.getOptionalFirstInstIdValue() );
		}
		if( src.isOptionalLastInstTenantIdNull() ) {
			setOptionalLastInstTenantIdNull();
		}
		else {
			setOptionalLastInstTenantIdValue( src.getOptionalLastInstTenantIdValue() );
		}
		if( src.isOptionalLastInstGelCacheIdNull() ) {
			setOptionalLastInstGelCacheIdNull();
		}
		else {
			setOptionalLastInstGelCacheIdValue( src.getOptionalLastInstGelCacheIdValue() );
		}
		if( src.isOptionalLastInstIdNull() ) {
			setOptionalLastInstIdNull();
		}
		else {
			setOptionalLastInstIdValue( src.getOptionalLastInstIdValue() );
		}
	}

	CFGenKbGelSequenceBuff::~CFGenKbGelSequenceBuff() {
	}

	cflib::ICFLibCloneableObj* CFGenKbGelSequenceBuff::clone() {
		CFGenKbGelSequenceBuff* copy = new CFGenKbGelSequenceBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGelSequenceBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSequenceBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelSequenceBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfcore::CFGenKbGelInstructionBuff::implementsClassCode( argClassCode ) );
		}
	}

	const bool CFGenKbGelSequenceBuff::isOptionalFirstInstTenantIdNull() const {
		return( optionalFirstInstTenantId.isNull() );
	}

	const int64_t CFGenKbGelSequenceBuff::getOptionalFirstInstTenantIdValue() const {
		return( optionalFirstInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceBuff::getOptionalFirstInstTenantIdReference() const {
		return( optionalFirstInstTenantId.getReference() );
	}

	void CFGenKbGelSequenceBuff::setOptionalFirstInstTenantIdNull() {
		optionalFirstInstTenantId.setNull();
	}

	void CFGenKbGelSequenceBuff::setOptionalFirstInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalFirstInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::FIRSTINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::FIRSTINSTTENANTID_MIN_VALUE );
		}
		optionalFirstInstTenantId.setValue( value );
	}

	const bool CFGenKbGelSequenceBuff::isOptionalFirstInstGelCacheIdNull() const {
		return( optionalFirstInstGelCacheId.isNull() );
	}

	const int64_t CFGenKbGelSequenceBuff::getOptionalFirstInstGelCacheIdValue() const {
		return( optionalFirstInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceBuff::getOptionalFirstInstGelCacheIdReference() const {
		return( optionalFirstInstGelCacheId.getReference() );
	}

	void CFGenKbGelSequenceBuff::setOptionalFirstInstGelCacheIdNull() {
		optionalFirstInstGelCacheId.setNull();
	}

	void CFGenKbGelSequenceBuff::setOptionalFirstInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalFirstInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::FIRSTINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::FIRSTINSTGELCACHEID_MIN_VALUE );
		}
		optionalFirstInstGelCacheId.setValue( value );
	}

	const bool CFGenKbGelSequenceBuff::isOptionalFirstInstIdNull() const {
		return( optionalFirstInstId.isNull() );
	}

	const int64_t CFGenKbGelSequenceBuff::getOptionalFirstInstIdValue() const {
		return( optionalFirstInstId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceBuff::getOptionalFirstInstIdReference() const {
		return( optionalFirstInstId.getReference() );
	}

	void CFGenKbGelSequenceBuff::setOptionalFirstInstIdNull() {
		optionalFirstInstId.setNull();
	}

	void CFGenKbGelSequenceBuff::setOptionalFirstInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalFirstInstIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::FIRSTINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::FIRSTINSTID_MIN_VALUE );
		}
		optionalFirstInstId.setValue( value );
	}

	const bool CFGenKbGelSequenceBuff::isOptionalLastInstTenantIdNull() const {
		return( optionalLastInstTenantId.isNull() );
	}

	const int64_t CFGenKbGelSequenceBuff::getOptionalLastInstTenantIdValue() const {
		return( optionalLastInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceBuff::getOptionalLastInstTenantIdReference() const {
		return( optionalLastInstTenantId.getReference() );
	}

	void CFGenKbGelSequenceBuff::setOptionalLastInstTenantIdNull() {
		optionalLastInstTenantId.setNull();
	}

	void CFGenKbGelSequenceBuff::setOptionalLastInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalLastInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::LASTINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::LASTINSTTENANTID_MIN_VALUE );
		}
		optionalLastInstTenantId.setValue( value );
	}

	const bool CFGenKbGelSequenceBuff::isOptionalLastInstGelCacheIdNull() const {
		return( optionalLastInstGelCacheId.isNull() );
	}

	const int64_t CFGenKbGelSequenceBuff::getOptionalLastInstGelCacheIdValue() const {
		return( optionalLastInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceBuff::getOptionalLastInstGelCacheIdReference() const {
		return( optionalLastInstGelCacheId.getReference() );
	}

	void CFGenKbGelSequenceBuff::setOptionalLastInstGelCacheIdNull() {
		optionalLastInstGelCacheId.setNull();
	}

	void CFGenKbGelSequenceBuff::setOptionalLastInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalLastInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::LASTINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::LASTINSTGELCACHEID_MIN_VALUE );
		}
		optionalLastInstGelCacheId.setValue( value );
	}

	const bool CFGenKbGelSequenceBuff::isOptionalLastInstIdNull() const {
		return( optionalLastInstId.isNull() );
	}

	const int64_t CFGenKbGelSequenceBuff::getOptionalLastInstIdValue() const {
		return( optionalLastInstId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceBuff::getOptionalLastInstIdReference() const {
		return( optionalLastInstId.getReference() );
	}

	void CFGenKbGelSequenceBuff::setOptionalLastInstIdNull() {
		optionalLastInstId.setNull();
	}

	void CFGenKbGelSequenceBuff::setOptionalLastInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalLastInstIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::LASTINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::LASTINSTID_MIN_VALUE );
		}
		optionalLastInstId.setValue( value );
	}

	size_t CFGenKbGelSequenceBuff::hashCode() const {
		size_t hashCode = CFGenKbGelInstructionBuff::hashCode();
		if( ! isOptionalFirstInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalFirstInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalFirstInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalFirstInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalFirstInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalLastInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalLastInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalLastInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalLastInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalLastInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFGenKbGelSequenceBuff CFGenKbGelSequenceBuff::operator =( cfcore::CFGenKbGelSequenceBuff& src ) {
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
		if( src.isOptionalFirstInstTenantIdNull() ) {
			setOptionalFirstInstTenantIdNull();
		}
		else {
			setOptionalFirstInstTenantIdValue( src.getOptionalFirstInstTenantIdValue() );
		}
		if( src.isOptionalFirstInstGelCacheIdNull() ) {
			setOptionalFirstInstGelCacheIdNull();
		}
		else {
			setOptionalFirstInstGelCacheIdValue( src.getOptionalFirstInstGelCacheIdValue() );
		}
		if( src.isOptionalFirstInstIdNull() ) {
			setOptionalFirstInstIdNull();
		}
		else {
			setOptionalFirstInstIdValue( src.getOptionalFirstInstIdValue() );
		}
		if( src.isOptionalLastInstTenantIdNull() ) {
			setOptionalLastInstTenantIdNull();
		}
		else {
			setOptionalLastInstTenantIdValue( src.getOptionalLastInstTenantIdValue() );
		}
		if( src.isOptionalLastInstGelCacheIdNull() ) {
			setOptionalLastInstGelCacheIdNull();
		}
		else {
			setOptionalLastInstGelCacheIdValue( src.getOptionalLastInstGelCacheIdValue() );
		}
		if( src.isOptionalLastInstIdNull() ) {
			setOptionalLastInstIdNull();
		}
		else {
			setOptionalLastInstIdValue( src.getOptionalLastInstIdValue() );
		}
		return( *this );
	}

	bool CFGenKbGelSequenceBuff::operator <( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceBuff::operator <( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceBuff::operator <( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSequenceBuff::operator <( const CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceBuff::operator <=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceBuff::operator <=( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceBuff::operator <=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSequenceBuff::operator <=( const CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceBuff::operator ==( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				if( getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				if( getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				if( getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceBuff::operator ==( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				if( getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				if( getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				if( getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceBuff::operator ==( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSequenceBuff::operator ==( const CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				if( getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				if( getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				if( getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				if( getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				if( getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				if( getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceBuff::operator !=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceBuff::operator !=( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceBuff::operator !=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSequenceBuff::operator !=( const CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceBuff::operator >=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceBuff::operator >=( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceBuff::operator >=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSequenceBuff::operator >=( const CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceBuff::operator >( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSequenceBuff::operator >( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSequenceBuff::operator >( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSequenceBuff::operator >( const CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbGelSequenceBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSequenceBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_FirstInstTenantId( "FirstInstTenantId" );
		static const std::string S_FirstInstGelCacheId( "FirstInstGelCacheId" );
		static const std::string S_FirstInstId( "FirstInstId" );
		static const std::string S_LastInstTenantId( "LastInstTenantId" );
		static const std::string S_LastInstGelCacheId( "LastInstGelCacheId" );
		static const std::string S_LastInstId( "LastInstId" );
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
		if( ! isOptionalFirstInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstTenantId, getOptionalFirstInstTenantIdValue() ) );
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstGelCacheId, getOptionalFirstInstGelCacheIdValue() ) );
		}
		if( ! isOptionalFirstInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstId, getOptionalFirstInstIdValue() ) );
		}
		if( ! isOptionalLastInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstTenantId, getOptionalLastInstTenantIdValue() ) );
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstGelCacheId, getOptionalLastInstGelCacheIdValue() ) );
		}
		if( ! isOptionalLastInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstId, getOptionalLastInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				if( lhs.getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				if( lhs.getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				if( lhs.getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				if( lhs.getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				if( lhs.getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				if( lhs.getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				if( lhs.getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				if( lhs.getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				if( lhs.getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				if( lhs.getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				if( lhs.getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				if( lhs.getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelSequenceBuff& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
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
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

