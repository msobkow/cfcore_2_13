// Description: C++18 implementation for a GenItem by GelExecIdx index key object.

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

#include <cfgenkb/CFGenKbGenItemByGelExecIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenItemByGelExecIdxKey::CLASS_NAME( "CFGenKbGenItemByGelExecIdxKey" );
	const std::string CFGenKbGenItemByGelExecIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGenItemByGelExecIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenItemByGelExecIdxKey::CFGenKbGenItemByGelExecIdxKey() {
		optionalGelExecutableTenantId.setNull();
		optionalGelExecutableGelCacheId.setNull();
		optionalGelExecutableId.setNull();
	}

	CFGenKbGenItemByGelExecIdxKey::CFGenKbGenItemByGelExecIdxKey( const CFGenKbGenItemByGelExecIdxKey& src ) {
		optionalGelExecutableTenantId.setNull();
		optionalGelExecutableGelCacheId.setNull();
		optionalGelExecutableId.setNull();
		if( src.isOptionalGelExecutableTenantIdNull() ) {
			setOptionalGelExecutableTenantIdNull();
		}
		else {
			setOptionalGelExecutableTenantIdValue( src.getOptionalGelExecutableTenantIdValue() );
		}
		if( src.isOptionalGelExecutableGelCacheIdNull() ) {
			setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			setOptionalGelExecutableGelCacheIdValue( src.getOptionalGelExecutableGelCacheIdValue() );
		}
		if( src.isOptionalGelExecutableIdNull() ) {
			setOptionalGelExecutableIdNull();
		}
		else {
			setOptionalGelExecutableIdValue( src.getOptionalGelExecutableIdValue() );
		}
	}

	CFGenKbGenItemByGelExecIdxKey::~CFGenKbGenItemByGelExecIdxKey() {
	}

	const int64_t CFGenKbGenItemByGelExecIdxKey::getOptionalGelExecutableTenantIdValue() const {
		return( optionalGelExecutableTenantId.getValue() );
	}

	const int64_t* CFGenKbGenItemByGelExecIdxKey::getOptionalGelExecutableTenantIdReference() const {
		return( optionalGelExecutableTenantId.getReference() );
	}

	const bool CFGenKbGenItemByGelExecIdxKey::isOptionalGelExecutableTenantIdNull() const {
		return( optionalGelExecutableTenantId.isNull() );
	}

	void CFGenKbGenItemByGelExecIdxKey::setOptionalGelExecutableTenantIdNull() {
		optionalGelExecutableTenantId.setNull();
	}

	void CFGenKbGenItemByGelExecIdxKey::setOptionalGelExecutableTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalGelExecutableTenantIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::GELEXECUTABLETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::GELEXECUTABLETENANTID_MIN_VALUE );
		}
		optionalGelExecutableTenantId.setValue( value );
	}

	const int64_t CFGenKbGenItemByGelExecIdxKey::getOptionalGelExecutableGelCacheIdValue() const {
		return( optionalGelExecutableGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenItemByGelExecIdxKey::getOptionalGelExecutableGelCacheIdReference() const {
		return( optionalGelExecutableGelCacheId.getReference() );
	}

	const bool CFGenKbGenItemByGelExecIdxKey::isOptionalGelExecutableGelCacheIdNull() const {
		return( optionalGelExecutableGelCacheId.isNull() );
	}

	void CFGenKbGenItemByGelExecIdxKey::setOptionalGelExecutableGelCacheIdNull() {
		optionalGelExecutableGelCacheId.setNull();
	}

	void CFGenKbGenItemByGelExecIdxKey::setOptionalGelExecutableGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalGelExecutableGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::GELEXECUTABLEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::GELEXECUTABLEGELCACHEID_MIN_VALUE );
		}
		optionalGelExecutableGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGenItemByGelExecIdxKey::getOptionalGelExecutableIdValue() const {
		return( optionalGelExecutableId.getValue() );
	}

	const int64_t* CFGenKbGenItemByGelExecIdxKey::getOptionalGelExecutableIdReference() const {
		return( optionalGelExecutableId.getReference() );
	}

	const bool CFGenKbGenItemByGelExecIdxKey::isOptionalGelExecutableIdNull() const {
		return( optionalGelExecutableId.isNull() );
	}

	void CFGenKbGenItemByGelExecIdxKey::setOptionalGelExecutableIdNull() {
		optionalGelExecutableId.setNull();
	}

	void CFGenKbGenItemByGelExecIdxKey::setOptionalGelExecutableIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalGelExecutableIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::GELEXECUTABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::GELEXECUTABLEID_MIN_VALUE );
		}
		optionalGelExecutableId.setValue( value );
	}

	size_t CFGenKbGenItemByGelExecIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalGelExecutableTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalGelExecutableGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalGelExecutableIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGenItemByGelExecIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenItemByGelExecIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_GelExecutableTenantId( "GelExecutableTenantId" );
		static const std::string S_GelExecutableGelCacheId( "GelExecutableGelCacheId" );
		static const std::string S_GelExecutableId( "GelExecutableId" );
		std::string ret( S_Preamble );
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableTenantId, getOptionalGelExecutableTenantIdValue() ) );
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableGelCacheId, getOptionalGelExecutableGelCacheIdValue() ) );
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableId, getOptionalGelExecutableIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator <( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator <( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator <=( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator <=( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator ==( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				if( getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				if( getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				if( getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator ==( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				if( getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				if( getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				if( getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator !=( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator !=( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator >=( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator >=( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator >( const CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenItemByGelExecIdxKey::operator >( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGenItemByGelExecIdxKey CFGenKbGenItemByGelExecIdxKey::operator =( cfcore::CFGenKbGenItemByGelExecIdxKey& src ) {
		if( src.isOptionalGelExecutableTenantIdNull() ) {
			setOptionalGelExecutableTenantIdNull();
		}
		else {
			setOptionalGelExecutableTenantIdValue( src.getOptionalGelExecutableTenantIdValue() );
		}
		if( src.isOptionalGelExecutableGelCacheIdNull() ) {
			setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			setOptionalGelExecutableGelCacheIdValue( src.getOptionalGelExecutableGelCacheIdValue() );
		}
		if( src.isOptionalGelExecutableIdNull() ) {
			setOptionalGelExecutableIdNull();
		}
		else {
			setOptionalGelExecutableIdValue( src.getOptionalGelExecutableIdValue() );
		}
		return( *this );
	}

	CFGenKbGenItemByGelExecIdxKey CFGenKbGenItemByGelExecIdxKey::operator =( cfcore::CFGenKbGenItemBuff& src ) {
		if( src.isOptionalGelExecutableTenantIdNull() ) {
			setOptionalGelExecutableTenantIdNull();
		}
		else {
			setOptionalGelExecutableTenantIdValue( src.getOptionalGelExecutableTenantIdValue() );
		}
		if( src.isOptionalGelExecutableGelCacheIdNull() ) {
			setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			setOptionalGelExecutableGelCacheIdValue( src.getOptionalGelExecutableGelCacheIdValue() );
		}
		if( src.isOptionalGelExecutableIdNull() ) {
			setOptionalGelExecutableIdNull();
		}
		else {
			setOptionalGelExecutableIdValue( src.getOptionalGelExecutableIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				if( lhs.getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				if( lhs.getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				if( lhs.getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				if( lhs.getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				if( lhs.getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				if( lhs.getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemByGelExecIdxKey& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByGelExecIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

