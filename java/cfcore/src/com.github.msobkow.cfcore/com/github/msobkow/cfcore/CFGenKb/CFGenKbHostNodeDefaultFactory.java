
// Description: Java 11 Default Factory implementation for HostNode.

/*
 *	com.github.msobkow.CFCore
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

package com.github.msobkow.cfcore.CFGenKb;

import java.lang.reflect.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import com.github.msobkow.cflib.CFLib.*;

	/*
	 *	CFGenKbHostNodeFactory implementation for HostNode
	 */
public class CFGenKbHostNodeDefaultFactory
	implements ICFGenKbHostNodeFactory
{
	public CFGenKbHostNodeDefaultFactory() {
	}

	public CFGenKbHostNodePKey newPKey() {
		CFGenKbHostNodePKey pkey =
			new CFGenKbHostNodePKey();
		return( pkey );
	}

	public CFGenKbHostNodeByClusterIdxKey newClusterIdxKey() {
		CFGenKbHostNodeByClusterIdxKey key =
			new CFGenKbHostNodeByClusterIdxKey();
		return( key );
	}

	public CFGenKbHostNodeByUDescrIdxKey newUDescrIdxKey() {
		CFGenKbHostNodeByUDescrIdxKey key =
			new CFGenKbHostNodeByUDescrIdxKey();
		return( key );
	}

	public CFGenKbHostNodeByHostNameIdxKey newHostNameIdxKey() {
		CFGenKbHostNodeByHostNameIdxKey key =
			new CFGenKbHostNodeByHostNameIdxKey();
		return( key );
	}

	public CFGenKbHostNodeBuff newBuff() {
		CFGenKbHostNodeBuff buff =
			new CFGenKbHostNodeBuff();
		return( buff );
	}
}
