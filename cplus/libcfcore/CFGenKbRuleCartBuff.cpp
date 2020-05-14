// Description: C++18 implementation for a RuleCart buffer object.

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

#include <cfgenkb/CFGenKbRuleCartByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbRuleCartByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbRuleCartBuff::S_VALUE( "value" );
	const std::string CFGenKbRuleCartBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbRuleCartBuff::GENDEFNAME( "RuleCart" );
	const classcode_t CFGenKbRuleCartBuff::CLASS_CODE = 0xa925L;
	const std::string CFGenKbRuleCartBuff::CLASS_NAME( "CFGenKbRuleCartBuff" );
		const std::string CFGenKbRuleCartBuff::COLNAME_TENANTID( "TenantId" );
		const std::string CFGenKbRuleCartBuff::COLNAME_ID( "Id" );
		const std::string CFGenKbRuleCartBuff::COLNAME_NAME( "Name" );
		const std::string CFGenKbRuleCartBuff::COLNAME_DESCR( "Descr" );
		const std::string CFGenKbRuleCartBuff::COLNAME_REVISIONSTRING( "RevisionString" );
	const int64_t CFGenKbRuleCartBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbRuleCartBuff::ID_INIT_VALUE = 0LL;
	const std::string CFGenKbRuleCartBuff::NAME_INIT_VALUE( "" );
	const int64_t CFGenKbRuleCartBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbRuleCartBuff::ID_MIN_VALUE = 0LL;
	const std::string::size_type CFGenKbRuleCartBuff::NAME_MAX_LEN = 127;
	const std::string::size_type CFGenKbRuleCartBuff::DESCR_MAX_LEN = 255;
	const std::string::size_type CFGenKbRuleCartBuff::REVISIONSTRING_MAX_LEN = 255;

	CFGenKbRuleCartBuff::CFGenKbRuleCartBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredTenantId = cfcore::CFGenKbRuleCartBuff::TENANTID_INIT_VALUE;
		requiredId = cfcore::CFGenKbRuleCartBuff::ID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbRuleCartBuff::NAME_INIT_VALUE );
		optionalDescr = NULL;
		optionalRevisionString = NULL;
	}

	CFGenKbRuleCartBuff::CFGenKbRuleCartBuff( const CFGenKbRuleCartBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredTenantId = cfcore::CFGenKbRuleCartBuff::TENANTID_INIT_VALUE;
		requiredId = cfcore::CFGenKbRuleCartBuff::ID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbRuleCartBuff::NAME_INIT_VALUE );
		optionalDescr = NULL;
		optionalRevisionString = NULL;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalDescrNull() ) {
			setOptionalDescrNull();
		}
		else {
			setOptionalDescrValue( src.getOptionalDescrValue() );
		}
		if( src.isOptionalRevisionStringNull() ) {
			setOptionalRevisionStringNull();
		}
		else {
			setOptionalRevisionStringValue( src.getOptionalRevisionStringValue() );
		}
	}

	CFGenKbRuleCartBuff::~CFGenKbRuleCartBuff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		if( optionalDescr != NULL ) {
			delete optionalDescr;
			optionalDescr = NULL;
		}
		if( optionalRevisionString != NULL ) {
			delete optionalRevisionString;
			optionalRevisionString = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbRuleCartBuff::clone() {
		CFGenKbRuleCartBuff* copy = new CFGenKbRuleCartBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbRuleCartBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbRuleCartBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbRuleCartBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const int64_t CFGenKbRuleCartBuff::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbRuleCartBuff::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbRuleCartBuff::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbRuleCartBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbRuleCartBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFGenKbRuleCartBuff::getRequiredId() const {
		return( requiredId );
	}

	const int64_t* CFGenKbRuleCartBuff::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbRuleCartBuff::setRequiredId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfcore::CFGenKbRuleCartBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbRuleCartBuff::ID_MIN_VALUE );
		}
		requiredId = value;
	}

	const std::string& CFGenKbRuleCartBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFGenKbRuleCartBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFGenKbRuleCartBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFGenKbRuleCartBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbRuleCartBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	const bool CFGenKbRuleCartBuff::isOptionalDescrNull() const {
		return( optionalDescr == NULL );
	}

	const std::string& CFGenKbRuleCartBuff::getOptionalDescrValue() const {
		static const std::string S_ProcName( "getOptionalDescrValue" );
		if( optionalDescr == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalDescr );
	}

	const std::string* CFGenKbRuleCartBuff::getOptionalDescrReference() const {
		return( optionalDescr );
	}

	void CFGenKbRuleCartBuff::setOptionalDescrNull() {
		if( optionalDescr != NULL ) {
			delete optionalDescr;
			optionalDescr = NULL;
		}
	}

	void CFGenKbRuleCartBuff::setOptionalDescrValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalDescrValue" );
		if( value.length() > CFGenKbRuleCartBuff::DESCR_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbRuleCartBuff::DESCR_MAX_LEN );
		}
		if( optionalDescr != NULL ) {
			delete optionalDescr;
			optionalDescr = NULL;
		}
		optionalDescr = new std::string( value );
	}

	const bool CFGenKbRuleCartBuff::isOptionalRevisionStringNull() const {
		return( optionalRevisionString == NULL );
	}

	const std::string& CFGenKbRuleCartBuff::getOptionalRevisionStringValue() const {
		static const std::string S_ProcName( "getOptionalRevisionStringValue" );
		if( optionalRevisionString == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalRevisionString );
	}

	const std::string* CFGenKbRuleCartBuff::getOptionalRevisionStringReference() const {
		return( optionalRevisionString );
	}

	void CFGenKbRuleCartBuff::setOptionalRevisionStringNull() {
		if( optionalRevisionString != NULL ) {
			delete optionalRevisionString;
			optionalRevisionString = NULL;
		}
	}

	void CFGenKbRuleCartBuff::setOptionalRevisionStringValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalRevisionStringValue" );
		if( value.length() > CFGenKbRuleCartBuff::REVISIONSTRING_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbRuleCartBuff::REVISIONSTRING_MAX_LEN );
		}
		if( optionalRevisionString != NULL ) {
			delete optionalRevisionString;
			optionalRevisionString = NULL;
		}
		optionalRevisionString = new std::string( value );
	}

	int32_t CFGenKbRuleCartBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbRuleCartBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbRuleCartBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		if( ! isOptionalDescrNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalDescrValue() );
		}
		if( ! isOptionalRevisionStringNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalRevisionStringValue() );
		}
		return( hashCode );
	}

	CFGenKbRuleCartBuff CFGenKbRuleCartBuff::operator =( cfcore::CFGenKbRuleCartBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalDescrNull() ) {
			setOptionalDescrNull();
		}
		else {
			setOptionalDescrValue( src.getOptionalDescrValue() );
		}
		if( src.isOptionalRevisionStringNull() ) {
			setOptionalRevisionStringNull();
		}
		else {
			setOptionalRevisionStringValue( src.getOptionalRevisionStringValue() );
		}
		return( *this );
	}

	bool CFGenKbRuleCartBuff::operator <( const CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator <( const CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator <( const CFGenKbRuleCartPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator <( const CFGenKbRuleCartBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( false );
			}
			if( getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
			if( getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator <=( const CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator <=( const CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator <=( const CFGenKbRuleCartPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator <=( const CFGenKbRuleCartBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( false );
			}
			if( getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
			if( getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator ==( const CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator ==( const CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator ==( const CFGenKbRuleCartPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator ==( const CFGenKbRuleCartBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! isOptionalDescrNull() ) {
			if( ! rhs.isOptionalDescrNull() ) {
				if( getOptionalDescrValue() != rhs.getOptionalDescrValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDescrNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				if( getOptionalRevisionStringValue() != rhs.getOptionalRevisionStringValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator !=( const CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator !=( const CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator !=( const CFGenKbRuleCartPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator !=( const CFGenKbRuleCartBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( getOptionalDescrValue() != rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( getOptionalRevisionStringValue() != rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator >=( const CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator >=( const CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator >=( const CFGenKbRuleCartPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator >=( const CFGenKbRuleCartBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbRuleCartBuff::operator >( const CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator >( const CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator >( const CFGenKbRuleCartPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleCartBuff::operator >( const CFGenKbRuleCartBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbRuleCartBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbRuleCartBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_Descr( "Descr" );
		static const std::string S_RevisionString( "RevisionString" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		if( ! isOptionalDescrNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Descr, getOptionalDescrValue() ) );
		}
		if( ! isOptionalRevisionStringNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_RevisionString, getOptionalRevisionStringValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
			if( lhs.getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
			if( lhs.getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( ! rhs.isOptionalDescrNull() ) {
				if( lhs.getOptionalDescrValue() != rhs.getOptionalDescrValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				if( lhs.getOptionalRevisionStringValue() != rhs.getOptionalRevisionStringValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescrValue() != rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( lhs.getOptionalRevisionStringValue() != rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( lhs.getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartByNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbRuleCartBuff& lhs, const cfcore::CFGenKbRuleCartBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( lhs.getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

