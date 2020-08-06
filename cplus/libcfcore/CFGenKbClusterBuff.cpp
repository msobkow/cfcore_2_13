// Description: C++18 implementation for a Cluster buffer object.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbClusterByUDomNameIdxKey.hpp>
#include <cfgenkb/CFGenKbClusterByUDescrIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbClusterBuff::S_VALUE( "value" );
	const std::string CFGenKbClusterBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbClusterBuff::GENDEFNAME( "Cluster" );
	const classcode_t CFGenKbClusterBuff::CLASS_CODE = 0xa901L;
	const std::string CFGenKbClusterBuff::CLASS_NAME( "CFGenKbClusterBuff" );
		const std::string CFGenKbClusterBuff::COLNAME_ID( "Id" );
		const std::string CFGenKbClusterBuff::COLNAME_FULLDOMNAME( "FullDomName" );
		const std::string CFGenKbClusterBuff::COLNAME_DESCRIPTION( "Description" );
	const char* CFGenKbClusterBuff::S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const char* CFGenKbClusterBuff::S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const int64_t CFGenKbClusterBuff::ID_INIT_VALUE = 0LL;
	const std::string CFGenKbClusterBuff::FULLDOMNAME_INIT_VALUE( "" );
	const std::string CFGenKbClusterBuff::DESCRIPTION_INIT_VALUE( "" );
	const int64_t CFGenKbClusterBuff::ID_MIN_VALUE = 0LL;
	const std::string::size_type CFGenKbClusterBuff::FULLDOMNAME_MAX_LEN = 192;
	const std::string::size_type CFGenKbClusterBuff::DESCRIPTION_MAX_LEN = 128;

	CFGenKbClusterBuff::CFGenKbClusterBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		createdAt = cflib::CFLib::getUTCTimestampInstance();
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
		updatedAt = cflib::CFLib::getUTCTimestampInstance();
		requiredId = cfcore::CFGenKbClusterBuff::ID_INIT_VALUE;
		requiredFullDomName = new std::string( cfcore::CFGenKbClusterBuff::FULLDOMNAME_INIT_VALUE );
		requiredDescription = new std::string( cfcore::CFGenKbClusterBuff::DESCRIPTION_INIT_VALUE );
	}

	CFGenKbClusterBuff::CFGenKbClusterBuff( const CFGenKbClusterBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		createdAt = cflib::CFLib::getUTCTimestampInstance();
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
		updatedAt = cflib::CFLib::getUTCTimestampInstance();
		requiredId = cfcore::CFGenKbClusterBuff::ID_INIT_VALUE;
		requiredFullDomName = new std::string( cfcore::CFGenKbClusterBuff::FULLDOMNAME_INIT_VALUE );
		requiredDescription = new std::string( cfcore::CFGenKbClusterBuff::DESCRIPTION_INIT_VALUE );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredFullDomName( src.getRequiredFullDomName() );
		setRequiredDescription( src.getRequiredDescription() );
	}

	CFGenKbClusterBuff::~CFGenKbClusterBuff() {
		if( requiredFullDomName != NULL ) {
			delete requiredFullDomName;
			requiredFullDomName = NULL;
		}
		if( requiredDescription != NULL ) {
			delete requiredDescription;
			requiredDescription = NULL;
		}
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbClusterBuff::clone() {
		CFGenKbClusterBuff* copy = new CFGenKbClusterBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbClusterBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbClusterBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbClusterBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const uuid_ptr_t CFGenKbClusterBuff::getCreatedByUserId() const {
		return( createdByUserId );
	}

	void CFGenKbClusterBuff::setCreatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( createdByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbClusterBuff::getCreatedAt() const {
		return( createdAt );
	}

	void CFGenKbClusterBuff::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		createdAt = value;
	}

	const uuid_ptr_t CFGenKbClusterBuff::getUpdatedByUserId() const {
		return( updatedByUserId );
	}

	void CFGenKbClusterBuff::setUpdatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( updatedByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbClusterBuff::getUpdatedAt() const {
		return( updatedAt );
	}

	void CFGenKbClusterBuff::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		updatedAt = value;
	}
	const int64_t CFGenKbClusterBuff::getRequiredId() const {
		return( requiredId );
	}

	const int64_t* CFGenKbClusterBuff::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbClusterBuff::setRequiredId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfcore::CFGenKbClusterBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbClusterBuff::ID_MIN_VALUE );
		}
		requiredId = value;
	}

	const std::string& CFGenKbClusterBuff::getRequiredFullDomName() const {
		return( *requiredFullDomName );
	}

	const std::string* CFGenKbClusterBuff::getRequiredFullDomNameReference() const {
		return( requiredFullDomName );
	}

	void CFGenKbClusterBuff::setRequiredFullDomName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredFullDomName" );
		if( value.length() > CFGenKbClusterBuff::FULLDOMNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbClusterBuff::FULLDOMNAME_MAX_LEN );
		}
		if( requiredFullDomName != NULL ) {
			delete requiredFullDomName;
			requiredFullDomName = NULL;
		}
		requiredFullDomName = new std::string( value );
	}

	const std::string& CFGenKbClusterBuff::getRequiredDescription() const {
		return( *requiredDescription );
	}

	const std::string* CFGenKbClusterBuff::getRequiredDescriptionReference() const {
		return( requiredDescription );
	}

	void CFGenKbClusterBuff::setRequiredDescription( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredDescription" );
		if( value.length() > CFGenKbClusterBuff::DESCRIPTION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbClusterBuff::DESCRIPTION_MAX_LEN );
		}
		if( requiredDescription != NULL ) {
			delete requiredDescription;
			requiredDescription = NULL;
		}
		requiredDescription = new std::string( value );
	}

	int32_t CFGenKbClusterBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbClusterBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbClusterBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredFullDomName() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredDescription() );
		return( hashCode );
	}

	CFGenKbClusterBuff CFGenKbClusterBuff::operator =( cfcore::CFGenKbClusterBuff& src ) {
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredFullDomName( src.getRequiredFullDomName() );
		setRequiredDescription( src.getRequiredDescription() );
		return( *this );
	}

	bool CFGenKbClusterBuff::operator <( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator <( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator <( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator <( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator <=( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator <=( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator <=( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator <=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator ==( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator ==( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator ==( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator ==( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( false );
		}
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator !=( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator !=( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator !=( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator !=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( true );
		}
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator >=( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator >=( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator >=( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator >=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterBuff::operator >( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator >( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator >( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterBuff::operator >( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbClusterBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbClusterBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_Id( "Id" );
		static const std::string S_FullDomName( "FullDomName" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FullDomName, getRequiredFullDomName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, getRequiredDescription() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( false );
		}
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbClusterBuff& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}
}

