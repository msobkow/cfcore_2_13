// Description: C++18 implementation for a GelReference by RemainderIdx index key object.

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

#include <cfgenkb/CFGenKbGelReferenceByRemainderIdxKey.hpp>
#include <cfgenkb/CFGenKbGelReferenceBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelReferenceByRemainderIdxKey::CLASS_NAME( "CFGenKbGelReferenceByRemainderIdxKey" );
	const std::string CFGenKbGelReferenceByRemainderIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelReferenceByRemainderIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelReferenceByRemainderIdxKey::CFGenKbGelReferenceByRemainderIdxKey() {
		optionalRemainderTenantId.setNull();
		requiredRemainderGelCacheId = cfcore::CFGenKbGelReferenceBuff::REMAINDERGELCACHEID_INIT_VALUE;
		optionalRemainderInstId.setNull();
	}

	CFGenKbGelReferenceByRemainderIdxKey::CFGenKbGelReferenceByRemainderIdxKey( const CFGenKbGelReferenceByRemainderIdxKey& src ) {
		optionalRemainderTenantId.setNull();
		requiredRemainderGelCacheId = cfcore::CFGenKbGelReferenceBuff::REMAINDERGELCACHEID_INIT_VALUE;
		optionalRemainderInstId.setNull();
		if( src.isOptionalRemainderTenantIdNull() ) {
			setOptionalRemainderTenantIdNull();
		}
		else {
			setOptionalRemainderTenantIdValue( src.getOptionalRemainderTenantIdValue() );
		}
		setRequiredRemainderGelCacheId( src.getRequiredRemainderGelCacheId() );
		if( src.isOptionalRemainderInstIdNull() ) {
			setOptionalRemainderInstIdNull();
		}
		else {
			setOptionalRemainderInstIdValue( src.getOptionalRemainderInstIdValue() );
		}
	}

	CFGenKbGelReferenceByRemainderIdxKey::~CFGenKbGelReferenceByRemainderIdxKey() {
	}

	const int64_t CFGenKbGelReferenceByRemainderIdxKey::getOptionalRemainderTenantIdValue() const {
		return( optionalRemainderTenantId.getValue() );
	}

	const int64_t* CFGenKbGelReferenceByRemainderIdxKey::getOptionalRemainderTenantIdReference() const {
		return( optionalRemainderTenantId.getReference() );
	}

	const bool CFGenKbGelReferenceByRemainderIdxKey::isOptionalRemainderTenantIdNull() const {
		return( optionalRemainderTenantId.isNull() );
	}

	void CFGenKbGelReferenceByRemainderIdxKey::setOptionalRemainderTenantIdNull() {
		optionalRemainderTenantId.setNull();
	}

	void CFGenKbGelReferenceByRemainderIdxKey::setOptionalRemainderTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRemainderTenantIdValue" );
		if( value < cfcore::CFGenKbGelReferenceBuff::REMAINDERTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelReferenceBuff::REMAINDERTENANTID_MIN_VALUE );
		}
		optionalRemainderTenantId.setValue( value );
	}

	const int64_t CFGenKbGelReferenceByRemainderIdxKey::getRequiredRemainderGelCacheId() const {
		return( requiredRemainderGelCacheId );
	}

	const int64_t* CFGenKbGelReferenceByRemainderIdxKey::getRequiredRemainderGelCacheIdReference() const {
		return( &requiredRemainderGelCacheId );
	}

	void CFGenKbGelReferenceByRemainderIdxKey::setRequiredRemainderGelCacheId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredRemainderGelCacheId" );
		if( value < cfcore::CFGenKbGelReferenceBuff::REMAINDERGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelReferenceBuff::REMAINDERGELCACHEID_MIN_VALUE );
		}
		requiredRemainderGelCacheId = value;
	}

	const int64_t CFGenKbGelReferenceByRemainderIdxKey::getOptionalRemainderInstIdValue() const {
		return( optionalRemainderInstId.getValue() );
	}

	const int64_t* CFGenKbGelReferenceByRemainderIdxKey::getOptionalRemainderInstIdReference() const {
		return( optionalRemainderInstId.getReference() );
	}

	const bool CFGenKbGelReferenceByRemainderIdxKey::isOptionalRemainderInstIdNull() const {
		return( optionalRemainderInstId.isNull() );
	}

	void CFGenKbGelReferenceByRemainderIdxKey::setOptionalRemainderInstIdNull() {
		optionalRemainderInstId.setNull();
	}

	void CFGenKbGelReferenceByRemainderIdxKey::setOptionalRemainderInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRemainderInstIdValue" );
		if( value < cfcore::CFGenKbGelReferenceBuff::REMAINDERINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelReferenceBuff::REMAINDERINSTID_MIN_VALUE );
		}
		optionalRemainderInstId.setValue( value );
	}

	size_t CFGenKbGelReferenceByRemainderIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalRemainderTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRemainderTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		hashCode = hashCode + (int)( getRequiredRemainderGelCacheId() );
		if( ! isOptionalRemainderInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRemainderInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGelReferenceByRemainderIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelReferenceByRemainderIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_RemainderTenantId( "RemainderTenantId" );
		static const std::string S_RemainderGelCacheId( "RemainderGelCacheId" );
		static const std::string S_RemainderInstId( "RemainderInstId" );
		std::string ret( S_Preamble );
		if( ! isOptionalRemainderTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderTenantId, getOptionalRemainderTenantIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderGelCacheId, getRequiredRemainderGelCacheId() ) );
		if( ! isOptionalRemainderInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderInstId, getOptionalRemainderInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator <( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator <( const CFGenKbGelReferenceBuff& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator <=( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator <=( const CFGenKbGelReferenceBuff& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator ==( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				if( getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				if( getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator ==( const CFGenKbGelReferenceBuff& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				if( getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				if( getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator !=( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator !=( const CFGenKbGelReferenceBuff& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator >=( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator >=( const CFGenKbGelReferenceBuff& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator >( const CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelReferenceByRemainderIdxKey::operator >( const CFGenKbGelReferenceBuff& rhs ) {
		if( ! isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelReferenceByRemainderIdxKey CFGenKbGelReferenceByRemainderIdxKey::operator =( cfcore::CFGenKbGelReferenceByRemainderIdxKey& src ) {
		if( src.isOptionalRemainderTenantIdNull() ) {
			setOptionalRemainderTenantIdNull();
		}
		else {
			setOptionalRemainderTenantIdValue( src.getOptionalRemainderTenantIdValue() );
		}
		setRequiredRemainderGelCacheId( src.getRequiredRemainderGelCacheId() );
		if( src.isOptionalRemainderInstIdNull() ) {
			setOptionalRemainderInstIdNull();
		}
		else {
			setOptionalRemainderInstIdValue( src.getOptionalRemainderInstIdValue() );
		}
		return( *this );
	}

	CFGenKbGelReferenceByRemainderIdxKey CFGenKbGelReferenceByRemainderIdxKey::operator =( cfcore::CFGenKbGelReferenceBuff& src ) {
		if( src.isOptionalRemainderTenantIdNull() ) {
			setOptionalRemainderTenantIdNull();
		}
		else {
			setOptionalRemainderTenantIdValue( src.getOptionalRemainderTenantIdValue() );
		}
		setRequiredRemainderGelCacheId( src.getRequiredRemainderGelCacheId() );
		if( src.isOptionalRemainderInstIdNull() ) {
			setOptionalRemainderInstIdNull();
		}
		else {
			setOptionalRemainderInstIdValue( src.getOptionalRemainderInstIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				if( lhs.getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				if( lhs.getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				if( lhs.getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				if( lhs.getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() != rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() != rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() != rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceByRemainderIdxKey& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelReferenceByRemainderIdxKey& lhs, const cfcore::CFGenKbGelReferenceBuff& rhs ) {
		if( ! lhs.isOptionalRemainderTenantIdNull() ) {
			if( rhs.isOptionalRemainderTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderTenantIdValue() < rhs.getOptionalRemainderTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderTenantIdValue() > rhs.getOptionalRemainderTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderTenantIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRemainderGelCacheId() < rhs.getRequiredRemainderGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredRemainderGelCacheId() > rhs.getRequiredRemainderGelCacheId() ) {
			return( true );
		}
		if( ! lhs.isOptionalRemainderInstIdNull() ) {
			if( rhs.isOptionalRemainderInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRemainderInstIdValue() < rhs.getOptionalRemainderInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRemainderInstIdValue() > rhs.getOptionalRemainderInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRemainderInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

