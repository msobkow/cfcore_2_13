// Description: C++18 implementation for a GenRule by BodyIdx index key object.

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

#include <cfgenkb/CFGenKbGenRuleByBodyIdxKey.hpp>
#include <cfgenkb/CFGenKbGenRuleBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenRuleByBodyIdxKey::CLASS_NAME( "CFGenKbGenRuleByBodyIdxKey" );
	const std::string CFGenKbGenRuleByBodyIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGenRuleByBodyIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenRuleByBodyIdxKey::CFGenKbGenRuleByBodyIdxKey() {
		optionalBodyTenantId.setNull();
		optionalBodyGelCacheId.setNull();
		optionalBodyGelId.setNull();
	}

	CFGenKbGenRuleByBodyIdxKey::CFGenKbGenRuleByBodyIdxKey( const CFGenKbGenRuleByBodyIdxKey& src ) {
		optionalBodyTenantId.setNull();
		optionalBodyGelCacheId.setNull();
		optionalBodyGelId.setNull();
		if( src.isOptionalBodyTenantIdNull() ) {
			setOptionalBodyTenantIdNull();
		}
		else {
			setOptionalBodyTenantIdValue( src.getOptionalBodyTenantIdValue() );
		}
		if( src.isOptionalBodyGelCacheIdNull() ) {
			setOptionalBodyGelCacheIdNull();
		}
		else {
			setOptionalBodyGelCacheIdValue( src.getOptionalBodyGelCacheIdValue() );
		}
		if( src.isOptionalBodyGelIdNull() ) {
			setOptionalBodyGelIdNull();
		}
		else {
			setOptionalBodyGelIdValue( src.getOptionalBodyGelIdValue() );
		}
	}

	CFGenKbGenRuleByBodyIdxKey::~CFGenKbGenRuleByBodyIdxKey() {
	}

	const int64_t CFGenKbGenRuleByBodyIdxKey::getOptionalBodyTenantIdValue() const {
		return( optionalBodyTenantId.getValue() );
	}

	const int64_t* CFGenKbGenRuleByBodyIdxKey::getOptionalBodyTenantIdReference() const {
		return( optionalBodyTenantId.getReference() );
	}

	const bool CFGenKbGenRuleByBodyIdxKey::isOptionalBodyTenantIdNull() const {
		return( optionalBodyTenantId.isNull() );
	}

	void CFGenKbGenRuleByBodyIdxKey::setOptionalBodyTenantIdNull() {
		optionalBodyTenantId.setNull();
	}

	void CFGenKbGenRuleByBodyIdxKey::setOptionalBodyTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBodyTenantIdValue" );
		if( value < cfcore::CFGenKbGenRuleBuff::BODYTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenRuleBuff::BODYTENANTID_MIN_VALUE );
		}
		optionalBodyTenantId.setValue( value );
	}

	const int64_t CFGenKbGenRuleByBodyIdxKey::getOptionalBodyGelCacheIdValue() const {
		return( optionalBodyGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenRuleByBodyIdxKey::getOptionalBodyGelCacheIdReference() const {
		return( optionalBodyGelCacheId.getReference() );
	}

	const bool CFGenKbGenRuleByBodyIdxKey::isOptionalBodyGelCacheIdNull() const {
		return( optionalBodyGelCacheId.isNull() );
	}

	void CFGenKbGenRuleByBodyIdxKey::setOptionalBodyGelCacheIdNull() {
		optionalBodyGelCacheId.setNull();
	}

	void CFGenKbGenRuleByBodyIdxKey::setOptionalBodyGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBodyGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenRuleBuff::BODYGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenRuleBuff::BODYGELCACHEID_MIN_VALUE );
		}
		optionalBodyGelCacheId.setValue( value );
	}

	const int64_t CFGenKbGenRuleByBodyIdxKey::getOptionalBodyGelIdValue() const {
		return( optionalBodyGelId.getValue() );
	}

	const int64_t* CFGenKbGenRuleByBodyIdxKey::getOptionalBodyGelIdReference() const {
		return( optionalBodyGelId.getReference() );
	}

	const bool CFGenKbGenRuleByBodyIdxKey::isOptionalBodyGelIdNull() const {
		return( optionalBodyGelId.isNull() );
	}

	void CFGenKbGenRuleByBodyIdxKey::setOptionalBodyGelIdNull() {
		optionalBodyGelId.setNull();
	}

	void CFGenKbGenRuleByBodyIdxKey::setOptionalBodyGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBodyGelIdValue" );
		if( value < cfcore::CFGenKbGenRuleBuff::BODYGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenRuleBuff::BODYGELID_MIN_VALUE );
		}
		optionalBodyGelId.setValue( value );
	}

	size_t CFGenKbGenRuleByBodyIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalBodyTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBodyTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBodyGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalBodyGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBodyGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbGenRuleByBodyIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenRuleByBodyIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_BodyTenantId( "BodyTenantId" );
		static const std::string S_BodyGelCacheId( "BodyGelCacheId" );
		static const std::string S_BodyGelId( "BodyGelId" );
		std::string ret( S_Preamble );
		if( ! isOptionalBodyTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyTenantId, getOptionalBodyTenantIdValue() ) );
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyGelCacheId, getOptionalBodyGelCacheIdValue() ) );
		}
		if( ! isOptionalBodyGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyGelId, getOptionalBodyGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator <( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator <( const CFGenKbGenRuleBuff& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator <=( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator <=( const CFGenKbGenRuleBuff& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator ==( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				if( getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				if( getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				if( getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator ==( const CFGenKbGenRuleBuff& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				if( getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				if( getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				if( getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator !=( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator !=( const CFGenKbGenRuleBuff& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator >=( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator >=( const CFGenKbGenRuleBuff& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator >( const CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenRuleByBodyIdxKey::operator >( const CFGenKbGenRuleBuff& rhs ) {
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGenRuleByBodyIdxKey CFGenKbGenRuleByBodyIdxKey::operator =( cfcore::CFGenKbGenRuleByBodyIdxKey& src ) {
		if( src.isOptionalBodyTenantIdNull() ) {
			setOptionalBodyTenantIdNull();
		}
		else {
			setOptionalBodyTenantIdValue( src.getOptionalBodyTenantIdValue() );
		}
		if( src.isOptionalBodyGelCacheIdNull() ) {
			setOptionalBodyGelCacheIdNull();
		}
		else {
			setOptionalBodyGelCacheIdValue( src.getOptionalBodyGelCacheIdValue() );
		}
		if( src.isOptionalBodyGelIdNull() ) {
			setOptionalBodyGelIdNull();
		}
		else {
			setOptionalBodyGelIdValue( src.getOptionalBodyGelIdValue() );
		}
		return( *this );
	}

	CFGenKbGenRuleByBodyIdxKey CFGenKbGenRuleByBodyIdxKey::operator =( cfcore::CFGenKbGenRuleBuff& src ) {
		if( src.isOptionalBodyTenantIdNull() ) {
			setOptionalBodyTenantIdNull();
		}
		else {
			setOptionalBodyTenantIdValue( src.getOptionalBodyTenantIdValue() );
		}
		if( src.isOptionalBodyGelCacheIdNull() ) {
			setOptionalBodyGelCacheIdNull();
		}
		else {
			setOptionalBodyGelCacheIdValue( src.getOptionalBodyGelCacheIdValue() );
		}
		if( src.isOptionalBodyGelIdNull() ) {
			setOptionalBodyGelIdNull();
		}
		else {
			setOptionalBodyGelIdValue( src.getOptionalBodyGelIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				if( lhs.getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				if( lhs.getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				if( lhs.getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				if( lhs.getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				if( lhs.getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				if( lhs.getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleByBodyIdxKey& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenRuleByBodyIdxKey& lhs, const cfcore::CFGenKbGenRuleBuff& rhs ) {
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

