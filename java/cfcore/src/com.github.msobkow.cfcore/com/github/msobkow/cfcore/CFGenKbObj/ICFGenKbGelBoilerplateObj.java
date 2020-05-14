// Description: Java 11 Object interface for CFGenKb GelBoilerplate.

/*
 *	com.github.msobkow.CFCore
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

package com.github.msobkow.cfcore.CFGenKbObj;

import java.math.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import com.github.msobkow.cfcore.CFGenKb.*;
import com.github.msobkow.cflib.CFLib.*;
import com.github.msobkow.cfcore.CFGenKb.*;
import com.github.msobkow.cfcore.MssCF.MssCFEngine;
import com.github.msobkow.cfcore.MssCF.MssCFGenContext;

public interface ICFGenKbGelBoilerplateObj
	extends ICFGenKbGelInstructionObj
{
	/**
	 *	Get the current edition of this GelBoilerplate instance as a ICFGenKbGelBoilerplateEditObj.
	 *
	 *	@return	The ICFGenKbGelBoilerplateEditObj edition of this instance.
	 */
	ICFGenKbGelBoilerplateEditObj getEditAsGelBoilerplate();

	/**
	 *	Get the ICFGenKbGelBoilerplateTableObj table cache which manages this instance.
	 *
	 *	@return	ICFGenKbGelBoilerplateTableObj table cache which manages this instance.
	 */
	ICFGenKbGelBoilerplateTableObj getGelBoilerplateTable();

	/**
	 *	Get the CFGenKbGelBoilerplateBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFGenKbGelBoilerplateBuff instance which currently backs this object.
	 */
	CFGenKbGelBoilerplateBuff getGelBoilerplateBuff();

}
