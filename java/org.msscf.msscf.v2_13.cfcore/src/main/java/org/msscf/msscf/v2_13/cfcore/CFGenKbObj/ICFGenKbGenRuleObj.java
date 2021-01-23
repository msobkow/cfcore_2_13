// Description: Java 11 Object interface for CFGenKb GenRule.

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
import org.msscf.msscf.v2_13.cfcore.MssCF.MssCFEngine;
import org.msscf.msscf.v2_13.cfcore.MssCF.MssCFGelCompiler;
import org.msscf.msscf.v2_13.cfcore.MssCF.MssCFGenContext;

public interface ICFGenKbGenRuleObj
	extends ICFGenKbGenItemObj
{
	/**
	 *	Get the current edition of this GenRule instance as a ICFGenKbGenRuleEditObj.
	 *
	 *	@return	The ICFGenKbGenRuleEditObj edition of this instance.
	 */
	ICFGenKbGenRuleEditObj getEditAsGenRule();

	/**
	 *	Get the ICFGenKbGenRuleTableObj table cache which manages this instance.
	 *
	 *	@return	ICFGenKbGenRuleTableObj table cache which manages this instance.
	 */
	ICFGenKbGenRuleTableObj getGenRuleTable();

	/**
	 *	Get the CFGenKbGenRuleBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFGenKbGenRuleBuff instance which currently backs this object.
	 */
	CFGenKbGenRuleBuff getGenRuleBuff();

	/**
	 *	Get the required String attribute DefinedNear.
	 *
	 *	@return	The required String attribute DefinedNear.
	 */
	String getRequiredDefinedNear();

	/**
	 *	Get the required String attribute Body.
	 *
	 *	@return	The required String attribute Body.
	 */
	String getRequiredBody();

	/**
	 *	Get the optional Long attribute BodyTenantId.
	 *
	 *	@return	The optional Long attribute BodyTenantId.
	 */
	Long getOptionalBodyTenantId();

	/**
	 *	Get the optional Long attribute BodyGelCacheId.
	 *
	 *	@return	The optional Long attribute BodyGelCacheId.
	 */
	Long getOptionalBodyGelCacheId();

	/**
	 *	Get the optional Long attribute BodyGelId.
	 *
	 *	@return	The optional Long attribute BodyGelId.
	 */
	Long getOptionalBodyGelId();

	/**
	 *	Get the optional ICFGenKbGelExecutableObj instance referenced by the BodyGel key.
	 *
	 *	@return	The optional ICFGenKbGelExecutableObj instance referenced by the BodyGel key.
	 */
	ICFGenKbGelExecutableObj getOptionalComponentsBodyGel();

	/**
	 *	Get the optional ICFGenKbGelExecutableObj instance referenced by the BodyGel key.
	 *
	 *	@return	The optional ICFGenKbGelExecutableObj instance referenced by the BodyGel key.
	 */
	ICFGenKbGelExecutableObj getOptionalComponentsBodyGel( boolean forceRead );

}
