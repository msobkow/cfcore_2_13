// Description: C++18 implementation for a DefClass buffer object.

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

#include <cfgenkb/CFGenKbDefClassByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbDefClassByBaseIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbDefClassBuff::S_VALUE( "value" );
	const std::string CFGenKbDefClassBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbDefClassBuff::GENDEFNAME( "DefClass" );
	const classcode_t CFGenKbDefClassBuff::CLASS_CODE = 0xa914L;
	const std::string CFGenKbDefClassBuff::CLASS_NAME( "CFGenKbDefClassBuff" );
		const std::string CFGenKbDefClassBuff::COLNAME_ID( "Id" );
		const std::string CFGenKbDefClassBuff::COLNAME_NAME( "Name" );
		const std::string CFGenKbDefClassBuff::COLNAME_BASEID( "BaseId" );
	const int16_t CFGenKbDefClassBuff::ID_INIT_VALUE = (int16_t)0;
	const std::string CFGenKbDefClassBuff::NAME_INIT_VALUE( "" );
	const int16_t CFGenKbDefClassBuff::BASEID_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbDefClassBuff::ID_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbDefClassBuff::BASEID_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbDefClassBuff::ID_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbDefClassBuff::BASEID_MAX_VALUE = (int16_t)32767;
	const std::string::size_type CFGenKbDefClassBuff::NAME_MAX_LEN = 32;

	CFGenKbDefClassBuff::CFGenKbDefClassBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredId = cfcore::CFGenKbDefClassBuff::ID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbDefClassBuff::NAME_INIT_VALUE );
		optionalBaseId.setNull();
	}

	CFGenKbDefClassBuff::CFGenKbDefClassBuff( const CFGenKbDefClassBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredId = cfcore::CFGenKbDefClassBuff::ID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbDefClassBuff::NAME_INIT_VALUE );
		optionalBaseId.setNull();
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalBaseIdNull() ) {
			setOptionalBaseIdNull();
		}
		else {
			setOptionalBaseIdValue( src.getOptionalBaseIdValue() );
		}
	}

	CFGenKbDefClassBuff::~CFGenKbDefClassBuff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbDefClassBuff::clone() {
		CFGenKbDefClassBuff* copy = new CFGenKbDefClassBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbDefClassBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbDefClassBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbDefClassBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const int16_t CFGenKbDefClassBuff::getRequiredId() const {
		return( requiredId );
	}

	const int16_t* CFGenKbDefClassBuff::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbDefClassBuff::setRequiredId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfcore::CFGenKbDefClassBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbDefClassBuff::ID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbDefClassBuff::ID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbDefClassBuff::ID_MAX_VALUE );
		}
		requiredId = value;
	}

	const std::string& CFGenKbDefClassBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFGenKbDefClassBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFGenKbDefClassBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFGenKbDefClassBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbDefClassBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	const bool CFGenKbDefClassBuff::isOptionalBaseIdNull() const {
		return( optionalBaseId.isNull() );
	}

	const int16_t CFGenKbDefClassBuff::getOptionalBaseIdValue() const {
		return( optionalBaseId.getValue() );
	}

	const int16_t* CFGenKbDefClassBuff::getOptionalBaseIdReference() const {
		return( optionalBaseId.getReference() );
	}

	void CFGenKbDefClassBuff::setOptionalBaseIdNull() {
		optionalBaseId.setNull();
	}

	void CFGenKbDefClassBuff::setOptionalBaseIdValue( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalBaseIdValue" );
		if( value < cfcore::CFGenKbDefClassBuff::BASEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbDefClassBuff::BASEID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbDefClassBuff::BASEID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbDefClassBuff::BASEID_MAX_VALUE );
		}
		optionalBaseId.setValue( value );
	}

	int32_t CFGenKbDefClassBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbDefClassBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbDefClassBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = ( hashCode * 0x10000 ) + getRequiredId();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		if( ! isOptionalBaseIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBaseIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFGenKbDefClassBuff CFGenKbDefClassBuff::operator =( cfcore::CFGenKbDefClassBuff& src ) {
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalBaseIdNull() ) {
			setOptionalBaseIdNull();
		}
		else {
			setOptionalBaseIdValue( src.getOptionalBaseIdValue() );
		}
		return( *this );
	}

	bool CFGenKbDefClassBuff::operator <( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator <( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator <( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator <( const CFGenKbDefClassBuff& rhs ) {
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
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator <=( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator <=( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator <=( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator <=( const CFGenKbDefClassBuff& rhs ) {
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
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator ==( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator ==( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( ! rhs.isOptionalBaseIdNull() ) {
				if( getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator ==( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator ==( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! isOptionalBaseIdNull() ) {
			if( ! rhs.isOptionalBaseIdNull() ) {
				if( getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator !=( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator !=( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator !=( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator !=( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator >=( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator >=( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator >=( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator >=( const CFGenKbDefClassBuff& rhs ) {
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
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassBuff::operator >( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator >( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator >( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassBuff::operator >( const CFGenKbDefClassBuff& rhs ) {
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
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbDefClassBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbDefClassBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_BaseId( "BaseId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		if( ! isOptionalBaseIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_BaseId, getOptionalBaseIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
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
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
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
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( ! rhs.isOptionalBaseIdNull() ) {
				if( lhs.getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( ! rhs.isOptionalBaseIdNull() ) {
				if( lhs.getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
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
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
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
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

