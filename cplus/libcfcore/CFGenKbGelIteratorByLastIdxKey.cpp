// Description: C++18 implementation for a GelIterator by LastIdx index key object.

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

#include <cfgenkb/CFGenKbGelIteratorByLastIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelIteratorByLastIdxKey::CLASS_NAME( "CFGenKbGelIteratorByLastIdxKey" );
	const std::string CFGenKbGelIteratorByLastIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelIteratorByLastIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelIteratorByLastIdxKey::CFGenKbGelIteratorByLastIdxKey() {
		optionalExpandLast = NULL;
	}

	CFGenKbGelIteratorByLastIdxKey::CFGenKbGelIteratorByLastIdxKey( const CFGenKbGelIteratorByLastIdxKey& src ) {
		optionalExpandLast = NULL;
		if( src.isOptionalExpandLastNull() ) {
			setOptionalExpandLastNull();
		}
		else {
			setOptionalExpandLastValue( src.getOptionalExpandLastValue() );
		}
	}

	CFGenKbGelIteratorByLastIdxKey::~CFGenKbGelIteratorByLastIdxKey() {
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
	}

	const std::string& CFGenKbGelIteratorByLastIdxKey::getOptionalExpandLastValue() const {
		static const std::string S_ProcName( "getOptionalExpandLastValue" );
		if( optionalExpandLast == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandLast );
	}

	const std::string* CFGenKbGelIteratorByLastIdxKey::getOptionalExpandLastReference() const {
		return( optionalExpandLast );
	}

	const bool CFGenKbGelIteratorByLastIdxKey::isOptionalExpandLastNull() const {
		return( optionalExpandLast == NULL );
	}

	void CFGenKbGelIteratorByLastIdxKey::setOptionalExpandLastNull() {
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
	}

	void CFGenKbGelIteratorByLastIdxKey::setOptionalExpandLastValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandLastValue" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDLAST_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDLAST_MAX_LEN );
		}
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
		optionalExpandLast = new std::string( value );
	}

	size_t CFGenKbGelIteratorByLastIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpandLastNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandLastValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbGelIteratorByLastIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelIteratorByLastIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandLast( "ExpandLast" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpandLastNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLast, getOptionalExpandLastValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator <( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator <( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator <=( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator <=( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator ==( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator ==( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator !=( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator !=( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator >=( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator >=( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator >( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelIteratorByLastIdxKey::operator >( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelIteratorByLastIdxKey CFGenKbGelIteratorByLastIdxKey::operator =( cfcore::CFGenKbGelIteratorByLastIdxKey& src ) {
		if( src.isOptionalExpandLastNull() ) {
			setOptionalExpandLastNull();
		}
		else {
			setOptionalExpandLastValue( src.getOptionalExpandLastValue() );
		}
		return( *this );
	}

	CFGenKbGelIteratorByLastIdxKey CFGenKbGelIteratorByLastIdxKey::operator =( cfcore::CFGenKbGelIteratorBuff& src ) {
		if( src.isOptionalExpandLastNull() ) {
			setOptionalExpandLastNull();
		}
		else {
			setOptionalExpandLastValue( src.getOptionalExpandLastValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelIteratorByLastIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

