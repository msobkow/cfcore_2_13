// Description: Java 11 edit object instance implementation for CFGenKb SecGrpInc.

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

package org.msscf.msscf.v2_13.cfcore.CFGenKbObj;

import java.math.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfcore.CFGenKb.*;

public class CFGenKbSecGrpIncEditObj
	implements ICFGenKbSecGrpIncEditObj
{
	protected ICFGenKbSecGrpIncObj orig;
	protected CFGenKbSecGrpIncBuff buff;
	protected ICFGenKbSecUserObj createdBy = null;
	protected ICFGenKbSecUserObj updatedBy = null;
	protected ICFGenKbClusterObj requiredOwnerCluster;
	protected ICFGenKbSecGroupObj requiredContainerGroup;
	protected ICFGenKbSecGroupObj requiredParentSubGroup;

	public CFGenKbSecGrpIncEditObj( ICFGenKbSecGrpIncObj argOrig ) {
		orig = argOrig;
		getBuff();
		CFGenKbSecGrpIncBuff origBuff = orig.getBuff();
		buff.set( origBuff );
		requiredOwnerCluster = null;
		requiredContainerGroup = null;
		requiredParentSubGroup = null;
	}

	public ICFGenKbSecUserObj getCreatedBy() {
		if( createdBy == null ) {
			CFGenKbSecGrpIncBuff buff = getBuff();
			createdBy = ((ICFGenKbSchemaObj)getSchema()).getSecUserTableObj().readSecUserByIdIdx( buff.getCreatedByUserId() );
		}
		return( createdBy );
	}

	public Calendar getCreatedAt() {
		return( getBuff().getCreatedAt() );
	}

	public ICFGenKbSecUserObj getUpdatedBy() {
		if( updatedBy == null ) {
			CFGenKbSecGrpIncBuff buff = getBuff();
			updatedBy = ((ICFGenKbSchemaObj)getSchema()).getSecUserTableObj().readSecUserByIdIdx( buff.getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	public Calendar getUpdatedAt() {
		return( getBuff().getUpdatedAt() );
	}

	public void setCreatedBy( ICFGenKbSecUserObj value ) {
		createdBy = value;
		if( value != null ) {
			getBuff().setCreatedByUserId( value.getRequiredSecUserId() );
		}
	}

	public void setCreatedAt( Calendar value ) {
		getBuff().setCreatedAt( value );
	}

	public void setUpdatedBy( ICFGenKbSecUserObj value ) {
		updatedBy = value;
		if( value != null ) {
			getBuff().setUpdatedByUserId( value.getRequiredSecUserId() );
		}
	}

	public void setUpdatedAt( Calendar value ) {
		getBuff().setUpdatedAt( value );
	}

	public String getClassCode() {
		return( CFGenKbSecGrpIncObj.CLASS_CODE );
	}

	public String getGenDefName() {
		return( "SecGrpInc" );
	}

	public ICFLibAnyObj getScope() {
		ICFGenKbSecGroupObj scope = getRequiredContainerGroup();
		return( scope );
	}

	public ICFLibAnyObj getObjScope() {
		ICFGenKbSecGroupObj scope = getRequiredContainerGroup();
		return( scope );
	}

	public String getObjName() {
		String objName;
		long val = getRequiredSecGrpIncId();
		objName = Long.toString( val );
		return( objName );
	}

	public ICFLibAnyObj getObjQualifier( Class qualifyingClass ) {
		ICFLibAnyObj container = this;
		if( qualifyingClass != null ) {
			while( container != null ) {
				if( container instanceof ICFGenKbClusterObj ) {
					break;
				}
				else if( container instanceof ICFGenKbTenantObj ) {
					break;
				}
				else if( qualifyingClass.isInstance( container ) ) {
					break;
				}
				container = container.getObjScope();
			}
		}
		else {
			while( container != null ) {
				if( container instanceof ICFGenKbClusterObj ) {
					break;
				}
				else if( container instanceof ICFGenKbTenantObj ) {
					break;
				}
				container = container.getObjScope();
			}
		}
		return( container );
	}

	public ICFLibAnyObj getNamedObject( Class qualifyingClass, String objName ) {
		ICFLibAnyObj topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == null ) {
			return( null );
		}
		ICFLibAnyObj namedObject = topContainer.getNamedObject( objName );
		return( namedObject );
	}

	public ICFLibAnyObj getNamedObject( String objName ) {
		String nextName;
		String remainingName;
		ICFLibAnyObj subObj = null;
		ICFLibAnyObj retObj;
		int nextDot = objName.indexOf( '.' );
		if( nextDot >= 0 ) {
			nextName = objName.substring( 0, nextDot );
			remainingName = objName.substring( nextDot + 1 );
		}
		else {
			nextName = objName;
			remainingName = null;
		}
		if( remainingName == null ) {
			retObj = subObj;
		}
		else if( subObj == null ) {
			retObj = null;
		}
		else {
			retObj = subObj.getNamedObject( remainingName );
		}
		return( retObj );
	}

	public String getObjQualifiedName() {
		String qualName = getObjName();
		ICFLibAnyObj container = getObjScope();
		String containerName;
		while( container != null ) {
			if( container instanceof ICFGenKbClusterObj ) {
				container = null;
			}
			else if( container instanceof ICFGenKbTenantObj ) {
				container = null;
			}
			else {
				containerName = container.getObjName();
				qualName = containerName + "." + qualName;
				container = container.getObjScope();
			}
		}
		return( qualName );
	}

	public String getObjFullName() {
		String fullName = getObjName();
		ICFLibAnyObj container = getObjScope();
		String containerName;
		while( container != null ) {
			if( container instanceof ICFGenKbClusterObj ) {
				container = null;
			}
			else if( container instanceof ICFGenKbTenantObj ) {
				container = null;
			}
			else {
				containerName = container.getObjName();
				fullName = containerName + "." + fullName;
				container = container.getObjScope();
			}
		}
		return( fullName );
	}

	public ICFGenKbSecGrpIncObj realise() {
		// We realise this so that it's buffer will get copied to orig during realization
		ICFGenKbSecGrpIncObj retobj = getSchema().getSecGrpIncTableObj().realiseSecGrpInc( (ICFGenKbSecGrpIncObj)this );
		return( retobj );
	}

	public void forget() {
		getOrigAsSecGrpInc().forget();
	}

	public ICFGenKbSecGrpIncObj read() {
		ICFGenKbSecGrpIncObj retval = getOrigAsSecGrpInc().read();
		if( retval != orig ) {
			throw new CFLibUsageException( getClass(),
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	public ICFGenKbSecGrpIncObj read( boolean forceRead ) {
		ICFGenKbSecGrpIncObj retval = getOrigAsSecGrpInc().read( forceRead );
		if( retval != orig ) {
			throw new CFLibUsageException( getClass(),
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	public ICFGenKbSecGrpIncObj create() {
		copyBuffToOrig();
		ICFGenKbSecGrpIncObj retobj = ((ICFGenKbSchemaObj)getOrigAsSecGrpInc().getSchema()).getSecGrpIncTableObj().createSecGrpInc( getOrigAsSecGrpInc() );
		if( retobj == getOrigAsSecGrpInc() ) {
			copyOrigToBuff();
		}
		return( retobj );
	}

	public CFGenKbSecGrpIncEditObj update() {
		getSchema().getSecGrpIncTableObj().updateSecGrpInc( (ICFGenKbSecGrpIncObj)this );
		return( null );
	}

	public CFGenKbSecGrpIncEditObj deleteInstance() {
		if( getIsNew() ) {
			throw new CFLibUsageException( getClass(), "delete", "Cannot delete a new instance" );
		}
		getSchema().getSecGrpIncTableObj().deleteSecGrpInc( getOrigAsSecGrpInc() );
		return( null );
	}

	public ICFGenKbSecGrpIncTableObj getSecGrpIncTable() {
		return( orig.getSchema().getSecGrpIncTableObj() );
	}

	public ICFGenKbSecGrpIncEditObj getEdit() {
		return( (ICFGenKbSecGrpIncEditObj)this );
	}

	public ICFGenKbSecGrpIncEditObj getEditAsSecGrpInc() {
		return( (ICFGenKbSecGrpIncEditObj)this );
	}

	public ICFGenKbSecGrpIncEditObj beginEdit() {
		throw new CFLibUsageException( getClass(), "beginEdit", "Cannot edit an edition" );
	}

	public void endEdit() {
		orig.endEdit();
	}

	public ICFGenKbSecGrpIncObj getOrig() {
		return( orig );
	}

	public ICFGenKbSecGrpIncObj getOrigAsSecGrpInc() {
		return( (ICFGenKbSecGrpIncObj)orig );
	}

	public ICFGenKbSchemaObj getSchema() {
		return( orig.getSchema() );
	}

	public CFGenKbSecGrpIncBuff getBuff() {
		if( buff == null ) {
			buff = ((ICFGenKbSchema)getOrigAsSecGrpInc().getSchema().getBackingStore()).getFactorySecGrpInc().newBuff();
			buff.set( orig.getBuff() );
		}
		return( buff );
	}

	public void setBuff( CFGenKbSecGrpIncBuff value ) {
		if( buff != value ) {
			buff = value;
			requiredOwnerCluster = null;
			requiredContainerGroup = null;
			requiredParentSubGroup = null;
		}
	}

	public CFGenKbSecGrpIncBuff getSecGrpIncBuff() {
		return( (CFGenKbSecGrpIncBuff)getBuff() );
	}

	public CFGenKbSecGrpIncPKey getPKey() {
		return( orig.getPKey() );
	}

	public void setPKey( CFGenKbSecGrpIncPKey value ) {
		orig.setPKey( value );
		copyPKeyToBuff();
	}

	public boolean getIsNew() {
		return( orig.getIsNew() );
	}

	public void setIsNew( boolean value ) {
		orig.setIsNew( value );
	}

	public long getRequiredClusterId() {
		return( getPKey().getRequiredClusterId() );
	}

	public long getRequiredSecGrpIncId() {
		return( getPKey().getRequiredSecGrpIncId() );
	}

	public int getRequiredSecGroupId() {
		return( getSecGrpIncBuff().getRequiredSecGroupId() );
	}

	public int getRequiredIncludeGroupId() {
		return( getSecGrpIncBuff().getRequiredIncludeGroupId() );
	}

	public ICFGenKbClusterObj getRequiredOwnerCluster() {
		return( getRequiredOwnerCluster( false ) );
	}

	public ICFGenKbClusterObj getRequiredOwnerCluster( boolean forceRead ) {
		if( forceRead || ( requiredOwnerCluster == null ) ) {
			boolean anyMissing = false;
			if( ! anyMissing ) {
				ICFGenKbClusterObj obj = ((ICFGenKbSchemaObj)getOrigAsSecGrpInc().getSchema()).getClusterTableObj().readClusterByIdIdx( getPKey().getRequiredClusterId() );
				requiredOwnerCluster = obj;
			}
		}
		return( requiredOwnerCluster );
	}

	public void setRequiredOwnerCluster( ICFGenKbClusterObj value ) {
			if( buff == null ) {
				getSecGrpIncBuff();
			}
			if( value != null ) {
				getPKey().setRequiredClusterId( value.getRequiredId() );
				getSecGrpIncBuff().setRequiredClusterId( value.getRequiredId() );
			}
			requiredOwnerCluster = value;
	}

	public ICFGenKbSecGroupObj getRequiredContainerGroup() {
		return( getRequiredContainerGroup( false ) );
	}

	public ICFGenKbSecGroupObj getRequiredContainerGroup( boolean forceRead ) {
		if( forceRead || ( requiredContainerGroup == null ) ) {
			boolean anyMissing = false;
			if( ! anyMissing ) {
				ICFGenKbSecGroupObj obj = ((ICFGenKbSchemaObj)getOrigAsSecGrpInc().getSchema()).getSecGroupTableObj().readSecGroupByIdIdx( getPKey().getRequiredClusterId(),
					getSecGrpIncBuff().getRequiredSecGroupId() );
				requiredContainerGroup = obj;
				if( obj != null ) {
					getSecGrpIncBuff().setRequiredClusterId( obj.getRequiredClusterId() );
					getSecGrpIncBuff().setRequiredSecGroupId( obj.getRequiredSecGroupId() );
					requiredContainerGroup = obj;
				}
			}
		}
		return( requiredContainerGroup );
	}

	public void setRequiredContainerGroup( ICFGenKbSecGroupObj value ) {
			if( buff == null ) {
				getSecGrpIncBuff();
			}
			if( value != null ) {
				getPKey().setRequiredClusterId( value.getRequiredClusterId() );
				getSecGrpIncBuff().setRequiredClusterId( value.getRequiredClusterId() );
				getSecGrpIncBuff().setRequiredSecGroupId( value.getRequiredSecGroupId() );
			}
			requiredContainerGroup = value;
	}

	public ICFGenKbSecGroupObj getRequiredParentSubGroup() {
		return( getRequiredParentSubGroup( false ) );
	}

	public ICFGenKbSecGroupObj getRequiredParentSubGroup( boolean forceRead ) {
		if( forceRead || ( requiredParentSubGroup == null ) ) {
			boolean anyMissing = false;
			if( ! anyMissing ) {
				ICFGenKbSecGroupObj obj = ((ICFGenKbSchemaObj)getOrigAsSecGrpInc().getSchema()).getSecGroupTableObj().readSecGroupByIdIdx( getPKey().getRequiredClusterId(),
					getSecGrpIncBuff().getRequiredIncludeGroupId() );
				requiredParentSubGroup = obj;
			}
		}
		return( requiredParentSubGroup );
	}

	public void setRequiredParentSubGroup( ICFGenKbSecGroupObj value ) {
			if( buff == null ) {
				getSecGrpIncBuff();
			}
			if( value != null ) {
				getPKey().setRequiredClusterId( value.getRequiredClusterId() );
				getSecGrpIncBuff().setRequiredClusterId( value.getRequiredClusterId() );
				getSecGrpIncBuff().setRequiredIncludeGroupId( value.getRequiredSecGroupId() );
			}
			else {
			}
			requiredParentSubGroup = value;
	}

	public void copyPKeyToBuff() {
		buff.setRequiredClusterId( getPKey().getRequiredClusterId() );
		buff.setRequiredSecGrpIncId( getPKey().getRequiredSecGrpIncId() );
	}

	public void copyBuffToPKey() {
		getPKey().setRequiredClusterId( buff.getRequiredClusterId() );
		getPKey().setRequiredSecGrpIncId( buff.getRequiredSecGrpIncId() );
	}

	public void copyBuffToOrig() {
		CFGenKbSecGrpIncBuff origBuff = getOrigAsSecGrpInc().getSecGrpIncBuff();
		CFGenKbSecGrpIncBuff myBuff = getSecGrpIncBuff();
		origBuff.set( myBuff );
	}

	public void copyOrigToBuff() {
		CFGenKbSecGrpIncBuff origBuff = getOrigAsSecGrpInc().getSecGrpIncBuff();
		CFGenKbSecGrpIncBuff myBuff = getSecGrpIncBuff();
		myBuff.set( origBuff );
	}
}
