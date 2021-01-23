// Description: C++18 implementation for a GenItem by RuleTypeIdx index key object.

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

#include <cfgenkb/CFGenKbGenItemByRuleTypeIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenItemByRuleTypeIdxKey::CLASS_NAME( "CFGenKbGenItemByRuleTypeIdxKey" );
	const std::string CFGenKbGenItemByRuleTypeIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGenItemByRuleTypeIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenItemByRuleTypeIdxKey::CFGenKbGenItemByRuleTypeIdxKey() {
		requiredRuleTypeId = cfcore::CFGenKbGenItemBuff::RULETYPEID_INIT_VALUE;
	}

	CFGenKbGenItemByRuleTypeIdxKey::CFGenKbGenItemByRuleTypeIdxKey( const CFGenKbGenItemByRuleTypeIdxKey& src ) {
		requiredRuleTypeId = cfcore::CFGenKbGenItemBuff::RULETYPEID_INIT_VALUE;
		setRequiredRuleTypeId( src.getRequiredRuleTypeId() );
	}

	CFGenKbGenItemByRuleTypeIdxKey::~CFGenKbGenItemByRuleTypeIdxKey() {
	}

	const int16_t CFGenKbGenItemByRuleTypeIdxKey::getRequiredRuleTypeId() const {
		return( requiredRuleTypeId );
	}

	const int16_t* CFGenKbGenItemByRuleTypeIdxKey::getRequiredRuleTypeIdReference() const {
		return( &requiredRuleTypeId );
	}

	void CFGenKbGenItemByRuleTypeIdxKey::setRequiredRuleTypeId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredRuleTypeId" );
		if( value < cfcore::CFGenKbGenItemBuff::RULETYPEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::RULETYPEID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGenItemBuff::RULETYPEID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::RULETYPEID_MAX_VALUE );
		}
		requiredRuleTypeId = value;
	}

	size_t CFGenKbGenItemByRuleTypeIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = ( hashCode * 0x10000 ) + getRequiredRuleTypeId();
		return( hashCode );
	}

	std::string CFGenKbGenItemByRuleTypeIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenItemByRuleTypeIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_RuleTypeId( "RuleTypeId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_RuleTypeId, getRequiredRuleTypeId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator <( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator <( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator <=( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator <=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator ==( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator ==( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator !=( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator !=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator >=( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator >=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator >( const CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByRuleTypeIdxKey::operator >( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbGenItemByRuleTypeIdxKey CFGenKbGenItemByRuleTypeIdxKey::operator =( cfcore::CFGenKbGenItemByRuleTypeIdxKey& src ) {
		setRequiredRuleTypeId( src.getRequiredRuleTypeId() );
		return( *this );
	}

	CFGenKbGenItemByRuleTypeIdxKey CFGenKbGenItemByRuleTypeIdxKey::operator =( cfcore::CFGenKbGenItemBuff& src ) {
		setRequiredRuleTypeId( src.getRequiredRuleTypeId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemByRuleTypeIdxKey& rhs ) {
		if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByRuleTypeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		return( false );
	}
}

