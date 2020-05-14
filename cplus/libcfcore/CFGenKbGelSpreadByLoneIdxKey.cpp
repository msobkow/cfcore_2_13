// Description: C++18 implementation for a GelSpread by LoneIdx index key object.

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

#include <cfgenkb/CFGenKbGelSpreadByLoneIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelSpreadByLoneIdxKey::CLASS_NAME( "CFGenKbGelSpreadByLoneIdxKey" );
	const std::string CFGenKbGelSpreadByLoneIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelSpreadByLoneIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelSpreadByLoneIdxKey::CFGenKbGelSpreadByLoneIdxKey() {
		optionalExpandLone = NULL;
	}

	CFGenKbGelSpreadByLoneIdxKey::CFGenKbGelSpreadByLoneIdxKey( const CFGenKbGelSpreadByLoneIdxKey& src ) {
		optionalExpandLone = NULL;
		if( src.isOptionalExpandLoneNull() ) {
			setOptionalExpandLoneNull();
		}
		else {
			setOptionalExpandLoneValue( src.getOptionalExpandLoneValue() );
		}
	}

	CFGenKbGelSpreadByLoneIdxKey::~CFGenKbGelSpreadByLoneIdxKey() {
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
	}

	const std::string& CFGenKbGelSpreadByLoneIdxKey::getOptionalExpandLoneValue() const {
		static const std::string S_ProcName( "getOptionalExpandLoneValue" );
		if( optionalExpandLone == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandLone );
	}

	const std::string* CFGenKbGelSpreadByLoneIdxKey::getOptionalExpandLoneReference() const {
		return( optionalExpandLone );
	}

	const bool CFGenKbGelSpreadByLoneIdxKey::isOptionalExpandLoneNull() const {
		return( optionalExpandLone == NULL );
	}

	void CFGenKbGelSpreadByLoneIdxKey::setOptionalExpandLoneNull() {
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
	}

	void CFGenKbGelSpreadByLoneIdxKey::setOptionalExpandLoneValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandLoneValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDLONE_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDLONE_MAX_LEN );
		}
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
		optionalExpandLone = new std::string( value );
	}

	size_t CFGenKbGelSpreadByLoneIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpandLoneNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandLoneValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbGelSpreadByLoneIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSpreadByLoneIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandLone( "ExpandLone" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpandLoneNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLone, getOptionalExpandLoneValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator <( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator <( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator <=( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator <=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator ==( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator ==( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator !=( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator !=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator >=( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator >=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator >( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByLoneIdxKey::operator >( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelSpreadByLoneIdxKey CFGenKbGelSpreadByLoneIdxKey::operator =( cfcore::CFGenKbGelSpreadByLoneIdxKey& src ) {
		if( src.isOptionalExpandLoneNull() ) {
			setOptionalExpandLoneNull();
		}
		else {
			setOptionalExpandLoneValue( src.getOptionalExpandLoneValue() );
		}
		return( *this );
	}

	CFGenKbGelSpreadByLoneIdxKey CFGenKbGelSpreadByLoneIdxKey::operator =( cfcore::CFGenKbGelSpreadBuff& src ) {
		if( src.isOptionalExpandLoneNull() ) {
			setOptionalExpandLoneNull();
		}
		else {
			setOptionalExpandLoneValue( src.getOptionalExpandLoneValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByLoneIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

