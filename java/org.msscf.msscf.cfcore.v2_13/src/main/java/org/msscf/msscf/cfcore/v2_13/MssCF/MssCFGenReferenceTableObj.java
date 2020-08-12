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

package org.msscf.msscf.cfcore.v2_13.MssCF;

import java.lang.reflect.*;
import java.io.*;
import java.net.*;
import java.security.cert.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.cfcore.v2_13.CFGenKb.*;
import org.msscf.msscf.cfcore.v2_13.CFGenKbObj.*;
import org.msscf.msscf.cfcore.v2_13.CFGenKbObj.*;

public class MssCFGenReferenceTableObj
extends CFGenKbGenReferenceTableObj
{
	public MssCFGenReferenceTableObj()
	{
		super();
	}

	public MssCFGenReferenceTableObj(MssCFEngine schema)
	{
		super( schema );
	}

	public ICFGenKbGenReferenceObj newInstance()
	{
		MssCFGenReferenceObj obj = new MssCFGenReferenceObj( (MssCFEngine)schema);
		return (obj);
	}
}
