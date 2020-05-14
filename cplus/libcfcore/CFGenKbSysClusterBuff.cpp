// Description: C++18 implementation for a SysCluster buffer object.

/*
 *	com.github.msobkow.CFCore
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

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbSysClusterByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbSysClusterBuff::S_VALUE( "value" );
	const std::string CFGenKbSysClusterBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbSysClusterBuff::GENDEFNAME( "SysCluster" );
	const classcode_t CFGenKbSysClusterBuff::CLASS_CODE = 0xa90fL;
	const std::string CFGenKbSysClusterBuff::CLASS_NAME( "CFGenKbSysClusterBuff" );
		const std::string CFGenKbSysClusterBuff::COLNAME_SINGLETONID( "SingletonId" );
		const std::string CFGenKbSysClusterBuff::COLNAME_CLUSTERID( "ClusterId" );
	const int CFGenKbSysClusterBuff::SINGLETONID_INIT_VALUE = 1L;
	const int64_t CFGenKbSysClusterBuff::CLUSTERID_INIT_VALUE = 0LL;
	const int CFGenKbSysClusterBuff::SINGLETONID_MIN_VALUE = 1L;
	const int64_t CFGenKbSysClusterBuff::CLUSTERID_MIN_VALUE = 0LL;
	const int CFGenKbSysClusterBuff::SINGLETONID_MAX_VALUE = 1L;

	CFGenKbSysClusterBuff::CFGenKbSysClusterBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredSingletonId = cfcore::CFGenKbSysClusterBuff::SINGLETONID_INIT_VALUE;
		requiredClusterId = cfcore::CFGenKbSysClusterBuff::CLUSTERID_INIT_VALUE;
	}

	CFGenKbSysClusterBuff::CFGenKbSysClusterBuff( const CFGenKbSysClusterBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredSingletonId = cfcore::CFGenKbSysClusterBuff::SINGLETONID_INIT_VALUE;
		requiredClusterId = cfcore::CFGenKbSysClusterBuff::CLUSTERID_INIT_VALUE;
		setRequiredSingletonId( src.getRequiredSingletonId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredClusterId( src.getRequiredClusterId() );
	}

	CFGenKbSysClusterBuff::~CFGenKbSysClusterBuff() {
	}

	cflib::ICFLibCloneableObj* CFGenKbSysClusterBuff::clone() {
		CFGenKbSysClusterBuff* copy = new CFGenKbSysClusterBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbSysClusterBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSysClusterBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSysClusterBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const int32_t CFGenKbSysClusterBuff::getRequiredSingletonId() const {
		return( requiredSingletonId );
	}

	const int32_t* CFGenKbSysClusterBuff::getRequiredSingletonIdReference() const {
		return( &requiredSingletonId );
	}

	void CFGenKbSysClusterBuff::setRequiredSingletonId( const int32_t value ) {
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

	const int64_t CFGenKbSysClusterBuff::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSysClusterBuff::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSysClusterBuff::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSysClusterBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSysClusterBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	int32_t CFGenKbSysClusterBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbSysClusterBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbSysClusterBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + getRequiredSingletonId();
		hashCode = hashCode + (int)( getRequiredClusterId() );
		return( hashCode );
	}

	CFGenKbSysClusterBuff CFGenKbSysClusterBuff::operator =( cfcore::CFGenKbSysClusterBuff& src ) {
		setRequiredSingletonId( src.getRequiredSingletonId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredClusterId( src.getRequiredClusterId() );
		return( *this );
	}

	bool CFGenKbSysClusterBuff::operator <( const CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterBuff::operator <( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterBuff::operator <( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterBuff::operator <=( const CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSysClusterBuff::operator <=( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSysClusterBuff::operator <=( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSysClusterBuff::operator ==( const CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSysClusterBuff::operator ==( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSysClusterBuff::operator ==( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( false );
		}
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSysClusterBuff::operator !=( const CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterBuff::operator !=( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterBuff::operator !=( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( true );
		}
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterBuff::operator >=( const CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSysClusterBuff::operator >=( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSysClusterBuff::operator >=( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSysClusterBuff::operator >( const CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterBuff::operator >( const CFGenKbSysClusterPKey& rhs ) {
		if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSysClusterBuff::operator >( const CFGenKbSysClusterBuff& rhs ) {
		if( getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbSysClusterBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSysClusterBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_SingletonId( "SingletonId" );
		static const std::string S_ClusterId( "ClusterId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SingletonId, getRequiredSingletonId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( true );
		}
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( false );
		}
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() != rhs.getRequiredSingletonId() ) {
			return( true );
		}
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs ) {
		if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs ) {
		if( lhs.getRequiredSingletonId() < rhs.getRequiredSingletonId() ) {
			return( false );
		}
		else if( lhs.getRequiredSingletonId() > rhs.getRequiredSingletonId() ) {
			return( true );
		}
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}
}

