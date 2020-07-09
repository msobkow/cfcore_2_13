// Description: C++18 implementation for a GenItem by ProbeIdx index key object.

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

#include <cfgenkb/CFGenKbGenItemByProbeIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenItemByProbeIdxKey::CLASS_NAME( "CFGenKbGenItemByProbeIdxKey" );
	const std::string CFGenKbGenItemByProbeIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGenItemByProbeIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenItemByProbeIdxKey::CFGenKbGenItemByProbeIdxKey() {
		optionalProbeTenantId.setNull();
		optionalProbeCartridgeId.setNull();
		optionalProbeGenItemId.setNull();
	}

	CFGenKbGenItemByProbeIdxKey::CFGenKbGenItemByProbeIdxKey( const CFGenKbGenItemByProbeIdxKey& src ) {
		optionalProbeTenantId.setNull();
		optionalProbeCartridgeId.setNull();
		optionalProbeGenItemId.setNull();
		if( src.isOptionalProbeTenantIdNull() ) {
			setOptionalProbeTenantIdNull();
		}
		else {
			setOptionalProbeTenantIdValue( src.getOptionalProbeTenantIdValue() );
		}
		if( src.isOptionalProbeCartridgeIdNull() ) {
			setOptionalProbeCartridgeIdNull();
		}
		else {
			setOptionalProbeCartridgeIdValue( src.getOptionalProbeCartridgeIdValue() );
		}
		if( src.isOptionalProbeGenItemIdNull() ) {
			setOptionalProbeGenItemIdNull();
		}
		else {
			setOptionalProbeGenItemIdValue( src.getOptionalProbeGenItemIdValue() );
		}
	}

	CFGenKbGenItemByProbeIdxKey::~CFGenKbGenItemByProbeIdxKey() {
	}

	const int64_t CFGenKbGenItemByProbeIdxKey::getOptionalProbeTenantIdValue() const {
		return( optionalProbeTenantId.getValue() );
	}

	const int64_t* CFGenKbGenItemByProbeIdxKey::getOptionalProbeTenantIdReference() const {
		return( optionalProbeTenantId.getReference() );
	}

	const bool CFGenKbGenItemByProbeIdxKey::isOptionalProbeTenantIdNull() const {
		return( optionalProbeTenantId.isNull() );
	}

	void CFGenKbGenItemByProbeIdxKey::setOptionalProbeTenantIdNull() {
		optionalProbeTenantId.setNull();
	}

	void CFGenKbGenItemByProbeIdxKey::setOptionalProbeTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalProbeTenantIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::PROBETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::PROBETENANTID_MIN_VALUE );
		}
		optionalProbeTenantId.setValue( value );
	}

	const int64_t CFGenKbGenItemByProbeIdxKey::getOptionalProbeCartridgeIdValue() const {
		return( optionalProbeCartridgeId.getValue() );
	}

	const int64_t* CFGenKbGenItemByProbeIdxKey::getOptionalProbeCartridgeIdReference() const {
		return( optionalProbeCartridgeId.getReference() );
	}

	const bool CFGenKbGenItemByProbeIdxKey::isOptionalProbeCartridgeIdNull() const {
		return( optionalProbeCartridgeId.isNull() );
	}

	void CFGenKbGenItemByProbeIdxKey::setOptionalProbeCartridgeIdNull() {
		optionalProbeCartridgeId.setNull();
	}

	void CFGenKbGenItemByProbeIdxKey::setOptionalProbeCartridgeIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalProbeCartridgeIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::PROBECARTRIDGEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::PROBECARTRIDGEID_MIN_VALUE );
		}
		optionalProbeCartridgeId.setValue( value );
	}

	const int64_t CFGenKbGenItemByProbeIdxKey::getOptionalProbeGenItemIdValue() const {
		return( optionalProbeGenItemId.getValue() );
	}

	const int64_t* CFGenKbGenItemByProbeIdxKey::getOptionalProbeGenItemIdReference() const {
		return( optionalProbeGenItemId.getReference() );
	}

	const bool CFGenKbGenItemByProbeIdxKey::isOptionalProbeGenItemIdNull() const {
		return( optionalProbeGenItemId.isNull() );
	}

	void CFGenKbGenItemByProbeIdxKey::setOptionalProbeGenItemIdNull() {
		optionalProbeGenItemId.setNull();
	}

	void CFGenKbGenItemByProbeIdxKey::setOptionalProbeGenItemIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalProbeGenItemIdValue" );
		if( value < cfcore::CFGenKbGenItemBuff::PROBEGENITEMID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::PROBEGENITEMID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbGenItemBuff::PROBEGENITEMID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::PROBEGENITEMID_MAX_VALUE );
		}
		optionalProbeGenItemId.setValue( value );
	}

	size_t CFGenKbGenItemByProbeIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalProbeTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalProbeTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalProbeCartridgeIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalProbeGenItemIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGenItemByProbeIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenItemByProbeIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ProbeTenantId( "ProbeTenantId" );
		static const std::string S_ProbeCartridgeId( "ProbeCartridgeId" );
		static const std::string S_ProbeGenItemId( "ProbeGenItemId" );
		std::string ret( S_Preamble );
		if( ! isOptionalProbeTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeTenantId, getOptionalProbeTenantIdValue() ) );
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeCartridgeId, getOptionalProbeCartridgeIdValue() ) );
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeGenItemId, getOptionalProbeGenItemIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator <( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator <( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator <=( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator <=( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator ==( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				if( getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				if( getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				if( getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator ==( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				if( getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				if( getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				if( getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator !=( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator !=( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator >=( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator >=( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator >( const CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenItemByProbeIdxKey::operator >( const CFGenKbGenItemBuff& rhs ) {
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGenItemByProbeIdxKey CFGenKbGenItemByProbeIdxKey::operator =( cfcore::CFGenKbGenItemByProbeIdxKey& src ) {
		if( src.isOptionalProbeTenantIdNull() ) {
			setOptionalProbeTenantIdNull();
		}
		else {
			setOptionalProbeTenantIdValue( src.getOptionalProbeTenantIdValue() );
		}
		if( src.isOptionalProbeCartridgeIdNull() ) {
			setOptionalProbeCartridgeIdNull();
		}
		else {
			setOptionalProbeCartridgeIdValue( src.getOptionalProbeCartridgeIdValue() );
		}
		if( src.isOptionalProbeGenItemIdNull() ) {
			setOptionalProbeGenItemIdNull();
		}
		else {
			setOptionalProbeGenItemIdValue( src.getOptionalProbeGenItemIdValue() );
		}
		return( *this );
	}

	CFGenKbGenItemByProbeIdxKey CFGenKbGenItemByProbeIdxKey::operator =( cfcore::CFGenKbGenItemBuff& src ) {
		if( src.isOptionalProbeTenantIdNull() ) {
			setOptionalProbeTenantIdNull();
		}
		else {
			setOptionalProbeTenantIdValue( src.getOptionalProbeTenantIdValue() );
		}
		if( src.isOptionalProbeCartridgeIdNull() ) {
			setOptionalProbeCartridgeIdNull();
		}
		else {
			setOptionalProbeCartridgeIdValue( src.getOptionalProbeCartridgeIdValue() );
		}
		if( src.isOptionalProbeGenItemIdNull() ) {
			setOptionalProbeGenItemIdNull();
		}
		else {
			setOptionalProbeGenItemIdValue( src.getOptionalProbeGenItemIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				if( lhs.getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				if( lhs.getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				if( lhs.getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				if( lhs.getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				if( lhs.getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				if( lhs.getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemByProbeIdxKey& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByProbeIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

