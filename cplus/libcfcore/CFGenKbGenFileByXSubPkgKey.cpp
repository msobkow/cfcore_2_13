// Description: C++18 implementation for a GenFile by XSubPkg index key object.

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

#include <cfgenkb/CFGenKbGenFileByXSubPkgKey.hpp>
#include <cfgenkb/CFGenKbGenFileBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenFileByXSubPkgKey::CLASS_NAME( "CFGenKbGenFileByXSubPkgKey" );
	const std::string CFGenKbGenFileByXSubPkgKey::S_VALUE( "value" );
	const std::string CFGenKbGenFileByXSubPkgKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenFileByXSubPkgKey::CFGenKbGenFileByXSubPkgKey() {
		optionalSubPackageTenantId.setNull();
		optionalSubPackageGelCacheId.setNull();
		optionalSubPackageGelId.setNull();
	}

	CFGenKbGenFileByXSubPkgKey::CFGenKbGenFileByXSubPkgKey( const CFGenKbGenFileByXSubPkgKey& src ) {
		optionalSubPackageTenantId.setNull();
		optionalSubPackageGelCacheId.setNull();
		optionalSubPackageGelId.setNull();
		if( src.isOptionalSubPackageTenantIdNull() ) {
			setOptionalSubPackageTenantIdNull();
		}
		else {
			setOptionalSubPackageTenantIdValue( src.getOptionalSubPackageTenantIdValue() );
		}
		if( src.isOptionalSubPackageGelCacheIdNull() ) {
			setOptionalSubPackageGelCacheIdNull();
		}
		else {
			setOptionalSubPackageGelCacheIdValue( src.getOptionalSubPackageGelCacheIdValue() );
		}
		if( src.isOptionalSubPackageGelIdNull() ) {
			setOptionalSubPackageGelIdNull();
		}
		else {
			setOptionalSubPackageGelIdValue( src.getOptionalSubPackageGelIdValue() );
		}
	}

	CFGenKbGenFileByXSubPkgKey::~CFGenKbGenFileByXSubPkgKey() {
	}

	const int64_t CFGenKbGenFileByXSubPkgKey::getOptionalSubPackageTenantIdValue() const {
		return( optionalSubPackageTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXSubPkgKey::getOptionalSubPackageTenantIdReference() const {
		return( optionalSubPackageTenantId.getReference() );
	}

	const bool CFGenKbGenFileByXSubPkgKey::isOptionalSubPackageTenantIdNull() const {
		return( optionalSubPackageTenantId.isNull() );
	}

	void CFGenKbGenFileByXSubPkgKey::setOptionalSubPackageTenantIdNull() {
		optionalSubPackageTenantId.setNull();
	}

	void CFGenKbGenFileByXSubPkgKey::setOptionalSubPackageTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSubPackageTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SUBPACKAGETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SUBPACKAGETENANTID_MIN_VALUE );
		}
		optionalSubPackageTenantId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXSubPkgKey::getOptionalSubPackageGelCacheIdValue() const {
		return( optionalSubPackageGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXSubPkgKey::getOptionalSubPackageGelCacheIdReference() const {
		return( optionalSubPackageGelCacheId.getReference() );
	}

	const bool CFGenKbGenFileByXSubPkgKey::isOptionalSubPackageGelCacheIdNull() const {
		return( optionalSubPackageGelCacheId.isNull() );
	}

	void CFGenKbGenFileByXSubPkgKey::setOptionalSubPackageGelCacheIdNull() {
		optionalSubPackageGelCacheId.setNull();
	}

	void CFGenKbGenFileByXSubPkgKey::setOptionalSubPackageGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSubPackageGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SUBPACKAGEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SUBPACKAGEGELCACHEID_MIN_VALUE );
		}
		optionalSubPackageGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXSubPkgKey::getOptionalSubPackageGelIdValue() const {
		return( optionalSubPackageGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXSubPkgKey::getOptionalSubPackageGelIdReference() const {
		return( optionalSubPackageGelId.getReference() );
	}

	const bool CFGenKbGenFileByXSubPkgKey::isOptionalSubPackageGelIdNull() const {
		return( optionalSubPackageGelId.isNull() );
	}

	void CFGenKbGenFileByXSubPkgKey::setOptionalSubPackageGelIdNull() {
		optionalSubPackageGelId.setNull();
	}

	void CFGenKbGenFileByXSubPkgKey::setOptionalSubPackageGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSubPackageGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SUBPACKAGEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SUBPACKAGEGELID_MIN_VALUE );
		}
		optionalSubPackageGelId.setValue( value );
	}

	size_t CFGenKbGenFileByXSubPkgKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalSubPackageTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSubPackageTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSubPackageGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSubPackageGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGenFileByXSubPkgKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenFileByXSubPkgKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_SubPackageTenantId( "SubPackageTenantId" );
		static const std::string S_SubPackageGelCacheId( "SubPackageGelCacheId" );
		static const std::string S_SubPackageGelId( "SubPackageGelId" );
		std::string ret( S_Preamble );
		if( ! isOptionalSubPackageTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageTenantId, getOptionalSubPackageTenantIdValue() ) );
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageGelCacheId, getOptionalSubPackageGelCacheIdValue() ) );
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageGelId, getOptionalSubPackageGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator <( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator <( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator <=( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator <=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator ==( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				if( getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				if( getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				if( getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator ==( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				if( getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				if( getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				if( getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator !=( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator !=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator >=( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator >=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator >( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileByXSubPkgKey::operator >( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGenFileByXSubPkgKey CFGenKbGenFileByXSubPkgKey::operator =( cfcore::CFGenKbGenFileByXSubPkgKey& src ) {
		if( src.isOptionalSubPackageTenantIdNull() ) {
			setOptionalSubPackageTenantIdNull();
		}
		else {
			setOptionalSubPackageTenantIdValue( src.getOptionalSubPackageTenantIdValue() );
		}
		if( src.isOptionalSubPackageGelCacheIdNull() ) {
			setOptionalSubPackageGelCacheIdNull();
		}
		else {
			setOptionalSubPackageGelCacheIdValue( src.getOptionalSubPackageGelCacheIdValue() );
		}
		if( src.isOptionalSubPackageGelIdNull() ) {
			setOptionalSubPackageGelIdNull();
		}
		else {
			setOptionalSubPackageGelIdValue( src.getOptionalSubPackageGelIdValue() );
		}
		return( *this );
	}

	CFGenKbGenFileByXSubPkgKey CFGenKbGenFileByXSubPkgKey::operator =( cfcore::CFGenKbGenFileBuff& src ) {
		if( src.isOptionalSubPackageTenantIdNull() ) {
			setOptionalSubPackageTenantIdNull();
		}
		else {
			setOptionalSubPackageTenantIdValue( src.getOptionalSubPackageTenantIdValue() );
		}
		if( src.isOptionalSubPackageGelCacheIdNull() ) {
			setOptionalSubPackageGelCacheIdNull();
		}
		else {
			setOptionalSubPackageGelCacheIdValue( src.getOptionalSubPackageGelCacheIdValue() );
		}
		if( src.isOptionalSubPackageGelIdNull() ) {
			setOptionalSubPackageGelIdNull();
		}
		else {
			setOptionalSubPackageGelIdValue( src.getOptionalSubPackageGelIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				if( lhs.getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				if( lhs.getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				if( lhs.getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				if( lhs.getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				if( lhs.getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				if( lhs.getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

