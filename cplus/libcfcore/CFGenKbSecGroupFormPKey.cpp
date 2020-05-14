// Description: C++18 implementation of a SecGroupForm primary key object.

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

#include <cfgenkb/CFGenKbSecGroupFormPKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormBuff.hpp>

namespace cfcore {

	const std::string CFGenKbSecGroupFormPKey::CLASS_NAME( "CFGenKbSecGroupFormPKey" );
	const std::string CFGenKbSecGroupFormPKey::S_VALUE( "value" );
	const std::string CFGenKbSecGroupFormPKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbSecGroupFormPKey::CFGenKbSecGroupFormPKey() {
		requiredClusterId = cfcore::CFGenKbSecGroupFormBuff::CLUSTERID_INIT_VALUE;
		requiredSecGroupFormId = cfcore::CFGenKbSecGroupFormBuff::SECGROUPFORMID_INIT_VALUE;
	}

	CFGenKbSecGroupFormPKey::CFGenKbSecGroupFormPKey( const CFGenKbSecGroupFormPKey& src ) {
		requiredClusterId = cfcore::CFGenKbSecGroupFormBuff::CLUSTERID_INIT_VALUE;
		requiredSecGroupFormId = cfcore::CFGenKbSecGroupFormBuff::SECGROUPFORMID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupFormId( src.getRequiredSecGroupFormId() );
	}

	CFGenKbSecGroupFormPKey::~CFGenKbSecGroupFormPKey() {
	}

	const int64_t CFGenKbSecGroupFormPKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecGroupFormPKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecGroupFormPKey::setRequiredClusterId( const int64_t value ) {
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

	const int64_t CFGenKbSecGroupFormPKey::getRequiredSecGroupFormId() const {
		return( requiredSecGroupFormId );
	}

	const int64_t* CFGenKbSecGroupFormPKey::getRequiredSecGroupFormIdReference() const {
		return( &requiredSecGroupFormId );
	}

	void CFGenKbSecGroupFormPKey::setRequiredSecGroupFormId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSecGroupFormId" );
		if( value < cfcore::CFGenKbSecGroupFormBuff::SECGROUPFORMID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupFormBuff::SECGROUPFORMID_MIN_VALUE );
		}
		requiredSecGroupFormId = value;
	}

	bool CFGenKbSecGroupFormPKey::operator <( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormPKey::operator <( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormPKey::operator <=( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormPKey::operator <=( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormPKey::operator ==( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormPKey::operator ==( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormPKey::operator !=( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormPKey::operator !=( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormPKey::operator >=( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormPKey::operator >=( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormPKey::operator >( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormPKey::operator >( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbSecGroupFormPKey CFGenKbSecGroupFormPKey::operator =( cfcore::CFGenKbSecGroupFormPKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupFormId( src.getRequiredSecGroupFormId() );
		return( *this );
	}

	CFGenKbSecGroupFormPKey CFGenKbSecGroupFormPKey::operator =( cfcore::CFGenKbSecGroupFormBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupFormId( src.getRequiredSecGroupFormId() );
		return( *this );
	}

	size_t CFGenKbSecGroupFormPKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + (int)( getRequiredSecGroupFormId() );
		return( hashCode );
	}

	std::string CFGenKbSecGroupFormPKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGroupFormPKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGroupFormId( "SecGroupFormId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SecGroupFormId, getRequiredSecGroupFormId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupFormPKey& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}
}

