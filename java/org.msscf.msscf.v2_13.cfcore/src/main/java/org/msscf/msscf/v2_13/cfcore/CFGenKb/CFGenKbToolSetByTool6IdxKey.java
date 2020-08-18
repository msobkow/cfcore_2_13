// Description: Java 11 implementation of a ToolSet by Tool6Idx index key object.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
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

public class CFGenKbToolSetByTool6IdxKey
	implements Comparable<Object>,
		Serializable
{
	protected Short optionalToolId6;
	public CFGenKbToolSetByTool6IdxKey() {
		optionalToolId6 = null;
	}

	public Short getOptionalToolId6() {
		return( optionalToolId6 );
	}

	public void setOptionalToolId6( Short value ) {
		if( value == null ) {
			optionalToolId6 = null;
		}
		else if( value < CFGenKbToolSetBuff.TOOLID6_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalToolId6",
				1,
				"value",
				value,
				CFGenKbToolSetBuff.TOOLID6_MIN_VALUE );
		}
		else if( value > CFGenKbToolSetBuff.TOOLID6_MAX_VALUE ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setOptionalToolId6",
				1,
				"value",
				value,
				CFGenKbToolSetBuff.TOOLID6_MAX_VALUE );
		}
		else {
			optionalToolId6 = value;
		}
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFGenKbToolSetByTool6IdxKey ) {
			CFGenKbToolSetByTool6IdxKey rhs = (CFGenKbToolSetByTool6IdxKey)obj;
			if( getOptionalToolId6() != null ) {
				if( rhs.getOptionalToolId6() != null ) {
					if( ! getOptionalToolId6().equals( rhs.getOptionalToolId6() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalToolId6() != null ) {
					return( false );
				}
			}
			return( true );
		}
		else if( obj instanceof CFGenKbToolSetBuff ) {
			CFGenKbToolSetBuff rhs = (CFGenKbToolSetBuff)obj;
			if( getOptionalToolId6() != null ) {
				if( rhs.getOptionalToolId6() != null ) {
					if( ! getOptionalToolId6().equals( rhs.getOptionalToolId6() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalToolId6() != null ) {
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
		if( getOptionalToolId6() != null ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId6();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( 1 );
		}
		else if( obj instanceof CFGenKbToolSetByTool6IdxKey ) {
			CFGenKbToolSetByTool6IdxKey rhs = (CFGenKbToolSetByTool6IdxKey)obj;
			if( getOptionalToolId6() != null ) {
				Short lhsToolId6 = getOptionalToolId6();
				if( rhs.getOptionalToolId6() != null ) {
					Short rhsToolId6 = rhs.getOptionalToolId6();
					int cmp = lhsToolId6.compareTo( rhsToolId6 );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalToolId6() != null ) {
					return( -1 );
				}
			}
			return( 0 );
		}
		else if( obj instanceof CFGenKbToolSetBuff ) {
			CFGenKbToolSetBuff rhs = (CFGenKbToolSetBuff)obj;
			if( getOptionalToolId6() != null ) {
				Short lhsToolId6 = getOptionalToolId6();
				if( rhs.getOptionalToolId6() != null ) {
					Short rhsToolId6 = rhs.getOptionalToolId6();
					int cmp = lhsToolId6.compareTo( rhsToolId6 );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalToolId6() != null ) {
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
		String ret = "<CFGenKbToolSetByTool6Idx"
			+ " OptionalToolId6=" + ( ( getOptionalToolId6() == null ) ? "null" : "\"" + getOptionalToolId6().toString() + "\"" )
			+ "/>";
		return( ret );
	}
}
