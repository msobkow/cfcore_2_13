// Description: Java 11 implementation of a DefClass primary key object.

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
import java.io.*;
import java.math.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.cflib.CFLib.*;
import org.apache.commons.codec.binary.Base64;

/*
 *	CFGenKbDefClassPKey Primary Key for DefClass

 *		requiredId	Required object attribute Id. */
public class CFGenKbDefClassPKey
	implements Comparable<Object>,
		Serializable
{

	protected short requiredId;
	public CFGenKbDefClassPKey() {
		requiredId = CFGenKbDefClassBuff.ID_INIT_VALUE;
	}

	public short getRequiredId() {
		return( requiredId );
	}

	public void setRequiredId( short value ) {
		if( value < CFGenKbDefClassBuff.ID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setRequiredId",
				1,
				"value",
				value,
				CFGenKbDefClassBuff.ID_MIN_VALUE );
		}
		if( value > CFGenKbDefClassBuff.ID_MAX_VALUE ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setRequiredId",
				1,
				"value",
				value,
				CFGenKbDefClassBuff.ID_MAX_VALUE );
		}
		requiredId = value;
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFGenKbDefClassPKey ) {
			CFGenKbDefClassPKey rhs = (CFGenKbDefClassPKey)obj;
			if( getRequiredId() != rhs.getRequiredId() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbDefClassBuff ) {
			CFGenKbDefClassBuff rhs = (CFGenKbDefClassBuff)obj;
			if( getRequiredId() != rhs.getRequiredId() ) {
				return( false );
			}
			return( true );
		}
		else {
			return( false );
		}
	}

	public int hashCode() {
		int hashCode = 0;
		hashCode = ( hashCode * 0x10000 ) + getRequiredId();
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( -1 );
		}
		else if( obj instanceof CFGenKbDefClassPKey ) {
			CFGenKbDefClassPKey rhs = (CFGenKbDefClassPKey)obj;
			if( getRequiredId() < rhs.getRequiredId() ) {
				return( -1 );
			}
			else if( getRequiredId() > rhs.getRequiredId() ) {
				return( 1 );
			}
			return( 0 );
		}
		else if( obj instanceof CFGenKbDefClassBuff ) {
			CFGenKbDefClassBuff rhs = (CFGenKbDefClassBuff)obj;
			if( getRequiredId() < rhs.getRequiredId() ) {
				return( -1 );
			}
			else if( getRequiredId() > rhs.getRequiredId() ) {
				return( 1 );
			}
			return( 0 );
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				"compareTo",
				"obj",
				obj,
				"CFGenKbDefClassPKey, CFGenKbDefClassBuff" );
		}
	}

	public String toString() {
		String ret = "<CFGenKbDefClassPKey"
			+ " RequiredId=" + "\"" + Short.toString( getRequiredId() ) + "\""
			+ "/>";
		return( ret );
	}
}