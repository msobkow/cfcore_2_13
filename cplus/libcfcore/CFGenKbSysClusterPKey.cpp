// Description: C++18 implementation of a SysCluster primary key object.

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

#include <cfgenkb/CFGenKbSysClusterPKey.hpp>
#include <cfgenkb/CFGenKbSysClusterBuff.hpp>

namespace cfcore {

	const std::string CFGenKbSysClusterPKey::CLASS_NAME( "CFGenKbSysClusterPKey" );
	const std::string CFGenKbSysClusterPKey::S_VALUE( "value" );
	const std::string CFGenKbSysClusterPKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbSysClusterPKey::CFGenKbSysClusterPKey() {
		requiredSingletonId = cfcore::CFGenKbSysClusterBuff::SINGLETONID_INIT_VALUE;
	}

	CFGenKbSysClusterPKey::CFGenKbSysClusterPKey( const CFGenKbSysClusterPKey& src ) {
		requiredSingletonId = cfcore::CFGenKbSysClusterBuff::SINGLETONID_INIT_VALUE;
		setRequiredSingletonId( src.getRequiredSingletonId() );
	}

	CFGenKbSysClusterPKey::~CFGenKbSysClusterPKey() {
	}

	const int32_t CFGenKbSysClusterPKey::getRequiredSingletonId() const {
		return( requiredSingletonId );
	}

	const int32_t* CFGenKbSysClusterPKey::getRequiredSingletonIdReference() const {
		return( &requiredSingletonId );
	}

	void CFGenKbSysClusterPKey::setRequiredSingletonId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSingletonId" );
		if( value < cfcore::CFGenKbSysClusterBuff::SINGLETONID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSysClusterBuff::SINGLETONID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbSysClusterBuff::SINGLETONID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSysClusterBuff::SINGLETONID_MAX_VALUE );
		}
		requiredSingletonId = value;
	}

	bool CFGenKbSysClusterPKey::operator <( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterPKey::operator <( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterPKey::operator <=( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSysClusterPKey::operator <=( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSysClusterPKey::operator ==( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSysClusterPKey::operator ==( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSysClusterPKey::operator !=( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterPKey::operator !=( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterPKey::operator >=( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSysClusterPKey::operator >=( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSysClusterPKey::operator >( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterPKey::operator >( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbSysClusterPKey CFGenKbSysClusterPKey::operator =( cfcore::CFGenKbSysClusterPKey& src ) {
		setRequiredSingletonId( src.getRequiredSingletonId() );
		return( *this );
	}

	CFGenKbSysClusterPKey CFGenKbSysClusterPKey::operator =( cfcore::CFGenKbSysClusterBuff& src ) {
		setRequiredSingletonId( src.getRequiredSingletonId() );
		return( *this );
	}

	size_t CFGenKbSysClusterPKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + getRequiredSingletonId();
		return( hashCode );
	}

	std::string CFGenKbSysClusterPKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSysClusterPKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_SingletonId( "SingletonId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SingletonId, getRequiredSingletonId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSysClusterPKey& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}
}

