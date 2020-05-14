// Description: C++18 implementation for a GenItem by ToolSetIdx index key object.

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

#include <cfgenkb/CFGenKbGenItemByToolSetIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenItemByToolSetIdxKey::CLASS_NAME( "CFGenKbGenItemByToolSetIdxKey" );
	const std::string CFGenKbGenItemByToolSetIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGenItemByToolSetIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenItemByToolSetIdxKey::CFGenKbGenItemByToolSetIdxKey() {
		requiredToolSetId = cfcore::CFGenKbGenItemBuff::TOOLSETID_INIT_VALUE;
	}

	CFGenKbGenItemByToolSetIdxKey::CFGenKbGenItemByToolSetIdxKey( const CFGenKbGenItemByToolSetIdxKey& src ) {
		requiredToolSetId = cfcore::CFGenKbGenItemBuff::TOOLSETID_INIT_VALUE;
		setRequiredToolSetId( src.getRequiredToolSetId() );
	}

	CFGenKbGenItemByToolSetIdxKey::~CFGenKbGenItemByToolSetIdxKey() {
	}

	const int16_t CFGenKbGenItemByToolSetIdxKey::getRequiredToolSetId() const {
		return( requiredToolSetId );
	}

	const int16_t* CFGenKbGenItemByToolSetIdxKey::getRequiredToolSetIdReference() const {
		return( &requiredToolSetId );
	}

	void CFGenKbGenItemByToolSetIdxKey::setRequiredToolSetId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredToolSetId" );
		if( value < cfcore::CFGenKbGenItemBuff::TOOLSETID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::TOOLSETID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGenItemBuff::TOOLSETID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::TOOLSETID_MAX_VALUE );
		}
		requiredToolSetId = value;
	}

	size_t CFGenKbGenItemByToolSetIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = ( hashCode * 0x10000 ) + getRequiredToolSetId();
		return( hashCode );
	}

	std::string CFGenKbGenItemByToolSetIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenItemByToolSetIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ToolSetId( "ToolSetId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolSetId, getRequiredToolSetId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator <( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator <( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator <=( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator <=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator ==( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator ==( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator !=( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator !=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator >=( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator >=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator >( const CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByToolSetIdxKey::operator >( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbGenItemByToolSetIdxKey CFGenKbGenItemByToolSetIdxKey::operator =( cfcore::CFGenKbGenItemByToolSetIdxKey& src ) {
		setRequiredToolSetId( src.getRequiredToolSetId() );
		return( *this );
	}

	CFGenKbGenItemByToolSetIdxKey CFGenKbGenItemByToolSetIdxKey::operator =( cfcore::CFGenKbGenItemBuff& src ) {
		setRequiredToolSetId( src.getRequiredToolSetId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemByToolSetIdxKey& rhs ) {
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByToolSetIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		return( false );
	}
}

