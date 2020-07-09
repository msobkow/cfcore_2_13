
// Description: Java 11 Default Factory implementation for SecSession.

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

package org.msscf.msscf.cfcore.CFGenKb;

import java.lang.reflect.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import com.github.msobkow.cflib.CFLib.*;

	/*
	 *	CFGenKbSecSessionFactory implementation for SecSession
	 */
public class CFGenKbSecSessionDefaultFactory
	implements ICFGenKbSecSessionFactory
{
	public CFGenKbSecSessionDefaultFactory() {
	}

	public CFGenKbSecSessionPKey newPKey() {
		CFGenKbSecSessionPKey pkey =
			new CFGenKbSecSessionPKey();
		return( pkey );
	}

	public CFGenKbSecSessionBySecUserIdxKey newSecUserIdxKey() {
		CFGenKbSecSessionBySecUserIdxKey key =
			new CFGenKbSecSessionBySecUserIdxKey();
		return( key );
	}

	public CFGenKbSecSessionBySecDevIdxKey newSecDevIdxKey() {
		CFGenKbSecSessionBySecDevIdxKey key =
			new CFGenKbSecSessionBySecDevIdxKey();
		return( key );
	}

	public CFGenKbSecSessionByStartIdxKey newStartIdxKey() {
		CFGenKbSecSessionByStartIdxKey key =
			new CFGenKbSecSessionByStartIdxKey();
		return( key );
	}

	public CFGenKbSecSessionByFinishIdxKey newFinishIdxKey() {
		CFGenKbSecSessionByFinishIdxKey key =
			new CFGenKbSecSessionByFinishIdxKey();
		return( key );
	}

	public CFGenKbSecSessionBySecProxyIdxKey newSecProxyIdxKey() {
		CFGenKbSecSessionBySecProxyIdxKey key =
			new CFGenKbSecSessionBySecProxyIdxKey();
		return( key );
	}

	public CFGenKbSecSessionBuff newBuff() {
		CFGenKbSecSessionBuff buff =
			new CFGenKbSecSessionBuff();
		return( buff );
	}
}
