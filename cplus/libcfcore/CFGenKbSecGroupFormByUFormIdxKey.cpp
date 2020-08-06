// Description: C++18 implementation for a SecGroupForm by UFormIdx index key object.

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

#include <cfgenkb/CFGenKbSecGroupFormByUFormIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecGroupFormByUFormIdxKey::CLASS_NAME( "CFGenKbSecGroupFormByUFormIdxKey" );
	const std::string CFGenKbSecGroupFormByUFormIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecGroupFormByUFormIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecGroupFormByUFormIdxKey::CFGenKbSecGroupFormByUFormIdxKey() {
		requiredClusterId = cfcore::CFGenKbSecGroupFormBuff::CLUSTERID_INIT_VALUE;
		requiredSecGroupId = cfcore::CFGenKbSecGroupFormBuff::SECGROUPID_INIT_VALUE;
		requiredSecFormId = cfcore::CFGenKbSecGroupFormBuff::SECFORMID_INIT_VALUE;
	}

	CFGenKbSecGroupFormByUFormIdxKey::CFGenKbSecGroupFormByUFormIdxKey( const CFGenKbSecGroupFormByUFormIdxKey& src ) {
		requiredClusterId = cfcore::CFGenKbSecGroupFormBuff::CLUSTERID_INIT_VALUE;
		requiredSecGroupId = cfcore::CFGenKbSecGroupFormBuff::SECGROUPID_INIT_VALUE;
		requiredSecFormId = cfcore::CFGenKbSecGroupFormBuff::SECFORMID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupId( src.getRequiredSecGroupId() );
		setRequiredSecFormId( src.getRequiredSecFormId() );
	}

	CFGenKbSecGroupFormByUFormIdxKey::~CFGenKbSecGroupFormByUFormIdxKey() {
	}

	const int64_t CFGenKbSecGroupFormByUFormIdxKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecGroupFormByUFormIdxKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecGroupFormByUFormIdxKey::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecGroupFormBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupFormBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const int32_t CFGenKbSecGroupFormByUFormIdxKey::getRequiredSecGroupId() const {
		return( requiredSecGroupId );
	}

	const int32_t* CFGenKbSecGroupFormByUFormIdxKey::getRequiredSecGroupIdReference() const {
		return( &requiredSecGroupId );
	}

	void CFGenKbSecGroupFormByUFormIdxKey::setRequiredSecGroupId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSecGroupId" );
		if( value < cfcore::CFGenKbSecGroupFormBuff::SECGROUPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupFormBuff::SECGROUPID_MIN_VALUE );
		}
		requiredSecGroupId = value;
	}

	const int32_t CFGenKbSecGroupFormByUFormIdxKey::getRequiredSecFormId() const {
		return( requiredSecFormId );
	}

	const int32_t* CFGenKbSecGroupFormByUFormIdxKey::getRequiredSecFormIdReference() const {
		return( &requiredSecFormId );
	}

	void CFGenKbSecGroupFormByUFormIdxKey::setRequiredSecFormId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSecFormId" );
		if( value < cfcore::CFGenKbSecGroupFormBuff::SECFORMID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupFormBuff::SECFORMID_MIN_VALUE );
		}
		requiredSecFormId = value;
	}

	size_t CFGenKbSecGroupFormByUFormIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + getRequiredSecGroupId();
		hashCode = hashCode + getRequiredSecFormId();
		return( hashCode );
	}

	std::string CFGenKbSecGroupFormByUFormIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGroupFormByUFormIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGroupId( "SecGroupId" );
		static const std::string S_SecFormId( "SecFormId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecFormId, getRequiredSecFormId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecGroupFormByUFormIdxKey::operator <( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
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

	bool CFGenKbSecGroupFormByUFormIdxKey::operator <( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
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

	bool CFGenKbSecGroupFormByUFormIdxKey::operator <=( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
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

	bool CFGenKbSecGroupFormByUFormIdxKey::operator <=( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
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

	bool CFGenKbSecGroupFormByUFormIdxKey::operator ==( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormByUFormIdxKey::operator ==( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormByUFormIdxKey::operator !=( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormByUFormIdxKey::operator !=( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormByUFormIdxKey::operator >=( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
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

	bool CFGenKbSecGroupFormByUFormIdxKey::operator >=( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
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

	bool CFGenKbSecGroupFormByUFormIdxKey::operator >( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
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

	bool CFGenKbSecGroupFormByUFormIdxKey::operator >( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
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
	CFGenKbSecGroupFormByUFormIdxKey CFGenKbSecGroupFormByUFormIdxKey::operator =( cfcore::CFGenKbSecGroupFormByUFormIdxKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupId( src.getRequiredSecGroupId() );
		setRequiredSecFormId( src.getRequiredSecFormId() );
		return( *this );
	}

	CFGenKbSecGroupFormByUFormIdxKey CFGenKbSecGroupFormByUFormIdxKey::operator =( cfcore::CFGenKbSecGroupFormBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupId( src.getRequiredSecGroupId() );
		setRequiredSecFormId( src.getRequiredSecFormId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
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

	bool operator <(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
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

	bool operator <=(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
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

	bool operator <=(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
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

	bool operator ==(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
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

	bool operator >=(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
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

	bool operator >(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
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

	bool operator >(const  cfcore::CFGenKbSecGroupFormByUFormIdxKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
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
}

