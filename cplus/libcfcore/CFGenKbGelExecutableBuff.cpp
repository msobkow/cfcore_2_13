// Description: C++18 implementation for a GelExecutable buffer object.

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
#include <cfgenkb/CFGenKbGelSequenceByFirstInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSequenceByLastInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelExecutableByGenItemIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGelExecutableBuff::GENDEFNAME( "GelExecutable" );
	const classcode_t CFGenKbGelExecutableBuff::CLASS_CODE = 0xa92eL;
	const std::string CFGenKbGelExecutableBuff::CLASS_NAME( "CFGenKbGelExecutableBuff" );
		const std::string CFGenKbGelExecutableBuff::COLNAME_GENITEMID( "GenItemId" );
	const int64_t CFGenKbGelExecutableBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelExecutableBuff::GELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelExecutableBuff::GELINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelExecutableBuff::GENITEMID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelExecutableBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelExecutableBuff::GELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelExecutableBuff::GELINSTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelExecutableBuff::GENITEMID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelExecutableBuff::GENITEMID_MAX_VALUE = 2147483647LL;

	CFGenKbGelExecutableBuff::CFGenKbGelExecutableBuff()
	: CFGenKbGelSequenceBuff()
	{
		requiredGenItemId = cfcore::CFGenKbGelExecutableBuff::GENITEMID_INIT_VALUE;
	}

	CFGenKbGelExecutableBuff::CFGenKbGelExecutableBuff( const CFGenKbGelExecutableBuff& src )
	: CFGenKbGelSequenceBuff()
	{
		requiredGenItemId = cfcore::CFGenKbGelExecutableBuff::GENITEMID_INIT_VALUE;
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
		setRequiredGenItemId( src.getRequiredGenItemId() );
	}

	CFGenKbGelExecutableBuff::~CFGenKbGelExecutableBuff() {
	}

	cflib::ICFLibCloneableObj* CFGenKbGelExecutableBuff::clone() {
		CFGenKbGelExecutableBuff* copy = new CFGenKbGelExecutableBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGelExecutableBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelExecutableBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelExecutableBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfcore::CFGenKbGelSequenceBuff::implementsClassCode( argClassCode ) );
		}
	}

	const int64_t CFGenKbGelExecutableBuff::getRequiredGenItemId() const {
		return( requiredGenItemId );
	}

	const int64_t* CFGenKbGelExecutableBuff::getRequiredGenItemIdReference() const {
		return( &requiredGenItemId );
	}

	void CFGenKbGelExecutableBuff::setRequiredGenItemId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredGenItemId" );
		if( value < cfcore::CFGenKbGelExecutableBuff::GENITEMID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelExecutableBuff::GENITEMID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGelExecutableBuff::GENITEMID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelExecutableBuff::GENITEMID_MAX_VALUE );
		}
		requiredGenItemId = value;
	}

	size_t CFGenKbGelExecutableBuff::hashCode() const {
		size_t hashCode = CFGenKbGelSequenceBuff::hashCode();
		hashCode = hashCode + (int)( getRequiredGenItemId() );
		return( hashCode );
	}

	CFGenKbGelExecutableBuff CFGenKbGelExecutableBuff::operator =( cfcore::CFGenKbGelExecutableBuff& src ) {
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
		setRequiredGenItemId( src.getRequiredGenItemId() );
		return( *this );
	}

	bool CFGenKbGelExecutableBuff::operator <( const CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
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
		return( false );
	}

	bool CFGenKbGelExecutableBuff::operator <( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelExecutableBuff::operator <( const CFGenKbGelExecutableBuff& rhs ) {
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
		if( getRequiredGenItemId() > rhs.getRequiredGenItemId() ) {
			return( false );
		}
		else if( getRequiredGenItemId() < rhs.getRequiredGenItemId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelExecutableBuff::operator <=( const CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
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
		return( true );
	}

	bool CFGenKbGelExecutableBuff::operator <=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelExecutableBuff::operator <=( const CFGenKbGelExecutableBuff& rhs ) {
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
		if( getRequiredGenItemId() > rhs.getRequiredGenItemId() ) {
			return( false );
		}
		else if( getRequiredGenItemId() < rhs.getRequiredGenItemId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelExecutableBuff::operator ==( const CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelExecutableBuff::operator ==( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelExecutableBuff::operator ==( const CFGenKbGelExecutableBuff& rhs ) {
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
		if( getRequiredGenItemId() != rhs.getRequiredGenItemId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelExecutableBuff::operator !=( const CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelExecutableBuff::operator !=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelExecutableBuff::operator !=( const CFGenKbGelExecutableBuff& rhs ) {
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
		if( getRequiredGenItemId() != rhs.getRequiredGenItemId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelExecutableBuff::operator >=( const CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
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
		return( true );
	}

	bool CFGenKbGelExecutableBuff::operator >=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelExecutableBuff::operator >=( const CFGenKbGelExecutableBuff& rhs ) {
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
		if( getRequiredGenItemId() < rhs.getRequiredGenItemId() ) {
			return( false );
		}
		else if( getRequiredGenItemId() > rhs.getRequiredGenItemId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelExecutableBuff::operator >( const CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
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
		return( false );
	}

	bool CFGenKbGelExecutableBuff::operator >( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelExecutableBuff::operator >( const CFGenKbGelExecutableBuff& rhs ) {
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
		if( getRequiredGenItemId() < rhs.getRequiredGenItemId() ) {
			return( false );
		}
		else if( getRequiredGenItemId() > rhs.getRequiredGenItemId() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbGelExecutableBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelExecutableBuff" );
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
		static const std::string S_GenItemId( "GenItemId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GenItemId, getRequiredGenItemId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
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
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableBuff& rhs ) {
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
		if( lhs.getRequiredGenItemId() > rhs.getRequiredGenItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenItemId() < rhs.getRequiredGenItemId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
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
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableBuff& rhs ) {
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
		if( lhs.getRequiredGenItemId() > rhs.getRequiredGenItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenItemId() < rhs.getRequiredGenItemId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableBuff& rhs ) {
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
		if( lhs.getRequiredGenItemId() != rhs.getRequiredGenItemId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableBuff& rhs ) {
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
		if( lhs.getRequiredGenItemId() != rhs.getRequiredGenItemId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
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
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableBuff& rhs ) {
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
		if( lhs.getRequiredGenItemId() < rhs.getRequiredGenItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenItemId() > rhs.getRequiredGenItemId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableByGenItemIdxKey& rhs ) {
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
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelExecutableBuff& lhs, const cfcore::CFGenKbGelExecutableBuff& rhs ) {
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
		if( lhs.getRequiredGenItemId() < rhs.getRequiredGenItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenItemId() > rhs.getRequiredGenItemId() ) {
			return( true );
		}
		return( false );
	}
}

