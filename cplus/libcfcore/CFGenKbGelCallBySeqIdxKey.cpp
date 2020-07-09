// Description: C++18 implementation for a GelCall by SeqIdx index key object.

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

#include <cfgenkb/CFGenKbGelCallBySeqIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelCallBySeqIdxKey::CLASS_NAME( "CFGenKbGelCallBySeqIdxKey" );
	const std::string CFGenKbGelCallBySeqIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelCallBySeqIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelCallBySeqIdxKey::CFGenKbGelCallBySeqIdxKey() {
		optionalSeqInstTenantId.setNull();
		optionalSeqInstGelCacheId.setNull();
		optionalSeqInstId.setNull();
	}

	CFGenKbGelCallBySeqIdxKey::CFGenKbGelCallBySeqIdxKey( const CFGenKbGelCallBySeqIdxKey& src ) {
		optionalSeqInstTenantId.setNull();
		optionalSeqInstGelCacheId.setNull();
		optionalSeqInstId.setNull();
		if( src.isOptionalSeqInstTenantIdNull() ) {
			setOptionalSeqInstTenantIdNull();
		}
		else {
			setOptionalSeqInstTenantIdValue( src.getOptionalSeqInstTenantIdValue() );
		}
		if( src.isOptionalSeqInstGelCacheIdNull() ) {
			setOptionalSeqInstGelCacheIdNull();
		}
		else {
			setOptionalSeqInstGelCacheIdValue( src.getOptionalSeqInstGelCacheIdValue() );
		}
		if( src.isOptionalSeqInstIdNull() ) {
			setOptionalSeqInstIdNull();
		}
		else {
			setOptionalSeqInstIdValue( src.getOptionalSeqInstIdValue() );
		}
	}

	CFGenKbGelCallBySeqIdxKey::~CFGenKbGelCallBySeqIdxKey() {
	}

	const int64_t CFGenKbGelCallBySeqIdxKey::getOptionalSeqInstTenantIdValue() const {
		return( optionalSeqInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelCallBySeqIdxKey::getOptionalSeqInstTenantIdReference() const {
		return( optionalSeqInstTenantId.getReference() );
	}

	const bool CFGenKbGelCallBySeqIdxKey::isOptionalSeqInstTenantIdNull() const {
		return( optionalSeqInstTenantId.isNull() );
	}

	void CFGenKbGelCallBySeqIdxKey::setOptionalSeqInstTenantIdNull() {
		optionalSeqInstTenantId.setNull();
	}

	void CFGenKbGelCallBySeqIdxKey::setOptionalSeqInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSeqInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::SEQINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::SEQINSTTENANTID_MIN_VALUE );
		}
		optionalSeqInstTenantId.setValue( value );
	}

	const int64_t CFGenKbGelCallBySeqIdxKey::getOptionalSeqInstGelCacheIdValue() const {
		return( optionalSeqInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelCallBySeqIdxKey::getOptionalSeqInstGelCacheIdReference() const {
		return( optionalSeqInstGelCacheId.getReference() );
	}

	const bool CFGenKbGelCallBySeqIdxKey::isOptionalSeqInstGelCacheIdNull() const {
		return( optionalSeqInstGelCacheId.isNull() );
	}

	void CFGenKbGelCallBySeqIdxKey::setOptionalSeqInstGelCacheIdNull() {
		optionalSeqInstGelCacheId.setNull();
	}

	void CFGenKbGelCallBySeqIdxKey::setOptionalSeqInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSeqInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::SEQINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::SEQINSTGELCACHEID_MIN_VALUE );
		}
		optionalSeqInstGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGelCallBySeqIdxKey::getOptionalSeqInstIdValue() const {
		return( optionalSeqInstId.getValue() );
	}

	const int64_t* CFGenKbGelCallBySeqIdxKey::getOptionalSeqInstIdReference() const {
		return( optionalSeqInstId.getReference() );
	}

	const bool CFGenKbGelCallBySeqIdxKey::isOptionalSeqInstIdNull() const {
		return( optionalSeqInstId.isNull() );
	}

	void CFGenKbGelCallBySeqIdxKey::setOptionalSeqInstIdNull() {
		optionalSeqInstId.setNull();
	}

	void CFGenKbGelCallBySeqIdxKey::setOptionalSeqInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSeqInstIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::SEQINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::SEQINSTID_MIN_VALUE );
		}
		optionalSeqInstId.setValue( value );
	}

	size_t CFGenKbGelCallBySeqIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalSeqInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSeqInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSeqInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSeqInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSeqInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGelCallBySeqIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCallBySeqIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_SeqInstTenantId( "SeqInstTenantId" );
		static const std::string S_SeqInstGelCacheId( "SeqInstGelCacheId" );
		static const std::string S_SeqInstId( "SeqInstId" );
		std::string ret( S_Preamble );
		if( ! isOptionalSeqInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstTenantId, getOptionalSeqInstTenantIdValue() ) );
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstGelCacheId, getOptionalSeqInstGelCacheIdValue() ) );
		}
		if( ! isOptionalSeqInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstId, getOptionalSeqInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator <( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator <( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator <=( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator <=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator ==( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				if( getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				if( getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				if( getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator ==( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				if( getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				if( getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				if( getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator !=( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator !=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator >=( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator >=( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator >( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelCallBySeqIdxKey::operator >( const CFGenKbGelCallBuff& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelCallBySeqIdxKey CFGenKbGelCallBySeqIdxKey::operator =( cfcore::CFGenKbGelCallBySeqIdxKey& src ) {
		if( src.isOptionalSeqInstTenantIdNull() ) {
			setOptionalSeqInstTenantIdNull();
		}
		else {
			setOptionalSeqInstTenantIdValue( src.getOptionalSeqInstTenantIdValue() );
		}
		if( src.isOptionalSeqInstGelCacheIdNull() ) {
			setOptionalSeqInstGelCacheIdNull();
		}
		else {
			setOptionalSeqInstGelCacheIdValue( src.getOptionalSeqInstGelCacheIdValue() );
		}
		if( src.isOptionalSeqInstIdNull() ) {
			setOptionalSeqInstIdNull();
		}
		else {
			setOptionalSeqInstIdValue( src.getOptionalSeqInstIdValue() );
		}
		return( *this );
	}

	CFGenKbGelCallBySeqIdxKey CFGenKbGelCallBySeqIdxKey::operator =( cfcore::CFGenKbGelCallBuff& src ) {
		if( src.isOptionalSeqInstTenantIdNull() ) {
			setOptionalSeqInstTenantIdNull();
		}
		else {
			setOptionalSeqInstTenantIdValue( src.getOptionalSeqInstTenantIdValue() );
		}
		if( src.isOptionalSeqInstGelCacheIdNull() ) {
			setOptionalSeqInstGelCacheIdNull();
		}
		else {
			setOptionalSeqInstGelCacheIdValue( src.getOptionalSeqInstGelCacheIdValue() );
		}
		if( src.isOptionalSeqInstIdNull() ) {
			setOptionalSeqInstIdNull();
		}
		else {
			setOptionalSeqInstIdValue( src.getOptionalSeqInstIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				if( lhs.getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				if( lhs.getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				if( lhs.getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				if( lhs.getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				if( lhs.getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				if( lhs.getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCallBySeqIdxKey& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

