// Description: C++18 implementation for a HostNode buffer object.

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

#include <cfgenkb/CFGenKbHostNodeByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbHostNodeByUDescrIdxKey.hpp>
#include <cfgenkb/CFGenKbHostNodeByHostNameIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbHostNodeBuff::S_VALUE( "value" );
	const std::string CFGenKbHostNodeBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbHostNodeBuff::GENDEFNAME( "HostNode" );
	const classcode_t CFGenKbHostNodeBuff::CLASS_CODE = 0xa902L;
	const std::string CFGenKbHostNodeBuff::CLASS_NAME( "CFGenKbHostNodeBuff" );
		const std::string CFGenKbHostNodeBuff::COLNAME_CLUSTERID( "ClusterId" );
		const std::string CFGenKbHostNodeBuff::COLNAME_HOSTNODEID( "HostNodeId" );
		const std::string CFGenKbHostNodeBuff::COLNAME_DESCRIPTION( "Description" );
		const std::string CFGenKbHostNodeBuff::COLNAME_HOSTNAME( "HostName" );
	const char* CFGenKbHostNodeBuff::S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const char* CFGenKbHostNodeBuff::S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const int64_t CFGenKbHostNodeBuff::CLUSTERID_INIT_VALUE = 0LL;
	const int64_t CFGenKbHostNodeBuff::HOSTNODEID_INIT_VALUE = 0LL;
	const std::string CFGenKbHostNodeBuff::DESCRIPTION_INIT_VALUE( "" );
	const std::string CFGenKbHostNodeBuff::HOSTNAME_INIT_VALUE( "" );
	const int64_t CFGenKbHostNodeBuff::CLUSTERID_MIN_VALUE = 0LL;
	const int64_t CFGenKbHostNodeBuff::HOSTNODEID_MIN_VALUE = 0LL;
	const std::string::size_type CFGenKbHostNodeBuff::DESCRIPTION_MAX_LEN = 255;
	const std::string::size_type CFGenKbHostNodeBuff::HOSTNAME_MAX_LEN = 192;

	CFGenKbHostNodeBuff::CFGenKbHostNodeBuff()
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
		requiredClusterId = cfcore::CFGenKbHostNodeBuff::CLUSTERID_INIT_VALUE;
		requiredHostNodeId = cfcore::CFGenKbHostNodeBuff::HOSTNODEID_INIT_VALUE;
		requiredDescription = new std::string( cfcore::CFGenKbHostNodeBuff::DESCRIPTION_INIT_VALUE );
		requiredHostName = new std::string( cfcore::CFGenKbHostNodeBuff::HOSTNAME_INIT_VALUE );
	}

	CFGenKbHostNodeBuff::CFGenKbHostNodeBuff( const CFGenKbHostNodeBuff& src )
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
		requiredClusterId = cfcore::CFGenKbHostNodeBuff::CLUSTERID_INIT_VALUE;
		requiredHostNodeId = cfcore::CFGenKbHostNodeBuff::HOSTNODEID_INIT_VALUE;
		requiredDescription = new std::string( cfcore::CFGenKbHostNodeBuff::DESCRIPTION_INIT_VALUE );
		requiredHostName = new std::string( cfcore::CFGenKbHostNodeBuff::HOSTNAME_INIT_VALUE );
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredHostNodeId( src.getRequiredHostNodeId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredDescription( src.getRequiredDescription() );
		setRequiredHostName( src.getRequiredHostName() );
	}

	CFGenKbHostNodeBuff::~CFGenKbHostNodeBuff() {
		if( requiredDescription != NULL ) {
			delete requiredDescription;
			requiredDescription = NULL;
		}
		if( requiredHostName != NULL ) {
			delete requiredHostName;
			requiredHostName = NULL;
		}
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbHostNodeBuff::clone() {
		CFGenKbHostNodeBuff* copy = new CFGenKbHostNodeBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbHostNodeBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbHostNodeBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbHostNodeBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const uuid_ptr_t CFGenKbHostNodeBuff::getCreatedByUserId() const {
		return( createdByUserId );
	}

	void CFGenKbHostNodeBuff::setCreatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( createdByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbHostNodeBuff::getCreatedAt() const {
		return( createdAt );
	}

	void CFGenKbHostNodeBuff::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		createdAt = value;
	}

	const uuid_ptr_t CFGenKbHostNodeBuff::getUpdatedByUserId() const {
		return( updatedByUserId );
	}

	void CFGenKbHostNodeBuff::setUpdatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( updatedByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbHostNodeBuff::getUpdatedAt() const {
		return( updatedAt );
	}

	void CFGenKbHostNodeBuff::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		updatedAt = value;
	}
	const int64_t CFGenKbHostNodeBuff::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbHostNodeBuff::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbHostNodeBuff::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbHostNodeBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbHostNodeBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const int64_t CFGenKbHostNodeBuff::getRequiredHostNodeId() const {
		return( requiredHostNodeId );
	}

	const int64_t* CFGenKbHostNodeBuff::getRequiredHostNodeIdReference() const {
		return( &requiredHostNodeId );
	}

	void CFGenKbHostNodeBuff::setRequiredHostNodeId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredHostNodeId" );
		if( value < cfcore::CFGenKbHostNodeBuff::HOSTNODEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbHostNodeBuff::HOSTNODEID_MIN_VALUE );
		}
		requiredHostNodeId = value;
	}

	const std::string& CFGenKbHostNodeBuff::getRequiredDescription() const {
		return( *requiredDescription );
	}

	const std::string* CFGenKbHostNodeBuff::getRequiredDescriptionReference() const {
		return( requiredDescription );
	}

	void CFGenKbHostNodeBuff::setRequiredDescription( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredDescription" );
		if( value.length() > CFGenKbHostNodeBuff::DESCRIPTION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbHostNodeBuff::DESCRIPTION_MAX_LEN );
		}
		if( requiredDescription != NULL ) {
			delete requiredDescription;
			requiredDescription = NULL;
		}
		requiredDescription = new std::string( value );
	}

	const std::string& CFGenKbHostNodeBuff::getRequiredHostName() const {
		return( *requiredHostName );
	}

	const std::string* CFGenKbHostNodeBuff::getRequiredHostNameReference() const {
		return( requiredHostName );
	}

	void CFGenKbHostNodeBuff::setRequiredHostName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredHostName" );
		if( value.length() > CFGenKbHostNodeBuff::HOSTNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbHostNodeBuff::HOSTNAME_MAX_LEN );
		}
		if( requiredHostName != NULL ) {
			delete requiredHostName;
			requiredHostName = NULL;
		}
		requiredHostName = new std::string( value );
	}

	int32_t CFGenKbHostNodeBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbHostNodeBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbHostNodeBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + (int)( getRequiredHostNodeId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredDescription() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredHostName() );
		return( hashCode );
	}

	CFGenKbHostNodeBuff CFGenKbHostNodeBuff::operator =( cfcore::CFGenKbHostNodeBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredHostNodeId( src.getRequiredHostNodeId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredDescription( src.getRequiredDescription() );
		setRequiredHostName( src.getRequiredHostName() );
		return( *this );
	}

	bool CFGenKbHostNodeBuff::operator <( const CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator <( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
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

	bool CFGenKbHostNodeBuff::operator <( const CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator <( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator <( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		if( getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator <=( const CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator <=( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
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

	bool CFGenKbHostNodeBuff::operator <=( const CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator <=( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator <=( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		if( getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator ==( const CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator ==( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator ==( const CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredHostName() != rhs.getRequiredHostName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator ==( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator ==( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		if( getRequiredHostName() != rhs.getRequiredHostName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator !=( const CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator !=( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator !=( const CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostName() != rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator !=( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator !=( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		if( getRequiredHostName() != rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator >=( const CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator >=( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
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

	bool CFGenKbHostNodeBuff::operator >=( const CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator >=( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator >=( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		if( getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodeBuff::operator >( const CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator >( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
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

	bool CFGenKbHostNodeBuff::operator >( const CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator >( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeBuff::operator >( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		if( getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbHostNodeBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbHostNodeBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_HostNodeId( "HostNodeId" );
		static const std::string S_Description( "Description" );
		static const std::string S_HostName( "HostName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_HostNodeId, getRequiredHostNodeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, getRequiredDescription() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HostName, getRequiredHostName() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
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

	bool operator <(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( lhs.getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		if( lhs.getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( lhs.getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
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

	bool operator <=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( lhs.getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		if( lhs.getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( lhs.getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredHostName() != rhs.getRequiredHostName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		if( lhs.getRequiredHostName() != rhs.getRequiredHostName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostName() != rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		if( lhs.getRequiredHostName() != rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
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

	bool operator >=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( lhs.getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		if( lhs.getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( lhs.getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
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

	bool operator >(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeByHostNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( lhs.getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbHostNodeBuff& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		if( lhs.getRequiredHostName() < rhs.getRequiredHostName() ) {
			return( false );
		}
		else if( lhs.getRequiredHostName() > rhs.getRequiredHostName() ) {
			return( true );
		}
		return( false );
	}
}

