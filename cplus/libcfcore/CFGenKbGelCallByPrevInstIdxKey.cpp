// Description: C++18 implementation for a GelCall by PrevInstIdx index key object.

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

#include <cfgenkb/CFGenKbGelCallByPrevInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelCallByPrevInstIdxKey::CLASS_NAME( "CFGenKbGelCallByPrevInstIdxKey" );
	const std::string CFGenKbGelCallByPrevInstIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelCallByPrevInstIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelCallByPrevInstIdxKey::CFGenKbGelCallByPrevInstIdxKey() {
		optionalPrevInstTenantId.setNull();
		optionalPrevInstGelCacheId.setNull();
		optionalPrevInstGelInstId.setNull();
	}

	CFGenKbGelCallByPrevInstIdxKey::CFGenKbGelCallByPrevInstIdxKey( const CFGenKbGelCallByPrevInstIdxKey& src ) {
		optionalPrevInstTenantId.setNull();
		optionalPrevInstGelCacheId.setNull();
		optionalPrevInstGelInstId.setNull();
		if( src.isOptionalPrevInstTenantIdNull() ) {
			setOptionalPrevInstTenantIdNull();
		}
		else {
			setOptionalPrevInstTenantIdValue( src.getOptionalPrevInstTenantIdValue() );
		}
		if( src.isOptionalPrevInstGelCacheIdNull() ) {
			setOptionalPrevInstGelCacheIdNull();
		}
		else {
			setOptionalPrevInstGelCacheIdValue( src.getOptionalPrevInstGelCacheIdValue() );
		}
		if( src.isOptionalPrevInstGelInstIdNull() ) {
			setOptionalPrevInstGelInstIdNull();
		}
		else {
			setOptionalPrevInstGelInstIdValue( src.getOptionalPrevInstGelInstIdValue() );
		}
	}

	CFGenKbGelCallByPrevInstIdxKey::~CFGenKbGelCallByPrevInstIdxKey() {
	}

	const int64_t CFGenKbGelCallByPrevInstIdxKey::getOptionalPrevInstTenantIdValue() const {
		return( optionalPrevInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelCallByPrevInstIdxKey::getOptionalPrevInstTenantIdReference() const {
		return( optionalPrevInstTenantId.getReference() );
	}

	const bool CFGenKbGelCallByPrevInstIdxKey::isOptionalPrevInstTenantIdNull() const {
		return( optionalPrevInstTenantId.isNull() );
	}

	void CFGenKbGelCallByPrevInstIdxKey::setOptionalPrevInstTenantIdNull() {
		optionalPrevInstTenantId.setNull();
	}

	void CFGenKbGelCallByPrevInstIdxKey::setOptionalPrevInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrevInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::PREVINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::PREVINSTTENANTID_MIN_VALUE );
		}
		optionalPrevInstTenantId.setValue( value );
	}

	const int64_t CFGenKbGelCallByPrevInstIdxKey::getOptionalPrevInstGelCacheIdValue() const {
		return( optionalPrevInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelCallByPrevInstIdxKey::getOptionalPrevInstGelCacheIdReference() const {
		return( optionalPrevInstGelCacheId.getReference() );
	}

	const bool CFGenKbGelCallByPrevInstIdxKey::isOptionalPrevInstGelCacheIdNull() const {
		return( optionalPrevInstGelCacheId.isNull() );
	}

	void CFGenKbGelCallByPrevInstIdxKey::setOptionalPrevInstGelCacheIdNull() {
		optionalPrevInstGelCacheId.setNull();
	}

	void CFGenKbGelCallByPrevInstIdxKey::setOptionalPrevInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrevInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::PREVINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::PREVINSTGELCACHEID_MIN_VALUE );
		}
		optionalPrevInstGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGelCallByPrevInstIdxKey::getOptionalPrevInstGelInstIdValue() const {
		return( optionalPrevInstGelInstId.getValue() );
	}

	const int64_t* CFGenKbGelCallByPrevInstIdxKey::getOptionalPrevInstGelInstIdReference() const {
		return( optionalPrevInstGelInstId.getReference() );
	}

	const bool CFGenKbGelCallByPrevInstIdxKey::isOptionalPrevInstGelInstIdNull() const {
		return( optionalPrevInstGelInstId.isNull() );
	}

	void CFGenKbGelCallByPrevInstIdxKey::setOptionalPrevInstGelInstIdNull() {
		optionalPrevInstGelInstId.setNull();
	}

	void CFGenKbGelCallByPrevInstIdxKey::setOptionalPrevInstGelInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrevInstGelInstIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::PREVINSTGELINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::PREVINSTGELINSTID_MIN_VALUE );
		}
		optionalPrevInstGelInstId.setValue( value );
	}

	size_t CFGenKbGelCallByPrevInstIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalPrevInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalPrevInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalPrevInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalPrevInstGelInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGelCallByPrevInstIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCallByPrevInstIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_PrevInstTenantId( "PrevInstTenantId" );
		static const std::string S_PrevInstGelCacheId( "PrevInstGelCacheId" );
		static const std::string S_PrevInstGelInstId( "PrevInstGelInstId" );
		std::string ret( S_Preamble );
		if( ! isOptionalPrevInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstTenantId, getOptionalPrevInstTenantIdValue() ) );
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstGelCacheId, getOptionalPrevInstGelCacheIdValue() ) );
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstGelInstId, getOptionalPrevInstGelInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator <( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator <( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator <=( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator <=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator ==( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				if( getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				if( getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				if( getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator ==( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				if( getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				if( getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				if( getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator !=( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator !=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator >=( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator >=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator >( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelCallByPrevInstIdxKey::operator >( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelCallByPrevInstIdxKey CFGenKbGelCallByPrevInstIdxKey::operator =( cfcore::CFGenKbGelCallByPrevInstIdxKey& src ) {
		if( src.isOptionalPrevInstTenantIdNull() ) {
			setOptionalPrevInstTenantIdNull();
		}
		else {
			setOptionalPrevInstTenantIdValue( src.getOptionalPrevInstTenantIdValue() );
		}
		if( src.isOptionalPrevInstGelCacheIdNull() ) {
			setOptionalPrevInstGelCacheIdNull();
		}
		else {
			setOptionalPrevInstGelCacheIdValue( src.getOptionalPrevInstGelCacheIdValue() );
		}
		if( src.isOptionalPrevInstGelInstIdNull() ) {
			setOptionalPrevInstGelInstIdNull();
		}
		else {
			setOptionalPrevInstGelInstIdValue( src.getOptionalPrevInstGelInstIdValue() );
		}
		return( *this );
	}

	CFGenKbGelCallByPrevInstIdxKey CFGenKbGelCallByPrevInstIdxKey::operator =( cfcore::CFGenKbGelCallBuff& src ) {
		if( src.isOptionalPrevInstTenantIdNull() ) {
			setOptionalPrevInstTenantIdNull();
		}
		else {
			setOptionalPrevInstTenantIdValue( src.getOptionalPrevInstTenantIdValue() );
		}
		if( src.isOptionalPrevInstGelCacheIdNull() ) {
			setOptionalPrevInstGelCacheIdNull();
		}
		else {
			setOptionalPrevInstGelCacheIdValue( src.getOptionalPrevInstGelCacheIdValue() );
		}
		if( src.isOptionalPrevInstGelInstIdNull() ) {
			setOptionalPrevInstGelInstIdNull();
		}
		else {
			setOptionalPrevInstGelInstIdValue( src.getOptionalPrevInstGelInstIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				if( lhs.getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				if( lhs.getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				if( lhs.getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				if( lhs.getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				if( lhs.getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				if( lhs.getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCallByPrevInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

