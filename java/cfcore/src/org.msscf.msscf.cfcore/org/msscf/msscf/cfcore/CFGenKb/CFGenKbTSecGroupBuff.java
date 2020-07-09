// Description: Java 11 implementation of a TSecGroup buffer object.

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
import com.github.msobkow.cflib.CFLib.*;

public class CFGenKbTSecGroupBuff
{
	public final static String CLASS_CODE = "a911";
	public final static String S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	public final static UUID INIT_CREATEDBY = UUID.fromString( S_INIT_CREATEDBY );
	public final static String S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	public final static UUID INIT_UPDATEDBY = UUID.fromString( S_INIT_UPDATEDBY );
	public static final long TENANTID_INIT_VALUE = 0L;
	public static final int TSECGROUPID_INIT_VALUE = 0;
	public static final String NAME_INIT_VALUE = new String( "" );
	public final static boolean ISVISIBLE_INIT_VALUE = false;
	public static final long TENANTID_MIN_VALUE = 0L;
	public static final int TSECGROUPID_MIN_VALUE = 0;
	protected UUID createdByUserId = CFGenKbTSecGroupBuff.INIT_CREATEDBY;
	protected Calendar createdAt = Calendar.getInstance();
	protected UUID updatedByUserId = CFGenKbTSecGroupBuff.INIT_UPDATEDBY;
	protected Calendar updatedAt = Calendar.getInstance();
	protected long requiredTenantId;
	protected int requiredTSecGroupId;
	protected String requiredName;
	protected boolean requiredIsVisible;
	protected int requiredRevision;
	public CFGenKbTSecGroupBuff() {
		requiredTenantId = CFGenKbTSecGroupBuff.TENANTID_INIT_VALUE;
		requiredTSecGroupId = CFGenKbTSecGroupBuff.TSECGROUPID_INIT_VALUE;
		requiredName = new String( CFGenKbTSecGroupBuff.NAME_INIT_VALUE );
		requiredIsVisible = CFGenKbTSecGroupBuff.ISVISIBLE_INIT_VALUE;
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
		if( value < CFGenKbTSecGroupBuff.TENANTID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setRequiredTenantId",
				1,
				"value",
				value,
				CFGenKbTSecGroupBuff.TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	public int getRequiredTSecGroupId() {
		return( requiredTSecGroupId );
	}

	public void setRequiredTSecGroupId( int value ) {
		if( value < CFGenKbTSecGroupBuff.TSECGROUPID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setRequiredTSecGroupId",
				1,
				"value",
				value,
				CFGenKbTSecGroupBuff.TSECGROUPID_MIN_VALUE );
		}
		requiredTSecGroupId = value;
	}

	public String getRequiredName() {
		return( requiredName );
	}

	public void setRequiredName( String value ) {
		if( value == null ) {
			throw new CFLibNullArgumentException( getClass(),
				"setRequiredName",
				1,
				"value" );
		}
		if( value.length() > 64 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setRequiredName",
				1,
				"value.length()",
				value.length(),
				64 );
		}
		requiredName = value;
	}

	public boolean getRequiredIsVisible() {
		return( requiredIsVisible );
	}

	public void setRequiredIsVisible( boolean value ) {
		requiredIsVisible = value;
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
		else if( obj instanceof CFGenKbTSecGroupBuff ) {
			CFGenKbTSecGroupBuff rhs = (CFGenKbTSecGroupBuff)obj;
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
			if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
				return( false );
			}
			if( ! getRequiredName().equals( rhs.getRequiredName() ) ) {
				return( false );
			}
			if( getRequiredIsVisible() != rhs.getRequiredIsVisible() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbTSecGroupPKey ) {
			CFGenKbTSecGroupPKey rhs = (CFGenKbTSecGroupPKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbTSecGroupByTenantIdxKey ) {
			CFGenKbTSecGroupByTenantIdxKey rhs = (CFGenKbTSecGroupByTenantIdxKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbTSecGroupByTenantVisIdxKey ) {
			CFGenKbTSecGroupByTenantVisIdxKey rhs = (CFGenKbTSecGroupByTenantVisIdxKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredIsVisible() != rhs.getRequiredIsVisible() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFGenKbTSecGroupByUNameIdxKey ) {
			CFGenKbTSecGroupByUNameIdxKey rhs = (CFGenKbTSecGroupByUNameIdxKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( ! getRequiredName().equals( rhs.getRequiredName() ) ) {
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
		hashCode = hashCode + getRequiredTSecGroupId();
		if( getRequiredName() != null ) {
			hashCode = hashCode + getRequiredName().hashCode();
		}
		if( getRequiredIsVisible() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( -1 );
		}
		else if( obj instanceof CFGenKbTSecGroupBuff ) {
			CFGenKbTSecGroupBuff rhs = (CFGenKbTSecGroupBuff)obj;
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
			if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
				return( -1 );
			}
			else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
				return( 1 );
			}
			{
				int cmp = getRequiredName().compareTo( rhs.getRequiredName() );
				if( cmp != 0 ) {
					return( cmp );
				}
			}
			if( getRequiredIsVisible() ) {
				if( ! rhs.getRequiredIsVisible() ) {
					return( 1 );
				}
			}
			else {
				if( rhs.getRequiredIsVisible() ) {
					return( -1 );
				}
			}
			return( 0 );
		}
		else if( obj instanceof CFGenKbTSecGroupPKey ) {
			CFGenKbTSecGroupPKey rhs = (CFGenKbTSecGroupPKey)obj;
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
			return( 0 );
		}
		else if( obj instanceof CFGenKbTSecGroupByTenantIdxKey ) {
			CFGenKbTSecGroupByTenantIdxKey rhs = (CFGenKbTSecGroupByTenantIdxKey)obj;

			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}			return( 0 );
		}
		else if( obj instanceof CFGenKbTSecGroupByTenantVisIdxKey ) {
			CFGenKbTSecGroupByTenantVisIdxKey rhs = (CFGenKbTSecGroupByTenantVisIdxKey)obj;

			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}
			if( getRequiredIsVisible() ) {
				if( ! rhs.getRequiredIsVisible() ) {
					return( 1 );
				}
			}
			else {
				if( rhs.getRequiredIsVisible() ) {
					return( -1 );
				}
			}			return( 0 );
		}
		else if( obj instanceof CFGenKbTSecGroupByUNameIdxKey ) {
			CFGenKbTSecGroupByUNameIdxKey rhs = (CFGenKbTSecGroupByUNameIdxKey)obj;

			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}
			{
				int cmp = getRequiredName().compareTo( rhs.getRequiredName() );
				if( cmp != 0 ) {
					return( cmp );
				}
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

	public void set( CFGenKbTSecGroupBuff src ) {
		setTSecGroupBuff( src );
	}

	public void setTSecGroupBuff( CFGenKbTSecGroupBuff src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGroupId( src.getRequiredTSecGroupId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredName( src.getRequiredName() );
		setRequiredIsVisible( src.getRequiredIsVisible() );
		setRequiredRevision( src.getRequiredRevision() );
	}
}