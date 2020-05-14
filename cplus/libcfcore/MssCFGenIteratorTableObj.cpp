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

#include <msscf/MssCFGenIteratorTableObj.hpp>
#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenIteratorObj.hpp>

namespace cfcore {

	MssCFGenIteratorTableObj::MssCFGenIteratorTableObj()
	: CFGenKbGenIteratorTableObj()
	{
	}

	MssCFGenIteratorTableObj::MssCFGenIteratorTableObj( MssCFEngine* schema )
	: CFGenKbGenIteratorTableObj( dynamic_cast<ICFGenKbSchemaObj*>( schema ) )
	{
	}

	MssCFGenIteratorTableObj::~MssCFGenIteratorTableObj() {
	}

	ICFGenKbGenIteratorObj* MssCFGenIteratorTableObj::newInstance() {
		MssCFGenIteratorObj* obj = new MssCFGenIteratorObj( dynamic_cast<MssCFEngine*>( schema ) );
		return( obj );
	}
}

