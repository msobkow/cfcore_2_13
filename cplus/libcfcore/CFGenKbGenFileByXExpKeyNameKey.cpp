// Description: C++18 implementation for a GenFile by XExpKeyName index key object.

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

#include <cfgenkb/CFGenKbGenFileByXExpKeyNameKey.hpp>
#include <cfgenkb/CFGenKbGenFileBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenFileByXExpKeyNameKey::CLASS_NAME( "CFGenKbGenFileByXExpKeyNameKey" );
	const std::string CFGenKbGenFileByXExpKeyNameKey::S_VALUE( "value" );
	const std::string CFGenKbGenFileByXExpKeyNameKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenFileByXExpKeyNameKey::CFGenKbGenFileByXExpKeyNameKey() {
		optionalExpansionKeyNameTenantId.setNull();
		optionalExpansionKeyNameGelCacheId.setNull();
		optionalExpansionKeyNameGelId.setNull();
	}

	CFGenKbGenFileByXExpKeyNameKey::CFGenKbGenFileByXExpKeyNameKey( const CFGenKbGenFileByXExpKeyNameKey& src ) {
		optionalExpansionKeyNameTenantId.setNull();
		optionalExpansionKeyNameGelCacheId.setNull();
		optionalExpansionKeyNameGelId.setNull();
		if( src.isOptionalExpansionKeyNameTenantIdNull() ) {
			setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			setOptionalExpansionKeyNameTenantIdValue( src.getOptionalExpansionKeyNameTenantIdValue() );
		}
		if( src.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionKeyNameGelCacheIdValue( src.getOptionalExpansionKeyNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionKeyNameGelIdNull() ) {
			setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			setOptionalExpansionKeyNameGelIdValue( src.getOptionalExpansionKeyNameGelIdValue() );
		}
	}

	CFGenKbGenFileByXExpKeyNameKey::~CFGenKbGenFileByXExpKeyNameKey() {
	}

	const int64_t CFGenKbGenFileByXExpKeyNameKey::getOptionalExpansionKeyNameTenantIdValue() const {
		return( optionalExpansionKeyNameTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXExpKeyNameKey::getOptionalExpansionKeyNameTenantIdReference() const {
		return( optionalExpansionKeyNameTenantId.getReference() );
	}

	const bool CFGenKbGenFileByXExpKeyNameKey::isOptionalExpansionKeyNameTenantIdNull() const {
		return( optionalExpansionKeyNameTenantId.isNull() );
	}

	void CFGenKbGenFileByXExpKeyNameKey::setOptionalExpansionKeyNameTenantIdNull() {
		optionalExpansionKeyNameTenantId.setNull();
	}

	void CFGenKbGenFileByXExpKeyNameKey::setOptionalExpansionKeyNameTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionKeyNameTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMETENANTID_MIN_VALUE );
		}
		optionalExpansionKeyNameTenantId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXExpKeyNameKey::getOptionalExpansionKeyNameGelCacheIdValue() const {
		return( optionalExpansionKeyNameGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXExpKeyNameKey::getOptionalExpansionKeyNameGelCacheIdReference() const {
		return( optionalExpansionKeyNameGelCacheId.getReference() );
	}

	const bool CFGenKbGenFileByXExpKeyNameKey::isOptionalExpansionKeyNameGelCacheIdNull() const {
		return( optionalExpansionKeyNameGelCacheId.isNull() );
	}

	void CFGenKbGenFileByXExpKeyNameKey::setOptionalExpansionKeyNameGelCacheIdNull() {
		optionalExpansionKeyNameGelCacheId.setNull();
	}

	void CFGenKbGenFileByXExpKeyNameKey::setOptionalExpansionKeyNameGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionKeyNameGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELCACHEID_MIN_VALUE );
		}
		optionalExpansionKeyNameGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXExpKeyNameKey::getOptionalExpansionKeyNameGelIdValue() const {
		return( optionalExpansionKeyNameGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXExpKeyNameKey::getOptionalExpansionKeyNameGelIdReference() const {
		return( optionalExpansionKeyNameGelId.getReference() );
	}

	const bool CFGenKbGenFileByXExpKeyNameKey::isOptionalExpansionKeyNameGelIdNull() const {
		return( optionalExpansionKeyNameGelId.isNull() );
	}

	void CFGenKbGenFileByXExpKeyNameKey::setOptionalExpansionKeyNameGelIdNull() {
		optionalExpansionKeyNameGelId.setNull();
	}

	void CFGenKbGenFileByXExpKeyNameKey::setOptionalExpansionKeyNameGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionKeyNameGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELID_MIN_VALUE );
		}
		optionalExpansionKeyNameGelId.setValue( value );
	}

	size_t CFGenKbGenFileByXExpKeyNameKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionKeyNameTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionKeyNameGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionKeyNameGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGenFileByXExpKeyNameKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenFileByXExpKeyNameKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpansionKeyNameTenantId( "ExpansionKeyNameTenantId" );
		static const std::string S_ExpansionKeyNameGelCacheId( "ExpansionKeyNameGelCacheId" );
		static const std::string S_ExpansionKeyNameGelId( "ExpansionKeyNameGelId" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameTenantId, getOptionalExpansionKeyNameTenantIdValue() ) );
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameGelCacheId, getOptionalExpansionKeyNameGelCacheIdValue() ) );
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameGelId, getOptionalExpansionKeyNameGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator <( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator <( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator <=( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator <=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator ==( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				if( getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				if( getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				if( getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator ==( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				if( getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				if( getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				if( getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator !=( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator !=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator >=( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator >=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator >( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpKeyNameKey::operator >( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGenFileByXExpKeyNameKey CFGenKbGenFileByXExpKeyNameKey::operator =( cfcore::CFGenKbGenFileByXExpKeyNameKey& src ) {
		if( src.isOptionalExpansionKeyNameTenantIdNull() ) {
			setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			setOptionalExpansionKeyNameTenantIdValue( src.getOptionalExpansionKeyNameTenantIdValue() );
		}
		if( src.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionKeyNameGelCacheIdValue( src.getOptionalExpansionKeyNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionKeyNameGelIdNull() ) {
			setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			setOptionalExpansionKeyNameGelIdValue( src.getOptionalExpansionKeyNameGelIdValue() );
		}
		return( *this );
	}

	CFGenKbGenFileByXExpKeyNameKey CFGenKbGenFileByXExpKeyNameKey::operator =( cfcore::CFGenKbGenFileBuff& src ) {
		if( src.isOptionalExpansionKeyNameTenantIdNull() ) {
			setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			setOptionalExpansionKeyNameTenantIdValue( src.getOptionalExpansionKeyNameTenantIdValue() );
		}
		if( src.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionKeyNameGelCacheIdValue( src.getOptionalExpansionKeyNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionKeyNameGelIdNull() ) {
			setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			setOptionalExpansionKeyNameGelIdValue( src.getOptionalExpansionKeyNameGelIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

