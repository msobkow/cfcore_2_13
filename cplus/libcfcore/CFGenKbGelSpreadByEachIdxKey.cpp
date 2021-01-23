// Description: C++18 implementation for a GelSpread by EachIdx index key object.

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

#include <cfgenkb/CFGenKbGelSpreadByEachIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelSpreadByEachIdxKey::CLASS_NAME( "CFGenKbGelSpreadByEachIdxKey" );
	const std::string CFGenKbGelSpreadByEachIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelSpreadByEachIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelSpreadByEachIdxKey::CFGenKbGelSpreadByEachIdxKey() {
		requiredExpandEach = new std::string( cfcore::CFGenKbGelSpreadBuff::EXPANDEACH_INIT_VALUE );
	}

	CFGenKbGelSpreadByEachIdxKey::CFGenKbGelSpreadByEachIdxKey( const CFGenKbGelSpreadByEachIdxKey& src ) {
		requiredExpandEach = new std::string( cfcore::CFGenKbGelSpreadBuff::EXPANDEACH_INIT_VALUE );
		setRequiredExpandEach( src.getRequiredExpandEach() );
	}

	CFGenKbGelSpreadByEachIdxKey::~CFGenKbGelSpreadByEachIdxKey() {
		if( requiredExpandEach != NULL ) {
			delete requiredExpandEach;
			requiredExpandEach = NULL;
		}
	}

	const std::string& CFGenKbGelSpreadByEachIdxKey::getRequiredExpandEach() const {
		return( *requiredExpandEach );
	}

	const std::string* CFGenKbGelSpreadByEachIdxKey::getRequiredExpandEachReference() const {
		return( requiredExpandEach );
	}

	void CFGenKbGelSpreadByEachIdxKey::setRequiredExpandEach( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredExpandEach" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDEACH_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDEACH_MAX_LEN );
		}
		if( requiredExpandEach != NULL ) {
			delete requiredExpandEach;
			requiredExpandEach = NULL;
		}
		requiredExpandEach = new std::string( value );
	}

	size_t CFGenKbGelSpreadByEachIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredExpandEach() );
		return( hashCode );
	}

	std::string CFGenKbGelSpreadByEachIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSpreadByEachIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandEach( "ExpandEach" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEach, getRequiredExpandEach() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator <( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator <( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator <=( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator <=( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator ==( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator ==( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator !=( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator !=( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator >=( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator >=( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator >( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByEachIdxKey::operator >( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbGelSpreadByEachIdxKey CFGenKbGelSpreadByEachIdxKey::operator =( cfcore::CFGenKbGelSpreadByEachIdxKey& src ) {
		setRequiredExpandEach( src.getRequiredExpandEach() );
		return( *this );
	}

	CFGenKbGelSpreadByEachIdxKey CFGenKbGelSpreadByEachIdxKey::operator =( cfcore::CFGenKbGelSpreadBuff& src ) {
		setRequiredExpandEach( src.getRequiredExpandEach() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByEachIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}
}

