// Description: C++18 implementation for a GelReference buffer object.

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

#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelReferenceByRemainderIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGelReferenceBuff::GENDEFNAME( "GelReference" );
	const classcode_t CFGenKbGelReferenceBuff::CLASS_CODE = 0xa91bL;
	const std::string CFGenKbGelReferenceBuff::CLASS_NAME( "CFGenKbGelReferenceBuff" );
		const std::string CFGenKbGelReferenceBuff::COLNAME_REFERENCENAME( "ReferenceName" );
		const std::string CFGenKbGelReferenceBuff::COLNAME_REMAINDERTENANTID( "RemainderTenantId" );
		const std::string CFGenKbGelReferenceBuff::COLNAME_REMAINDERGELCACHEID( "RemainderGelCacheId" );
		const std::string CFGenKbGelReferenceBuff::COLNAME_REMAINDERINSTID( "RemainderInstId" );
	const int64_t CFGenKbGelReferenceBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelReferenceBuff::GELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelReferenceBuff::GELINSTID_INIT_VALUE = 0LL;
	const std::string CFGenKbGelReferenceBuff::REFERENCENAME_INIT_VALUE( "" );
	const int64_t CFGenKbGelReferenceBuff::REMAINDERTENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelReferenceBuff::REMAINDERGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelReferenceBuff::REMAINDERINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelReferenceBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelReferenceBuff::GELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelReferenceBuff::GELINSTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelReferenceBuff::REMAINDERTENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelReferenceBuff::REMAINDERGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelReferenceBuff::REMAINDERINSTID_MIN_VALUE = 0LL;
	const std::string::size_type CFGenKbGelReferenceBuff::REFERENCENAME_MAX_LEN = 127;

	CFGenKbGelReferenceBuff::CFGenKbGelReferenceBuff()
	: CFGenKbGelInstructionBuff()
	{
		requiredReferenceName = new std::string( cfcore::CFGenKbGelReferenceBuff::REFERENCENAME_INIT_VALUE );
		optionalRemainderTenantId.setNull();
		requiredRemainderGelCacheId = cfcore::CFGenKbGelReferenceBuff::REMAINDERGELCACHEID_INIT_VALUE;
		optionalRemainderInstId.setNull();
	}

	CFGenKbGelReferenceBuff::CFGenKbGelReferenceBuff( const CFGenKbGelReferenceBuff& src )
	: CFGenKbGelInstructionBuff()
	{
		requiredReferenceName = new std::string( cfcore::CFGenKbGelReferenceBuff::REFERENCENAME_INIT_VALUE );
		optionalRemainderTenantId.setNull();
		requiredRemainderGelCacheId = cfcore::CFGenKbGelReferenceBuff::REMAINDERGELCACHEID_INIT_VALUE;
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
		setRequiredReferenceName( src.getRequiredReferenceName() );
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

	CFGenKbGelReferenceBuff::~CFGenKbGelReferenceBuff() {
		if( requiredReferenceName != NULL ) {
			delete requiredReferenceName;
			requiredReferenceName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbGelReferenceBuff::clone() {
		CFGenKbGelReferenceBuff* copy = new CFGenKbGelReferenceBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGelReferenceBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelReferenceBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelReferenceBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfcore::CFGenKbGelInstructionBuff::implementsClassCode( argClassCode ) );
		}
	}

	const std::string& CFGenKbGelReferenceBuff::getRequiredReferenceName() const {
		return( *requiredReferenceName );
	}

	const std::string* CFGenKbGelReferenceBuff::getRequiredReferenceNameReference() const {
		return( requiredReferenceName );
	}

	void CFGenKbGelReferenceBuff::setRequiredReferenceName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredReferenceName" );
		if( value.length() > CFGenKbGelReferenceBuff::REFERENCENAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelReferenceBuff::REFERENCENAME_MAX_LEN );
		}
		if( requiredReferenceName != NULL ) {
			delete requiredReferenceName;
			requiredReferenceName = NULL;
		}
		requiredReferenceName = new std::string( value );
	}

	const bool CFGenKbGelReferenceBuff::isOptionalRemainderTenantIdNull() const {
		return( optionalRemainderTenantId.isNull() );
	}

	const int64_t CFGenKbGelReferenceBuff::getOptionalRemainderTenantIdValue() const {
		return( optionalRemainderTenantId.getValue() );
	}

	const int64_t* CFGenKbGelReferenceBuff::getOptionalRemainderTenantIdReference() const {
		return( optionalRemainderTenantId.getReference() );
	}

	void CFGenKbGelReferenceBuff::setOptionalRemainderTenantIdNull() {
		optionalRemainderTenantId.setNull();
	}

	void CFGenKbGelReferenceBuff::setOptionalRemainderTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRemainderTenantIdValue" );
		if( value < cfcore::CFGenKbGelReferenceBuff::REMAINDERTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelReferenceBuff::REMAINDERTENANTID_MIN_VALUE );
		}
		optionalRemainderTenantId.setValue( value );
	}

	const int64_t CFGenKbGelReferenceBuff::getRequiredRemainderGelCacheId() const {
		return( requiredRemainderGelCacheId );
	}

	const int64_t* CFGenKbGelReferenceBuff::getRequiredRemainderGelCacheIdReference() const {
		return( &requiredRemainderGelCacheId );
	}

	void CFGenKbGelReferenceBuff::setRequiredRemainderGelCacheId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredRemainderGelCacheId" );
		if( value < cfcore::CFGenKbGelReferenceBuff::REMAINDERGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelReferenceBuff::REMAINDERGELCACHEID_MIN_VALUE );
		}
		requiredRemainderGelCacheId = value;
	}

	const bool CFGenKbGelReferenceBuff::isOptionalRemainderInstIdNull() const {
		return( optionalRemainderInstId.isNull() );
	}

	const int64_t CFGenKbGelReferenceBuff::getOptionalRemainderInstIdValue() const {
		return( optionalRemainderInstId.getValue() );
	}

	const int64_t* CFGenKbGelReferenceBuff::getOptionalRemainderInstIdReference() const {
		return( optionalRemainderInstId.getReference() );
	}

	void CFGenKbGelReferenceBuff::setOptionalRemainderInstIdNull() {
		optionalRemainderInstId.setNull();
	}

	void CFGenKbGelReferenceBuff::setOptionalRemainderInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRemainderInstIdValue" );
		if( value < cfcore::CFGenKbGelReferenceBuff::REMAINDERINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelReferenceBuff::REMAINDERINSTID_MIN_VALUE );
		}
		optionalRemainderInstId.setValue( value );
	}

	size_t CFGenKbGelReferenceBuff::hashCode() const {
		size_t hashCode = CFGenKbGelInstructionBuff::hashCode();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredReferenceName() );
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

	CFGenKbGelReferenceBuff CFGenKbGelReferenceBuff::operator =( cfcore::CFGenKbGelReferenceBuff& src ) {
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
		setRequiredReferenceName( src.getRequiredReferenceName() );
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

	bool CFGenKbGelReferenceBuff::operator <( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator <( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator <( const CFGenKbGelReferenceBuff& rhs ) {
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
		if( getRequiredReferenceName() > rhs.getRequiredReferenceName() ) {
			return( false );
		}
		else if( getRequiredReferenceName() < rhs.getRequiredReferenceName() ) {
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

	bool CFGenKbGelReferenceBuff::operator <=( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator <=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator <=( const CFGenKbGelReferenceBuff& rhs ) {
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
		if( getRequiredReferenceName() > rhs.getRequiredReferenceName() ) {
			return( false );
		}
		else if( getRequiredReferenceName() < rhs.getRequiredReferenceName() ) {
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

	bool CFGenKbGelReferenceBuff::operator ==( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator ==( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator ==( const CFGenKbGelReferenceBuff& rhs ) {
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
		if( getRequiredReferenceName() != rhs.getRequiredReferenceName() ) {
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

	bool CFGenKbGelReferenceBuff::operator !=( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator !=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator !=( const CFGenKbGelReferenceBuff& rhs ) {
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
		if( getRequiredReferenceName() != rhs.getRequiredReferenceName() ) {
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

	bool CFGenKbGelReferenceBuff::operator >=( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator >=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator >=( const CFGenKbGelReferenceBuff& rhs ) {
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
		if( getRequiredReferenceName() < rhs.getRequiredReferenceName() ) {
			return( false );
		}
		else if( getRequiredReferenceName() > rhs.getRequiredReferenceName() ) {
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

	bool CFGenKbGelReferenceBuff::operator >( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator >( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelReferenceBuff::operator >( const CFGenKbGelReferenceBuff& rhs ) {
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
		if( getRequiredReferenceName() < rhs.getRequiredReferenceName() ) {
			return( false );
		}
		else if( getRequiredReferenceName() > rhs.getRequiredReferenceName() ) {
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

	std::string CFGenKbGelReferenceBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelReferenceBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_ReferenceName( "ReferenceName" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ReferenceName, getRequiredReferenceName() ) );
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

	bool operator <(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
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
		if( lhs.getRequiredReferenceName() > rhs.getRequiredReferenceName() ) {
			return( false );
		}
		else if( lhs.getRequiredReferenceName() < rhs.getRequiredReferenceName() ) {
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

	bool operator <=(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
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
		if( lhs.getRequiredReferenceName() > rhs.getRequiredReferenceName() ) {
			return( false );
		}
		else if( lhs.getRequiredReferenceName() < rhs.getRequiredReferenceName() ) {
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

	bool operator ==(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
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
		if( lhs.getRequiredReferenceName() != rhs.getRequiredReferenceName() ) {
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

	bool operator !=(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
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
		if( lhs.getRequiredReferenceName() != rhs.getRequiredReferenceName() ) {
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

	bool operator >=(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
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
		if( lhs.getRequiredReferenceName() < rhs.getRequiredReferenceName() ) {
			return( false );
		}
		else if( lhs.getRequiredReferenceName() > rhs.getRequiredReferenceName() ) {
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

	bool operator >(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelReferenceBuff& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
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
		if( lhs.getRequiredReferenceName() < rhs.getRequiredReferenceName() ) {
			return( false );
		}
		else if( lhs.getRequiredReferenceName() > rhs.getRequiredReferenceName() ) {
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

