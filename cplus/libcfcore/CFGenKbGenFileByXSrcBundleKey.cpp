// Description: C++18 implementation for a GenFile by XSrcBundle index key object.

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

#include <cfgenkb/CFGenKbGenFileByXSrcBundleKey.hpp>
#include <cfgenkb/CFGenKbGenFileBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenFileByXSrcBundleKey::CLASS_NAME( "CFGenKbGenFileByXSrcBundleKey" );
	const std::string CFGenKbGenFileByXSrcBundleKey::S_VALUE( "value" );
	const std::string CFGenKbGenFileByXSrcBundleKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenFileByXSrcBundleKey::CFGenKbGenFileByXSrcBundleKey() {
		optionalSourceBundleTenantId.setNull();
		optionalSourceBundleGelCacheId.setNull();
		optionalSourceBundleGelId.setNull();
	}

	CFGenKbGenFileByXSrcBundleKey::CFGenKbGenFileByXSrcBundleKey( const CFGenKbGenFileByXSrcBundleKey& src ) {
		optionalSourceBundleTenantId.setNull();
		optionalSourceBundleGelCacheId.setNull();
		optionalSourceBundleGelId.setNull();
		if( src.isOptionalSourceBundleTenantIdNull() ) {
			setOptionalSourceBundleTenantIdNull();
		}
		else {
			setOptionalSourceBundleTenantIdValue( src.getOptionalSourceBundleTenantIdValue() );
		}
		if( src.isOptionalSourceBundleGelCacheIdNull() ) {
			setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			setOptionalSourceBundleGelCacheIdValue( src.getOptionalSourceBundleGelCacheIdValue() );
		}
		if( src.isOptionalSourceBundleGelIdNull() ) {
			setOptionalSourceBundleGelIdNull();
		}
		else {
			setOptionalSourceBundleGelIdValue( src.getOptionalSourceBundleGelIdValue() );
		}
	}

	CFGenKbGenFileByXSrcBundleKey::~CFGenKbGenFileByXSrcBundleKey() {
	}

	const int64_t CFGenKbGenFileByXSrcBundleKey::getOptionalSourceBundleTenantIdValue() const {
		return( optionalSourceBundleTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXSrcBundleKey::getOptionalSourceBundleTenantIdReference() const {
		return( optionalSourceBundleTenantId.getReference() );
	}

	const bool CFGenKbGenFileByXSrcBundleKey::isOptionalSourceBundleTenantIdNull() const {
		return( optionalSourceBundleTenantId.isNull() );
	}

	void CFGenKbGenFileByXSrcBundleKey::setOptionalSourceBundleTenantIdNull() {
		optionalSourceBundleTenantId.setNull();
	}

	void CFGenKbGenFileByXSrcBundleKey::setOptionalSourceBundleTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSourceBundleTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SOURCEBUNDLETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SOURCEBUNDLETENANTID_MIN_VALUE );
		}
		optionalSourceBundleTenantId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXSrcBundleKey::getOptionalSourceBundleGelCacheIdValue() const {
		return( optionalSourceBundleGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXSrcBundleKey::getOptionalSourceBundleGelCacheIdReference() const {
		return( optionalSourceBundleGelCacheId.getReference() );
	}

	const bool CFGenKbGenFileByXSrcBundleKey::isOptionalSourceBundleGelCacheIdNull() const {
		return( optionalSourceBundleGelCacheId.isNull() );
	}

	void CFGenKbGenFileByXSrcBundleKey::setOptionalSourceBundleGelCacheIdNull() {
		optionalSourceBundleGelCacheId.setNull();
	}

	void CFGenKbGenFileByXSrcBundleKey::setOptionalSourceBundleGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSourceBundleGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SOURCEBUNDLEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SOURCEBUNDLEGELCACHEID_MIN_VALUE );
		}
		optionalSourceBundleGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXSrcBundleKey::getOptionalSourceBundleGelIdValue() const {
		return( optionalSourceBundleGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXSrcBundleKey::getOptionalSourceBundleGelIdReference() const {
		return( optionalSourceBundleGelId.getReference() );
	}

	const bool CFGenKbGenFileByXSrcBundleKey::isOptionalSourceBundleGelIdNull() const {
		return( optionalSourceBundleGelId.isNull() );
	}

	void CFGenKbGenFileByXSrcBundleKey::setOptionalSourceBundleGelIdNull() {
		optionalSourceBundleGelId.setNull();
	}

	void CFGenKbGenFileByXSrcBundleKey::setOptionalSourceBundleGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSourceBundleGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SOURCEBUNDLEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SOURCEBUNDLEGELID_MIN_VALUE );
		}
		optionalSourceBundleGelId.setValue( value );
	}

	size_t CFGenKbGenFileByXSrcBundleKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSourceBundleTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSourceBundleGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSourceBundleGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGenFileByXSrcBundleKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenFileByXSrcBundleKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_SourceBundleTenantId( "SourceBundleTenantId" );
		static const std::string S_SourceBundleGelCacheId( "SourceBundleGelCacheId" );
		static const std::string S_SourceBundleGelId( "SourceBundleGelId" );
		std::string ret( S_Preamble );
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleTenantId, getOptionalSourceBundleTenantIdValue() ) );
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleGelCacheId, getOptionalSourceBundleGelCacheIdValue() ) );
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleGelId, getOptionalSourceBundleGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator <( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator <( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator <=( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator <=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator ==( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				if( getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				if( getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				if( getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator ==( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				if( getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				if( getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				if( getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator !=( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator !=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator >=( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator >=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator >( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileByXSrcBundleKey::operator >( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGenFileByXSrcBundleKey CFGenKbGenFileByXSrcBundleKey::operator =( cfcore::CFGenKbGenFileByXSrcBundleKey& src ) {
		if( src.isOptionalSourceBundleTenantIdNull() ) {
			setOptionalSourceBundleTenantIdNull();
		}
		else {
			setOptionalSourceBundleTenantIdValue( src.getOptionalSourceBundleTenantIdValue() );
		}
		if( src.isOptionalSourceBundleGelCacheIdNull() ) {
			setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			setOptionalSourceBundleGelCacheIdValue( src.getOptionalSourceBundleGelCacheIdValue() );
		}
		if( src.isOptionalSourceBundleGelIdNull() ) {
			setOptionalSourceBundleGelIdNull();
		}
		else {
			setOptionalSourceBundleGelIdValue( src.getOptionalSourceBundleGelIdValue() );
		}
		return( *this );
	}

	CFGenKbGenFileByXSrcBundleKey CFGenKbGenFileByXSrcBundleKey::operator =( cfcore::CFGenKbGenFileBuff& src ) {
		if( src.isOptionalSourceBundleTenantIdNull() ) {
			setOptionalSourceBundleTenantIdNull();
		}
		else {
			setOptionalSourceBundleTenantIdValue( src.getOptionalSourceBundleTenantIdValue() );
		}
		if( src.isOptionalSourceBundleGelCacheIdNull() ) {
			setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			setOptionalSourceBundleGelCacheIdValue( src.getOptionalSourceBundleGelCacheIdValue() );
		}
		if( src.isOptionalSourceBundleGelIdNull() ) {
			setOptionalSourceBundleGelIdNull();
		}
		else {
			setOptionalSourceBundleGelIdValue( src.getOptionalSourceBundleGelIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				if( lhs.getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				if( lhs.getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				if( lhs.getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				if( lhs.getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				if( lhs.getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				if( lhs.getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

