// Description: Java 11 implementation of a GelIterator by LastIdx index key object.

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

public class CFGenKbGelIteratorByLastIdxKey
	implements Comparable<Object>,
		Serializable
{
	protected String optionalExpandLast;
	public CFGenKbGelIteratorByLastIdxKey() {
		optionalExpandLast = null;
	}

	public String getOptionalExpandLast() {
		return( optionalExpandLast );
	}

	public void setOptionalExpandLast( String value ) {
		if( value == null ) {
			optionalExpandLast = null;
		}
		else if( value.length() > 127 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setOptionalExpandLast",
				1,
				"value.length()",
				value.length(),
				127 );
		}
		else {
			optionalExpandLast = value;
		}
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFGenKbGelIteratorByLastIdxKey ) {
			CFGenKbGelIteratorByLastIdxKey rhs = (CFGenKbGelIteratorByLastIdxKey)obj;
			if( getOptionalExpandLast() != null ) {
				if( rhs.getOptionalExpandLast() != null ) {
					if( ! getOptionalExpandLast().equals( rhs.getOptionalExpandLast() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalExpandLast() != null ) {
					return( false );
				}
			}
			return( true );
		}
		else if( obj instanceof CFGenKbGelIteratorBuff ) {
			CFGenKbGelIteratorBuff rhs = (CFGenKbGelIteratorBuff)obj;
			if( getOptionalExpandLast() != null ) {
				if( rhs.getOptionalExpandLast() != null ) {
					if( ! getOptionalExpandLast().equals( rhs.getOptionalExpandLast() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalExpandLast() != null ) {
					return( false );
				}
			}
			return( true );
		}
		else {
			return( false );
		}
	}

	public int hashCode() {
		int hashCode = 0;
		if( getOptionalExpandLast() != null ) {
			hashCode = hashCode + getOptionalExpandLast().hashCode();
		}
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( 1 );
		}
		else if( obj instanceof CFGenKbGelIteratorByLastIdxKey ) {
			CFGenKbGelIteratorByLastIdxKey rhs = (CFGenKbGelIteratorByLastIdxKey)obj;
			if( getOptionalExpandLast() != null ) {
				if( rhs.getOptionalExpandLast() != null ) {
					int cmp = getOptionalExpandLast().compareTo( rhs.getOptionalExpandLast() );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalExpandLast() != null ) {
					return( -1 );
				}
			}
			return( 0 );
		}
		else if( obj instanceof CFGenKbGelIteratorBuff ) {
			CFGenKbGelIteratorBuff rhs = (CFGenKbGelIteratorBuff)obj;
			if( getOptionalExpandLast() != null ) {
				if( rhs.getOptionalExpandLast() != null ) {
					int cmp = getOptionalExpandLast().compareTo( rhs.getOptionalExpandLast() );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalExpandLast() != null ) {
					return( -1 );
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
		String ret = "<CFGenKbGelIteratorByLastIdx"
			+ " OptionalExpandLast=" + ( ( getOptionalExpandLast() == null ) ? "null" : "\"" + CFGenKbSchema.xmlEncodeString( getOptionalExpandLast() ) + "\"" )
			+ "/>";
		return( ret );
	}
}
