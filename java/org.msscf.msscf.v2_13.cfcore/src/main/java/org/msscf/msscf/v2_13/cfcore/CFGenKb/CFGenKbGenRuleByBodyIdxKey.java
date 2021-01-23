// Description: Java 11 implementation of a GenRule by BodyIdx index key object.

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

public class CFGenKbGenRuleByBodyIdxKey
	implements Comparable<Object>,
		Serializable
{
	protected Long optionalBodyTenantId;
	protected Long optionalBodyGelCacheId;
	protected Long optionalBodyGelId;
	public CFGenKbGenRuleByBodyIdxKey() {
		optionalBodyTenantId = null;
		optionalBodyGelCacheId = null;
		optionalBodyGelId = null;
	}

	public Long getOptionalBodyTenantId() {
		return( optionalBodyTenantId );
	}

	public void setOptionalBodyTenantId( Long value ) {
		if( value == null ) {
			optionalBodyTenantId = null;
		}
		else if( value < CFGenKbGenRuleBuff.BODYTENANTID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalBodyTenantId",
				1,
				"value",
				value,
				CFGenKbGenRuleBuff.BODYTENANTID_MIN_VALUE );
		}
		else {
			optionalBodyTenantId = value;
		}
	}

	public Long getOptionalBodyGelCacheId() {
		return( optionalBodyGelCacheId );
	}

	public void setOptionalBodyGelCacheId( Long value ) {
		if( value == null ) {
			optionalBodyGelCacheId = null;
		}
		else if( value < CFGenKbGenRuleBuff.BODYGELCACHEID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalBodyGelCacheId",
				1,
				"value",
				value,
				CFGenKbGenRuleBuff.BODYGELCACHEID_MIN_VALUE );
		}
		else {
			optionalBodyGelCacheId = value;
		}
	}

	public Long getOptionalBodyGelId() {
		return( optionalBodyGelId );
	}

	public void setOptionalBodyGelId( Long value ) {
		if( value == null ) {
			optionalBodyGelId = null;
		}
		else if( value < CFGenKbGenRuleBuff.BODYGELID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalBodyGelId",
				1,
				"value",
				value,
				CFGenKbGenRuleBuff.BODYGELID_MIN_VALUE );
		}
		else {
			optionalBodyGelId = value;
		}
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFGenKbGenRuleByBodyIdxKey ) {
			CFGenKbGenRuleByBodyIdxKey rhs = (CFGenKbGenRuleByBodyIdxKey)obj;
			if( getOptionalBodyTenantId() != null ) {
				if( rhs.getOptionalBodyTenantId() != null ) {
					if( ! getOptionalBodyTenantId().equals( rhs.getOptionalBodyTenantId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalBodyTenantId() != null ) {
					return( false );
				}
			}
			if( getOptionalBodyGelCacheId() != null ) {
				if( rhs.getOptionalBodyGelCacheId() != null ) {
					if( ! getOptionalBodyGelCacheId().equals( rhs.getOptionalBodyGelCacheId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalBodyGelCacheId() != null ) {
					return( false );
				}
			}
			if( getOptionalBodyGelId() != null ) {
				if( rhs.getOptionalBodyGelId() != null ) {
					if( ! getOptionalBodyGelId().equals( rhs.getOptionalBodyGelId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalBodyGelId() != null ) {
					return( false );
				}
			}
			return( true );
		}
		else if( obj instanceof CFGenKbGenRuleBuff ) {
			CFGenKbGenRuleBuff rhs = (CFGenKbGenRuleBuff)obj;
			if( getOptionalBodyTenantId() != null ) {
				if( rhs.getOptionalBodyTenantId() != null ) {
					if( ! getOptionalBodyTenantId().equals( rhs.getOptionalBodyTenantId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalBodyTenantId() != null ) {
					return( false );
				}
			}
			if( getOptionalBodyGelCacheId() != null ) {
				if( rhs.getOptionalBodyGelCacheId() != null ) {
					if( ! getOptionalBodyGelCacheId().equals( rhs.getOptionalBodyGelCacheId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalBodyGelCacheId() != null ) {
					return( false );
				}
			}
			if( getOptionalBodyGelId() != null ) {
				if( rhs.getOptionalBodyGelId() != null ) {
					if( ! getOptionalBodyGelId().equals( rhs.getOptionalBodyGelId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalBodyGelId() != null ) {
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
		if( getOptionalBodyTenantId() != null ) {
			hashCode = hashCode + getOptionalBodyTenantId().hashCode();
		}
		if( getOptionalBodyGelCacheId() != null ) {
			hashCode = hashCode + getOptionalBodyGelCacheId().hashCode();
		}
		if( getOptionalBodyGelId() != null ) {
			hashCode = hashCode + getOptionalBodyGelId().hashCode();
		}
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( 1 );
		}
		else if( obj instanceof CFGenKbGenRuleByBodyIdxKey ) {
			CFGenKbGenRuleByBodyIdxKey rhs = (CFGenKbGenRuleByBodyIdxKey)obj;
			if( getOptionalBodyTenantId() != null ) {
				Long lhsBodyTenantId = getOptionalBodyTenantId();
				if( rhs.getOptionalBodyTenantId() != null ) {
					Long rhsBodyTenantId = rhs.getOptionalBodyTenantId();
					int cmp = lhsBodyTenantId.compareTo( rhsBodyTenantId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalBodyTenantId() != null ) {
					return( -1 );
				}
			}
			if( getOptionalBodyGelCacheId() != null ) {
				Long lhsBodyGelCacheId = getOptionalBodyGelCacheId();
				if( rhs.getOptionalBodyGelCacheId() != null ) {
					Long rhsBodyGelCacheId = rhs.getOptionalBodyGelCacheId();
					int cmp = lhsBodyGelCacheId.compareTo( rhsBodyGelCacheId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalBodyGelCacheId() != null ) {
					return( -1 );
				}
			}
			if( getOptionalBodyGelId() != null ) {
				Long lhsBodyGelId = getOptionalBodyGelId();
				if( rhs.getOptionalBodyGelId() != null ) {
					Long rhsBodyGelId = rhs.getOptionalBodyGelId();
					int cmp = lhsBodyGelId.compareTo( rhsBodyGelId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalBodyGelId() != null ) {
					return( -1 );
				}
			}
			return( 0 );
		}
		else if( obj instanceof CFGenKbGenRuleBuff ) {
			CFGenKbGenRuleBuff rhs = (CFGenKbGenRuleBuff)obj;
			if( getOptionalBodyTenantId() != null ) {
				Long lhsBodyTenantId = getOptionalBodyTenantId();
				if( rhs.getOptionalBodyTenantId() != null ) {
					Long rhsBodyTenantId = rhs.getOptionalBodyTenantId();
					int cmp = lhsBodyTenantId.compareTo( rhsBodyTenantId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalBodyTenantId() != null ) {
					return( -1 );
				}
			}
			if( getOptionalBodyGelCacheId() != null ) {
				Long lhsBodyGelCacheId = getOptionalBodyGelCacheId();
				if( rhs.getOptionalBodyGelCacheId() != null ) {
					Long rhsBodyGelCacheId = rhs.getOptionalBodyGelCacheId();
					int cmp = lhsBodyGelCacheId.compareTo( rhsBodyGelCacheId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalBodyGelCacheId() != null ) {
					return( -1 );
				}
			}
			if( getOptionalBodyGelId() != null ) {
				Long lhsBodyGelId = getOptionalBodyGelId();
				if( rhs.getOptionalBodyGelId() != null ) {
					Long rhsBodyGelId = rhs.getOptionalBodyGelId();
					int cmp = lhsBodyGelId.compareTo( rhsBodyGelId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalBodyGelId() != null ) {
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
		String ret = "<CFGenKbGenRuleByBodyIdx"
			+ " OptionalBodyTenantId=" + ( ( getOptionalBodyTenantId() == null ) ? "null" : "\"" + getOptionalBodyTenantId().toString() + "\"" )
			+ " OptionalBodyGelCacheId=" + ( ( getOptionalBodyGelCacheId() == null ) ? "null" : "\"" + getOptionalBodyGelCacheId().toString() + "\"" )
			+ " OptionalBodyGelId=" + ( ( getOptionalBodyGelId() == null ) ? "null" : "\"" + getOptionalBodyGelId().toString() + "\"" )
			+ "/>";
		return( ret );
	}
}
