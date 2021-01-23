// Description: C++18 implementation for a DefClass by NameIdx index key object.

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

#include <cfgenkb/CFGenKbDefClassByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbDefClassBuff.hpp>

namespace cfcore {
	const std::string CFGenKbDefClassByNameIdxKey::CLASS_NAME( "CFGenKbDefClassByNameIdxKey" );
	const std::string CFGenKbDefClassByNameIdxKey::S_VALUE( "value" );
	const std::string CFGenKbDefClassByNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbDefClassByNameIdxKey::CFGenKbDefClassByNameIdxKey() {
		requiredName = new std::string( cfcore::CFGenKbDefClassBuff::NAME_INIT_VALUE );
	}

	CFGenKbDefClassByNameIdxKey::CFGenKbDefClassByNameIdxKey( const CFGenKbDefClassByNameIdxKey& src ) {
		requiredName = new std::string( cfcore::CFGenKbDefClassBuff::NAME_INIT_VALUE );
		setRequiredName( src.getRequiredName() );
	}

	CFGenKbDefClassByNameIdxKey::~CFGenKbDefClassByNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const std::string& CFGenKbDefClassByNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFGenKbDefClassByNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFGenKbDefClassByNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFGenKbDefClassBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbDefClassBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFGenKbDefClassByNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFGenKbDefClassByNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbDefClassByNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbDefClassByNameIdxKey::operator <( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassByNameIdxKey::operator <( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassByNameIdxKey::operator <=( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassByNameIdxKey::operator <=( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassByNameIdxKey::operator ==( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbDefClassByNameIdxKey::operator ==( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbDefClassByNameIdxKey::operator !=( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassByNameIdxKey::operator !=( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassByNameIdxKey::operator >=( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassByNameIdxKey::operator >=( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassByNameIdxKey::operator >( const CFGenKbDefClassByNameIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassByNameIdxKey::operator >( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbDefClassByNameIdxKey CFGenKbDefClassByNameIdxKey::operator =( cfcore::CFGenKbDefClassByNameIdxKey& src ) {
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFGenKbDefClassByNameIdxKey CFGenKbDefClassByNameIdxKey::operator =( cfcore::CFGenKbDefClassBuff& src ) {
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbDefClassByNameIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}
}

