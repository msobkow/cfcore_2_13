// Description: C++18 implementation for a GelSpread by BetweenIdx index key object.

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

#include <cfgenkb/CFGenKbGelSpreadByBetweenIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelSpreadByBetweenIdxKey::CLASS_NAME( "CFGenKbGelSpreadByBetweenIdxKey" );
	const std::string CFGenKbGelSpreadByBetweenIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelSpreadByBetweenIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelSpreadByBetweenIdxKey::CFGenKbGelSpreadByBetweenIdxKey() {
		optionalExpandBetween = NULL;
	}

	CFGenKbGelSpreadByBetweenIdxKey::CFGenKbGelSpreadByBetweenIdxKey( const CFGenKbGelSpreadByBetweenIdxKey& src ) {
		optionalExpandBetween = NULL;
		if( src.isOptionalExpandBetweenNull() ) {
			setOptionalExpandBetweenNull();
		}
		else {
			setOptionalExpandBetweenValue( src.getOptionalExpandBetweenValue() );
		}
	}

	CFGenKbGelSpreadByBetweenIdxKey::~CFGenKbGelSpreadByBetweenIdxKey() {
		if( optionalExpandBetween != NULL ) {
			delete optionalExpandBetween;
			optionalExpandBetween = NULL;
		}
	}

	const std::string& CFGenKbGelSpreadByBetweenIdxKey::getOptionalExpandBetweenValue() const {
		static const std::string S_ProcName( "getOptionalExpandBetweenValue" );
		if( optionalExpandBetween == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandBetween );
	}

	const std::string* CFGenKbGelSpreadByBetweenIdxKey::getOptionalExpandBetweenReference() const {
		return( optionalExpandBetween );
	}

	const bool CFGenKbGelSpreadByBetweenIdxKey::isOptionalExpandBetweenNull() const {
		return( optionalExpandBetween == NULL );
	}

	void CFGenKbGelSpreadByBetweenIdxKey::setOptionalExpandBetweenNull() {
		if( optionalExpandBetween != NULL ) {
			delete optionalExpandBetween;
			optionalExpandBetween = NULL;
		}
	}

	void CFGenKbGelSpreadByBetweenIdxKey::setOptionalExpandBetweenValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandBetweenValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDBETWEEN_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDBETWEEN_MAX_LEN );
		}
		if( optionalExpandBetween != NULL ) {
			delete optionalExpandBetween;
			optionalExpandBetween = NULL;
		}
		optionalExpandBetween = new std::string( value );
	}

	size_t CFGenKbGelSpreadByBetweenIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpandBetweenNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandBetweenValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbGelSpreadByBetweenIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSpreadByBetweenIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandBetween( "ExpandBetween" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpandBetweenNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandBetween, getOptionalExpandBetweenValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator <( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator <( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator <=( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator <=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator ==( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				if( getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator ==( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				if( getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator !=( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator !=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator >=( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator >=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator >( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByBetweenIdxKey::operator >( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelSpreadByBetweenIdxKey CFGenKbGelSpreadByBetweenIdxKey::operator =( cfcore::CFGenKbGelSpreadByBetweenIdxKey& src ) {
		if( src.isOptionalExpandBetweenNull() ) {
			setOptionalExpandBetweenNull();
		}
		else {
			setOptionalExpandBetweenValue( src.getOptionalExpandBetweenValue() );
		}
		return( *this );
	}

	CFGenKbGelSpreadByBetweenIdxKey CFGenKbGelSpreadByBetweenIdxKey::operator =( cfcore::CFGenKbGelSpreadBuff& src ) {
		if( src.isOptionalExpandBetweenNull() ) {
			setOptionalExpandBetweenNull();
		}
		else {
			setOptionalExpandBetweenValue( src.getOptionalExpandBetweenValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				if( lhs.getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				if( lhs.getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByBetweenIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

