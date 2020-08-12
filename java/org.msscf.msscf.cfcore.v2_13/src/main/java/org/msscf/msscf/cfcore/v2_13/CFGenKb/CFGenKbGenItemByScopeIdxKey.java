// Description: Java 11 implementation of a GenItem by ScopeIdx index key object.

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

package org.msscf.msscf.cfcore.v2_13.CFGenKb;

import java.lang.reflect.*;
import java.io.*;
import java.math.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.cflib.v2_13.CFLib.*;

public class CFGenKbGenItemByScopeIdxKey
	implements Comparable<Object>,
		Serializable
{
	protected Short optionalScopeDefId;
	public CFGenKbGenItemByScopeIdxKey() {
		optionalScopeDefId = null;
	}

	public Short getOptionalScopeDefId() {
		return( optionalScopeDefId );
	}

	public void setOptionalScopeDefId( Short value ) {
		if( value == null ) {
			optionalScopeDefId = null;
		}
		else if( value < CFGenKbGenItemBuff.SCOPEDEFID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalScopeDefId",
				1,
				"value",
				value,
				CFGenKbGenItemBuff.SCOPEDEFID_MIN_VALUE );
		}
		else if( value > CFGenKbGenItemBuff.SCOPEDEFID_MAX_VALUE ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setOptionalScopeDefId",
				1,
				"value",
				value,
				CFGenKbGenItemBuff.SCOPEDEFID_MAX_VALUE );
		}
		else {
			optionalScopeDefId = value;
		}
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFGenKbGenItemByScopeIdxKey ) {
			CFGenKbGenItemByScopeIdxKey rhs = (CFGenKbGenItemByScopeIdxKey)obj;
			if( getOptionalScopeDefId() != null ) {
				if( rhs.getOptionalScopeDefId() != null ) {
					if( ! getOptionalScopeDefId().equals( rhs.getOptionalScopeDefId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalScopeDefId() != null ) {
					return( false );
				}
			}
			return( true );
		}
		else if( obj instanceof CFGenKbGenItemBuff ) {
			CFGenKbGenItemBuff rhs = (CFGenKbGenItemBuff)obj;
			if( getOptionalScopeDefId() != null ) {
				if( rhs.getOptionalScopeDefId() != null ) {
					if( ! getOptionalScopeDefId().equals( rhs.getOptionalScopeDefId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalScopeDefId() != null ) {
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
		if( getOptionalScopeDefId() != null ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalScopeDefId();
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
		else if( obj instanceof CFGenKbGenItemByScopeIdxKey ) {
			CFGenKbGenItemByScopeIdxKey rhs = (CFGenKbGenItemByScopeIdxKey)obj;
			if( getOptionalScopeDefId() != null ) {
				Short lhsScopeDefId = getOptionalScopeDefId();
				if( rhs.getOptionalScopeDefId() != null ) {
					Short rhsScopeDefId = rhs.getOptionalScopeDefId();
					int cmp = lhsScopeDefId.compareTo( rhsScopeDefId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalScopeDefId() != null ) {
					return( -1 );
				}
			}
			return( 0 );
		}
		else if( obj instanceof CFGenKbGenItemBuff ) {
			CFGenKbGenItemBuff rhs = (CFGenKbGenItemBuff)obj;
			if( getOptionalScopeDefId() != null ) {
				Short lhsScopeDefId = getOptionalScopeDefId();
				if( rhs.getOptionalScopeDefId() != null ) {
					Short rhsScopeDefId = rhs.getOptionalScopeDefId();
					int cmp = lhsScopeDefId.compareTo( rhsScopeDefId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalScopeDefId() != null ) {
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
		String ret = "<CFGenKbGenItemByScopeIdx"
			+ " OptionalScopeDefId=" + ( ( getOptionalScopeDefId() == null ) ? "null" : "\"" + getOptionalScopeDefId().toString() + "\"" )
			+ "/>";
		return( ret );
	}
}
