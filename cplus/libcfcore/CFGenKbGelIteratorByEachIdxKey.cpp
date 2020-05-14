// Description: C++18 implementation for a GelIterator by EachIdx index key object.

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

#include <cfgenkb/CFGenKbGelIteratorByEachIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelIteratorByEachIdxKey::CLASS_NAME( "CFGenKbGelIteratorByEachIdxKey" );
	const std::string CFGenKbGelIteratorByEachIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelIteratorByEachIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelIteratorByEachIdxKey::CFGenKbGelIteratorByEachIdxKey() {
		requiredExpandEach = new std::string( cfcore::CFGenKbGelIteratorBuff::EXPANDEACH_INIT_VALUE );
	}

	CFGenKbGelIteratorByEachIdxKey::CFGenKbGelIteratorByEachIdxKey( const CFGenKbGelIteratorByEachIdxKey& src ) {
		requiredExpandEach = new std::string( cfcore::CFGenKbGelIteratorBuff::EXPANDEACH_INIT_VALUE );
		setRequiredExpandEach( src.getRequiredExpandEach() );
	}

	CFGenKbGelIteratorByEachIdxKey::~CFGenKbGelIteratorByEachIdxKey() {
		if( requiredExpandEach != NULL ) {
			delete requiredExpandEach;
			requiredExpandEach = NULL;
		}
	}

	const std::string& CFGenKbGelIteratorByEachIdxKey::getRequiredExpandEach() const {
		return( *requiredExpandEach );
	}

	const std::string* CFGenKbGelIteratorByEachIdxKey::getRequiredExpandEachReference() const {
		return( requiredExpandEach );
	}

	void CFGenKbGelIteratorByEachIdxKey::setRequiredExpandEach( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredExpandEach" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDEACH_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDEACH_MAX_LEN );
		}
		if( requiredExpandEach != NULL ) {
			delete requiredExpandEach;
			requiredExpandEach = NULL;
		}
		requiredExpandEach = new std::string( value );
	}

	size_t CFGenKbGelIteratorByEachIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredExpandEach() );
		return( hashCode );
	}

	std::string CFGenKbGelIteratorByEachIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelIteratorByEachIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandEach( "ExpandEach" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEach, getRequiredExpandEach() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator <( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator <( const CFGenKbGelIteratorBuff& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator <=( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator <=( const CFGenKbGelIteratorBuff& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator ==( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator ==( const CFGenKbGelIteratorBuff& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator !=( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator !=( const CFGenKbGelIteratorBuff& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator >=( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator >=( const CFGenKbGelIteratorBuff& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator >( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelIteratorByEachIdxKey::operator >( const CFGenKbGelIteratorBuff& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbGelIteratorByEachIdxKey CFGenKbGelIteratorByEachIdxKey::operator =( cfcore::CFGenKbGelIteratorByEachIdxKey& src ) {
		setRequiredExpandEach( src.getRequiredExpandEach() );
		return( *this );
	}

	CFGenKbGelIteratorByEachIdxKey CFGenKbGelIteratorByEachIdxKey::operator =( cfcore::CFGenKbGelIteratorBuff& src ) {
		setRequiredExpandEach( src.getRequiredExpandEach() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelIteratorByEachIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}
}

