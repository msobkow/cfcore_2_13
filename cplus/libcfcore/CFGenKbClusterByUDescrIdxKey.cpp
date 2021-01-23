// Description: C++18 implementation for a Cluster by UDescrIdx index key object.

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

#include <cfgenkb/CFGenKbClusterByUDescrIdxKey.hpp>
#include <cfgenkb/CFGenKbClusterBuff.hpp>

namespace cfcore {
	const std::string CFGenKbClusterByUDescrIdxKey::CLASS_NAME( "CFGenKbClusterByUDescrIdxKey" );
	const std::string CFGenKbClusterByUDescrIdxKey::S_VALUE( "value" );
	const std::string CFGenKbClusterByUDescrIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbClusterByUDescrIdxKey::CFGenKbClusterByUDescrIdxKey() {
		requiredDescription = new std::string( cfcore::CFGenKbClusterBuff::DESCRIPTION_INIT_VALUE );
	}

	CFGenKbClusterByUDescrIdxKey::CFGenKbClusterByUDescrIdxKey( const CFGenKbClusterByUDescrIdxKey& src ) {
		requiredDescription = new std::string( cfcore::CFGenKbClusterBuff::DESCRIPTION_INIT_VALUE );
		setRequiredDescription( src.getRequiredDescription() );
	}

	CFGenKbClusterByUDescrIdxKey::~CFGenKbClusterByUDescrIdxKey() {
		if( requiredDescription != NULL ) {
			delete requiredDescription;
			requiredDescription = NULL;
		}
	}

	const std::string& CFGenKbClusterByUDescrIdxKey::getRequiredDescription() const {
		return( *requiredDescription );
	}

	const std::string* CFGenKbClusterByUDescrIdxKey::getRequiredDescriptionReference() const {
		return( requiredDescription );
	}

	void CFGenKbClusterByUDescrIdxKey::setRequiredDescription( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredDescription" );
		if( value.length() > CFGenKbClusterBuff::DESCRIPTION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbClusterBuff::DESCRIPTION_MAX_LEN );
		}
		if( requiredDescription != NULL ) {
			delete requiredDescription;
			requiredDescription = NULL;
		}
		requiredDescription = new std::string( value );
	}

	size_t CFGenKbClusterByUDescrIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredDescription() );
		return( hashCode );
	}

	std::string CFGenKbClusterByUDescrIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbClusterByUDescrIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, getRequiredDescription() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator <( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator <( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator <=( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator <=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator ==( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator ==( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator !=( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator !=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator >=( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator >=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator >( const CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterByUDescrIdxKey::operator >( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbClusterByUDescrIdxKey CFGenKbClusterByUDescrIdxKey::operator =( cfcore::CFGenKbClusterByUDescrIdxKey& src ) {
		setRequiredDescription( src.getRequiredDescription() );
		return( *this );
	}

	CFGenKbClusterByUDescrIdxKey CFGenKbClusterByUDescrIdxKey::operator =( cfcore::CFGenKbClusterBuff& src ) {
		setRequiredDescription( src.getRequiredDescription() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredDescription() != rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterByUDescrIdxKey& rhs ) {
		if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbClusterByUDescrIdxKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredDescription() < rhs.getRequiredDescription() ) {
			return( false );
		}
		else if( lhs.getRequiredDescription() > rhs.getRequiredDescription() ) {
			return( true );
		}
		return( false );
	}
}

