// Description: C++18 implementation for a Cluster by UDomNameIdx index key object.

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

#include <cfgenkb/CFGenKbClusterByUDomNameIdxKey.hpp>
#include <cfgenkb/CFGenKbClusterBuff.hpp>

namespace cfcore {
	const std::string CFGenKbClusterByUDomNameIdxKey::CLASS_NAME( "CFGenKbClusterByUDomNameIdxKey" );
	const std::string CFGenKbClusterByUDomNameIdxKey::S_VALUE( "value" );
	const std::string CFGenKbClusterByUDomNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbClusterByUDomNameIdxKey::CFGenKbClusterByUDomNameIdxKey() {
		requiredFullDomName = new std::string( cfcore::CFGenKbClusterBuff::FULLDOMNAME_INIT_VALUE );
	}

	CFGenKbClusterByUDomNameIdxKey::CFGenKbClusterByUDomNameIdxKey( const CFGenKbClusterByUDomNameIdxKey& src ) {
		requiredFullDomName = new std::string( cfcore::CFGenKbClusterBuff::FULLDOMNAME_INIT_VALUE );
		setRequiredFullDomName( src.getRequiredFullDomName() );
	}

	CFGenKbClusterByUDomNameIdxKey::~CFGenKbClusterByUDomNameIdxKey() {
		if( requiredFullDomName != NULL ) {
			delete requiredFullDomName;
			requiredFullDomName = NULL;
		}
	}

	const std::string& CFGenKbClusterByUDomNameIdxKey::getRequiredFullDomName() const {
		return( *requiredFullDomName );
	}

	const std::string* CFGenKbClusterByUDomNameIdxKey::getRequiredFullDomNameReference() const {
		return( requiredFullDomName );
	}

	void CFGenKbClusterByUDomNameIdxKey::setRequiredFullDomName( const std::string& value ) {
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

	size_t CFGenKbClusterByUDomNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredFullDomName() );
		return( hashCode );
	}

	std::string CFGenKbClusterByUDomNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbClusterByUDomNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_FullDomName( "FullDomName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FullDomName, getRequiredFullDomName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator <( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator <( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator <=( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator <=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator ==( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator ==( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator !=( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator !=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator >=( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator >=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator >( const CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterByUDomNameIdxKey::operator >( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbClusterByUDomNameIdxKey CFGenKbClusterByUDomNameIdxKey::operator =( cfcore::CFGenKbClusterByUDomNameIdxKey& src ) {
		setRequiredFullDomName( src.getRequiredFullDomName() );
		return( *this );
	}

	CFGenKbClusterByUDomNameIdxKey CFGenKbClusterByUDomNameIdxKey::operator =( cfcore::CFGenKbClusterBuff& src ) {
		setRequiredFullDomName( src.getRequiredFullDomName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredFullDomName() != rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterByUDomNameIdxKey& rhs ) {
		if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbClusterByUDomNameIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredFullDomName() < rhs.getRequiredFullDomName() ) {
			return( false );
		}
		else if( lhs.getRequiredFullDomName() > rhs.getRequiredFullDomName() ) {
			return( true );
		}
		return( false );
	}
}

