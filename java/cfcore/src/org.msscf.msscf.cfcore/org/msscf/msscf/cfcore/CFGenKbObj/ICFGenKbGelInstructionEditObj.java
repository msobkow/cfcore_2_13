// Description: Java 11 Instance Edit Object interface for CFGenKb GelInstruction.

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
import org.msscf.msscf.cflib.CFLib.*;
import org.msscf.msscf.cfcore.CFGenKb.*;
import org.msscf.msscf.cfcore.MssCF.MssCFEngine;
import org.msscf.msscf.cfcore.MssCF.MssCFGenContext;

public interface ICFGenKbGelInstructionEditObj
	extends ICFGenKbGelInstructionObj
{
	/*
	 *	Get the original for this edition as the base type for the class hierarchy.
	 *
	 *	@return The original, non-modifiable instance as a base ICFGenKbGelInstructionObj.
	 */
	ICFGenKbGelInstructionObj getOrig();

	/*
	 *	Get the original for this edition cast as the specified type.
	 *
	 *	@return The original, non-modifiable instance cast to a ICFGenKbGelInstructionObj.
	 */
	ICFGenKbGelInstructionObj getOrigAsGelInstruction();

	/*
	 *	create() may return a different instance than the
	 *	one used to invoke the operation.  All future references
	 *	should be to the returned instance, not the original
	 *	invoker.  You should lose all references to the original
	 *	invoker.
	 *
	 *	@return The created instance.
	 */
	ICFGenKbGelInstructionObj create();

	/*
	 *	Update the instance.
	 */
	CFGenKbGelInstructionEditObj update();

	/*
	 *	Delete the instance.
	 */
	CFGenKbGelInstructionEditObj deleteInstance();

	/**
	 *	Get the required String attribute SourceText.
	 *
	 *	@return	The String value of the attribute SourceText.
	 */
	String getRequiredSourceText();

	/**
	 *	Set the required String attribute SourceText.
	 *
	 *	@param	value	the String value of the attribute SourceText.
	 */
	void setRequiredSourceText( String value );

	/**
	 *	Get the ICFGenKbTenantObj instance referenced by the Tenant key.
	 *
	 *	@return	The ICFGenKbTenantObj instance referenced by the Tenant key.
	 */
	ICFGenKbTenantObj getRequiredOwnerTenant();

	/**
	 *	Set the ICFGenKbTenantObj instance referenced by the Tenant key.
	 *
	 *	@param	value	the ICFGenKbTenantObj instance to be referenced by the Tenant key.
	 */
	void setRequiredOwnerTenant( ICFGenKbTenantObj value );

	/**
	 *	Get the ICFGenKbGelCacheObj instance referenced by the GelCache key.
	 *
	 *	@return	The ICFGenKbGelCacheObj instance referenced by the GelCache key.
	 */
	ICFGenKbGelCacheObj getRequiredContainerGelCache();

	/**
	 *	Set the ICFGenKbGelCacheObj instance referenced by the GelCache key.
	 *
	 *	@param	value	the ICFGenKbGelCacheObj instance to be referenced by the GelCache key.
	 */
	void setRequiredContainerGelCache( ICFGenKbGelCacheObj value );

	/**
	 *	Get the ICFGenKbGelInstructionObj instance referenced by the ChainInst key.
	 *
	 *	@return	The ICFGenKbGelInstructionObj instance referenced by the ChainInst key.
	 */
	ICFGenKbGelInstructionObj getOptionalLookupChainInst();

	/**
	 *	Set the ICFGenKbGelInstructionObj instance referenced by the ChainInst key.
	 *
	 *	@param	value	the ICFGenKbGelInstructionObj instance to be referenced by the ChainInst key.
	 */
	void setOptionalLookupChainInst( ICFGenKbGelInstructionObj value );
}
