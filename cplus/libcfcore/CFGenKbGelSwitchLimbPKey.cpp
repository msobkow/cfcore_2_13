// Description: C++18 implementation of a GelSwitchLimb primary key object.

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

#include <cfgenkb/CFGenKbGelSwitchLimbPKey.hpp>
#include <cfgenkb/CFGenKbGelSwitchLimbBuff.hpp>

namespace cfcore {

	const std::string CFGenKbGelSwitchLimbPKey::CLASS_NAME( "CFGenKbGelSwitchLimbPKey" );
	const std::string CFGenKbGelSwitchLimbPKey::S_VALUE( "value" );
	const std::string CFGenKbGelSwitchLimbPKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbGelSwitchLimbPKey::CFGenKbGelSwitchLimbPKey() {
		requiredTenantId = cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_INIT_VALUE;
		requiredGelCacheId = cfcore::CFGenKbGelSwitchLimbBuff::GELCACHEID_INIT_VALUE;
		requiredGelInstId = cfcore::CFGenKbGelSwitchLimbBuff::GELINSTID_INIT_VALUE;
		requiredLimbName = new std::string( cfcore::CFGenKbGelSwitchLimbBuff::LIMBNAME_INIT_VALUE );
	}

	CFGenKbGelSwitchLimbPKey::CFGenKbGelSwitchLimbPKey( const CFGenKbGelSwitchLimbPKey& src ) {
		requiredTenantId = cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_INIT_VALUE;
		requiredGelCacheId = cfcore::CFGenKbGelSwitchLimbBuff::GELCACHEID_INIT_VALUE;
		requiredGelInstId = cfcore::CFGenKbGelSwitchLimbBuff::GELINSTID_INIT_VALUE;
		requiredLimbName = new std::string( cfcore::CFGenKbGelSwitchLimbBuff::LIMBNAME_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredGelInstId( src.getRequiredGelInstId() );
		setRequiredLimbName( src.getRequiredLimbName() );
	}

	CFGenKbGelSwitchLimbPKey::~CFGenKbGelSwitchLimbPKey() {
		if( requiredLimbName != NULL ) {
			delete requiredLimbName;
			requiredLimbName = NULL;
		}
	}

	const int64_t CFGenKbGelSwitchLimbPKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbGelSwitchLimbPKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbGelSwitchLimbPKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFGenKbGelSwitchLimbPKey::getRequiredGelCacheId() const {
		return( requiredGelCacheId );
	}

	const int64_t* CFGenKbGelSwitchLimbPKey::getRequiredGelCacheIdReference() const {
		return( &requiredGelCacheId );
	}

	void CFGenKbGelSwitchLimbPKey::setRequiredGelCacheId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredGelCacheId" );
		if( value < cfcore::CFGenKbGelSwitchLimbBuff::GELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSwitchLimbBuff::GELCACHEID_MIN_VALUE );
		}
		requiredGelCacheId = value;
	}

	const int64_t CFGenKbGelSwitchLimbPKey::getRequiredGelInstId() const {
		return( requiredGelInstId );
	}

	const int64_t* CFGenKbGelSwitchLimbPKey::getRequiredGelInstIdReference() const {
		return( &requiredGelInstId );
	}

	void CFGenKbGelSwitchLimbPKey::setRequiredGelInstId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredGelInstId" );
		if( value < cfcore::CFGenKbGelSwitchLimbBuff::GELINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSwitchLimbBuff::GELINSTID_MIN_VALUE );
		}
		requiredGelInstId = value;
	}

	const std::string& CFGenKbGelSwitchLimbPKey::getRequiredLimbName() const {
		return( *requiredLimbName );
	}

	const std::string* CFGenKbGelSwitchLimbPKey::getRequiredLimbNameReference() const {
		return( requiredLimbName );
	}

	void CFGenKbGelSwitchLimbPKey::setRequiredLimbName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredLimbName" );
		if( value.length() > CFGenKbGelSwitchLimbBuff::LIMBNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSwitchLimbBuff::LIMBNAME_MAX_LEN );
		}
		if( requiredLimbName != NULL ) {
			delete requiredLimbName;
			requiredLimbName = NULL;
		}
		requiredLimbName = new std::string( value );
	}

	bool CFGenKbGelSwitchLimbPKey::operator <( const CFGenKbGelSwitchLimbPKey& rhs ) {
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
		if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbPKey::operator <( const CFGenKbGelSwitchLimbBuff& rhs ) {
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
		if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbPKey::operator <=( const CFGenKbGelSwitchLimbPKey& rhs ) {
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
		if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbPKey::operator <=( const CFGenKbGelSwitchLimbBuff& rhs ) {
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
		if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbPKey::operator ==( const CFGenKbGelSwitchLimbPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbPKey::operator ==( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbPKey::operator !=( const CFGenKbGelSwitchLimbPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbPKey::operator !=( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbPKey::operator >=( const CFGenKbGelSwitchLimbPKey& rhs ) {
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
		if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbPKey::operator >=( const CFGenKbGelSwitchLimbBuff& rhs ) {
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
		if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbPKey::operator >( const CFGenKbGelSwitchLimbPKey& rhs ) {
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
		if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbPKey::operator >( const CFGenKbGelSwitchLimbBuff& rhs ) {
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
		if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbGelSwitchLimbPKey CFGenKbGelSwitchLimbPKey::operator =( cfcore::CFGenKbGelSwitchLimbPKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredGelInstId( src.getRequiredGelInstId() );
		setRequiredLimbName( src.getRequiredLimbName() );
		return( *this );
	}

	CFGenKbGelSwitchLimbPKey CFGenKbGelSwitchLimbPKey::operator =( cfcore::CFGenKbGelSwitchLimbBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredGelInstId( src.getRequiredGelInstId() );
		setRequiredLimbName( src.getRequiredLimbName() );
		return( *this );
	}

	size_t CFGenKbGelSwitchLimbPKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredGelCacheId() );
		hashCode = hashCode + (int)( getRequiredGelInstId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredLimbName() );
		return( hashCode );
	}

	std::string CFGenKbGelSwitchLimbPKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSwitchLimbPKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_LimbName( "LimbName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelInstId, getRequiredGelInstId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LimbName, getRequiredLimbName() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
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
		if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
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
		if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
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
		if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
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
		if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( lhs.getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( lhs.getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
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
		if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
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
		if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
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
		if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbPKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
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
		if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}
}

