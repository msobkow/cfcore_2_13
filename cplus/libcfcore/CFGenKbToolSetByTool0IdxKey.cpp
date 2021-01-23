// Description: C++18 implementation for a ToolSet by Tool0Idx index key object.

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

#include <cfgenkb/CFGenKbToolSetByTool0IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetBuff.hpp>

namespace cfcore {
	const std::string CFGenKbToolSetByTool0IdxKey::CLASS_NAME( "CFGenKbToolSetByTool0IdxKey" );
	const std::string CFGenKbToolSetByTool0IdxKey::S_VALUE( "value" );
	const std::string CFGenKbToolSetByTool0IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbToolSetByTool0IdxKey::CFGenKbToolSetByTool0IdxKey() {
		requiredToolId0 = cfcore::CFGenKbToolSetBuff::TOOLID0_INIT_VALUE;
	}

	CFGenKbToolSetByTool0IdxKey::CFGenKbToolSetByTool0IdxKey( const CFGenKbToolSetByTool0IdxKey& src ) {
		requiredToolId0 = cfcore::CFGenKbToolSetBuff::TOOLID0_INIT_VALUE;
		setRequiredToolId0( src.getRequiredToolId0() );
	}

	CFGenKbToolSetByTool0IdxKey::~CFGenKbToolSetByTool0IdxKey() {
	}

	const int16_t CFGenKbToolSetByTool0IdxKey::getRequiredToolId0() const {
		return( requiredToolId0 );
	}

	const int16_t* CFGenKbToolSetByTool0IdxKey::getRequiredToolId0Reference() const {
		return( &requiredToolId0 );
	}

	void CFGenKbToolSetByTool0IdxKey::setRequiredToolId0( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredToolId0" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID0_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID0_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID0_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID0_MAX_VALUE );
		}
		requiredToolId0 = value;
	}

	size_t CFGenKbToolSetByTool0IdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = ( hashCode * 0x10000 ) + getRequiredToolId0();
		return( hashCode );
	}

	std::string CFGenKbToolSetByTool0IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetByTool0IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ToolId0( "ToolId0" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId0, getRequiredToolId0() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator <( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator <( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator <=( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator <=( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator ==( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator ==( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator !=( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator !=( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator >=( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator >=( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator >( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool0IdxKey::operator >( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbToolSetByTool0IdxKey CFGenKbToolSetByTool0IdxKey::operator =( cfcore::CFGenKbToolSetByTool0IdxKey& src ) {
		setRequiredToolId0( src.getRequiredToolId0() );
		return( *this );
	}

	CFGenKbToolSetByTool0IdxKey CFGenKbToolSetByTool0IdxKey::operator =( cfcore::CFGenKbToolSetBuff& src ) {
		setRequiredToolId0( src.getRequiredToolId0() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool0IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}
}

