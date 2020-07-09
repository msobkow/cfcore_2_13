// Description: C++18 implementation for a SecGroup by ClusterVisIdx index key object.

/*
 *	org.msscf.msscf.CFCore
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

#include <cfgenkb/CFGenKbSecGroupByClusterVisIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecGroupByClusterVisIdxKey::CLASS_NAME( "CFGenKbSecGroupByClusterVisIdxKey" );
	const std::string CFGenKbSecGroupByClusterVisIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecGroupByClusterVisIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecGroupByClusterVisIdxKey::CFGenKbSecGroupByClusterVisIdxKey() {
		requiredClusterId = cfcore::CFGenKbSecGroupBuff::CLUSTERID_INIT_VALUE;
		requiredIsVisible = cfcore::CFGenKbSecGroupBuff::ISVISIBLE_INIT_VALUE;
	}

	CFGenKbSecGroupByClusterVisIdxKey::CFGenKbSecGroupByClusterVisIdxKey( const CFGenKbSecGroupByClusterVisIdxKey& src ) {
		requiredClusterId = cfcore::CFGenKbSecGroupBuff::CLUSTERID_INIT_VALUE;
		requiredIsVisible = cfcore::CFGenKbSecGroupBuff::ISVISIBLE_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredIsVisible( src.getRequiredIsVisible() );
	}

	CFGenKbSecGroupByClusterVisIdxKey::~CFGenKbSecGroupByClusterVisIdxKey() {
	}

	const int64_t CFGenKbSecGroupByClusterVisIdxKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecGroupByClusterVisIdxKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecGroupByClusterVisIdxKey::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecGroupBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const bool CFGenKbSecGroupByClusterVisIdxKey::getRequiredIsVisible() const {
		return( requiredIsVisible );
	}

	const bool* CFGenKbSecGroupByClusterVisIdxKey::getRequiredIsVisibleReference() const {
		return( &requiredIsVisible );
	}

	void CFGenKbSecGroupByClusterVisIdxKey::setRequiredIsVisible( const bool value ) {
		requiredIsVisible = value;
	}

	size_t CFGenKbSecGroupByClusterVisIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		if( getRequiredIsVisible() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		return( hashCode );
	}

	std::string CFGenKbSecGroupByClusterVisIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGroupByClusterVisIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_IsVisible( "IsVisible" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsVisible, getRequiredIsVisible() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator <( const CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator <( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator <=( const CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator <=( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator ==( const CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredIsVisible() != rhs.getRequiredIsVisible() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator ==( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredIsVisible() != rhs.getRequiredIsVisible() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator !=( const CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIsVisible() != rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator !=( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIsVisible() != rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator >=( const CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator >=( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator >( const CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupByClusterVisIdxKey::operator >( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbSecGroupByClusterVisIdxKey CFGenKbSecGroupByClusterVisIdxKey::operator =( cfcore::CFGenKbSecGroupByClusterVisIdxKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredIsVisible( src.getRequiredIsVisible() );
		return( *this );
	}

	CFGenKbSecGroupByClusterVisIdxKey CFGenKbSecGroupByClusterVisIdxKey::operator =( cfcore::CFGenKbSecGroupBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredIsVisible( src.getRequiredIsVisible() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( lhs.getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( lhs.getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( lhs.getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( lhs.getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredIsVisible() != rhs.getRequiredIsVisible() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredIsVisible() != rhs.getRequiredIsVisible() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIsVisible() != rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIsVisible() != rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( lhs.getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( lhs.getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterVisIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( lhs.getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupByClusterVisIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIsVisible() < rhs.getRequiredIsVisible() ) {
			return( false );
		}
		else if( lhs.getRequiredIsVisible() > rhs.getRequiredIsVisible() ) {
			return( true );
		}
		return( false );
	}
}

