// Description: C++18 implementation of a HostNode primary key object.

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

#include <cfgenkb/CFGenKbHostNodePKey.hpp>
#include <cfgenkb/CFGenKbHostNodeBuff.hpp>

namespace cfcore {

	const std::string CFGenKbHostNodePKey::CLASS_NAME( "CFGenKbHostNodePKey" );
	const std::string CFGenKbHostNodePKey::S_VALUE( "value" );
	const std::string CFGenKbHostNodePKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbHostNodePKey::CFGenKbHostNodePKey() {
		requiredClusterId = cfcore::CFGenKbHostNodeBuff::CLUSTERID_INIT_VALUE;
		requiredHostNodeId = cfcore::CFGenKbHostNodeBuff::HOSTNODEID_INIT_VALUE;
	}

	CFGenKbHostNodePKey::CFGenKbHostNodePKey( const CFGenKbHostNodePKey& src ) {
		requiredClusterId = cfcore::CFGenKbHostNodeBuff::CLUSTERID_INIT_VALUE;
		requiredHostNodeId = cfcore::CFGenKbHostNodeBuff::HOSTNODEID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredHostNodeId( src.getRequiredHostNodeId() );
	}

	CFGenKbHostNodePKey::~CFGenKbHostNodePKey() {
	}

	const int64_t CFGenKbHostNodePKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbHostNodePKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbHostNodePKey::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbHostNodeBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbHostNodeBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const int64_t CFGenKbHostNodePKey::getRequiredHostNodeId() const {
		return( requiredHostNodeId );
	}

	const int64_t* CFGenKbHostNodePKey::getRequiredHostNodeIdReference() const {
		return( &requiredHostNodeId );
	}

	void CFGenKbHostNodePKey::setRequiredHostNodeId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredHostNodeId" );
		if( value < cfcore::CFGenKbHostNodeBuff::HOSTNODEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbHostNodeBuff::HOSTNODEID_MIN_VALUE );
		}
		requiredHostNodeId = value;
	}

	bool CFGenKbHostNodePKey::operator <( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodePKey::operator <( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodePKey::operator <=( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodePKey::operator <=( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodePKey::operator ==( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbHostNodePKey::operator ==( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbHostNodePKey::operator !=( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodePKey::operator !=( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodePKey::operator >=( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodePKey::operator >=( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbHostNodePKey::operator >( const CFGenKbHostNodePKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbHostNodePKey::operator >( const CFGenKbHostNodeBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbHostNodePKey CFGenKbHostNodePKey::operator =( cfcore::CFGenKbHostNodePKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredHostNodeId( src.getRequiredHostNodeId() );
		return( *this );
	}

	CFGenKbHostNodePKey CFGenKbHostNodePKey::operator =( cfcore::CFGenKbHostNodeBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredHostNodeId( src.getRequiredHostNodeId() );
		return( *this );
	}

	size_t CFGenKbHostNodePKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + (int)( getRequiredHostNodeId() );
		return( hashCode );
	}

	std::string CFGenKbHostNodePKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbHostNodePKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_HostNodeId( "HostNodeId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_HostNodeId, getRequiredHostNodeId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() != rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodePKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbHostNodePKey& lhs, const cfcore::CFGenKbHostNodeBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredHostNodeId() < rhs.getRequiredHostNodeId() ) {
			return( false );
		}
		else if( lhs.getRequiredHostNodeId() > rhs.getRequiredHostNodeId() ) {
			return( true );
		}
		return( false );
	}
}

