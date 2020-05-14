// Description: C++18 implementation for a GelCall by CallInstIdx index key object.

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

#include <cfgenkb/CFGenKbGelCallByCallInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelCallByCallInstIdxKey::CLASS_NAME( "CFGenKbGelCallByCallInstIdxKey" );
	const std::string CFGenKbGelCallByCallInstIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelCallByCallInstIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelCallByCallInstIdxKey::CFGenKbGelCallByCallInstIdxKey() {
		optionalCallInstTenantId.setNull();
		optionalCallInstGelCacheId.setNull();
		optionalCallInstId.setNull();
	}

	CFGenKbGelCallByCallInstIdxKey::CFGenKbGelCallByCallInstIdxKey( const CFGenKbGelCallByCallInstIdxKey& src ) {
		optionalCallInstTenantId.setNull();
		optionalCallInstGelCacheId.setNull();
		optionalCallInstId.setNull();
		if( src.isOptionalCallInstTenantIdNull() ) {
			setOptionalCallInstTenantIdNull();
		}
		else {
			setOptionalCallInstTenantIdValue( src.getOptionalCallInstTenantIdValue() );
		}
		if( src.isOptionalCallInstGelCacheIdNull() ) {
			setOptionalCallInstGelCacheIdNull();
		}
		else {
			setOptionalCallInstGelCacheIdValue( src.getOptionalCallInstGelCacheIdValue() );
		}
		if( src.isOptionalCallInstIdNull() ) {
			setOptionalCallInstIdNull();
		}
		else {
			setOptionalCallInstIdValue( src.getOptionalCallInstIdValue() );
		}
	}

	CFGenKbGelCallByCallInstIdxKey::~CFGenKbGelCallByCallInstIdxKey() {
	}

	const int64_t CFGenKbGelCallByCallInstIdxKey::getOptionalCallInstTenantIdValue() const {
		return( optionalCallInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelCallByCallInstIdxKey::getOptionalCallInstTenantIdReference() const {
		return( optionalCallInstTenantId.getReference() );
	}

	const bool CFGenKbGelCallByCallInstIdxKey::isOptionalCallInstTenantIdNull() const {
		return( optionalCallInstTenantId.isNull() );
	}

	void CFGenKbGelCallByCallInstIdxKey::setOptionalCallInstTenantIdNull() {
		optionalCallInstTenantId.setNull();
	}

	void CFGenKbGelCallByCallInstIdxKey::setOptionalCallInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalCallInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::CALLINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::CALLINSTTENANTID_MIN_VALUE );
		}
		optionalCallInstTenantId.setValue( value );
	}

	const int64_t CFGenKbGelCallByCallInstIdxKey::getOptionalCallInstGelCacheIdValue() const {
		return( optionalCallInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelCallByCallInstIdxKey::getOptionalCallInstGelCacheIdReference() const {
		return( optionalCallInstGelCacheId.getReference() );
	}

	const bool CFGenKbGelCallByCallInstIdxKey::isOptionalCallInstGelCacheIdNull() const {
		return( optionalCallInstGelCacheId.isNull() );
	}

	void CFGenKbGelCallByCallInstIdxKey::setOptionalCallInstGelCacheIdNull() {
		optionalCallInstGelCacheId.setNull();
	}

	void CFGenKbGelCallByCallInstIdxKey::setOptionalCallInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalCallInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::CALLINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::CALLINSTGELCACHEID_MIN_VALUE );
		}
		optionalCallInstGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGelCallByCallInstIdxKey::getOptionalCallInstIdValue() const {
		return( optionalCallInstId.getValue() );
	}

	const int64_t* CFGenKbGelCallByCallInstIdxKey::getOptionalCallInstIdReference() const {
		return( optionalCallInstId.getReference() );
	}

	const bool CFGenKbGelCallByCallInstIdxKey::isOptionalCallInstIdNull() const {
		return( optionalCallInstId.isNull() );
	}

	void CFGenKbGelCallByCallInstIdxKey::setOptionalCallInstIdNull() {
		optionalCallInstId.setNull();
	}

	void CFGenKbGelCallByCallInstIdxKey::setOptionalCallInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalCallInstIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::CALLINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::CALLINSTID_MIN_VALUE );
		}
		optionalCallInstId.setValue( value );
	}

	size_t CFGenKbGelCallByCallInstIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalCallInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalCallInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalCallInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalCallInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalCallInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGelCallByCallInstIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCallByCallInstIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_CallInstTenantId( "CallInstTenantId" );
		static const std::string S_CallInstGelCacheId( "CallInstGelCacheId" );
		static const std::string S_CallInstId( "CallInstId" );
		std::string ret( S_Preamble );
		if( ! isOptionalCallInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstTenantId, getOptionalCallInstTenantIdValue() ) );
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstGelCacheId, getOptionalCallInstGelCacheIdValue() ) );
		}
		if( ! isOptionalCallInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstId, getOptionalCallInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator <( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator <( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator <=( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator <=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator ==( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				if( getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				if( getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				if( getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator ==( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				if( getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				if( getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				if( getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator !=( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator !=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator >=( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator >=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator >( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelCallByCallInstIdxKey::operator >( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelCallByCallInstIdxKey CFGenKbGelCallByCallInstIdxKey::operator =( cfcore::CFGenKbGelCallByCallInstIdxKey& src ) {
		if( src.isOptionalCallInstTenantIdNull() ) {
			setOptionalCallInstTenantIdNull();
		}
		else {
			setOptionalCallInstTenantIdValue( src.getOptionalCallInstTenantIdValue() );
		}
		if( src.isOptionalCallInstGelCacheIdNull() ) {
			setOptionalCallInstGelCacheIdNull();
		}
		else {
			setOptionalCallInstGelCacheIdValue( src.getOptionalCallInstGelCacheIdValue() );
		}
		if( src.isOptionalCallInstIdNull() ) {
			setOptionalCallInstIdNull();
		}
		else {
			setOptionalCallInstIdValue( src.getOptionalCallInstIdValue() );
		}
		return( *this );
	}

	CFGenKbGelCallByCallInstIdxKey CFGenKbGelCallByCallInstIdxKey::operator =( cfcore::CFGenKbGelCallBuff& src ) {
		if( src.isOptionalCallInstTenantIdNull() ) {
			setOptionalCallInstTenantIdNull();
		}
		else {
			setOptionalCallInstTenantIdValue( src.getOptionalCallInstTenantIdValue() );
		}
		if( src.isOptionalCallInstGelCacheIdNull() ) {
			setOptionalCallInstGelCacheIdNull();
		}
		else {
			setOptionalCallInstGelCacheIdValue( src.getOptionalCallInstGelCacheIdValue() );
		}
		if( src.isOptionalCallInstIdNull() ) {
			setOptionalCallInstIdNull();
		}
		else {
			setOptionalCallInstIdValue( src.getOptionalCallInstIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				if( lhs.getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				if( lhs.getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				if( lhs.getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				if( lhs.getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				if( lhs.getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				if( lhs.getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCallByCallInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

