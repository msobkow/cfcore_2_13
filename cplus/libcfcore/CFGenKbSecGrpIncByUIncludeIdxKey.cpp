// Description: C++18 implementation for a SecGrpInc by UIncludeIdx index key object.

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

#include <cfgenkb/CFGenKbSecGrpIncByUIncludeIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpIncBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecGrpIncByUIncludeIdxKey::CLASS_NAME( "CFGenKbSecGrpIncByUIncludeIdxKey" );
	const std::string CFGenKbSecGrpIncByUIncludeIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecGrpIncByUIncludeIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecGrpIncByUIncludeIdxKey::CFGenKbSecGrpIncByUIncludeIdxKey() {
		requiredClusterId = cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_INIT_VALUE;
		requiredSecGroupId = cfcore::CFGenKbSecGrpIncBuff::SECGROUPID_INIT_VALUE;
		requiredIncludeGroupId = cfcore::CFGenKbSecGrpIncBuff::INCLUDEGROUPID_INIT_VALUE;
	}

	CFGenKbSecGrpIncByUIncludeIdxKey::CFGenKbSecGrpIncByUIncludeIdxKey( const CFGenKbSecGrpIncByUIncludeIdxKey& src ) {
		requiredClusterId = cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_INIT_VALUE;
		requiredSecGroupId = cfcore::CFGenKbSecGrpIncBuff::SECGROUPID_INIT_VALUE;
		requiredIncludeGroupId = cfcore::CFGenKbSecGrpIncBuff::INCLUDEGROUPID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupId( src.getRequiredSecGroupId() );
		setRequiredIncludeGroupId( src.getRequiredIncludeGroupId() );
	}

	CFGenKbSecGrpIncByUIncludeIdxKey::~CFGenKbSecGrpIncByUIncludeIdxKey() {
	}

	const int64_t CFGenKbSecGrpIncByUIncludeIdxKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecGrpIncByUIncludeIdxKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecGrpIncByUIncludeIdxKey::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const int32_t CFGenKbSecGrpIncByUIncludeIdxKey::getRequiredSecGroupId() const {
		return( requiredSecGroupId );
	}

	const int32_t* CFGenKbSecGrpIncByUIncludeIdxKey::getRequiredSecGroupIdReference() const {
		return( &requiredSecGroupId );
	}

	void CFGenKbSecGrpIncByUIncludeIdxKey::setRequiredSecGroupId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSecGroupId" );
		if( value < cfcore::CFGenKbSecGrpIncBuff::SECGROUPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpIncBuff::SECGROUPID_MIN_VALUE );
		}
		requiredSecGroupId = value;
	}

	const int32_t CFGenKbSecGrpIncByUIncludeIdxKey::getRequiredIncludeGroupId() const {
		return( requiredIncludeGroupId );
	}

	const int32_t* CFGenKbSecGrpIncByUIncludeIdxKey::getRequiredIncludeGroupIdReference() const {
		return( &requiredIncludeGroupId );
	}

	void CFGenKbSecGrpIncByUIncludeIdxKey::setRequiredIncludeGroupId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredIncludeGroupId" );
		if( value < cfcore::CFGenKbSecGrpIncBuff::INCLUDEGROUPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpIncBuff::INCLUDEGROUPID_MIN_VALUE );
		}
		requiredIncludeGroupId = value;
	}

	size_t CFGenKbSecGrpIncByUIncludeIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + getRequiredSecGroupId();
		hashCode = hashCode + getRequiredIncludeGroupId();
		return( hashCode );
	}

	std::string CFGenKbSecGrpIncByUIncludeIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGrpIncByUIncludeIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGroupId( "SecGroupId" );
		static const std::string S_IncludeGroupId( "IncludeGroupId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_IncludeGroupId, getRequiredIncludeGroupId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator <( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator <( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator <=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator <=( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator ==( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator ==( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator !=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator !=( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator >=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator >=( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator >( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncByUIncludeIdxKey::operator >( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbSecGrpIncByUIncludeIdxKey CFGenKbSecGrpIncByUIncludeIdxKey::operator =( cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupId( src.getRequiredSecGroupId() );
		setRequiredIncludeGroupId( src.getRequiredIncludeGroupId() );
		return( *this );
	}

	CFGenKbSecGrpIncByUIncludeIdxKey CFGenKbSecGrpIncByUIncludeIdxKey::operator =( cfcore::CFGenKbSecGrpIncBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupId( src.getRequiredSecGroupId() );
		setRequiredIncludeGroupId( src.getRequiredIncludeGroupId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( lhs.getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( lhs.getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}
}

