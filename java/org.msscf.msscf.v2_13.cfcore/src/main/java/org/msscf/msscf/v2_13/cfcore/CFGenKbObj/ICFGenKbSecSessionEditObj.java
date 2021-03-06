// Description: Java 11 Instance Edit Object interface for CFGenKb SecSession.

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

public interface ICFGenKbSecSessionEditObj
	extends ICFGenKbSecSessionObj
{
	/*
	 *	Get the original for this edition as the base type for the class hierarchy.
	 *
	 *	@return The original, non-modifiable instance as a base ICFGenKbSecSessionObj.
	 */
	ICFGenKbSecSessionObj getOrig();

	/*
	 *	Get the original for this edition cast as the specified type.
	 *
	 *	@return The original, non-modifiable instance cast to a ICFGenKbSecSessionObj.
	 */
	ICFGenKbSecSessionObj getOrigAsSecSession();

	/*
	 *	create() may return a different instance than the
	 *	one used to invoke the operation.  All future references
	 *	should be to the returned instance, not the original
	 *	invoker.  You should lose all references to the original
	 *	invoker.
	 *
	 *	@return The created instance.
	 */
	ICFGenKbSecSessionObj create();

	/*
	 *	Update the instance.
	 */
	CFGenKbSecSessionEditObj update();

	/*
	 *	Delete the instance.
	 */
	CFGenKbSecSessionEditObj deleteInstance();

	/**
	 *	Get the optional String attribute SecDevName.
	 *
	 *	@return	The String value of the attribute SecDevName.
	 */
	String getOptionalSecDevName();

	/**
	 *	Set the optional String attribute SecDevName.
	 *
	 *	@param	value	the String value of the attribute SecDevName.
	 */
	void setOptionalSecDevName( String value );

	/**
	 *	Get the required Calendar attribute Start.
	 *
	 *	@return	The Calendar value of the attribute Start.
	 */
	Calendar getRequiredStart();

	/**
	 *	Set the required Calendar attribute Start.
	 *
	 *	@param	value	the Calendar value of the attribute Start.
	 */
	void setRequiredStart( Calendar value );

	/**
	 *	Get the optional Calendar attribute Finish.
	 *
	 *	@return	The Calendar value of the attribute Finish.
	 */
	Calendar getOptionalFinish();

	/**
	 *	Set the optional Calendar attribute Finish.
	 *
	 *	@param	value	the Calendar value of the attribute Finish.
	 */
	void setOptionalFinish( Calendar value );

	/**
	 *	Get the ICFGenKbSecUserObj instance referenced by the SecUser key.
	 *
	 *	@return	The ICFGenKbSecUserObj instance referenced by the SecUser key.
	 */
	ICFGenKbSecUserObj getRequiredContainerSecUser();

	/**
	 *	Set the ICFGenKbSecUserObj instance referenced by the SecUser key.
	 *
	 *	@param	value	the ICFGenKbSecUserObj instance to be referenced by the SecUser key.
	 */
	void setRequiredContainerSecUser( ICFGenKbSecUserObj value );

	/**
	 *	Get the ICFGenKbSecUserObj instance referenced by the SecProxy key.
	 *
	 *	@return	The ICFGenKbSecUserObj instance referenced by the SecProxy key.
	 */
	ICFGenKbSecUserObj getRequiredParentSecProxy();

	/**
	 *	Set the ICFGenKbSecUserObj instance referenced by the SecProxy key.
	 *
	 *	@param	value	the ICFGenKbSecUserObj instance to be referenced by the SecProxy key.
	 */
	void setRequiredParentSecProxy( ICFGenKbSecUserObj value );
}
