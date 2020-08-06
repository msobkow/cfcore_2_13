// Description: C++18 implementation for a GelSequence by FirstInstIdx index key object.

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

#include <cfgenkb/CFGenKbGelSequenceByFirstInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSequenceBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelSequenceByFirstInstIdxKey::CLASS_NAME( "CFGenKbGelSequenceByFirstInstIdxKey" );
	const std::string CFGenKbGelSequenceByFirstInstIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelSequenceByFirstInstIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelSequenceByFirstInstIdxKey::CFGenKbGelSequenceByFirstInstIdxKey() {
		optionalFirstInstTenantId.setNull();
		optionalFirstInstGelCacheId.setNull();
		optionalFirstInstId.setNull();
	}

	CFGenKbGelSequenceByFirstInstIdxKey::CFGenKbGelSequenceByFirstInstIdxKey( const CFGenKbGelSequenceByFirstInstIdxKey& src ) {
		optionalFirstInstTenantId.setNull();
		optionalFirstInstGelCacheId.setNull();
		optionalFirstInstId.setNull();
		if( src.isOptionalFirstInstTenantIdNull() ) {
			setOptionalFirstInstTenantIdNull();
		}
		else {
			setOptionalFirstInstTenantIdValue( src.getOptionalFirstInstTenantIdValue() );
		}
		if( src.isOptionalFirstInstGelCacheIdNull() ) {
			setOptionalFirstInstGelCacheIdNull();
		}
		else {
			setOptionalFirstInstGelCacheIdValue( src.getOptionalFirstInstGelCacheIdValue() );
		}
		if( src.isOptionalFirstInstIdNull() ) {
			setOptionalFirstInstIdNull();
		}
		else {
			setOptionalFirstInstIdValue( src.getOptionalFirstInstIdValue() );
		}
	}

	CFGenKbGelSequenceByFirstInstIdxKey::~CFGenKbGelSequenceByFirstInstIdxKey() {
	}

	const int64_t CFGenKbGelSequenceByFirstInstIdxKey::getOptionalFirstInstTenantIdValue() const {
		return( optionalFirstInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceByFirstInstIdxKey::getOptionalFirstInstTenantIdReference() const {
		return( optionalFirstInstTenantId.getReference() );
	}

	const bool CFGenKbGelSequenceByFirstInstIdxKey::isOptionalFirstInstTenantIdNull() const {
		return( optionalFirstInstTenantId.isNull() );
	}

	void CFGenKbGelSequenceByFirstInstIdxKey::setOptionalFirstInstTenantIdNull() {
		optionalFirstInstTenantId.setNull();
	}

	void CFGenKbGelSequenceByFirstInstIdxKey::setOptionalFirstInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalFirstInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::FIRSTINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::FIRSTINSTTENANTID_MIN_VALUE );
		}
		optionalFirstInstTenantId.setValue( value );
	}

	const int64_t CFGenKbGelSequenceByFirstInstIdxKey::getOptionalFirstInstGelCacheIdValue() const {
		return( optionalFirstInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceByFirstInstIdxKey::getOptionalFirstInstGelCacheIdReference() const {
		return( optionalFirstInstGelCacheId.getReference() );
	}

	const bool CFGenKbGelSequenceByFirstInstIdxKey::isOptionalFirstInstGelCacheIdNull() const {
		return( optionalFirstInstGelCacheId.isNull() );
	}

	void CFGenKbGelSequenceByFirstInstIdxKey::setOptionalFirstInstGelCacheIdNull() {
		optionalFirstInstGelCacheId.setNull();
	}

	void CFGenKbGelSequenceByFirstInstIdxKey::setOptionalFirstInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalFirstInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::FIRSTINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::FIRSTINSTGELCACHEID_MIN_VALUE );
		}
		optionalFirstInstGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGelSequenceByFirstInstIdxKey::getOptionalFirstInstIdValue() const {
		return( optionalFirstInstId.getValue() );
	}

	const int64_t* CFGenKbGelSequenceByFirstInstIdxKey::getOptionalFirstInstIdReference() const {
		return( optionalFirstInstId.getReference() );
	}

	const bool CFGenKbGelSequenceByFirstInstIdxKey::isOptionalFirstInstIdNull() const {
		return( optionalFirstInstId.isNull() );
	}

	void CFGenKbGelSequenceByFirstInstIdxKey::setOptionalFirstInstIdNull() {
		optionalFirstInstId.setNull();
	}

	void CFGenKbGelSequenceByFirstInstIdxKey::setOptionalFirstInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalFirstInstIdValue" );
		if( value < cfcore::CFGenKbGelSequenceBuff::FIRSTINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSequenceBuff::FIRSTINSTID_MIN_VALUE );
		}
		optionalFirstInstId.setValue( value );
	}

	size_t CFGenKbGelSequenceByFirstInstIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalFirstInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalFirstInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalFirstInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalFirstInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalFirstInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGelSequenceByFirstInstIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSequenceByFirstInstIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_FirstInstTenantId( "FirstInstTenantId" );
		static const std::string S_FirstInstGelCacheId( "FirstInstGelCacheId" );
		static const std::string S_FirstInstId( "FirstInstId" );
		std::string ret( S_Preamble );
		if( ! isOptionalFirstInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstTenantId, getOptionalFirstInstTenantIdValue() ) );
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstGelCacheId, getOptionalFirstInstGelCacheIdValue() ) );
		}
		if( ! isOptionalFirstInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstId, getOptionalFirstInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator <( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator <( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator <=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator <=( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator ==( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				if( getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				if( getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				if( getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator ==( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				if( getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				if( getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				if( getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator !=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator !=( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator >=( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator >=( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator >( const CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSequenceByFirstInstIdxKey::operator >( const CFGenKbGelSequenceBuff& rhs ) {
		if( ! isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelSequenceByFirstInstIdxKey CFGenKbGelSequenceByFirstInstIdxKey::operator =( cfcore::CFGenKbGelSequenceByFirstInstIdxKey& src ) {
		if( src.isOptionalFirstInstTenantIdNull() ) {
			setOptionalFirstInstTenantIdNull();
		}
		else {
			setOptionalFirstInstTenantIdValue( src.getOptionalFirstInstTenantIdValue() );
		}
		if( src.isOptionalFirstInstGelCacheIdNull() ) {
			setOptionalFirstInstGelCacheIdNull();
		}
		else {
			setOptionalFirstInstGelCacheIdValue( src.getOptionalFirstInstGelCacheIdValue() );
		}
		if( src.isOptionalFirstInstIdNull() ) {
			setOptionalFirstInstIdNull();
		}
		else {
			setOptionalFirstInstIdValue( src.getOptionalFirstInstIdValue() );
		}
		return( *this );
	}

	CFGenKbGelSequenceByFirstInstIdxKey CFGenKbGelSequenceByFirstInstIdxKey::operator =( cfcore::CFGenKbGelSequenceBuff& src ) {
		if( src.isOptionalFirstInstTenantIdNull() ) {
			setOptionalFirstInstTenantIdNull();
		}
		else {
			setOptionalFirstInstTenantIdValue( src.getOptionalFirstInstTenantIdValue() );
		}
		if( src.isOptionalFirstInstGelCacheIdNull() ) {
			setOptionalFirstInstGelCacheIdNull();
		}
		else {
			setOptionalFirstInstGelCacheIdValue( src.getOptionalFirstInstGelCacheIdValue() );
		}
		if( src.isOptionalFirstInstIdNull() ) {
			setOptionalFirstInstIdNull();
		}
		else {
			setOptionalFirstInstIdValue( src.getOptionalFirstInstIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				if( lhs.getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				if( lhs.getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				if( lhs.getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				if( lhs.getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				if( lhs.getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				if( lhs.getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() != rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() != rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() != rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceByFirstInstIdxKey& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSequenceByFirstInstIdxKey& lhs, const cfcore::CFGenKbGelSequenceBuff& rhs ) {
		if( ! lhs.isOptionalFirstInstTenantIdNull() ) {
			if( rhs.isOptionalFirstInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstTenantIdValue() < rhs.getOptionalFirstInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstTenantIdValue() > rhs.getOptionalFirstInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstGelCacheIdNull() ) {
			if( rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstGelCacheIdValue() < rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstGelCacheIdValue() > rhs.getOptionalFirstInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalFirstInstIdNull() ) {
			if( rhs.isOptionalFirstInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalFirstInstIdValue() < rhs.getOptionalFirstInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFirstInstIdValue() > rhs.getOptionalFirstInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFirstInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

