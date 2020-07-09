// Description: C++18 implementation for a GenFile by XExpClsName index key object.

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

#include <cfgenkb/CFGenKbGenFileByXExpClsNameKey.hpp>
#include <cfgenkb/CFGenKbGenFileBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenFileByXExpClsNameKey::CLASS_NAME( "CFGenKbGenFileByXExpClsNameKey" );
	const std::string CFGenKbGenFileByXExpClsNameKey::S_VALUE( "value" );
	const std::string CFGenKbGenFileByXExpClsNameKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenFileByXExpClsNameKey::CFGenKbGenFileByXExpClsNameKey() {
		optionalExpansionClassNameTenantId.setNull();
		optionalExpansionClassNameGelCacheId.setNull();
		optionalExpansionClassNameGelId.setNull();
	}

	CFGenKbGenFileByXExpClsNameKey::CFGenKbGenFileByXExpClsNameKey( const CFGenKbGenFileByXExpClsNameKey& src ) {
		optionalExpansionClassNameTenantId.setNull();
		optionalExpansionClassNameGelCacheId.setNull();
		optionalExpansionClassNameGelId.setNull();
		if( src.isOptionalExpansionClassNameTenantIdNull() ) {
			setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			setOptionalExpansionClassNameTenantIdValue( src.getOptionalExpansionClassNameTenantIdValue() );
		}
		if( src.isOptionalExpansionClassNameGelCacheIdNull() ) {
			setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionClassNameGelCacheIdValue( src.getOptionalExpansionClassNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionClassNameGelIdNull() ) {
			setOptionalExpansionClassNameGelIdNull();
		}
		else {
			setOptionalExpansionClassNameGelIdValue( src.getOptionalExpansionClassNameGelIdValue() );
		}
	}

	CFGenKbGenFileByXExpClsNameKey::~CFGenKbGenFileByXExpClsNameKey() {
	}

	const int64_t CFGenKbGenFileByXExpClsNameKey::getOptionalExpansionClassNameTenantIdValue() const {
		return( optionalExpansionClassNameTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXExpClsNameKey::getOptionalExpansionClassNameTenantIdReference() const {
		return( optionalExpansionClassNameTenantId.getReference() );
	}

	const bool CFGenKbGenFileByXExpClsNameKey::isOptionalExpansionClassNameTenantIdNull() const {
		return( optionalExpansionClassNameTenantId.isNull() );
	}

	void CFGenKbGenFileByXExpClsNameKey::setOptionalExpansionClassNameTenantIdNull() {
		optionalExpansionClassNameTenantId.setNull();
	}

	void CFGenKbGenFileByXExpClsNameKey::setOptionalExpansionClassNameTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionClassNameTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMETENANTID_MIN_VALUE );
		}
		optionalExpansionClassNameTenantId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXExpClsNameKey::getOptionalExpansionClassNameGelCacheIdValue() const {
		return( optionalExpansionClassNameGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXExpClsNameKey::getOptionalExpansionClassNameGelCacheIdReference() const {
		return( optionalExpansionClassNameGelCacheId.getReference() );
	}

	const bool CFGenKbGenFileByXExpClsNameKey::isOptionalExpansionClassNameGelCacheIdNull() const {
		return( optionalExpansionClassNameGelCacheId.isNull() );
	}

	void CFGenKbGenFileByXExpClsNameKey::setOptionalExpansionClassNameGelCacheIdNull() {
		optionalExpansionClassNameGelCacheId.setNull();
	}

	void CFGenKbGenFileByXExpClsNameKey::setOptionalExpansionClassNameGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionClassNameGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELCACHEID_MIN_VALUE );
		}
		optionalExpansionClassNameGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGenFileByXExpClsNameKey::getOptionalExpansionClassNameGelIdValue() const {
		return( optionalExpansionClassNameGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileByXExpClsNameKey::getOptionalExpansionClassNameGelIdReference() const {
		return( optionalExpansionClassNameGelId.getReference() );
	}

	const bool CFGenKbGenFileByXExpClsNameKey::isOptionalExpansionClassNameGelIdNull() const {
		return( optionalExpansionClassNameGelId.isNull() );
	}

	void CFGenKbGenFileByXExpClsNameKey::setOptionalExpansionClassNameGelIdNull() {
		optionalExpansionClassNameGelId.setNull();
	}

	void CFGenKbGenFileByXExpClsNameKey::setOptionalExpansionClassNameGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionClassNameGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELID_MIN_VALUE );
		}
		optionalExpansionClassNameGelId.setValue( value );
	}

	size_t CFGenKbGenFileByXExpClsNameKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionClassNameTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionClassNameGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionClassNameGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGenFileByXExpClsNameKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenFileByXExpClsNameKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpansionClassNameTenantId( "ExpansionClassNameTenantId" );
		static const std::string S_ExpansionClassNameGelCacheId( "ExpansionClassNameGelCacheId" );
		static const std::string S_ExpansionClassNameGelId( "ExpansionClassNameGelId" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameTenantId, getOptionalExpansionClassNameTenantIdValue() ) );
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameGelCacheId, getOptionalExpansionClassNameGelCacheIdValue() ) );
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameGelId, getOptionalExpansionClassNameGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator <( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator <( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator <=( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator <=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator ==( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				if( getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				if( getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				if( getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator ==( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				if( getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				if( getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				if( getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator !=( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator !=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator >=( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator >=( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator >( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileByXExpClsNameKey::operator >( const CFGenKbGenFileBuff& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGenFileByXExpClsNameKey CFGenKbGenFileByXExpClsNameKey::operator =( cfcore::CFGenKbGenFileByXExpClsNameKey& src ) {
		if( src.isOptionalExpansionClassNameTenantIdNull() ) {
			setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			setOptionalExpansionClassNameTenantIdValue( src.getOptionalExpansionClassNameTenantIdValue() );
		}
		if( src.isOptionalExpansionClassNameGelCacheIdNull() ) {
			setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionClassNameGelCacheIdValue( src.getOptionalExpansionClassNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionClassNameGelIdNull() ) {
			setOptionalExpansionClassNameGelIdNull();
		}
		else {
			setOptionalExpansionClassNameGelIdValue( src.getOptionalExpansionClassNameGelIdValue() );
		}
		return( *this );
	}

	CFGenKbGenFileByXExpClsNameKey CFGenKbGenFileByXExpClsNameKey::operator =( cfcore::CFGenKbGenFileBuff& src ) {
		if( src.isOptionalExpansionClassNameTenantIdNull() ) {
			setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			setOptionalExpansionClassNameTenantIdValue( src.getOptionalExpansionClassNameTenantIdValue() );
		}
		if( src.isOptionalExpansionClassNameGelCacheIdNull() ) {
			setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionClassNameGelCacheIdValue( src.getOptionalExpansionClassNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionClassNameGelIdNull() ) {
			setOptionalExpansionClassNameGelIdNull();
		}
		else {
			setOptionalExpansionClassNameGelIdValue( src.getOptionalExpansionClassNameGelIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				if( lhs.getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				if( lhs.getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

