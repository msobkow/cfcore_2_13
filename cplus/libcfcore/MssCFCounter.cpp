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

#include <msscf/MssCFCounter.hpp>

namespace cfcore {
 
	const std::string MssCFCounter::CLASS_NAME( "MssCFCounter" );

	MssCFCounter::MssCFCounter() {
		name = "";
		counter = 0;
	}

	MssCFCounter::MssCFCounter( const std::string& argName ) {
		static const std::string S_ProcName( "constructor" );
		static const std::string S_ArgName( "argName" );
		if( argName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_ArgName );
		}
		name = argName;
		counter = 0;
	}

	MssCFCounter::~MssCFCounter() {
	}

	const std::string& MssCFCounter::getName() const {
		return( name );
	}

	void MssCFCounter::setName( const std::string& value ) {
		static const std::string S_ProcName( "setName" );
		static const std::string S_Value( "value" );
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_Value );
		}
		name = value;
	}

	int MssCFCounter::getCounter() const {
		return( counter );
	}

	void MssCFCounter::setCounter( int value ) {
		static const std::string S_ProcName( "setCounter" );
		static const std::string S_Value( "value" );
		if( value < 0 ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_Value,
				value,
				0 );
		}
		counter = value;
	}

	void MssCFCounter::increment() {
		if( counter < INT32_MAX ) {
			counter = counter + 1;
		}
	}

	void MssCFCounter::decrement() {
		if( counter > 0 ) {
			counter = counter - 1;
		}
	}
}

