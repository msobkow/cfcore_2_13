// Description: C++18 implementation for a GenFile by XExpFileName index key object.

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

#include <cfgenkb/CFGenKbGenFileByXExpFileNameKey.hpp>
#include <cfgenkb/CFGenKbGenFileBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenFileByXExpFileNameKey::CLASS_NAME( "CFGenKbGenFileByXExpFileNameKey" );
	const std::string CFGenKbGenFileByXExpFileNameKey::S_VALUE( "value" );
	const std::string CFGenKbGenFileByXExpFileNameKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenFileByXExpFileNameKey::CFGenKbGenFileByXExpFileNameKey() {
		optionalExpansionFileNameTenantId.setNull();
		optionalExpansionFileNameGelCacheId.setNull();
		optionalExpansionFileNameGelId.setNull();
	}

	CFGenKbGenFileByXExpFileNameKey::CFGenKbGenFileByXExpFileNameKey( const CFGenKbGenFileByXExpFileNameKey& src ) {
		optionalExpansionFileNameTenantId.setNull();
		optionalExpansionFileNameGelCacheId.setNull();
		optionalExpansionFileNameGelId.setNull();
		if( src.isOptionalExpansionFileNameTenantIdNull() ) {
			setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			setOptionalExpansionFileNameTenantIdValue( src.getOptionalExpansionFileNameTenantIdValue() );
		}
		if( src.isOptionalExpansionFileNameGelCacheIdNull() ) {
			setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionFileNameGelCacheIdValue( src.getOptionalExpansionFileNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionFileNameGelIdNull() ) {
			setOptionalExpansionFileNameGelIdNull();
		}
		else {
			setOptionalExpansionFileNameGelIdValue( src.getOptionalExpansionFileNameGelIdValue() );
		}
	}

	CFGenKbGenFileByXExpFileNameKey::~CFGenKbGenFileByXExpFileNameKey() {
	}

	const int64_t CFGenKbGenFileByXExpFileNameKey::getOptionalExpansionFileNameTenantIdValue() const {
		return( optionalExpansionFileNameTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXExpFileNameKey::getOptionalExpansionFileNameTenantIdReference() const {
		return( optionalExpansionFileNameTenantId.getReference() );
	}

	const bool CFGenKbGenFileByXExpFileNameKey::isOptionalExpansionFileNameTenantIdNull() const {
		return( optionalExpansionFileNameTenantId.isNull() );
	}

	void CFGenKbGenFileByXExpFileNameKey::setOptionalExpansionFileNameTenantIdNull() {
		optionalExpansionFileNameTenantId.setNull();
	}

	void CFGenKbGenFileByXExpFileNameKey::setOptionalExpansionFileNameTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionFileNameTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMETENANTID_MIN_VALUE );
		}
		optionalExpansionFileNameTenantId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXExpFileNameKey::getOptionalExpansionFileNameGelCacheIdValue() const {
		return( optionalExpansionFileNameGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXExpFileNameKey::getOptionalExpansionFileNameGelCacheIdReference() const {
		return( optionalExpansionFileNameGelCacheId.getReference() );
	}

	const bool CFGenKbGenFileByXExpFileNameKey::isOptionalExpansionFileNameGelCacheIdNull() const {
		return( optionalExpansionFileNameGelCacheId.isNull() );
	}

	void CFGenKbGenFileByXExpFileNameKey::setOptionalExpansionFileNameGelCacheIdNull() {
		optionalExpansionFileNameGelCacheId.setNull();
	}

	void CFGenKbGenFileByXExpFileNameKey::setOptionalExpansionFileNameGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionFileNameGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMEGELCACHEID_MIN_VALUE );
		}
		optionalExpansionFileNameGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXExpFileNameKey::getOptionalExpansionFileNameGelIdValue() const {
		return( optionalExpansionFileNameGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXExpFileNameKey::getOptionalExpansionFileNameGelIdReference() const {
		return( optionalExpansionFileNameGelId.getReference() );
	}

	const bool CFGenKbGenFileByXExpFileNameKey::isOptionalExpansionFileNameGelIdNull() const {
		return( optionalExpansionFileNameGelId.isNull() );
	}

	void CFGenKbGenFileByXExpFileNameKey::setOptionalExpansionFileNameGelIdNull() {
		optionalExpansionFileNameGelId.setNull();
	}

	void CFGenKbGenFileByXExpFileNameKey::setOptionalExpansionFileNameGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionFileNameGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMEGELID_MIN_VALUE );
		}
		optionalExpansionFileNameGelId.setValue( value );
	}

	size_t CFGenKbGenFileByXExpFileNameKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionFileNameTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionFileNameGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionFileNameGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGenFileByXExpFileNameKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenFileByXExpFileNameKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpansionFileNameTenantId( "ExpansionFileNameTenantId" );
		static const std::string S_ExpansionFileNameGelCacheId( "ExpansionFileNameGelCacheId" );
		static const std::string S_ExpansionFileNameGelId( "ExpansionFileNameGelId" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameTenantId, getOptionalExpansionFileNameTenantIdValue() ) );
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameGelCacheId, getOptionalExpansionFileNameGelCacheIdValue() ) );
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameGelId, getOptionalExpansionFileNameGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator <( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator <( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator <=( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator <=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator ==( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				if( getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				if( getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				if( getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator ==( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				if( getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				if( getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				if( getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator !=( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator !=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator >=( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator >=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator >( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpFileNameKey::operator >( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGenFileByXExpFileNameKey CFGenKbGenFileByXExpFileNameKey::operator =( cfcore::CFGenKbGenFileByXExpFileNameKey& src ) {
		if( src.isOptionalExpansionFileNameTenantIdNull() ) {
			setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			setOptionalExpansionFileNameTenantIdValue( src.getOptionalExpansionFileNameTenantIdValue() );
		}
		if( src.isOptionalExpansionFileNameGelCacheIdNull() ) {
			setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionFileNameGelCacheIdValue( src.getOptionalExpansionFileNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionFileNameGelIdNull() ) {
			setOptionalExpansionFileNameGelIdNull();
		}
		else {
			setOptionalExpansionFileNameGelIdValue( src.getOptionalExpansionFileNameGelIdValue() );
		}
		return( *this );
	}

	CFGenKbGenFileByXExpFileNameKey CFGenKbGenFileByXExpFileNameKey::operator =( cfcore::CFGenKbGenFileBuff& src ) {
		if( src.isOptionalExpansionFileNameTenantIdNull() ) {
			setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			setOptionalExpansionFileNameTenantIdValue( src.getOptionalExpansionFileNameTenantIdValue() );
		}
		if( src.isOptionalExpansionFileNameGelCacheIdNull() ) {
			setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionFileNameGelCacheIdValue( src.getOptionalExpansionFileNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionFileNameGelIdNull() ) {
			setOptionalExpansionFileNameGelIdNull();
		}
		else {
			setOptionalExpansionFileNameGelIdValue( src.getOptionalExpansionFileNameGelIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				if( lhs.getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				if( lhs.getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

