// Description: Java 11 implementation of a TSecGrpInc buffer object.

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

public class CFGenKbTSecGrpIncBuff
{
	public final static String CLASS_CODE = "a912";
	public final static String S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	public final static UUID INIT_CREATEDBY = UUID.fromString( S_INIT_CREATEDBY );
	public final static String S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	public final static UUID INIT_UPDATEDBY = UUID.fromString( S_INIT_UPDATEDBY );
	public static final long TENANTID_INIT_VALUE = 0L;
	public static final long TSECGRPINCID_INIT_VALUE = 0L;
	public static final int TSECGROUPID_INIT_VALUE = 0;
	public static final int INCLUDEGROUPID_INIT_VALUE = 0;
	public static final long TENANTID_MIN_VALUE = 0L;
	public static final long TSECGRPINCID_MIN_VALUE = 0L;
	public static final int TSECGROUPID_MIN_VALUE = 0;
	public static final int INCLUDEGROUPID_MIN_VALUE = 0;
	protected UUID createdByUserId = CFGenKbTSecGrpIncBuff.INIT_CREATEDBY;
	protected Calendar createdAt = Calendar.getInstance();
	protected UUID updatedByUserId = CFGenKbTSecGrpIncBuff.INIT_UPDATEDBY;
	protected Calendar updatedAt = Calendar.getInstance();
	protected long requiredTenantId;
	protected long requiredTSecGrpIncId;
	protected int requiredTSecGroupId;
	protected int requiredIncludeGroupId;
	protected int requiredRevision;
	public CFGenKbTSecGrpIncBuff() {
		requiredTenantId = CFGenKbTSecGrpIncBuff.TENANTID_INIT_VALUE;
		requiredTSecGrpIncId = CFGenKbTSecGrpIncBuff.TSECGRPINCID_INIT_VALUE;
		requiredTSecGroupId = CFGenKbTSecGrpIncBuff.TSECGROUPID_INIT_VALUE;
		requiredIncludeGroupId = CFGenKbTSecGrpIncBuff.INCLUDEGROUPID_INIT_VALUE;
	}

	public String getClassCode() {
		return( CLASS_CODE );
	}

	public UUID getCreatedByUserId() {
		return( createdByUserId );
	}

	public void setCreatedByUserId( UUID value ) {
		createdByUserId = value;
	}

	public Calendar getCreatedAt() {
		return( createdAt );
	}

	public void setCreatedAt( Calendar value ) {
		createdAt = value;
	}

	public UUID getUpdatedByUserId() {
		return( updatedByUserId );
	}

	public void setUpdatedByUserId( UUID value ) {
		updatedByUserId = value;
	}

	public Calendar getUpdatedAt() {
		return( updatedAt );
	}

	public void setUpdatedAt( Calendar value ) {
		updatedAt = value;
	}
	public long getRequiredTenantId() {
		return( requiredTenantId );
	}

	public void setRequiredTenantId( long value ) {
		if( value < CFGenKbTSecGrpIncBuff.TENANTID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setRequiredTenantId",
				1,
				"value",
				value,
				CFGenKbTSecGrpIncBuff.TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	public long getRequiredTSecGrpIncId() {
		return( requiredTSecGrpIncId );
	}

	public void setRequiredTSecGrpIncId( long value ) {
		if( value < CFGenKbTSecGrpIncBuff.TSECGRPINCID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setRequiredTSecGrpIncId",
				1,
				"value",
				value,
				CFGenKbTSecGrpIncBuff.TSECGRPINCID_MIN_VALUE );
		}
		requiredTSecGrpIncId = value;
	}

	public int getRequiredTSecGroupId() {
		return( requiredTSecGroupId );
	}

	public void setRequiredTSecGroupId( int value ) {
		if( value < CFGenKbTSecGrpIncBuff.TSECGROUPID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setRequiredTSecGroupId",
				1,
				"value",
				value,
				CFGenKbTSecGrpIncBuff.TSECGROUPID_MIN_VALUE );
		}
		requiredTSecGroupId = value;
	}

	public int getRequiredIncludeGroupId() {
		return( requiredIncludeGroupId );
	}

	public void setRequiredIncludeGroupId( int value ) {
		if( value < CFGenKbTSecGrpIncBuff.INCLUDEGROUPID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setRequiredIncludeGroupId",
				1,
				"value",
				value,
				CFGenKbTSecGrpIncBuff.INCLUDEGROUPID_MIN_VALUE );
		}
		requiredIncludeGroupId = value;
	}

	public int getRequiredRevision() {
		return( requiredRevision );
	}

	public void setRequiredRevision( int value ) {
		requiredRevision = value;
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFGenKbTSecGrpIncBuff ) {
			CFGenKbTSecGrpIncBuff rhs = (CFGenKbTSecGrpIncBuff)obj;
			if( ! getCreatedByUserId().equals( rhs.getCreatedByUserId() ) ) {
				return( false );
			}
			if( ! getCreatedAt().equals( rhs.getCreatedAt() ) ) {
				return( false );
			}
			if( ! getUpdatedByUserId().equals( rhs.getUpdatedByUserId() ) ) {
				return( false );
			}
			if( ! getUpdatedAt().equals( rhs.getUpdatedAt() ) ) {
				return( false );
			}
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredTSecGrpIncId() != rhs.getRequiredTSecGrpIncId() ) {
				return( false );
			}
			if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
				return( false );
			}
			if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbTSecGrpIncPKey ) {
			CFGenKbTSecGrpIncPKey rhs = (CFGenKbTSecGrpIncPKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredTSecGrpIncId() != rhs.getRequiredTSecGrpIncId() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbTSecGrpIncByTenantIdxKey ) {
			CFGenKbTSecGrpIncByTenantIdxKey rhs = (CFGenKbTSecGrpIncByTenantIdxKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbTSecGrpIncByGroupIdxKey ) {
			CFGenKbTSecGrpIncByGroupIdxKey rhs = (CFGenKbTSecGrpIncByGroupIdxKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbTSecGrpIncByIncludeIdxKey ) {
			CFGenKbTSecGrpIncByIncludeIdxKey rhs = (CFGenKbTSecGrpIncByIncludeIdxKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbTSecGrpIncByUIncludeIdxKey ) {
			CFGenKbTSecGrpIncByUIncludeIdxKey rhs = (CFGenKbTSecGrpIncByUIncludeIdxKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
				return( false );
			}
			if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
				return( false );
			}
			return( true );
		}
		else {
			boolean retval = super.equals( obj );
			return( retval );
		}
	}

	public int hashCode() {
		int hashCode = 0;
		hashCode = hashCode + getCreatedByUserId().hashCode();
		hashCode = hashCode + getCreatedAt().hashCode();
		hashCode = hashCode + getUpdatedByUserId().hashCode();
		hashCode = hashCode + getUpdatedAt().hashCode();
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredTSecGrpIncId() );
		hashCode = hashCode + getRequiredTSecGroupId();
		hashCode = hashCode + getRequiredIncludeGroupId();
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( -1 );
		}
		else if( obj instanceof CFGenKbTSecGrpIncBuff ) {
			CFGenKbTSecGrpIncBuff rhs = (CFGenKbTSecGrpIncBuff)obj;
			int retval = 0;
			{
				int cmp = getCreatedByUserId().compareTo( rhs.getCreatedByUserId() );
				if( cmp != 0 ) {
					return( cmp );
				}

				cmp = getCreatedAt().compareTo( rhs.getCreatedAt() );
				if( cmp != 0 ) {
					return( cmp );
				}

				cmp = getUpdatedByUserId().compareTo( rhs.getUpdatedByUserId() );
				if( cmp != 0 ) {
					return( cmp );
				}

				cmp = getUpdatedAt().compareTo( rhs.getUpdatedAt() );
				if( cmp != 0 ) {
					return( cmp );
				}
			}
			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}
			if( getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
				return( -1 );
			}
			else if( getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
				return( 1 );
			}
			if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
				return( -1 );
			}
			else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
				return( 1 );
			}
			if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
				return( -1 );
			}
			else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
				return( 1 );
			}
			return( 0 );
		}
		else if( obj instanceof CFGenKbTSecGrpIncPKey ) {
			CFGenKbTSecGrpIncPKey rhs = (CFGenKbTSecGrpIncPKey)obj;
			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}
			if( getRequiredTSecGrpIncId() < rhs.getRequiredTSecGrpIncId() ) {
				return( -1 );
			}
			else if( getRequiredTSecGrpIncId() > rhs.getRequiredTSecGrpIncId() ) {
				return( 1 );
			}
			return( 0 );
		}
		else if( obj instanceof CFGenKbTSecGrpIncByTenantIdxKey ) {
			CFGenKbTSecGrpIncByTenantIdxKey rhs = (CFGenKbTSecGrpIncByTenantIdxKey)obj;

			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}			return( 0 );
		}
		else if( obj instanceof CFGenKbTSecGrpIncByGroupIdxKey ) {
			CFGenKbTSecGrpIncByGroupIdxKey rhs = (CFGenKbTSecGrpIncByGroupIdxKey)obj;

			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}
			if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
				return( -1 );
			}
			else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
				return( 1 );
			}			return( 0 );
		}
		else if( obj instanceof CFGenKbTSecGrpIncByIncludeIdxKey ) {
			CFGenKbTSecGrpIncByIncludeIdxKey rhs = (CFGenKbTSecGrpIncByIncludeIdxKey)obj;

			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}
			if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
				return( -1 );
			}
			else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
				return( 1 );
			}			return( 0 );
		}
		else if( obj instanceof CFGenKbTSecGrpIncByUIncludeIdxKey ) {
			CFGenKbTSecGrpIncByUIncludeIdxKey rhs = (CFGenKbTSecGrpIncByUIncludeIdxKey)obj;

			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}
			if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
				return( -1 );
			}
			else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
				return( 1 );
			}
			if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
				return( -1 );
			}
			else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
				return( 1 );
			}			return( 0 );
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				"compareTo",
				"obj",
				obj,
				null );
		}
	}

	public void set( CFGenKbTSecGrpIncBuff src ) {
		setTSecGrpIncBuff( src );
	}

	public void setTSecGrpIncBuff( CFGenKbTSecGrpIncBuff src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGrpIncId( src.getRequiredTSecGrpIncId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredTSecGroupId( src.getRequiredTSecGroupId() );
		setRequiredIncludeGroupId( src.getRequiredIncludeGroupId() );
		setRequiredRevision( src.getRequiredRevision() );
	}
}
