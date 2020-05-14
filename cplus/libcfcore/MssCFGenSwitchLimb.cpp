/*
 *  MSS Code Factory CFCore 2.13 MssCF
 *
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <msscf/MssCFGenSwitchLimb.hpp>

namespace cfcore {

	const std::string MssCFGenSwitchLimb::CLASS_NAME( "MssCFGenSwitchLimb" );

	MssCFGenSwitchLimb::MssCFGenSwitchLimb(
		const std::string& keyName,
		const std::string& macroName )
	{
		static const std::string S_ProcName( "constructor" );
		static const std::string S_KeyName( "keyName" );
		static const std::string S_MacroName( "macroName" );
		if( keyName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_KeyName );
		}
		if( macroName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_MacroName );
		}
		_KeyName = keyName;
		_MacroName = macroName;
	}

	MssCFGenSwitchLimb::~MssCFGenSwitchLimb() {
	}

	const std::string& MssCFGenSwitchLimb::getKeyName() const {
		return( _KeyName );
	}

	const std::string& MssCFGenSwitchLimb::getMacroName() const {
		return( _MacroName );
	}

	size_t MssCFGenSwitchLimb::hashCode() const {
		return( std::hash<std::string>()(_KeyName) );
	}

	std::string MssCFGenSwitchLimb::toString() {
		static const std::string S_Production( "::=" );
		std::string retval = _KeyName + S_Production + _MacroName;
		return( retval );
	}
}



namespace std {

	bool operator <(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs ) {
		if( lhs.getKeyName() > rhs.getKeyName() ) {
			return( false );
		}
		else if( lhs.getKeyName() < rhs.getKeyName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs ) {
		if( lhs.getKeyName() > rhs.getKeyName() ) {
			return( false );
		}
		else if( lhs.getKeyName() < rhs.getKeyName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs ) {
		if( lhs.getKeyName() != rhs.getKeyName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs ) {
		if( lhs.getKeyName() != rhs.getKeyName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs ) {
		if( lhs.getKeyName() < rhs.getKeyName() ) {
			return( false );
		}
		else if( lhs.getKeyName() > rhs.getKeyName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs ) {
		if( lhs.getKeyName() < rhs.getKeyName() ) {
			return( false );
		}
		else if( lhs.getKeyName() > rhs.getKeyName() ) {
			return( true );
		}
		return( false );
	}
}
