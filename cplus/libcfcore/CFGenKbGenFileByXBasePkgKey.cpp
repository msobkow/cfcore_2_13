// Description: C++18 implementation for a GenFile by XBasePkg index key object.

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

#include <cfgenkb/CFGenKbGenFileByXBasePkgKey.hpp>
#include <cfgenkb/CFGenKbGenFileBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenFileByXBasePkgKey::CLASS_NAME( "CFGenKbGenFileByXBasePkgKey" );
	const std::string CFGenKbGenFileByXBasePkgKey::S_VALUE( "value" );
	const std::string CFGenKbGenFileByXBasePkgKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenFileByXBasePkgKey::CFGenKbGenFileByXBasePkgKey() {
		optionalBasePackageTenantId.setNull();
		optionalBasePackageGelCacheId.setNull();
		optionalBasePackageGelId.setNull();
	}

	CFGenKbGenFileByXBasePkgKey::CFGenKbGenFileByXBasePkgKey( const CFGenKbGenFileByXBasePkgKey& src ) {
		optionalBasePackageTenantId.setNull();
		optionalBasePackageGelCacheId.setNull();
		optionalBasePackageGelId.setNull();
		if( src.isOptionalBasePackageTenantIdNull() ) {
			setOptionalBasePackageTenantIdNull();
		}
		else {
			setOptionalBasePackageTenantIdValue( src.getOptionalBasePackageTenantIdValue() );
		}
		if( src.isOptionalBasePackageGelCacheIdNull() ) {
			setOptionalBasePackageGelCacheIdNull();
		}
		else {
			setOptionalBasePackageGelCacheIdValue( src.getOptionalBasePackageGelCacheIdValue() );
		}
		if( src.isOptionalBasePackageGelIdNull() ) {
			setOptionalBasePackageGelIdNull();
		}
		else {
			setOptionalBasePackageGelIdValue( src.getOptionalBasePackageGelIdValue() );
		}
	}

	CFGenKbGenFileByXBasePkgKey::~CFGenKbGenFileByXBasePkgKey() {
	}

	const int64_t CFGenKbGenFileByXBasePkgKey::getOptionalBasePackageTenantIdValue() const {
		return( optionalBasePackageTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXBasePkgKey::getOptionalBasePackageTenantIdReference() const {
		return( optionalBasePackageTenantId.getReference() );
	}

	const bool CFGenKbGenFileByXBasePkgKey::isOptionalBasePackageTenantIdNull() const {
		return( optionalBasePackageTenantId.isNull() );
	}

	void CFGenKbGenFileByXBasePkgKey::setOptionalBasePackageTenantIdNull() {
		optionalBasePackageTenantId.setNull();
	}

	void CFGenKbGenFileByXBasePkgKey::setOptionalBasePackageTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBasePackageTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::BASEPACKAGETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::BASEPACKAGETENANTID_MIN_VALUE );
		}
		optionalBasePackageTenantId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXBasePkgKey::getOptionalBasePackageGelCacheIdValue() const {
		return( optionalBasePackageGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXBasePkgKey::getOptionalBasePackageGelCacheIdReference() const {
		return( optionalBasePackageGelCacheId.getReference() );
	}

	const bool CFGenKbGenFileByXBasePkgKey::isOptionalBasePackageGelCacheIdNull() const {
		return( optionalBasePackageGelCacheId.isNull() );
	}

	void CFGenKbGenFileByXBasePkgKey::setOptionalBasePackageGelCacheIdNull() {
		optionalBasePackageGelCacheId.setNull();
	}

	void CFGenKbGenFileByXBasePkgKey::setOptionalBasePackageGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBasePackageGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::BASEPACKAGEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::BASEPACKAGEGELCACHEID_MIN_VALUE );
		}
		optionalBasePackageGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXBasePkgKey::getOptionalBasePackageGelIdValue() const {
		return( optionalBasePackageGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXBasePkgKey::getOptionalBasePackageGelIdReference() const {
		return( optionalBasePackageGelId.getReference() );
	}

	const bool CFGenKbGenFileByXBasePkgKey::isOptionalBasePackageGelIdNull() const {
		return( optionalBasePackageGelId.isNull() );
	}

	void CFGenKbGenFileByXBasePkgKey::setOptionalBasePackageGelIdNull() {
		optionalBasePackageGelId.setNull();
	}

	void CFGenKbGenFileByXBasePkgKey::setOptionalBasePackageGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBasePackageGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::BASEPACKAGEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::BASEPACKAGEGELID_MIN_VALUE );
		}
		optionalBasePackageGelId.setValue( value );
	}

	size_t CFGenKbGenFileByXBasePkgKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalBasePackageTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBasePackageTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBasePackageGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBasePackageGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGenFileByXBasePkgKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenFileByXBasePkgKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_BasePackageTenantId( "BasePackageTenantId" );
		static const std::string S_BasePackageGelCacheId( "BasePackageGelCacheId" );
		static const std::string S_BasePackageGelId( "BasePackageGelId" );
		std::string ret( S_Preamble );
		if( ! isOptionalBasePackageTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageTenantId, getOptionalBasePackageTenantIdValue() ) );
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageGelCacheId, getOptionalBasePackageGelCacheIdValue() ) );
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageGelId, getOptionalBasePackageGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator <( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator <( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator <=( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator <=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator ==( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				if( getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				if( getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				if( getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator ==( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				if( getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				if( getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				if( getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator !=( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator !=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator >=( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator >=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator >( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileByXBasePkgKey::operator >( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGenFileByXBasePkgKey CFGenKbGenFileByXBasePkgKey::operator =( cfcore::CFGenKbGenFileByXBasePkgKey& src ) {
		if( src.isOptionalBasePackageTenantIdNull() ) {
			setOptionalBasePackageTenantIdNull();
		}
		else {
			setOptionalBasePackageTenantIdValue( src.getOptionalBasePackageTenantIdValue() );
		}
		if( src.isOptionalBasePackageGelCacheIdNull() ) {
			setOptionalBasePackageGelCacheIdNull();
		}
		else {
			setOptionalBasePackageGelCacheIdValue( src.getOptionalBasePackageGelCacheIdValue() );
		}
		if( src.isOptionalBasePackageGelIdNull() ) {
			setOptionalBasePackageGelIdNull();
		}
		else {
			setOptionalBasePackageGelIdValue( src.getOptionalBasePackageGelIdValue() );
		}
		return( *this );
	}

	CFGenKbGenFileByXBasePkgKey CFGenKbGenFileByXBasePkgKey::operator =( cfcore::CFGenKbGenFileBuff& src ) {
		if( src.isOptionalBasePackageTenantIdNull() ) {
			setOptionalBasePackageTenantIdNull();
		}
		else {
			setOptionalBasePackageTenantIdValue( src.getOptionalBasePackageTenantIdValue() );
		}
		if( src.isOptionalBasePackageGelCacheIdNull() ) {
			setOptionalBasePackageGelCacheIdNull();
		}
		else {
			setOptionalBasePackageGelCacheIdValue( src.getOptionalBasePackageGelCacheIdValue() );
		}
		if( src.isOptionalBasePackageGelIdNull() ) {
			setOptionalBasePackageGelIdNull();
		}
		else {
			setOptionalBasePackageGelIdValue( src.getOptionalBasePackageGelIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				if( lhs.getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				if( lhs.getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				if( lhs.getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				if( lhs.getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				if( lhs.getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				if( lhs.getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

