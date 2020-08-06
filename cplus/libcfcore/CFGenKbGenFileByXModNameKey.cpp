// Description: C++18 implementation for a GenFile by XModName index key object.

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

#include <cfgenkb/CFGenKbGenFileByXModNameKey.hpp>
#include <cfgenkb/CFGenKbGenFileBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenFileByXModNameKey::CLASS_NAME( "CFGenKbGenFileByXModNameKey" );
	const std::string CFGenKbGenFileByXModNameKey::S_VALUE( "value" );
	const std::string CFGenKbGenFileByXModNameKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenFileByXModNameKey::CFGenKbGenFileByXModNameKey() {
		optionalModuleNameTenantId.setNull();
		optionalModuleNameGelCacheId.setNull();
		optionalModuleNameGelId.setNull();
	}

	CFGenKbGenFileByXModNameKey::CFGenKbGenFileByXModNameKey( const CFGenKbGenFileByXModNameKey& src ) {
		optionalModuleNameTenantId.setNull();
		optionalModuleNameGelCacheId.setNull();
		optionalModuleNameGelId.setNull();
		if( src.isOptionalModuleNameTenantIdNull() ) {
			setOptionalModuleNameTenantIdNull();
		}
		else {
			setOptionalModuleNameTenantIdValue( src.getOptionalModuleNameTenantIdValue() );
		}
		if( src.isOptionalModuleNameGelCacheIdNull() ) {
			setOptionalModuleNameGelCacheIdNull();
		}
		else {
			setOptionalModuleNameGelCacheIdValue( src.getOptionalModuleNameGelCacheIdValue() );
		}
		if( src.isOptionalModuleNameGelIdNull() ) {
			setOptionalModuleNameGelIdNull();
		}
		else {
			setOptionalModuleNameGelIdValue( src.getOptionalModuleNameGelIdValue() );
		}
	}

	CFGenKbGenFileByXModNameKey::~CFGenKbGenFileByXModNameKey() {
	}

	const int64_t CFGenKbGenFileByXModNameKey::getOptionalModuleNameTenantIdValue() const {
		return( optionalModuleNameTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXModNameKey::getOptionalModuleNameTenantIdReference() const {
		return( optionalModuleNameTenantId.getReference() );
	}

	const bool CFGenKbGenFileByXModNameKey::isOptionalModuleNameTenantIdNull() const {
		return( optionalModuleNameTenantId.isNull() );
	}

	void CFGenKbGenFileByXModNameKey::setOptionalModuleNameTenantIdNull() {
		optionalModuleNameTenantId.setNull();
	}

	void CFGenKbGenFileByXModNameKey::setOptionalModuleNameTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalModuleNameTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::MODULENAMETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::MODULENAMETENANTID_MIN_VALUE );
		}
		optionalModuleNameTenantId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXModNameKey::getOptionalModuleNameGelCacheIdValue() const {
		return( optionalModuleNameGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXModNameKey::getOptionalModuleNameGelCacheIdReference() const {
		return( optionalModuleNameGelCacheId.getReference() );
	}

	const bool CFGenKbGenFileByXModNameKey::isOptionalModuleNameGelCacheIdNull() const {
		return( optionalModuleNameGelCacheId.isNull() );
	}

	void CFGenKbGenFileByXModNameKey::setOptionalModuleNameGelCacheIdNull() {
		optionalModuleNameGelCacheId.setNull();
	}

	void CFGenKbGenFileByXModNameKey::setOptionalModuleNameGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalModuleNameGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::MODULENAMEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::MODULENAMEGELCACHEID_MIN_VALUE );
		}
		optionalModuleNameGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXModNameKey::getOptionalModuleNameGelIdValue() const {
		return( optionalModuleNameGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXModNameKey::getOptionalModuleNameGelIdReference() const {
		return( optionalModuleNameGelId.getReference() );
	}

	const bool CFGenKbGenFileByXModNameKey::isOptionalModuleNameGelIdNull() const {
		return( optionalModuleNameGelId.isNull() );
	}

	void CFGenKbGenFileByXModNameKey::setOptionalModuleNameGelIdNull() {
		optionalModuleNameGelId.setNull();
	}

	void CFGenKbGenFileByXModNameKey::setOptionalModuleNameGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalModuleNameGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::MODULENAMEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::MODULENAMEGELID_MIN_VALUE );
		}
		optionalModuleNameGelId.setValue( value );
	}

	size_t CFGenKbGenFileByXModNameKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalModuleNameTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalModuleNameTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalModuleNameGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalModuleNameGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGenFileByXModNameKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenFileByXModNameKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ModuleNameTenantId( "ModuleNameTenantId" );
		static const std::string S_ModuleNameGelCacheId( "ModuleNameGelCacheId" );
		static const std::string S_ModuleNameGelId( "ModuleNameGelId" );
		std::string ret( S_Preamble );
		if( ! isOptionalModuleNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameTenantId, getOptionalModuleNameTenantIdValue() ) );
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameGelCacheId, getOptionalModuleNameGelCacheIdValue() ) );
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameGelId, getOptionalModuleNameGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenFileByXModNameKey::operator <( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXModNameKey::operator <( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXModNameKey::operator <=( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXModNameKey::operator <=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXModNameKey::operator ==( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				if( getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				if( getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				if( getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXModNameKey::operator ==( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				if( getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				if( getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				if( getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXModNameKey::operator !=( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXModNameKey::operator !=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXModNameKey::operator >=( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXModNameKey::operator >=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXModNameKey::operator >( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileByXModNameKey::operator >( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGenFileByXModNameKey CFGenKbGenFileByXModNameKey::operator =( cfcore::CFGenKbGenFileByXModNameKey& src ) {
		if( src.isOptionalModuleNameTenantIdNull() ) {
			setOptionalModuleNameTenantIdNull();
		}
		else {
			setOptionalModuleNameTenantIdValue( src.getOptionalModuleNameTenantIdValue() );
		}
		if( src.isOptionalModuleNameGelCacheIdNull() ) {
			setOptionalModuleNameGelCacheIdNull();
		}
		else {
			setOptionalModuleNameGelCacheIdValue( src.getOptionalModuleNameGelCacheIdValue() );
		}
		if( src.isOptionalModuleNameGelIdNull() ) {
			setOptionalModuleNameGelIdNull();
		}
		else {
			setOptionalModuleNameGelIdValue( src.getOptionalModuleNameGelIdValue() );
		}
		return( *this );
	}

	CFGenKbGenFileByXModNameKey CFGenKbGenFileByXModNameKey::operator =( cfcore::CFGenKbGenFileBuff& src ) {
		if( src.isOptionalModuleNameTenantIdNull() ) {
			setOptionalModuleNameTenantIdNull();
		}
		else {
			setOptionalModuleNameTenantIdValue( src.getOptionalModuleNameTenantIdValue() );
		}
		if( src.isOptionalModuleNameGelCacheIdNull() ) {
			setOptionalModuleNameGelCacheIdNull();
		}
		else {
			setOptionalModuleNameGelCacheIdValue( src.getOptionalModuleNameGelCacheIdValue() );
		}
		if( src.isOptionalModuleNameGelIdNull() ) {
			setOptionalModuleNameGelIdNull();
		}
		else {
			setOptionalModuleNameGelIdValue( src.getOptionalModuleNameGelIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				if( lhs.getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				if( lhs.getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				if( lhs.getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				if( lhs.getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				if( lhs.getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				if( lhs.getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

