// Description: C++18 implementation for a HostNode by UDescrIdx index key object.

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

#include <cfgenkb/CFGenKbHostNodeByUDescrIdxKey.hpp>
#include <cfgenkb/CFGenKbHostNodeBuff.hpp>

namespace cfcore {
	const std::string CFGenKbHostNodeByUDescrIdxKey::CLASS_NAME( "CFGenKbHostNodeByUDescrIdxKey" );
	const std::string CFGenKbHostNodeByUDescrIdxKey::S_VALUE( "value" );
	const std::string CFGenKbHostNodeByUDescrIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbHostNodeByUDescrIdxKey::CFGenKbHostNodeByUDescrIdxKey() {
		requiredClusterId = cfcore::CFGenKbHostNodeBuff::CLUSTERID_INIT_VALUE;
		requiredDescription = new std::string( cfcore::CFGenKbHostNodeBuff::DESCRIPTION_INIT_VALUE );
	}

	CFGenKbHostNodeByUDescrIdxKey::CFGenKbHostNodeByUDescrIdxKey( const CFGenKbHostNodeByUDescrIdxKey& src ) {
		requiredClusterId = cfcore::CFGenKbHostNodeBuff::CLUSTERID_INIT_VALUE;
		requiredDescription = new std::string( cfcore::CFGenKbHostNodeBuff::DESCRIPTION_INIT_VALUE );
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredDescription( src.getRequiredDescription() );
	}

	CFGenKbHostNodeByUDescrIdxKey::~CFGenKbHostNodeByUDescrIdxKey() {
		if( requiredDescription != NULL ) {
			delete requiredDescription;
			requiredDescription = NULL;
		}
	}

	const int64_t CFGenKbHostNodeByUDescrIdxKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbHostNodeByUDescrIdxKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbHostNodeByUDescrIdxKey::setRequiredClusterId( const int64_t value ) {
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

	const std::string& CFGenKbHostNodeByUDescrIdxKey::getRequiredDescription() const {
		return( *requiredDescription );
	}

	const std::string* CFGenKbHostNodeByUDescrIdxKey::getRequiredDescriptionReference() const {
		return( requiredDescription );
	}

	void CFGenKbHostNodeByUDescrIdxKey::setRequiredDescription( const std::string& value ) {
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

	size_t CFGenKbHostNodeByUDescrIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredDescription() );
		return( hashCode );
	}

	std::string CFGenKbHostNodeByUDescrIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbHostNodeByUDescrIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, getRequiredDescription() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbHostNodeByUDescrIdxKey::operator <( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
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

	bool CFGenKbHostNodeByUDescrIdxKey::operator <( const CFGenKbHostNodeBuff& rhs ) {
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

	bool CFGenKbHostNodeByUDescrIdxKey::operator <=( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
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

	bool CFGenKbHostNodeByUDescrIdxKey::operator <=( const CFGenKbHostNodeBuff& rhs ) {
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

	bool CFGenKbHostNodeByUDescrIdxKey::operator ==( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbHostNodeByUDescrIdxKey::operator ==( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbHostNodeByUDescrIdxKey::operator !=( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeByUDescrIdxKey::operator !=( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodeByUDescrIdxKey::operator >=( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
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

	bool CFGenKbHostNodeByUDescrIdxKey::operator >=( const CFGenKbHostNodeBuff& rhs ) {
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

	bool CFGenKbHostNodeByUDescrIdxKey::operator >( const CFGenKbHostNodeByUDescrIdxKey& rhs ) {
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

	bool CFGenKbHostNodeByUDescrIdxKey::operator >( const CFGenKbHostNodeBuff& rhs ) {
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
	CFGenKbHostNodeByUDescrIdxKey CFGenKbHostNodeByUDescrIdxKey::operator =( cfcore::CFGenKbHostNodeByUDescrIdxKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredDescription( src.getRequiredDescription() );
		return( *this );
	}

	CFGenKbHostNodeByUDescrIdxKey CFGenKbHostNodeByUDescrIdxKey::operator =( cfcore::CFGenKbHostNodeBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredDescription( src.getRequiredDescription() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
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
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeByUDescrIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbHostNodeByUDescrIdxKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
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
}

