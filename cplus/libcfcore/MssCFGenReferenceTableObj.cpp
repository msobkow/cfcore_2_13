/*
 *  MSS Code Factory CFCore 2.13 MssCF
 *
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <msscf/MssCFGenReferenceTableObj.hpp>
#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenReferenceObj.hpp>

namespace cfcore {

	MssCFGenReferenceTableObj::MssCFGenReferenceTableObj()
	: CFGenKbGenReferenceTableObj()
	{
	}

	MssCFGenReferenceTableObj::MssCFGenReferenceTableObj( MssCFEngine* schema)
	: CFGenKbGenReferenceTableObj( dynamic_cast<ICFGenKbSchemaObj*>( schema ) )
	{
	}

	MssCFGenReferenceTableObj::~MssCFGenReferenceTableObj() {
	}

	ICFGenKbGenReferenceObj* MssCFGenReferenceTableObj::newInstance() {
		MssCFGenReferenceObj* obj = new MssCFGenReferenceObj( dynamic_cast<MssCFEngine*>( schema ) );
		return( obj );
	}
}

