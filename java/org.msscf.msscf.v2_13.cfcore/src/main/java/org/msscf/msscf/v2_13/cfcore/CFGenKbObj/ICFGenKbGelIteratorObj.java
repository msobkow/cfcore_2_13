// Description: Java 11 Object interface for CFGenKb GelIterator.

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

package org.msscf.msscf.v2_13.cfcore.CFGenKbObj;

import java.math.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cfcore.CFGenKb.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfcore.CFGenKb.*;
import org.msscf.msscf.v2_13.cfcore.MssCF.*;

public interface ICFGenKbGelIteratorObj
	extends ICFGenKbGelInstructionObj
{
	/**
	 *	Get the current edition of this GelIterator instance as a ICFGenKbGelIteratorEditObj.
	 *
	 *	@return	The ICFGenKbGelIteratorEditObj edition of this instance.
	 */
	ICFGenKbGelIteratorEditObj getEditAsGelIterator();

	/**
	 *	Get the ICFGenKbGelIteratorTableObj table cache which manages this instance.
	 *
	 *	@return	ICFGenKbGelIteratorTableObj table cache which manages this instance.
	 */
	ICFGenKbGelIteratorTableObj getGelIteratorTable();

	/**
	 *	Get the CFGenKbGelIteratorBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFGenKbGelIteratorBuff instance which currently backs this object.
	 */
	CFGenKbGelIteratorBuff getGelIteratorBuff();

	/**
	 *	Get the required String attribute IteratorName.
	 *
	 *	@return	The required String attribute IteratorName.
	 */
	String getRequiredIteratorName();

	/**
	 *	Get the optional String attribute ExpandBefore.
	 *
	 *	@return	The optional String attribute ExpandBefore.
	 */
	String getOptionalExpandBefore();

	/**
	 *	Get the optional String attribute ExpandFirst.
	 *
	 *	@return	The optional String attribute ExpandFirst.
	 */
	String getOptionalExpandFirst();

	/**
	 *	Get the required String attribute ExpandEach.
	 *
	 *	@return	The required String attribute ExpandEach.
	 */
	String getRequiredExpandEach();

	/**
	 *	Get the optional String attribute ExpandLast.
	 *
	 *	@return	The optional String attribute ExpandLast.
	 */
	String getOptionalExpandLast();

	/**
	 *	Get the optional String attribute ExpandLone.
	 *
	 *	@return	The optional String attribute ExpandLone.
	 */
	String getOptionalExpandLone();

	/**
	 *	Get the optional String attribute ExpandEmpty.
	 *
	 *	@return	The optional String attribute ExpandEmpty.
	 */
	String getOptionalExpandEmpty();

	/**
	 *	Get the optional String attribute ExpandAfter.
	 *
	 *	@return	The optional String attribute ExpandAfter.
	 */
	String getOptionalExpandAfter();

}
