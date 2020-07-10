// Description: Java 11 implementation of a GelSpread by EachIdx index key object.

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
import java.io.*;
import java.math.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import com.github.msobkow.cflib.CFLib.*;

public class CFGenKbGelSpreadByEachIdxKey
	implements Comparable<Object>,
		Serializable
{
	protected String requiredExpandEach;
	public CFGenKbGelSpreadByEachIdxKey() {
		requiredExpandEach = new String( CFGenKbGelSpreadBuff.EXPANDEACH_INIT_VALUE );
	}

	public String getRequiredExpandEach() {
		return( requiredExpandEach );
	}

	public void setRequiredExpandEach( String value ) {
		if( value == null ) {
			throw new CFLibNullArgumentException( getClass(),
				"setRequiredExpandEach",
				1,
				"value" );
		}
		if( value.length() > 127 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setRequiredExpandEach",
				1,
				"value.length()",
				value.length(),
				127 );
		}
		requiredExpandEach = value;
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFGenKbGelSpreadByEachIdxKey ) {
			CFGenKbGelSpreadByEachIdxKey rhs = (CFGenKbGelSpreadByEachIdxKey)obj;
			if( ! getRequiredExpandEach().equals( rhs.getRequiredExpandEach() ) ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbGelSpreadBuff ) {
			CFGenKbGelSpreadBuff rhs = (CFGenKbGelSpreadBuff)obj;
			if( ! getRequiredExpandEach().equals( rhs.getRequiredExpandEach() ) ) {
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
		if( getRequiredExpandEach() != null ) {
			hashCode = hashCode + getRequiredExpandEach().hashCode();
		}
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( 1 );
		}
		else if( obj instanceof CFGenKbGelSpreadByEachIdxKey ) {
			CFGenKbGelSpreadByEachIdxKey rhs = (CFGenKbGelSpreadByEachIdxKey)obj;
			{
				int cmp = getRequiredExpandEach().compareTo( rhs.getRequiredExpandEach() );
				if( cmp != 0 ) {
					return( cmp );
				}
			}
			return( 0 );
		}
		else if( obj instanceof CFGenKbGelSpreadBuff ) {
			CFGenKbGelSpreadBuff rhs = (CFGenKbGelSpreadBuff)obj;
			{
				int cmp = getRequiredExpandEach().compareTo( rhs.getRequiredExpandEach() );
				if( cmp != 0 ) {
					return( cmp );
				}
			}
			return( 0 );
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				"compareTo",
				"obj",
				obj,
				null );
		}
	}

	public String toString() {
		String ret = "<CFGenKbGelSpreadByEachIdx"
			+ " RequiredExpandEach=" + "\"" + CFGenKbSchema.xmlEncodeString( getRequiredExpandEach() ) + "\""
			+ "/>";
		return( ret );
	}
}
