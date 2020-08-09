// Description: Java 11 edit object instance implementation for CFGenKb GelExecutable.

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

package org.msscf.msscf.cfcore.CFGenKbObj;

import java.math.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.cflib.CFLib.*;
import org.msscf.msscf.cfcore.CFGenKb.*;

public class CFGenKbGelExecutableEditObj
	extends CFGenKbGelSequenceEditObj

	implements ICFGenKbGelExecutableEditObj
{

	public CFGenKbGelExecutableEditObj( ICFGenKbGelExecutableObj argOrig ) {
		super( argOrig );
	}

	public String getClassCode() {
		return( CFGenKbGelExecutableObj.CLASS_CODE );
	}

	public String getGenDefName() {
		return( "GelExecutable" );
	}

	public ICFLibAnyObj getScope() {
		return( super.getScope() );
	}

	public ICFLibAnyObj getObjScope() {
		return( super.getObjScope() );
	}

	public String getObjName() {
		String objName;
		long val = getRequiredGelInstId();
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

	public ICFGenKbGelInstructionObj realise() {
		// We realise this so that it's buffer will get copied to orig during realization
		ICFGenKbGelExecutableObj retobj = getSchema().getGelExecutableTableObj().realiseGelExecutable( (ICFGenKbGelExecutableObj)this );
		return( retobj );
	}

	public void forget() {
		getOrigAsGelExecutable().forget();
	}

	public ICFGenKbGelInstructionObj create() {
		copyBuffToOrig();
		ICFGenKbGelExecutableObj retobj = ((ICFGenKbSchemaObj)getOrigAsGelExecutable().getSchema()).getGelExecutableTableObj().createGelExecutable( getOrigAsGelExecutable() );
		if( retobj == getOrigAsGelExecutable() ) {
			copyOrigToBuff();
		}
		return( retobj );
	}

	public CFGenKbGelInstructionEditObj update() {
		getSchema().getGelExecutableTableObj().updateGelExecutable( (ICFGenKbGelExecutableObj)this );
		return( null );
	}

	public CFGenKbGelInstructionEditObj deleteInstance() {
		if( getIsNew() ) {
			throw new CFLibUsageException( getClass(), "delete", "Cannot delete a new instance" );
		}
		getSchema().getGelExecutableTableObj().deleteGelExecutable( getOrigAsGelExecutable() );
		return( null );
	}

	public ICFGenKbGelExecutableTableObj getGelExecutableTable() {
		return( orig.getSchema().getGelExecutableTableObj() );
	}

	public ICFGenKbGelExecutableEditObj getEditAsGelExecutable() {
		return( (ICFGenKbGelExecutableEditObj)this );
	}

	public ICFGenKbGelExecutableObj getOrigAsGelExecutable() {
		return( (ICFGenKbGelExecutableObj)orig );
	}

	public CFGenKbGelInstructionBuff getBuff() {
		if( buff == null ) {
			buff = ((ICFGenKbSchema)getOrigAsGelExecutable().getSchema().getBackingStore()).getFactoryGelExecutable().newBuff();
			buff.set( orig.getBuff() );
		}
		return( buff );
	}

	public void setBuff( CFGenKbGelInstructionBuff value ) {
		if( buff != value ) {
			super.setBuff( value );
		}
	}

	public CFGenKbGelExecutableBuff getGelExecutableBuff() {
		return( (CFGenKbGelExecutableBuff)getBuff() );
	}

	public long getRequiredGenItemId() {
		return( getGelExecutableBuff().getRequiredGenItemId() );
	}

	public void setRequiredGenItemId( long value ) {
		if( getGelExecutableBuff().getRequiredGenItemId() != value ) {
			getGelExecutableBuff().setRequiredGenItemId( value );
		}
	}

	public void copyBuffToOrig() {
		CFGenKbGelExecutableBuff origBuff = getOrigAsGelExecutable().getGelExecutableBuff();
		CFGenKbGelExecutableBuff myBuff = getGelExecutableBuff();
		origBuff.set( myBuff );
	}

	public void copyOrigToBuff() {
		CFGenKbGelExecutableBuff origBuff = getOrigAsGelExecutable().getGelExecutableBuff();
		CFGenKbGelExecutableBuff myBuff = getGelExecutableBuff();
		myBuff.set( origBuff );
	}
}
