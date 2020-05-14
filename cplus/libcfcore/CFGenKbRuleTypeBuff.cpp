// Description: C++18 implementation for a RuleType buffer object.

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

#include <cfgenkb/CFGenKbRuleTypeByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbRuleTypeBuff::S_VALUE( "value" );
	const std::string CFGenKbRuleTypeBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbRuleTypeBuff::GENDEFNAME( "RuleType" );
	const classcode_t CFGenKbRuleTypeBuff::CLASS_CODE = 0xa926L;
	const std::string CFGenKbRuleTypeBuff::CLASS_NAME( "CFGenKbRuleTypeBuff" );
		const std::string CFGenKbRuleTypeBuff::COLNAME_ID( "Id" );
		const std::string CFGenKbRuleTypeBuff::COLNAME_NAME( "Name" );
	const int16_t CFGenKbRuleTypeBuff::ID_INIT_VALUE = (int16_t)0;
	const std::string CFGenKbRuleTypeBuff::NAME_INIT_VALUE( "" );
	const int16_t CFGenKbRuleTypeBuff::ID_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbRuleTypeBuff::ID_MAX_VALUE = (int16_t)32767;
	const std::string::size_type CFGenKbRuleTypeBuff::NAME_MAX_LEN = 32;

	CFGenKbRuleTypeBuff::CFGenKbRuleTypeBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredId = cfcore::CFGenKbRuleTypeBuff::ID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbRuleTypeBuff::NAME_INIT_VALUE );
	}

	CFGenKbRuleTypeBuff::CFGenKbRuleTypeBuff( const CFGenKbRuleTypeBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredId = cfcore::CFGenKbRuleTypeBuff::ID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbRuleTypeBuff::NAME_INIT_VALUE );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredName( src.getRequiredName() );
	}

	CFGenKbRuleTypeBuff::~CFGenKbRuleTypeBuff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbRuleTypeBuff::clone() {
		CFGenKbRuleTypeBuff* copy = new CFGenKbRuleTypeBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbRuleTypeBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbRuleTypeBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbRuleTypeBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const int16_t CFGenKbRuleTypeBuff::getRequiredId() const {
		return( requiredId );
	}

	const int16_t* CFGenKbRuleTypeBuff::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbRuleTypeBuff::setRequiredId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfcore::CFGenKbRuleTypeBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbRuleTypeBuff::ID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbRuleTypeBuff::ID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbRuleTypeBuff::ID_MAX_VALUE );
		}
		requiredId = value;
	}

	const std::string& CFGenKbRuleTypeBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFGenKbRuleTypeBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFGenKbRuleTypeBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFGenKbRuleTypeBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbRuleTypeBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	int32_t CFGenKbRuleTypeBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbRuleTypeBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbRuleTypeBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = ( hashCode * 0x10000 ) + getRequiredId();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	CFGenKbRuleTypeBuff CFGenKbRuleTypeBuff::operator =( cfcore::CFGenKbRuleTypeBuff& src ) {
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	bool CFGenKbRuleTypeBuff::operator <( const CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypeBuff::operator <( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypeBuff::operator <( const CFGenKbRuleTypeBuff& rhs ) {
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
		return( false );
	}

	bool CFGenKbRuleTypeBuff::operator <=( const CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleTypeBuff::operator <=( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleTypeBuff::operator <=( const CFGenKbRuleTypeBuff& rhs ) {
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
		return( true );
	}

	bool CFGenKbRuleTypeBuff::operator ==( const CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbRuleTypeBuff::operator ==( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbRuleTypeBuff::operator ==( const CFGenKbRuleTypeBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbRuleTypeBuff::operator !=( const CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypeBuff::operator !=( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypeBuff::operator !=( const CFGenKbRuleTypeBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypeBuff::operator >=( const CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleTypeBuff::operator >=( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleTypeBuff::operator >=( const CFGenKbRuleTypeBuff& rhs ) {
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
		return( true );
	}

	bool CFGenKbRuleTypeBuff::operator >( const CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypeBuff::operator >( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypeBuff::operator >( const CFGenKbRuleTypeBuff& rhs ) {
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
		return( false );
	}

	std::string CFGenKbRuleTypeBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbRuleTypeBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
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
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
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
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
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
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbRuleTypeBuff& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
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
		return( false );
	}
}

