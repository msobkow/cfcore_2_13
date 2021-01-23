// Description: Java 11 implementation of a GelSpread by BeforeIdx index key object.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
 *	
 *		This file is part of MSS Code Factory.
 *	
 *		MSS Code Factory is available under dual commercial license from Mark Stephen
 *		Sobkow, or under the terms of the GNU Lesser General Public License, Version 3
 *		or later.
 *	
 *	    MSS Code Factory is free software: you can redistribute it and/or modify
 *	    it under the terms of the GNU Lesser General Public License as published by
 *	    the Free Software Foundation, either version 3 of the License, or
 *	    (at your option) any later version.
 *	
 *	    MSS Code Factory is distributed in the hope that it will be useful,
 *	    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	    GNU Lesser General Public License for more details.
 *	
 *	    You should have received a copy of the GNU Lesser General Public License
 *	    along with MSS Code Factory.  If not, see <https://www.gnu.org/licenses/>.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

package org.msscf.msscf.v2_13.cfcore.CFGenKb;

import java.lang.reflect.*;
import java.io.*;
import java.math.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;

public class CFGenKbGelSpreadByBeforeIdxKey
	implements Comparable<Object>,
		Serializable
{
	protected String optionalExpandBefore;
	public CFGenKbGelSpreadByBeforeIdxKey() {
		optionalExpandBefore = null;
	}

	public String getOptionalExpandBefore() {
		return( optionalExpandBefore );
	}

	public void setOptionalExpandBefore( String value ) {
		if( value == null ) {
			optionalExpandBefore = null;
		}
		else if( value.length() > 127 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setOptionalExpandBefore",
				1,
				"value.length()",
				value.length(),
				127 );
		}
		else {
			optionalExpandBefore = value;
		}
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFGenKbGelSpreadByBeforeIdxKey ) {
			CFGenKbGelSpreadByBeforeIdxKey rhs = (CFGenKbGelSpreadByBeforeIdxKey)obj;
			if( getOptionalExpandBefore() != null ) {
				if( rhs.getOptionalExpandBefore() != null ) {
					if( ! getOptionalExpandBefore().equals( rhs.getOptionalExpandBefore() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalExpandBefore() != null ) {
					return( false );
				}
			}
			return( true );
		}
		else if( obj instanceof CFGenKbGelSpreadBuff ) {
			CFGenKbGelSpreadBuff rhs = (CFGenKbGelSpreadBuff)obj;
			if( getOptionalExpandBefore() != null ) {
				if( rhs.getOptionalExpandBefore() != null ) {
					if( ! getOptionalExpandBefore().equals( rhs.getOptionalExpandBefore() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalExpandBefore() != null ) {
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
		if( getOptionalExpandBefore() != null ) {
			hashCode = hashCode + getOptionalExpandBefore().hashCode();
		}
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( 1 );
		}
		else if( obj instanceof CFGenKbGelSpreadByBeforeIdxKey ) {
			CFGenKbGelSpreadByBeforeIdxKey rhs = (CFGenKbGelSpreadByBeforeIdxKey)obj;
			if( getOptionalExpandBefore() != null ) {
				if( rhs.getOptionalExpandBefore() != null ) {
					int cmp = getOptionalExpandBefore().compareTo( rhs.getOptionalExpandBefore() );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalExpandBefore() != null ) {
					return( -1 );
				}
			}
			return( 0 );
		}
		else if( obj instanceof CFGenKbGelSpreadBuff ) {
			CFGenKbGelSpreadBuff rhs = (CFGenKbGelSpreadBuff)obj;
			if( getOptionalExpandBefore() != null ) {
				if( rhs.getOptionalExpandBefore() != null ) {
					int cmp = getOptionalExpandBefore().compareTo( rhs.getOptionalExpandBefore() );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalExpandBefore() != null ) {
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
		String ret = "<CFGenKbGelSpreadByBeforeIdx"
			+ " OptionalExpandBefore=" + ( ( getOptionalExpandBefore() == null ) ? "null" : "\"" + CFGenKbSchema.xmlEncodeString( getOptionalExpandBefore() ) + "\"" )
			+ "/>";
		return( ret );
	}
}
