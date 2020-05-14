// Description: C++18 implementation for a GelSwitch buffer object.

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
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGelSwitchBuff::GENDEFNAME( "GelSwitch" );
	const classcode_t CFGenKbGelSwitchBuff::CLASS_CODE = 0xa91eL;
	const std::string CFGenKbGelSwitchBuff::CLASS_NAME( "CFGenKbGelSwitchBuff" );
		const std::string CFGenKbGelSwitchBuff::COLNAME_VALUEEXPANSION( "ValueExpansion" );
		const std::string CFGenKbGelSwitchBuff::COLNAME_NILEXPANSION( "NilExpansion" );
		const std::string CFGenKbGelSwitchBuff::COLNAME_EMPTYEXPANSION( "EmptyExpansion" );
		const std::string CFGenKbGelSwitchBuff::COLNAME_DEFAULTEXPANSION( "DefaultExpansion" );
	const int64_t CFGenKbGelSwitchBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSwitchBuff::GELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSwitchBuff::GELINSTID_INIT_VALUE = 0LL;
	const std::string CFGenKbGelSwitchBuff::VALUEEXPANSION_INIT_VALUE( "" );
	const std::string CFGenKbGelSwitchBuff::NILEXPANSION_INIT_VALUE( "" );
	const std::string CFGenKbGelSwitchBuff::EMPTYEXPANSION_INIT_VALUE( "" );
	const std::string CFGenKbGelSwitchBuff::DEFAULTEXPANSION_INIT_VALUE( "" );
	const int64_t CFGenKbGelSwitchBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSwitchBuff::GELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSwitchBuff::GELINSTID_MIN_VALUE = 0LL;
	const std::string::size_type CFGenKbGelSwitchBuff::VALUEEXPANSION_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSwitchBuff::NILEXPANSION_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSwitchBuff::EMPTYEXPANSION_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSwitchBuff::DEFAULTEXPANSION_MAX_LEN = 127;

	CFGenKbGelSwitchBuff::CFGenKbGelSwitchBuff()
	: CFGenKbGelInstructionBuff()
	{
		requiredValueExpansion = new std::string( cfcore::CFGenKbGelSwitchBuff::VALUEEXPANSION_INIT_VALUE );
		optionalNilExpansion = NULL;
		optionalEmptyExpansion = NULL;
		requiredDefaultExpansion = new std::string( cfcore::CFGenKbGelSwitchBuff::DEFAULTEXPANSION_INIT_VALUE );
	}

	CFGenKbGelSwitchBuff::CFGenKbGelSwitchBuff( const CFGenKbGelSwitchBuff& src )
	: CFGenKbGelInstructionBuff()
	{
		requiredValueExpansion = new std::string( cfcore::CFGenKbGelSwitchBuff::VALUEEXPANSION_INIT_VALUE );
		optionalNilExpansion = NULL;
		optionalEmptyExpansion = NULL;
		requiredDefaultExpansion = new std::string( cfcore::CFGenKbGelSwitchBuff::DEFAULTEXPANSION_INIT_VALUE );
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
		setRequiredValueExpansion( src.getRequiredValueExpansion() );
		if( src.isOptionalNilExpansionNull() ) {
			setOptionalNilExpansionNull();
		}
		else {
			setOptionalNilExpansionValue( src.getOptionalNilExpansionValue() );
		}
		if( src.isOptionalEmptyExpansionNull() ) {
			setOptionalEmptyExpansionNull();
		}
		else {
			setOptionalEmptyExpansionValue( src.getOptionalEmptyExpansionValue() );
		}
		setRequiredDefaultExpansion( src.getRequiredDefaultExpansion() );
	}

	CFGenKbGelSwitchBuff::~CFGenKbGelSwitchBuff() {
		if( requiredValueExpansion != NULL ) {
			delete requiredValueExpansion;
			requiredValueExpansion = NULL;
		}
		if( optionalNilExpansion != NULL ) {
			delete optionalNilExpansion;
			optionalNilExpansion = NULL;
		}
		if( optionalEmptyExpansion != NULL ) {
			delete optionalEmptyExpansion;
			optionalEmptyExpansion = NULL;
		}
		if( requiredDefaultExpansion != NULL ) {
			delete requiredDefaultExpansion;
			requiredDefaultExpansion = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbGelSwitchBuff::clone() {
		CFGenKbGelSwitchBuff* copy = new CFGenKbGelSwitchBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGelSwitchBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSwitchBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelSwitchBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfcore::CFGenKbGelInstructionBuff::implementsClassCode( argClassCode ) );
		}
	}

	const std::string& CFGenKbGelSwitchBuff::getRequiredValueExpansion() const {
		return( *requiredValueExpansion );
	}

	const std::string* CFGenKbGelSwitchBuff::getRequiredValueExpansionReference() const {
		return( requiredValueExpansion );
	}

	void CFGenKbGelSwitchBuff::setRequiredValueExpansion( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredValueExpansion" );
		if( value.length() > CFGenKbGelSwitchBuff::VALUEEXPANSION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSwitchBuff::VALUEEXPANSION_MAX_LEN );
		}
		if( requiredValueExpansion != NULL ) {
			delete requiredValueExpansion;
			requiredValueExpansion = NULL;
		}
		requiredValueExpansion = new std::string( value );
	}

	const bool CFGenKbGelSwitchBuff::isOptionalNilExpansionNull() const {
		return( optionalNilExpansion == NULL );
	}

	const std::string& CFGenKbGelSwitchBuff::getOptionalNilExpansionValue() const {
		static const std::string S_ProcName( "getOptionalNilExpansionValue" );
		if( optionalNilExpansion == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalNilExpansion );
	}

	const std::string* CFGenKbGelSwitchBuff::getOptionalNilExpansionReference() const {
		return( optionalNilExpansion );
	}

	void CFGenKbGelSwitchBuff::setOptionalNilExpansionNull() {
		if( optionalNilExpansion != NULL ) {
			delete optionalNilExpansion;
			optionalNilExpansion = NULL;
		}
	}

	void CFGenKbGelSwitchBuff::setOptionalNilExpansionValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalNilExpansionValue" );
		if( value.length() > CFGenKbGelSwitchBuff::NILEXPANSION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSwitchBuff::NILEXPANSION_MAX_LEN );
		}
		if( optionalNilExpansion != NULL ) {
			delete optionalNilExpansion;
			optionalNilExpansion = NULL;
		}
		optionalNilExpansion = new std::string( value );
	}

	const bool CFGenKbGelSwitchBuff::isOptionalEmptyExpansionNull() const {
		return( optionalEmptyExpansion == NULL );
	}

	const std::string& CFGenKbGelSwitchBuff::getOptionalEmptyExpansionValue() const {
		static const std::string S_ProcName( "getOptionalEmptyExpansionValue" );
		if( optionalEmptyExpansion == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalEmptyExpansion );
	}

	const std::string* CFGenKbGelSwitchBuff::getOptionalEmptyExpansionReference() const {
		return( optionalEmptyExpansion );
	}

	void CFGenKbGelSwitchBuff::setOptionalEmptyExpansionNull() {
		if( optionalEmptyExpansion != NULL ) {
			delete optionalEmptyExpansion;
			optionalEmptyExpansion = NULL;
		}
	}

	void CFGenKbGelSwitchBuff::setOptionalEmptyExpansionValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalEmptyExpansionValue" );
		if( value.length() > CFGenKbGelSwitchBuff::EMPTYEXPANSION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSwitchBuff::EMPTYEXPANSION_MAX_LEN );
		}
		if( optionalEmptyExpansion != NULL ) {
			delete optionalEmptyExpansion;
			optionalEmptyExpansion = NULL;
		}
		optionalEmptyExpansion = new std::string( value );
	}

	const std::string& CFGenKbGelSwitchBuff::getRequiredDefaultExpansion() const {
		return( *requiredDefaultExpansion );
	}

	const std::string* CFGenKbGelSwitchBuff::getRequiredDefaultExpansionReference() const {
		return( requiredDefaultExpansion );
	}

	void CFGenKbGelSwitchBuff::setRequiredDefaultExpansion( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredDefaultExpansion" );
		if( value.length() > CFGenKbGelSwitchBuff::DEFAULTEXPANSION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSwitchBuff::DEFAULTEXPANSION_MAX_LEN );
		}
		if( requiredDefaultExpansion != NULL ) {
			delete requiredDefaultExpansion;
			requiredDefaultExpansion = NULL;
		}
		requiredDefaultExpansion = new std::string( value );
	}

	size_t CFGenKbGelSwitchBuff::hashCode() const {
		size_t hashCode = CFGenKbGelInstructionBuff::hashCode();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredValueExpansion() );
		if( ! isOptionalNilExpansionNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalNilExpansionValue() );
		}
		if( ! isOptionalEmptyExpansionNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalEmptyExpansionValue() );
		}
		hashCode = hashCode + cflib::CFLib::hash( getRequiredDefaultExpansion() );
		return( hashCode );
	}

	CFGenKbGelSwitchBuff CFGenKbGelSwitchBuff::operator =( cfcore::CFGenKbGelSwitchBuff& src ) {
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
		setRequiredValueExpansion( src.getRequiredValueExpansion() );
		if( src.isOptionalNilExpansionNull() ) {
			setOptionalNilExpansionNull();
		}
		else {
			setOptionalNilExpansionValue( src.getOptionalNilExpansionValue() );
		}
		if( src.isOptionalEmptyExpansionNull() ) {
			setOptionalEmptyExpansionNull();
		}
		else {
			setOptionalEmptyExpansionValue( src.getOptionalEmptyExpansionValue() );
		}
		setRequiredDefaultExpansion( src.getRequiredDefaultExpansion() );
		return( *this );
	}

	bool CFGenKbGelSwitchBuff::operator <( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSwitchBuff::operator <( const CFGenKbGelSwitchBuff& rhs ) {
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
		if( getRequiredValueExpansion() > rhs.getRequiredValueExpansion() ) {
			return( false );
		}
		else if( getRequiredValueExpansion() < rhs.getRequiredValueExpansion() ) {
			return( true );
		}
		if( ! isOptionalNilExpansionNull() ) {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( false );
			}
			if( getOptionalNilExpansionValue() > rhs.getOptionalNilExpansionValue() ) {
				return( false );
			}
			else if( getOptionalNilExpansionValue() < rhs.getOptionalNilExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalEmptyExpansionNull() ) {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( false );
			}
			if( getOptionalEmptyExpansionValue() > rhs.getOptionalEmptyExpansionValue() ) {
				return( false );
			}
			else if( getOptionalEmptyExpansionValue() < rhs.getOptionalEmptyExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
		}
		if( getRequiredDefaultExpansion() > rhs.getRequiredDefaultExpansion() ) {
			return( false );
		}
		else if( getRequiredDefaultExpansion() < rhs.getRequiredDefaultExpansion() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchBuff::operator <=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSwitchBuff::operator <=( const CFGenKbGelSwitchBuff& rhs ) {
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
		if( getRequiredValueExpansion() > rhs.getRequiredValueExpansion() ) {
			return( false );
		}
		else if( getRequiredValueExpansion() < rhs.getRequiredValueExpansion() ) {
			return( true );
		}
		if( ! isOptionalNilExpansionNull() ) {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( false );
			}
			if( getOptionalNilExpansionValue() > rhs.getOptionalNilExpansionValue() ) {
				return( false );
			}
			else if( getOptionalNilExpansionValue() < rhs.getOptionalNilExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalEmptyExpansionNull() ) {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( false );
			}
			if( getOptionalEmptyExpansionValue() > rhs.getOptionalEmptyExpansionValue() ) {
				return( false );
			}
			else if( getOptionalEmptyExpansionValue() < rhs.getOptionalEmptyExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
		}
		if( getRequiredDefaultExpansion() > rhs.getRequiredDefaultExpansion() ) {
			return( false );
		}
		else if( getRequiredDefaultExpansion() < rhs.getRequiredDefaultExpansion() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchBuff::operator ==( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSwitchBuff::operator ==( const CFGenKbGelSwitchBuff& rhs ) {
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
		if( getRequiredValueExpansion() != rhs.getRequiredValueExpansion() ) {
			return( false );
		}
		if( ! isOptionalNilExpansionNull() ) {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				if( getOptionalNilExpansionValue() != rhs.getOptionalNilExpansionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalEmptyExpansionNull() ) {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				if( getOptionalEmptyExpansionValue() != rhs.getOptionalEmptyExpansionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( false );
			}
		}
		if( getRequiredDefaultExpansion() != rhs.getRequiredDefaultExpansion() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSwitchBuff::operator !=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSwitchBuff::operator !=( const CFGenKbGelSwitchBuff& rhs ) {
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
		if( getRequiredValueExpansion() != rhs.getRequiredValueExpansion() ) {
			return( true );
		}
		if( ! isOptionalNilExpansionNull() ) {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
			if( getOptionalNilExpansionValue() != rhs.getOptionalNilExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalEmptyExpansionNull() ) {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
			if( getOptionalEmptyExpansionValue() != rhs.getOptionalEmptyExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
		}
		if( getRequiredDefaultExpansion() != rhs.getRequiredDefaultExpansion() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchBuff::operator >=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSwitchBuff::operator >=( const CFGenKbGelSwitchBuff& rhs ) {
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
		if( getRequiredValueExpansion() < rhs.getRequiredValueExpansion() ) {
			return( false );
		}
		else if( getRequiredValueExpansion() > rhs.getRequiredValueExpansion() ) {
			return( true );
		}
		if( ! isOptionalNilExpansionNull() ) {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
			if( getOptionalNilExpansionValue() < rhs.getOptionalNilExpansionValue() ) {
				return( false );
			}
			else if( getOptionalNilExpansionValue() > rhs.getOptionalNilExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalEmptyExpansionNull() ) {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
			if( getOptionalEmptyExpansionValue() < rhs.getOptionalEmptyExpansionValue() ) {
				return( false );
			}
			else if( getOptionalEmptyExpansionValue() > rhs.getOptionalEmptyExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				return( false );
			}
		}
		if( getRequiredDefaultExpansion() < rhs.getRequiredDefaultExpansion() ) {
			return( false );
		}
		else if( getRequiredDefaultExpansion() > rhs.getRequiredDefaultExpansion() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchBuff::operator >( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelSwitchBuff::operator >( const CFGenKbGelSwitchBuff& rhs ) {
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
		if( getRequiredValueExpansion() < rhs.getRequiredValueExpansion() ) {
			return( false );
		}
		else if( getRequiredValueExpansion() > rhs.getRequiredValueExpansion() ) {
			return( true );
		}
		if( ! isOptionalNilExpansionNull() ) {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
			if( getOptionalNilExpansionValue() < rhs.getOptionalNilExpansionValue() ) {
				return( false );
			}
			else if( getOptionalNilExpansionValue() > rhs.getOptionalNilExpansionValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalEmptyExpansionNull() ) {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
			if( getOptionalEmptyExpansionValue() < rhs.getOptionalEmptyExpansionValue() ) {
				return( false );
			}
			else if( getOptionalEmptyExpansionValue() > rhs.getOptionalEmptyExpansionValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredDefaultExpansion() < rhs.getRequiredDefaultExpansion() ) {
			return( false );
		}
		else if( getRequiredDefaultExpansion() > rhs.getRequiredDefaultExpansion() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbGelSwitchBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSwitchBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_ValueExpansion( "ValueExpansion" );
		static const std::string S_NilExpansion( "NilExpansion" );
		static const std::string S_EmptyExpansion( "EmptyExpansion" );
		static const std::string S_DefaultExpansion( "DefaultExpansion" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ValueExpansion, getRequiredValueExpansion() ) );
		if( ! isOptionalNilExpansionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_NilExpansion, getOptionalNilExpansionValue() ) );
		}
		if( ! isOptionalEmptyExpansionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_EmptyExpansion, getOptionalEmptyExpansionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DefaultExpansion, getRequiredDefaultExpansion() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs ) {
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
		if( lhs.getRequiredValueExpansion() > rhs.getRequiredValueExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredValueExpansion() < rhs.getRequiredValueExpansion() ) {
			return( true );
		}
		if( ! lhs.isOptionalNilExpansionNull() ) {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( false );
			}
			if( lhs.getOptionalNilExpansionValue() > rhs.getOptionalNilExpansionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNilExpansionValue() < rhs.getOptionalNilExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalEmptyExpansionNull() ) {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( false );
			}
			if( lhs.getOptionalEmptyExpansionValue() > rhs.getOptionalEmptyExpansionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalEmptyExpansionValue() < rhs.getOptionalEmptyExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredDefaultExpansion() > rhs.getRequiredDefaultExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredDefaultExpansion() < rhs.getRequiredDefaultExpansion() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs ) {
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
		if( lhs.getRequiredValueExpansion() > rhs.getRequiredValueExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredValueExpansion() < rhs.getRequiredValueExpansion() ) {
			return( true );
		}
		if( ! lhs.isOptionalNilExpansionNull() ) {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( false );
			}
			if( lhs.getOptionalNilExpansionValue() > rhs.getOptionalNilExpansionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNilExpansionValue() < rhs.getOptionalNilExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalEmptyExpansionNull() ) {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( false );
			}
			if( lhs.getOptionalEmptyExpansionValue() > rhs.getOptionalEmptyExpansionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalEmptyExpansionValue() < rhs.getOptionalEmptyExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredDefaultExpansion() > rhs.getRequiredDefaultExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredDefaultExpansion() < rhs.getRequiredDefaultExpansion() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs ) {
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
		if( lhs.getRequiredValueExpansion() != rhs.getRequiredValueExpansion() ) {
			return( false );
		}
		if( ! lhs.isOptionalNilExpansionNull() ) {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				if( lhs.getOptionalNilExpansionValue() != rhs.getOptionalNilExpansionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalEmptyExpansionNull() ) {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				if( lhs.getOptionalEmptyExpansionValue() != rhs.getOptionalEmptyExpansionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredDefaultExpansion() != rhs.getRequiredDefaultExpansion() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs ) {
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
		if( lhs.getRequiredValueExpansion() != rhs.getRequiredValueExpansion() ) {
			return( true );
		}
		if( ! lhs.isOptionalNilExpansionNull() ) {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
			if( lhs.getOptionalNilExpansionValue() != rhs.getOptionalNilExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalEmptyExpansionNull() ) {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
			if( lhs.getOptionalEmptyExpansionValue() != rhs.getOptionalEmptyExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredDefaultExpansion() != rhs.getRequiredDefaultExpansion() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs ) {
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
		if( lhs.getRequiredValueExpansion() < rhs.getRequiredValueExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredValueExpansion() > rhs.getRequiredValueExpansion() ) {
			return( true );
		}
		if( ! lhs.isOptionalNilExpansionNull() ) {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
			if( lhs.getOptionalNilExpansionValue() < rhs.getOptionalNilExpansionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNilExpansionValue() > rhs.getOptionalNilExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalEmptyExpansionNull() ) {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
			if( lhs.getOptionalEmptyExpansionValue() < rhs.getOptionalEmptyExpansionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalEmptyExpansionValue() > rhs.getOptionalEmptyExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredDefaultExpansion() < rhs.getRequiredDefaultExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredDefaultExpansion() > rhs.getRequiredDefaultExpansion() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs ) {
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
		if( lhs.getRequiredValueExpansion() < rhs.getRequiredValueExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredValueExpansion() > rhs.getRequiredValueExpansion() ) {
			return( true );
		}
		if( ! lhs.isOptionalNilExpansionNull() ) {
			if( rhs.isOptionalNilExpansionNull() ) {
				return( true );
			}
			if( lhs.getOptionalNilExpansionValue() < rhs.getOptionalNilExpansionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNilExpansionValue() > rhs.getOptionalNilExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNilExpansionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalEmptyExpansionNull() ) {
			if( rhs.isOptionalEmptyExpansionNull() ) {
				return( true );
			}
			if( lhs.getOptionalEmptyExpansionValue() < rhs.getOptionalEmptyExpansionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalEmptyExpansionValue() > rhs.getOptionalEmptyExpansionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEmptyExpansionNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredDefaultExpansion() < rhs.getRequiredDefaultExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredDefaultExpansion() > rhs.getRequiredDefaultExpansion() ) {
			return( true );
		}
		return( false );
	}
}

