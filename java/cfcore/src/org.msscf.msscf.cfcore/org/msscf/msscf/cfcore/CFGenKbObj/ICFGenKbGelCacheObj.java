// Description: Java 11 Object interface for CFGenKb GelCache.

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

package org.msscf.msscf.cfcore.CFGenKbObj;

import java.math.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.cfcore.CFGenKb.*;
import org.msscf.msscf.cflib.CFLib.*;
import org.msscf.msscf.cfcore.CFGenKb.*;
import org.msscf.msscf.cfcore.MssCF.MssCFEngine;
import org.msscf.msscf.cfcore.MssCF.MssCFGenContext;

public interface ICFGenKbGelCacheObj
	extends ICFLibAnyObj
{
	String getClassCode();
	/**
	 *	Realise this instance of a GelCache.
	 *
	 *	@return	CFGenKbGelCacheObj instance which should be subsequently referenced.
	 */
	ICFGenKbGelCacheObj realise();

	/**
	 *	Forget this instance from the cache.
	 *	<p>
	 *	This method should only be invoked by implementation internals.
	 */
	void forget();

	/**
	 *	Re-read this instance by it's primary key.
	 *
	 *	@return	ICFGenKbGelCacheObj the reference to the cached or read (realised) instance.
	 */
	ICFGenKbGelCacheObj read();

	/**
	 *	Re-read this instance by it's primary key.
	 *
	 *	@return	ICFGenKbGelCacheObj the reference to the cached or read (realised) instance.
	 */
	ICFGenKbGelCacheObj read( boolean forceRead );

	/**
	 *	Initialize and return a locked edition of this GelCache instance.
	 *
	 *	@return	The newly locked ICFGenKbGelCacheEditObj edition of this instance.
	 */
	ICFGenKbGelCacheEditObj beginEdit();

	/**
	 *	End this edition of this GelCache instance.
	 *
	 *	@throws	CFLibNotSupportedException if you try to end a read-only view.
	 */
	void endEdit();

	/**
	 *	Get the current edition of this GelCache instance.
	 *
	 *	@return	The ICFGenKbGelCacheEditObj edition of this instance.
	 */
	ICFGenKbGelCacheEditObj getEdit();

	/**
	 *	Get the current edition of this GelCache instance as a ICFGenKbGelCacheEditObj.
	 *
	 *	@return	The ICFGenKbGelCacheEditObj edition of this instance.
	 */
	ICFGenKbGelCacheEditObj getEditAsGelCache();

	/**
	 *	Get the ICFGenKbGelCacheTableObj table cache which manages this instance.
	 *
	 *	@return	ICFGenKbGelCacheTableObj table cache which manages this instance.
	 */
	ICFGenKbGelCacheTableObj getGelCacheTable();

	/**
	 *	Get the ICFGenKbSchemaObj schema cache which manages this instance.
	 *
	 *	@return	ICFGenKbSchemaObj schema cache which manages this instance.
	 */
	ICFGenKbSchemaObj getSchema();

	/**
	 *	Get the CFGenKbGelCacheBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFGenKbGelCacheBuff instance which currently backs this object.
	 */
	CFGenKbGelCacheBuff getBuff();

	/**
	 *	Internal use only.
	 */
	void setBuff( CFGenKbGelCacheBuff value );

	/**
	 *	Get the CFGenKbGelCacheBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFGenKbGelCacheBuff instance which currently backs this object.
	 */
	CFGenKbGelCacheBuff getGelCacheBuff();

	/**
	 *	Get the primary key of this instance.
	 *
	 *	@return	CFGenKbGelCachePKey primary key for this instance.
	 */
	CFGenKbGelCachePKey getPKey();

	/**
	 *	Set the primary key of this instance.
	 *	<p>
	 *	This method should only be invoked by implementation internals.
	 *
	 *	@param CFGenKbGelCachePKey primary key value for this instance.
	 */
	void setPKey( CFGenKbGelCachePKey value );

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
	 *	Get the required String attribute CacheName.
	 *
	 *	@return	The required String attribute CacheName.
	 */
	String getRequiredCacheName();

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

	public ICFGenKbGelInstructionObj lookupMacro( String macroBody );
	public ICFGenKbGelInstructionObj rememberMacro( String macroBody, ICFGenKbGelInstructionObj gel );
	public ICFGenKbGelExecutableObj lookupExecutable( String execName );
	public ICFGenKbGelExecutableObj rememberExecutable( String execName, ICFGenKbGelExecutableObj gel );
}