// Description: C++18 implementation for a Tool buffer object.

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

#include <cfgenkb/CFGenKbToolByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbToolByReplacesIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbToolBuff::S_VALUE( "value" );
	const std::string CFGenKbToolBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbToolBuff::GENDEFNAME( "Tool" );
	const classcode_t CFGenKbToolBuff::CLASS_CODE = 0xa927L;
	const std::string CFGenKbToolBuff::CLASS_NAME( "CFGenKbToolBuff" );
		const std::string CFGenKbToolBuff::COLNAME_ID( "Id" );
		const std::string CFGenKbToolBuff::COLNAME_NAME( "Name" );
		const std::string CFGenKbToolBuff::COLNAME_REPLACESID( "ReplacesId" );
		const std::string CFGenKbToolBuff::COLNAME_ISSUPPORTED( "IsSupported" );
	const int16_t CFGenKbToolBuff::ID_INIT_VALUE = (int16_t)0;
	const std::string CFGenKbToolBuff::NAME_INIT_VALUE( "" );
	const int16_t CFGenKbToolBuff::REPLACESID_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbToolBuff::ID_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolBuff::REPLACESID_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolBuff::ID_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbToolBuff::REPLACESID_MAX_VALUE = (int16_t)32767;
	const std::string::size_type CFGenKbToolBuff::NAME_MAX_LEN = 32;

	CFGenKbToolBuff::CFGenKbToolBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredId = cfcore::CFGenKbToolBuff::ID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbToolBuff::NAME_INIT_VALUE );
		optionalReplacesId.setNull();
	}

	CFGenKbToolBuff::CFGenKbToolBuff( const CFGenKbToolBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredId = cfcore::CFGenKbToolBuff::ID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbToolBuff::NAME_INIT_VALUE );
		optionalReplacesId.setNull();
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalReplacesIdNull() ) {
			setOptionalReplacesIdNull();
		}
		else {
			setOptionalReplacesIdValue( src.getOptionalReplacesIdValue() );
		}
		setRequiredIsSupported( src.getRequiredIsSupported() );
	}

	CFGenKbToolBuff::~CFGenKbToolBuff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbToolBuff::clone() {
		CFGenKbToolBuff* copy = new CFGenKbToolBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbToolBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbToolBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbToolBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const int16_t CFGenKbToolBuff::getRequiredId() const {
		return( requiredId );
	}

	const int16_t* CFGenKbToolBuff::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbToolBuff::setRequiredId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfcore::CFGenKbToolBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolBuff::ID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolBuff::ID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolBuff::ID_MAX_VALUE );
		}
		requiredId = value;
	}

	const std::string& CFGenKbToolBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFGenKbToolBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFGenKbToolBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFGenKbToolBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbToolBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	const bool CFGenKbToolBuff::isOptionalReplacesIdNull() const {
		return( optionalReplacesId.isNull() );
	}

	const int16_t CFGenKbToolBuff::getOptionalReplacesIdValue() const {
		return( optionalReplacesId.getValue() );
	}

	const int16_t* CFGenKbToolBuff::getOptionalReplacesIdReference() const {
		return( optionalReplacesId.getReference() );
	}

	void CFGenKbToolBuff::setOptionalReplacesIdNull() {
		optionalReplacesId.setNull();
	}

	void CFGenKbToolBuff::setOptionalReplacesIdValue( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalReplacesIdValue" );
		if( value < cfcore::CFGenKbToolBuff::REPLACESID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolBuff::REPLACESID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolBuff::REPLACESID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolBuff::REPLACESID_MAX_VALUE );
		}
		optionalReplacesId.setValue( value );
	}

	const bool CFGenKbToolBuff::getRequiredIsSupported() const {
		return( requiredIsSupported );
	}

	const bool* CFGenKbToolBuff::getRequiredIsSupportedReference() const {
		return( &requiredIsSupported );
	}

	void CFGenKbToolBuff::setRequiredIsSupported( const bool value ) {
		requiredIsSupported = value;
	}

	int32_t CFGenKbToolBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbToolBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbToolBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = ( hashCode * 0x10000 ) + getRequiredId();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		if( ! isOptionalReplacesIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalReplacesIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( getRequiredIsSupported() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		return( hashCode );
	}

	CFGenKbToolBuff CFGenKbToolBuff::operator =( cfcore::CFGenKbToolBuff& src ) {
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalReplacesIdNull() ) {
			setOptionalReplacesIdNull();
		}
		else {
			setOptionalReplacesIdValue( src.getOptionalReplacesIdValue() );
		}
		setRequiredIsSupported( src.getRequiredIsSupported() );
		return( *this );
	}

	bool CFGenKbToolBuff::operator <( const CFGenKbToolByNameIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator <( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator <( const CFGenKbToolPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator <( const CFGenKbToolBuff& rhs ) {
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
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		if( getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator <=( const CFGenKbToolByNameIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator <=( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator <=( const CFGenKbToolPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator <=( const CFGenKbToolBuff& rhs ) {
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
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		if( getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator ==( const CFGenKbToolByNameIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator ==( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				if( getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator ==( const CFGenKbToolPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator ==( const CFGenKbToolBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! isOptionalReplacesIdNull() ) {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				if( getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		if( getRequiredIsSupported() != rhs.getRequiredIsSupported() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator !=( const CFGenKbToolByNameIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator !=( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator !=( const CFGenKbToolPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator !=( const CFGenKbToolBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		if( getRequiredIsSupported() != rhs.getRequiredIsSupported() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator >=( const CFGenKbToolByNameIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator >=( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator >=( const CFGenKbToolPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator >=( const CFGenKbToolBuff& rhs ) {
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
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		if( getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolBuff::operator >( const CFGenKbToolByNameIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator >( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator >( const CFGenKbToolPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolBuff::operator >( const CFGenKbToolBuff& rhs ) {
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
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbToolBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_ReplacesId( "ReplacesId" );
		static const std::string S_IsSupported( "IsSupported" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		if( ! isOptionalReplacesIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ReplacesId, getOptionalReplacesIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsSupported, getRequiredIsSupported() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
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
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( lhs.getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
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
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( lhs.getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				if( lhs.getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				if( lhs.getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsSupported() != rhs.getRequiredIsSupported() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsSupported() != rhs.getRequiredIsSupported() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
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
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( lhs.getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolBuff& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
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
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( lhs.getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( true );
		}
		return( false );
	}
}

