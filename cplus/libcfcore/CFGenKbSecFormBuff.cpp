// Description: C++18 implementation for a SecForm buffer object.

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

#include <cfgenkb/CFGenKbSecFormByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecFormBySecAppIdxKey.hpp>
#include <cfgenkb/CFGenKbSecFormByUJEEServletIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbSecFormBuff::S_VALUE( "value" );
	const std::string CFGenKbSecFormBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbSecFormBuff::GENDEFNAME( "SecForm" );
	const classcode_t CFGenKbSecFormBuff::CLASS_CODE = 0xa906L;
	const std::string CFGenKbSecFormBuff::CLASS_NAME( "CFGenKbSecFormBuff" );
		const std::string CFGenKbSecFormBuff::COLNAME_CLUSTERID( "ClusterId" );
		const std::string CFGenKbSecFormBuff::COLNAME_SECFORMID( "SecFormId" );
		const std::string CFGenKbSecFormBuff::COLNAME_SECAPPID( "SecAppId" );
		const std::string CFGenKbSecFormBuff::COLNAME_JEESERVLETMAPNAME( "JEEServletMapName" );
	const char* CFGenKbSecFormBuff::S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const char* CFGenKbSecFormBuff::S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const int64_t CFGenKbSecFormBuff::CLUSTERID_INIT_VALUE = 0LL;
	const int CFGenKbSecFormBuff::SECFORMID_INIT_VALUE = 0L;
	const int CFGenKbSecFormBuff::SECAPPID_INIT_VALUE = 0L;
	const std::string CFGenKbSecFormBuff::JEESERVLETMAPNAME_INIT_VALUE( "" );
	const int64_t CFGenKbSecFormBuff::CLUSTERID_MIN_VALUE = 0LL;
	const int CFGenKbSecFormBuff::SECFORMID_MIN_VALUE = 0L;
	const int CFGenKbSecFormBuff::SECAPPID_MIN_VALUE = 0L;
	const std::string::size_type CFGenKbSecFormBuff::JEESERVLETMAPNAME_MAX_LEN = 192;

	CFGenKbSecFormBuff::CFGenKbSecFormBuff()
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
		requiredClusterId = cfcore::CFGenKbSecFormBuff::CLUSTERID_INIT_VALUE;
		requiredSecFormId = cfcore::CFGenKbSecFormBuff::SECFORMID_INIT_VALUE;
		requiredSecAppId = cfcore::CFGenKbSecFormBuff::SECAPPID_INIT_VALUE;
		requiredJEEServletMapName = new std::string( cfcore::CFGenKbSecFormBuff::JEESERVLETMAPNAME_INIT_VALUE );
	}

	CFGenKbSecFormBuff::CFGenKbSecFormBuff( const CFGenKbSecFormBuff& src )
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
		requiredClusterId = cfcore::CFGenKbSecFormBuff::CLUSTERID_INIT_VALUE;
		requiredSecFormId = cfcore::CFGenKbSecFormBuff::SECFORMID_INIT_VALUE;
		requiredSecAppId = cfcore::CFGenKbSecFormBuff::SECAPPID_INIT_VALUE;
		requiredJEEServletMapName = new std::string( cfcore::CFGenKbSecFormBuff::JEESERVLETMAPNAME_INIT_VALUE );
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecFormId( src.getRequiredSecFormId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSecAppId( src.getRequiredSecAppId() );
		setRequiredJEEServletMapName( src.getRequiredJEEServletMapName() );
	}

	CFGenKbSecFormBuff::~CFGenKbSecFormBuff() {
		if( requiredJEEServletMapName != NULL ) {
			delete requiredJEEServletMapName;
			requiredJEEServletMapName = NULL;
		}
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbSecFormBuff::clone() {
		CFGenKbSecFormBuff* copy = new CFGenKbSecFormBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbSecFormBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecFormBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecFormBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const uuid_ptr_t CFGenKbSecFormBuff::getCreatedByUserId() const {
		return( createdByUserId );
	}

	void CFGenKbSecFormBuff::setCreatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( createdByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecFormBuff::getCreatedAt() const {
		return( createdAt );
	}

	void CFGenKbSecFormBuff::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		createdAt = value;
	}

	const uuid_ptr_t CFGenKbSecFormBuff::getUpdatedByUserId() const {
		return( updatedByUserId );
	}

	void CFGenKbSecFormBuff::setUpdatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( updatedByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecFormBuff::getUpdatedAt() const {
		return( updatedAt );
	}

	void CFGenKbSecFormBuff::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		updatedAt = value;
	}
	const int64_t CFGenKbSecFormBuff::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecFormBuff::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecFormBuff::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecFormBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecFormBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const int32_t CFGenKbSecFormBuff::getRequiredSecFormId() const {
		return( requiredSecFormId );
	}

	const int32_t* CFGenKbSecFormBuff::getRequiredSecFormIdReference() const {
		return( &requiredSecFormId );
	}

	void CFGenKbSecFormBuff::setRequiredSecFormId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSecFormId" );
		if( value < cfcore::CFGenKbSecFormBuff::SECFORMID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecFormBuff::SECFORMID_MIN_VALUE );
		}
		requiredSecFormId = value;
	}

	const int32_t CFGenKbSecFormBuff::getRequiredSecAppId() const {
		return( requiredSecAppId );
	}

	const int32_t* CFGenKbSecFormBuff::getRequiredSecAppIdReference() const {
		return( &requiredSecAppId );
	}

	void CFGenKbSecFormBuff::setRequiredSecAppId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSecAppId" );
		if( value < cfcore::CFGenKbSecFormBuff::SECAPPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecFormBuff::SECAPPID_MIN_VALUE );
		}
		requiredSecAppId = value;
	}

	const std::string& CFGenKbSecFormBuff::getRequiredJEEServletMapName() const {
		return( *requiredJEEServletMapName );
	}

	const std::string* CFGenKbSecFormBuff::getRequiredJEEServletMapNameReference() const {
		return( requiredJEEServletMapName );
	}

	void CFGenKbSecFormBuff::setRequiredJEEServletMapName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredJEEServletMapName" );
		if( value.length() > CFGenKbSecFormBuff::JEESERVLETMAPNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecFormBuff::JEESERVLETMAPNAME_MAX_LEN );
		}
		if( requiredJEEServletMapName != NULL ) {
			delete requiredJEEServletMapName;
			requiredJEEServletMapName = NULL;
		}
		requiredJEEServletMapName = new std::string( value );
	}

	int32_t CFGenKbSecFormBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbSecFormBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbSecFormBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + getRequiredSecFormId();
		hashCode = hashCode + getRequiredSecAppId();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredJEEServletMapName() );
		return( hashCode );
	}

	CFGenKbSecFormBuff CFGenKbSecFormBuff::operator =( cfcore::CFGenKbSecFormBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecFormId( src.getRequiredSecFormId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSecAppId( src.getRequiredSecAppId() );
		setRequiredJEEServletMapName( src.getRequiredJEEServletMapName() );
		return( *this );
	}

	bool CFGenKbSecFormBuff::operator <( const CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator <( const CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator <( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator <( const CFGenKbSecFormPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator <( const CFGenKbSecFormBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator <=( const CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator <=( const CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator <=( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator <=( const CFGenKbSecFormPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator <=( const CFGenKbSecFormBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator ==( const CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator ==( const CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator ==( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		if( getRequiredJEEServletMapName() != rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator ==( const CFGenKbSecFormPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator ==( const CFGenKbSecFormBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		if( getRequiredJEEServletMapName() != rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator !=( const CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator !=( const CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator !=( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEServletMapName() != rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator !=( const CFGenKbSecFormPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator !=( const CFGenKbSecFormBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEServletMapName() != rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator >=( const CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator >=( const CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator >=( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator >=( const CFGenKbSecFormPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator >=( const CFGenKbSecFormBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecFormBuff::operator >( const CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator >( const CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator >( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator >( const CFGenKbSecFormPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecFormBuff::operator >( const CFGenKbSecFormBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbSecFormBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecFormBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecFormId( "SecFormId" );
		static const std::string S_SecAppId( "SecAppId" );
		static const std::string S_JEEServletMapName( "JEEServletMapName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecFormId, getRequiredSecFormId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecAppId, getRequiredSecAppId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEEServletMapName, getRequiredJEEServletMapName() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		if( lhs.getRequiredJEEServletMapName() != rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		if( lhs.getRequiredJEEServletMapName() != rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEServletMapName() != rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEServletMapName() != rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBySecAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecFormBuff& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEServletMapName() < rhs.getRequiredJEEServletMapName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEServletMapName() > rhs.getRequiredJEEServletMapName() ) {
			return( true );
		}
		return( false );
	}
}

