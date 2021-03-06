// Description: Java 11 Object interface for CFGenKb GelSwitchLimb.

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
import org.msscf.msscf.v2_13.cfcore.CFGenKb.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfcore.CFGenKb.*;

public interface ICFGenKbGelSwitchLimbObj
	extends ICFLibAnyObj
{
	String getClassCode();
	/**
	 *	Realise this instance of a GelSwitchLimb.
	 *
	 *	@return	CFGenKbGelSwitchLimbObj instance which should be subsequently referenced.
	 */
	ICFGenKbGelSwitchLimbObj realise();

	/**
	 *	Forget this instance from the cache.
	 *	<p>
	 *	This method should only be invoked by implementation internals.
	 */
	void forget();

	/**
	 *	Re-read this instance by it's primary key.
	 *
	 *	@return	ICFGenKbGelSwitchLimbObj the reference to the cached or read (realised) instance.
	 */
	ICFGenKbGelSwitchLimbObj read();

	/**
	 *	Re-read this instance by it's primary key.
	 *
	 *	@return	ICFGenKbGelSwitchLimbObj the reference to the cached or read (realised) instance.
	 */
	ICFGenKbGelSwitchLimbObj read( boolean forceRead );

	/**
	 *	Initialize and return a locked edition of this GelSwitchLimb instance.
	 *
	 *	@return	The newly locked ICFGenKbGelSwitchLimbEditObj edition of this instance.
	 */
	ICFGenKbGelSwitchLimbEditObj beginEdit();

	/**
	 *	End this edition of this GelSwitchLimb instance.
	 *
	 *	@throws	CFLibNotSupportedException if you try to end a read-only view.
	 */
	void endEdit();

	/**
	 *	Get the current edition of this GelSwitchLimb instance.
	 *
	 *	@return	The ICFGenKbGelSwitchLimbEditObj edition of this instance.
	 */
	ICFGenKbGelSwitchLimbEditObj getEdit();

	/**
	 *	Get the current edition of this GelSwitchLimb instance as a ICFGenKbGelSwitchLimbEditObj.
	 *
	 *	@return	The ICFGenKbGelSwitchLimbEditObj edition of this instance.
	 */
	ICFGenKbGelSwitchLimbEditObj getEditAsGelSwitchLimb();

	/**
	 *	Get the ICFGenKbGelSwitchLimbTableObj table cache which manages this instance.
	 *
	 *	@return	ICFGenKbGelSwitchLimbTableObj table cache which manages this instance.
	 */
	ICFGenKbGelSwitchLimbTableObj getGelSwitchLimbTable();

	/**
	 *	Get the ICFGenKbSchemaObj schema cache which manages this instance.
	 *
	 *	@return	ICFGenKbSchemaObj schema cache which manages this instance.
	 */
	ICFGenKbSchemaObj getSchema();

	/**
	 *	Get the CFGenKbGelSwitchLimbBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFGenKbGelSwitchLimbBuff instance which currently backs this object.
	 */
	CFGenKbGelSwitchLimbBuff getBuff();

	/**
	 *	Internal use only.
	 */
	void setBuff( CFGenKbGelSwitchLimbBuff value );

	/**
	 *	Get the CFGenKbGelSwitchLimbBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFGenKbGelSwitchLimbBuff instance which currently backs this object.
	 */
	CFGenKbGelSwitchLimbBuff getGelSwitchLimbBuff();

	/**
	 *	Get the primary key of this instance.
	 *
	 *	@return	CFGenKbGelSwitchLimbPKey primary key for this instance.
	 */
	CFGenKbGelSwitchLimbPKey getPKey();

	/**
	 *	Set the primary key of this instance.
	 *	<p>
	 *	This method should only be invoked by implementation internals.
	 *
	 *	@param CFGenKbGelSwitchLimbPKey primary key value for this instance.
	 */
	void setPKey( CFGenKbGelSwitchLimbPKey value );

	/**
	 *	Is this a new instance?
	 *
	 *	@return	True if this is a new instance, otherwise false if it has
	 *		been read, locked, or created.
	 */
	boolean getIsNew();

	/**
	 *	Indicate whether this is a new instance.
	 *	<p>
	 *	This method should only be used by implementation internals.
	 *
	 *	@param	True if this is a new instance, otherwise false.
	 */
	void setIsNew( boolean value );

	/**
	 *	Get the required long attribute TenantId.
	 *
	 *	@return	The required long attribute TenantId.
	 */
	long getRequiredTenantId();

	/**
	 *	Get the required long attribute GelCacheId.
	 *
	 *	@return	The required long attribute GelCacheId.
	 */
	long getRequiredGelCacheId();

	/**
	 *	Get the required long attribute GelInstId.
	 *
	 *	@return	The required long attribute GelInstId.
	 */
	long getRequiredGelInstId();

	/**
	 *	Get the required String attribute LimbName.
	 *
	 *	@return	The required String attribute LimbName.
	 */
	String getRequiredLimbName();

	/**
	 *	Get the required String attribute LimbExpansion.
	 *
	 *	@return	The required String attribute LimbExpansion.
	 */
	String getRequiredLimbExpansion();

	/**
	 *	Get the required ICFGenKbGelSwitchObj instance referenced by the Switch key.
	 *
	 *	@return	The required ICFGenKbGelSwitchObj instance referenced by the Switch key.
	 */
	ICFGenKbGelSwitchObj getRequiredParentSwitch();

	/**
	 *	Get the required ICFGenKbGelSwitchObj instance referenced by the Switch key.
	 *
	 *	@return	The required ICFGenKbGelSwitchObj instance referenced by the Switch key.
	 */
	ICFGenKbGelSwitchObj getRequiredParentSwitch( boolean forceRead );

	/**
	 *	Get the required ICFGenKbTenantObj instance referenced by the Tenant key.
	 *
	 *	@return	The required ICFGenKbTenantObj instance referenced by the Tenant key.
	 */
	ICFGenKbTenantObj getRequiredOwnerTenant();

	/**
	 *	Get the required ICFGenKbTenantObj instance referenced by the Tenant key.
	 *
	 *	@return	The required ICFGenKbTenantObj instance referenced by the Tenant key.
	 */
	ICFGenKbTenantObj getRequiredOwnerTenant( boolean forceRead );

	/**
	 *	Internal use only.
	 */
	void copyPKeyToBuff();

	/**
	 *	Internal use only.
	 */
	void copyBuffToPKey();

}
