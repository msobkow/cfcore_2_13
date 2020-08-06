// Description: C++18 implementation for a GelSequence by LastInstIdx index key object.

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

#include <cfgenkb/CFGenKbGelSequenceByLastInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSequenceBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelSequenceByLastInstIdxKey::CLASS_NAME( "CFGenKbGelSequenceByLastInstIdxKey" );
	const std::string CFGenKbGelSequenceByLastInstIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelSequenceByLastInstIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelSequenceByLastInstIdxKey::CFGenKbGelSequenceByLastInstIdxKey() {
		optionalLastInstTenantId.setNull();
		optionalLastInstGelCacheId.setNull();
		optionalLastInstId.setNull();
	}

	CFGenKbGelSequenceByLastInstIdxKey::CFGenKbGelSequenceByLastInstIdxKey( const CFGenKbGelSequenceByLastInstIdxKey& src ) {
		optionalLastInstTenantId.setNull();
		optionalLastInstGelCacheId.setNull();
		optionalLastInstId.setNull();
		if( src.isOptionalLastInstTenantIdNull() ) {
			setOptionalLastInstTenantIdNull();
		}
		else {
			setOptionalLastInstTenantIdValue( src.getOptionalLastInstTenantIdValue() );
		}
		if( src.isOptionalLastInstGelCacheIdNull() ) {
			setOptionalLastInstGelCacheIdNull();
		}
		else {
			setOptionalLastInstGelCacheIdValue( src.getOptionalLastInstGelCacheIdValue() );
		}
		if( src.isOptionalLastInstIdNull() ) {
			setOptionalLastInstIdNull();
		}
		else {
			setOptionalLastInstIdValue( src.getOptionalLastInstIdValue() );
		}
	}

	CFGenKbGelSequenceByLastInstIdxKey::~CFGenKbGelSequenceByLastInstIdxKey() {
	}

	const int64_t CFGenKbGelSequenceByLastInstIdxKey::getOptionalLastInstTenantIdValue() const {
		return( optionalLastInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceByLastInstIdxKey::getOptionalLastInstTenantIdReference() const {
		return( optionalLastInstTenantId.getReference() );
	}

	const bool CFGenKbGelSequenceByLastInstIdxKey::isOptionalLastInstTenantIdNull() const {
		return( optionalLastInstTenantId.isNull() );
	}

	void CFGenKbGelSequenceByLastInstIdxKey::setOptionalLastInstTenantIdNull() {
		optionalLastInstTenantId.setNull();
	}

	void CFGenKbGelSequenceByLastInstIdxKey::setOptionalLastInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalLastInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::LASTINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::LASTINSTTENANTID_MIN_VALUE );
		}
		optionalLastInstTenantId.setValue( value );
	}

	const int64_t CFGenKbGelSequenceByLastInstIdxKey::getOptionalLastInstGelCacheIdValue() const {
		return( optionalLastInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceByLastInstIdxKey::getOptionalLastInstGelCacheIdReference() const {
		return( optionalLastInstGelCacheId.getReference() );
	}

	const bool CFGenKbGelSequenceByLastInstIdxKey::isOptionalLastInstGelCacheIdNull() const {
		return( optionalLastInstGelCacheId.isNull() );
	}

	void CFGenKbGelSequenceByLastInstIdxKey::setOptionalLastInstGelCacheIdNull() {
		optionalLastInstGelCacheId.setNull();
	}

	void CFGenKbGelSequenceByLastInstIdxKey::setOptionalLastInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalLastInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::LASTINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::LASTINSTGELCACHEID_MIN_VALUE );
		}
		optionalLastInstGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGelSequenceByLastInstIdxKey::getOptionalLastInstIdValue() const {
		return( optionalLastInstId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceByLastInstIdxKey::getOptionalLastInstIdReference() const {
		return( optionalLastInstId.getReference() );
	}

	const bool CFGenKbGelSequenceByLastInstIdxKey::isOptionalLastInstIdNull() const {
		return( optionalLastInstId.isNull() );
	}

	void CFGenKbGelSequenceByLastInstIdxKey::setOptionalLastInstIdNull() {
		optionalLastInstId.setNull();
	}

	void CFGenKbGelSequenceByLastInstIdxKey::setOptionalLastInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalLastInstIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::LASTINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::LASTINSTID_MIN_VALUE );
		}
		optionalLastInstId.setValue( value );
	}

	size_t CFGenKbGelSequenceByLastInstIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalLastInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalLastInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalLastInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalLastInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalLastInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGelSequenceByLastInstIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSequenceByLastInstIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_LastInstTenantId( "LastInstTenantId" );
		static const std::string S_LastInstGelCacheId( "LastInstGelCacheId" );
		static const std::string S_LastInstId( "LastInstId" );
		std::string ret( S_Preamble );
		if( ! isOptionalLastInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstTenantId, getOptionalLastInstTenantIdValue() ) );
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstGelCacheId, getOptionalLastInstGelCacheIdValue() ) );
		}
		if( ! isOptionalLastInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstId, getOptionalLastInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator <( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator <( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator <=( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator <=( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator ==( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				if( getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				if( getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				if( getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator ==( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				if( getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				if( getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				if( getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator !=( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator !=( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator >=( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator >=( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator >( const CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSequenceByLastInstIdxKey::operator >( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelSequenceByLastInstIdxKey CFGenKbGelSequenceByLastInstIdxKey::operator =( cfcore::CFGenKbGelSequenceByLastInstIdxKey& src ) {
		if( src.isOptionalLastInstTenantIdNull() ) {
			setOptionalLastInstTenantIdNull();
		}
		else {
			setOptionalLastInstTenantIdValue( src.getOptionalLastInstTenantIdValue() );
		}
		if( src.isOptionalLastInstGelCacheIdNull() ) {
			setOptionalLastInstGelCacheIdNull();
		}
		else {
			setOptionalLastInstGelCacheIdValue( src.getOptionalLastInstGelCacheIdValue() );
		}
		if( src.isOptionalLastInstIdNull() ) {
			setOptionalLastInstIdNull();
		}
		else {
			setOptionalLastInstIdValue( src.getOptionalLastInstIdValue() );
		}
		return( *this );
	}

	CFGenKbGelSequenceByLastInstIdxKey CFGenKbGelSequenceByLastInstIdxKey::operator =( cfcore::CFGenKbGelSequenceBuff& src ) {
		if( src.isOptionalLastInstTenantIdNull() ) {
			setOptionalLastInstTenantIdNull();
		}
		else {
			setOptionalLastInstTenantIdValue( src.getOptionalLastInstTenantIdValue() );
		}
		if( src.isOptionalLastInstGelCacheIdNull() ) {
			setOptionalLastInstGelCacheIdNull();
		}
		else {
			setOptionalLastInstGelCacheIdValue( src.getOptionalLastInstGelCacheIdValue() );
		}
		if( src.isOptionalLastInstIdNull() ) {
			setOptionalLastInstIdNull();
		}
		else {
			setOptionalLastInstIdValue( src.getOptionalLastInstIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				if( lhs.getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				if( lhs.getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				if( lhs.getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				if( lhs.getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				if( lhs.getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				if( lhs.getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() != rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() != rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() != rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByLastInstIdxKey& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSequenceByLastInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalLastInstTenantIdNull() ) {
			if( rhs.isOptionalLastInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstTenantIdValue() < rhs.getOptionalLastInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstTenantIdValue() > rhs.getOptionalLastInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstGelCacheIdNull() ) {
			if( rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstGelCacheIdValue() < rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstGelCacheIdValue() > rhs.getOptionalLastInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLastInstIdNull() ) {
			if( rhs.isOptionalLastInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLastInstIdValue() < rhs.getOptionalLastInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLastInstIdValue() > rhs.getOptionalLastInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLastInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

