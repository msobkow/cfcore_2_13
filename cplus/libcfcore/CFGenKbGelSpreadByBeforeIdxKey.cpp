// Description: C++18 implementation for a GelSpread by BeforeIdx index key object.

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

#include <cfgenkb/CFGenKbGelSpreadByBeforeIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelSpreadByBeforeIdxKey::CLASS_NAME( "CFGenKbGelSpreadByBeforeIdxKey" );
	const std::string CFGenKbGelSpreadByBeforeIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelSpreadByBeforeIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelSpreadByBeforeIdxKey::CFGenKbGelSpreadByBeforeIdxKey() {
		optionalExpandBefore = NULL;
	}

	CFGenKbGelSpreadByBeforeIdxKey::CFGenKbGelSpreadByBeforeIdxKey( const CFGenKbGelSpreadByBeforeIdxKey& src ) {
		optionalExpandBefore = NULL;
		if( src.isOptionalExpandBeforeNull() ) {
			setOptionalExpandBeforeNull();
		}
		else {
			setOptionalExpandBeforeValue( src.getOptionalExpandBeforeValue() );
		}
	}

	CFGenKbGelSpreadByBeforeIdxKey::~CFGenKbGelSpreadByBeforeIdxKey() {
		if( optionalExpandBefore != NULL ) {
			delete optionalExpandBefore;
			optionalExpandBefore = NULL;
		}
	}

	const std::string& CFGenKbGelSpreadByBeforeIdxKey::getOptionalExpandBeforeValue() const {
		static const std::string S_ProcName( "getOptionalExpandBeforeValue" );
		if( optionalExpandBefore == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandBefore );
	}

	const std::string* CFGenKbGelSpreadByBeforeIdxKey::getOptionalExpandBeforeReference() const {
		return( optionalExpandBefore );
	}

	const bool CFGenKbGelSpreadByBeforeIdxKey::isOptionalExpandBeforeNull() const {
		return( optionalExpandBefore == NULL );
	}

	void CFGenKbGelSpreadByBeforeIdxKey::setOptionalExpandBeforeNull() {
		if( optionalExpandBefore != NULL ) {
			delete optionalExpandBefore;
			optionalExpandBefore = NULL;
		}
	}

	void CFGenKbGelSpreadByBeforeIdxKey::setOptionalExpandBeforeValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandBeforeValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDBEFORE_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDBEFORE_MAX_LEN );
		}
		if( optionalExpandBefore != NULL ) {
			delete optionalExpandBefore;
			optionalExpandBefore = NULL;
		}
		optionalExpandBefore = new std::string( value );
	}

	size_t CFGenKbGelSpreadByBeforeIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpandBeforeNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandBeforeValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbGelSpreadByBeforeIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSpreadByBeforeIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandBefore( "ExpandBefore" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpandBeforeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandBefore, getOptionalExpandBeforeValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator <( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator <( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator <=( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator <=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator ==( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				if( getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator ==( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				if( getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator !=( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator !=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator >=( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator >=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator >( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByBeforeIdxKey::operator >( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelSpreadByBeforeIdxKey CFGenKbGelSpreadByBeforeIdxKey::operator =( cfcore::CFGenKbGelSpreadByBeforeIdxKey& src ) {
		if( src.isOptionalExpandBeforeNull() ) {
			setOptionalExpandBeforeNull();
		}
		else {
			setOptionalExpandBeforeValue( src.getOptionalExpandBeforeValue() );
		}
		return( *this );
	}

	CFGenKbGelSpreadByBeforeIdxKey CFGenKbGelSpreadByBeforeIdxKey::operator =( cfcore::CFGenKbGelSpreadBuff& src ) {
		if( src.isOptionalExpandBeforeNull() ) {
			setOptionalExpandBeforeNull();
		}
		else {
			setOptionalExpandBeforeValue( src.getOptionalExpandBeforeValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				if( lhs.getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				if( lhs.getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByBeforeIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

