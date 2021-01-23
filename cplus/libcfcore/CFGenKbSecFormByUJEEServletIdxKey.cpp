// Description: C++18 implementation for a SecForm by UJEEServletIdx index key object.

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

#include <cfgenkb/CFGenKbSecFormByUJEEServletIdxKey.hpp>
#include <cfgenkb/CFGenKbSecFormBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecFormByUJEEServletIdxKey::CLASS_NAME( "CFGenKbSecFormByUJEEServletIdxKey" );
	const std::string CFGenKbSecFormByUJEEServletIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecFormByUJEEServletIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecFormByUJEEServletIdxKey::CFGenKbSecFormByUJEEServletIdxKey() {
		requiredClusterId = cfcore::CFGenKbSecFormBuff::CLUSTERID_INIT_VALUE;
		requiredSecAppId = cfcore::CFGenKbSecFormBuff::SECAPPID_INIT_VALUE;
		requiredJEEServletMapName = new std::string( cfcore::CFGenKbSecFormBuff::JEESERVLETMAPNAME_INIT_VALUE );
	}

	CFGenKbSecFormByUJEEServletIdxKey::CFGenKbSecFormByUJEEServletIdxKey( const CFGenKbSecFormByUJEEServletIdxKey& src ) {
		requiredClusterId = cfcore::CFGenKbSecFormBuff::CLUSTERID_INIT_VALUE;
		requiredSecAppId = cfcore::CFGenKbSecFormBuff::SECAPPID_INIT_VALUE;
		requiredJEEServletMapName = new std::string( cfcore::CFGenKbSecFormBuff::JEESERVLETMAPNAME_INIT_VALUE );
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecAppId( src.getRequiredSecAppId() );
		setRequiredJEEServletMapName( src.getRequiredJEEServletMapName() );
	}

	CFGenKbSecFormByUJEEServletIdxKey::~CFGenKbSecFormByUJEEServletIdxKey() {
		if( requiredJEEServletMapName != NULL ) {
			delete requiredJEEServletMapName;
			requiredJEEServletMapName = NULL;
		}
	}

	const int64_t CFGenKbSecFormByUJEEServletIdxKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecFormByUJEEServletIdxKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecFormByUJEEServletIdxKey::setRequiredClusterId( const int64_t value ) {
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

	const int32_t CFGenKbSecFormByUJEEServletIdxKey::getRequiredSecAppId() const {
		return( requiredSecAppId );
	}

	const int32_t* CFGenKbSecFormByUJEEServletIdxKey::getRequiredSecAppIdReference() const {
		return( &requiredSecAppId );
	}

	void CFGenKbSecFormByUJEEServletIdxKey::setRequiredSecAppId( const int32_t value ) {
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

	const std::string& CFGenKbSecFormByUJEEServletIdxKey::getRequiredJEEServletMapName() const {
		return( *requiredJEEServletMapName );
	}

	const std::string* CFGenKbSecFormByUJEEServletIdxKey::getRequiredJEEServletMapNameReference() const {
		return( requiredJEEServletMapName );
	}

	void CFGenKbSecFormByUJEEServletIdxKey::setRequiredJEEServletMapName( const std::string& value ) {
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

	size_t CFGenKbSecFormByUJEEServletIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + getRequiredSecAppId();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredJEEServletMapName() );
		return( hashCode );
	}

	std::string CFGenKbSecFormByUJEEServletIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecFormByUJEEServletIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecAppId( "SecAppId" );
		static const std::string S_JEEServletMapName( "JEEServletMapName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecAppId, getRequiredSecAppId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEEServletMapName, getRequiredJEEServletMapName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecFormByUJEEServletIdxKey::operator <( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator <( const CFGenKbSecFormBuff& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator <=( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator <=( const CFGenKbSecFormBuff& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator ==( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator ==( const CFGenKbSecFormBuff& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator !=( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator !=( const CFGenKbSecFormBuff& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator >=( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator >=( const CFGenKbSecFormBuff& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator >( const CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool CFGenKbSecFormByUJEEServletIdxKey::operator >( const CFGenKbSecFormBuff& rhs ) {
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
	CFGenKbSecFormByUJEEServletIdxKey CFGenKbSecFormByUJEEServletIdxKey::operator =( cfcore::CFGenKbSecFormByUJEEServletIdxKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecAppId( src.getRequiredSecAppId() );
		setRequiredJEEServletMapName( src.getRequiredJEEServletMapName() );
		return( *this );
	}

	CFGenKbSecFormByUJEEServletIdxKey CFGenKbSecFormByUJEEServletIdxKey::operator =( cfcore::CFGenKbSecFormBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecAppId( src.getRequiredSecAppId() );
		setRequiredJEEServletMapName( src.getRequiredJEEServletMapName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
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
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormByUJEEServletIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbSecFormByUJEEServletIdxKey& lhs, const cfcore::CFGenKbSecFormBuff& rhs ) {
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
}

