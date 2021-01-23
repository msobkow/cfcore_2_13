// Description: C++18 implementation for a GenItem by CartIdx index key object.

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

#include <cfgenkb/CFGenKbGenItemByCartIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenItemByCartIdxKey::CLASS_NAME( "CFGenKbGenItemByCartIdxKey" );
	const std::string CFGenKbGenItemByCartIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGenItemByCartIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenItemByCartIdxKey::CFGenKbGenItemByCartIdxKey() {
		requiredTenantId = cfcore::CFGenKbGenItemBuff::TENANTID_INIT_VALUE;
		requiredCartridgeId = cfcore::CFGenKbGenItemBuff::CARTRIDGEID_INIT_VALUE;
	}

	CFGenKbGenItemByCartIdxKey::CFGenKbGenItemByCartIdxKey( const CFGenKbGenItemByCartIdxKey& src ) {
		requiredTenantId = cfcore::CFGenKbGenItemBuff::TENANTID_INIT_VALUE;
		requiredCartridgeId = cfcore::CFGenKbGenItemBuff::CARTRIDGEID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredCartridgeId( src.getRequiredCartridgeId() );
	}

	CFGenKbGenItemByCartIdxKey::~CFGenKbGenItemByCartIdxKey() {
	}

	const int64_t CFGenKbGenItemByCartIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbGenItemByCartIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbGenItemByCartIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbGenItemBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFGenKbGenItemByCartIdxKey::getRequiredCartridgeId() const {
		return( requiredCartridgeId );
	}

	const int64_t* CFGenKbGenItemByCartIdxKey::getRequiredCartridgeIdReference() const {
		return( &requiredCartridgeId );
	}

	void CFGenKbGenItemByCartIdxKey::setRequiredCartridgeId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredCartridgeId" );
		if( value < cfcore::CFGenKbGenItemBuff::CARTRIDGEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::CARTRIDGEID_MIN_VALUE );
		}
		requiredCartridgeId = value;
	}

	size_t CFGenKbGenItemByCartIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredCartridgeId() );
		return( hashCode );
	}

	std::string CFGenKbGenItemByCartIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenItemByCartIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_CartridgeId( "CartridgeId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CartridgeId, getRequiredCartridgeId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenItemByCartIdxKey::operator <( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByCartIdxKey::operator <( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByCartIdxKey::operator <=( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByCartIdxKey::operator <=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByCartIdxKey::operator ==( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemByCartIdxKey::operator ==( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemByCartIdxKey::operator !=( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByCartIdxKey::operator !=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByCartIdxKey::operator >=( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByCartIdxKey::operator >=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByCartIdxKey::operator >( const CFGenKbGenItemByCartIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByCartIdxKey::operator >( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbGenItemByCartIdxKey CFGenKbGenItemByCartIdxKey::operator =( cfcore::CFGenKbGenItemByCartIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredCartridgeId( src.getRequiredCartridgeId() );
		return( *this );
	}

	CFGenKbGenItemByCartIdxKey CFGenKbGenItemByCartIdxKey::operator =( cfcore::CFGenKbGenItemBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredCartridgeId( src.getRequiredCartridgeId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemByCartIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByCartIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		return( false );
	}
}

