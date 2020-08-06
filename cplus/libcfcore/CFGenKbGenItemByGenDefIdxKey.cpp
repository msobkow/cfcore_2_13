// Description: C++18 implementation for a GenItem by GenDefIdx index key object.

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

#include <cfgenkb/CFGenKbGenItemByGenDefIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenItemByGenDefIdxKey::CLASS_NAME( "CFGenKbGenItemByGenDefIdxKey" );
	const std::string CFGenKbGenItemByGenDefIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGenItemByGenDefIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenItemByGenDefIdxKey::CFGenKbGenItemByGenDefIdxKey() {
		requiredGenDefId = cfcore::CFGenKbGenItemBuff::GENDEFID_INIT_VALUE;
	}

	CFGenKbGenItemByGenDefIdxKey::CFGenKbGenItemByGenDefIdxKey( const CFGenKbGenItemByGenDefIdxKey& src ) {
		requiredGenDefId = cfcore::CFGenKbGenItemBuff::GENDEFID_INIT_VALUE;
		setRequiredGenDefId( src.getRequiredGenDefId() );
	}

	CFGenKbGenItemByGenDefIdxKey::~CFGenKbGenItemByGenDefIdxKey() {
	}

	const int16_t CFGenKbGenItemByGenDefIdxKey::getRequiredGenDefId() const {
		return( requiredGenDefId );
	}

	const int16_t* CFGenKbGenItemByGenDefIdxKey::getRequiredGenDefIdReference() const {
		return( &requiredGenDefId );
	}

	void CFGenKbGenItemByGenDefIdxKey::setRequiredGenDefId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredGenDefId" );
		if( value < cfcore::CFGenKbGenItemBuff::GENDEFID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::GENDEFID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGenItemBuff::GENDEFID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::GENDEFID_MAX_VALUE );
		}
		requiredGenDefId = value;
	}

	size_t CFGenKbGenItemByGenDefIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = ( hashCode * 0x10000 ) + getRequiredGenDefId();
		return( hashCode );
	}

	std::string CFGenKbGenItemByGenDefIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenItemByGenDefIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_GenDefId( "GenDefId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_GenDefId, getRequiredGenDefId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator <( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator <( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator <=( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator <=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator ==( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator ==( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator !=( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator !=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator >=( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator >=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator >( const CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByGenDefIdxKey::operator >( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbGenItemByGenDefIdxKey CFGenKbGenItemByGenDefIdxKey::operator =( cfcore::CFGenKbGenItemByGenDefIdxKey& src ) {
		setRequiredGenDefId( src.getRequiredGenDefId() );
		return( *this );
	}

	CFGenKbGenItemByGenDefIdxKey CFGenKbGenItemByGenDefIdxKey::operator =( cfcore::CFGenKbGenItemBuff& src ) {
		setRequiredGenDefId( src.getRequiredGenDefId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemByGenDefIdxKey& rhs ) {
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByGenDefIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		return( false );
	}
}

