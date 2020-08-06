// Description: C++18 implementation for a GelCall by NextInstIdx index key object.

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

#include <cfgenkb/CFGenKbGelCallByNextInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelCallByNextInstIdxKey::CLASS_NAME( "CFGenKbGelCallByNextInstIdxKey" );
	const std::string CFGenKbGelCallByNextInstIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelCallByNextInstIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelCallByNextInstIdxKey::CFGenKbGelCallByNextInstIdxKey() {
		optionalNextInstTenantId.setNull();
		optionalNextInstGelCacheId.setNull();
		optionalNextInstGelInstId.setNull();
	}

	CFGenKbGelCallByNextInstIdxKey::CFGenKbGelCallByNextInstIdxKey( const CFGenKbGelCallByNextInstIdxKey& src ) {
		optionalNextInstTenantId.setNull();
		optionalNextInstGelCacheId.setNull();
		optionalNextInstGelInstId.setNull();
		if( src.isOptionalNextInstTenantIdNull() ) {
			setOptionalNextInstTenantIdNull();
		}
		else {
			setOptionalNextInstTenantIdValue( src.getOptionalNextInstTenantIdValue() );
		}
		if( src.isOptionalNextInstGelCacheIdNull() ) {
			setOptionalNextInstGelCacheIdNull();
		}
		else {
			setOptionalNextInstGelCacheIdValue( src.getOptionalNextInstGelCacheIdValue() );
		}
		if( src.isOptionalNextInstGelInstIdNull() ) {
			setOptionalNextInstGelInstIdNull();
		}
		else {
			setOptionalNextInstGelInstIdValue( src.getOptionalNextInstGelInstIdValue() );
		}
	}

	CFGenKbGelCallByNextInstIdxKey::~CFGenKbGelCallByNextInstIdxKey() {
	}

	const int64_t CFGenKbGelCallByNextInstIdxKey::getOptionalNextInstTenantIdValue() const {
		return( optionalNextInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelCallByNextInstIdxKey::getOptionalNextInstTenantIdReference() const {
		return( optionalNextInstTenantId.getReference() );
	}

	const bool CFGenKbGelCallByNextInstIdxKey::isOptionalNextInstTenantIdNull() const {
		return( optionalNextInstTenantId.isNull() );
	}

	void CFGenKbGelCallByNextInstIdxKey::setOptionalNextInstTenantIdNull() {
		optionalNextInstTenantId.setNull();
	}

	void CFGenKbGelCallByNextInstIdxKey::setOptionalNextInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::NEXTINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::NEXTINSTTENANTID_MIN_VALUE );
		}
		optionalNextInstTenantId.setValue( value );
	}

	const int64_t CFGenKbGelCallByNextInstIdxKey::getOptionalNextInstGelCacheIdValue() const {
		return( optionalNextInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelCallByNextInstIdxKey::getOptionalNextInstGelCacheIdReference() const {
		return( optionalNextInstGelCacheId.getReference() );
	}

	const bool CFGenKbGelCallByNextInstIdxKey::isOptionalNextInstGelCacheIdNull() const {
		return( optionalNextInstGelCacheId.isNull() );
	}

	void CFGenKbGelCallByNextInstIdxKey::setOptionalNextInstGelCacheIdNull() {
		optionalNextInstGelCacheId.setNull();
	}

	void CFGenKbGelCallByNextInstIdxKey::setOptionalNextInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::NEXTINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::NEXTINSTGELCACHEID_MIN_VALUE );
		}
		optionalNextInstGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGelCallByNextInstIdxKey::getOptionalNextInstGelInstIdValue() const {
		return( optionalNextInstGelInstId.getValue() );
	}

	const int64_t* CFGenKbGelCallByNextInstIdxKey::getOptionalNextInstGelInstIdReference() const {
		return( optionalNextInstGelInstId.getReference() );
	}

	const bool CFGenKbGelCallByNextInstIdxKey::isOptionalNextInstGelInstIdNull() const {
		return( optionalNextInstGelInstId.isNull() );
	}

	void CFGenKbGelCallByNextInstIdxKey::setOptionalNextInstGelInstIdNull() {
		optionalNextInstGelInstId.setNull();
	}

	void CFGenKbGelCallByNextInstIdxKey::setOptionalNextInstGelInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextInstGelInstIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::NEXTINSTGELINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::NEXTINSTGELINSTID_MIN_VALUE );
		}
		optionalNextInstGelInstId.setValue( value );
	}

	size_t CFGenKbGelCallByNextInstIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalNextInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNextInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNextInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNextInstGelInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGelCallByNextInstIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCallByNextInstIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_NextInstTenantId( "NextInstTenantId" );
		static const std::string S_NextInstGelCacheId( "NextInstGelCacheId" );
		static const std::string S_NextInstGelInstId( "NextInstGelInstId" );
		std::string ret( S_Preamble );
		if( ! isOptionalNextInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstTenantId, getOptionalNextInstTenantIdValue() ) );
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstGelCacheId, getOptionalNextInstGelCacheIdValue() ) );
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstGelInstId, getOptionalNextInstGelInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator <( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator <( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator <=( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator <=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator ==( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				if( getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				if( getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				if( getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator ==( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				if( getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				if( getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				if( getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator !=( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator !=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator >=( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator >=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator >( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelCallByNextInstIdxKey::operator >( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelCallByNextInstIdxKey CFGenKbGelCallByNextInstIdxKey::operator =( cfcore::CFGenKbGelCallByNextInstIdxKey& src ) {
		if( src.isOptionalNextInstTenantIdNull() ) {
			setOptionalNextInstTenantIdNull();
		}
		else {
			setOptionalNextInstTenantIdValue( src.getOptionalNextInstTenantIdValue() );
		}
		if( src.isOptionalNextInstGelCacheIdNull() ) {
			setOptionalNextInstGelCacheIdNull();
		}
		else {
			setOptionalNextInstGelCacheIdValue( src.getOptionalNextInstGelCacheIdValue() );
		}
		if( src.isOptionalNextInstGelInstIdNull() ) {
			setOptionalNextInstGelInstIdNull();
		}
		else {
			setOptionalNextInstGelInstIdValue( src.getOptionalNextInstGelInstIdValue() );
		}
		return( *this );
	}

	CFGenKbGelCallByNextInstIdxKey CFGenKbGelCallByNextInstIdxKey::operator =( cfcore::CFGenKbGelCallBuff& src ) {
		if( src.isOptionalNextInstTenantIdNull() ) {
			setOptionalNextInstTenantIdNull();
		}
		else {
			setOptionalNextInstTenantIdValue( src.getOptionalNextInstTenantIdValue() );
		}
		if( src.isOptionalNextInstGelCacheIdNull() ) {
			setOptionalNextInstGelCacheIdNull();
		}
		else {
			setOptionalNextInstGelCacheIdValue( src.getOptionalNextInstGelCacheIdValue() );
		}
		if( src.isOptionalNextInstGelInstIdNull() ) {
			setOptionalNextInstGelInstIdNull();
		}
		else {
			setOptionalNextInstGelInstIdValue( src.getOptionalNextInstGelInstIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				if( lhs.getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				if( lhs.getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				if( lhs.getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				if( lhs.getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				if( lhs.getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				if( lhs.getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCallByNextInstIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

