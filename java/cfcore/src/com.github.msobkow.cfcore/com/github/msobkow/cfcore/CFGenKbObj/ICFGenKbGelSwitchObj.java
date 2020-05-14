// Description: Java 11 Object interface for CFGenKb GelSwitch.

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
import com.github.msobkow.cfcore.MssCF.*;

public interface ICFGenKbGelSwitchObj
	extends ICFGenKbGelInstructionObj
{
	/**
	 *	Get the current edition of this GelSwitch instance as a ICFGenKbGelSwitchEditObj.
	 *
	 *	@return	The ICFGenKbGelSwitchEditObj edition of this instance.
	 */
	ICFGenKbGelSwitchEditObj getEditAsGelSwitch();

	/**
	 *	Get the ICFGenKbGelSwitchTableObj table cache which manages this instance.
	 *
	 *	@return	ICFGenKbGelSwitchTableObj table cache which manages this instance.
	 */
	ICFGenKbGelSwitchTableObj getGelSwitchTable();

	/**
	 *	Get the CFGenKbGelSwitchBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFGenKbGelSwitchBuff instance which currently backs this object.
	 */
	CFGenKbGelSwitchBuff getGelSwitchBuff();

	/**
	 *	Get the required String attribute ValueExpansion.
	 *
	 *	@return	The required String attribute ValueExpansion.
	 */
	String getRequiredValueExpansion();

	/**
	 *	Get the optional String attribute NilExpansion.
	 *
	 *	@return	The optional String attribute NilExpansion.
	 */
	String getOptionalNilExpansion();

	/**
	 *	Get the optional String attribute EmptyExpansion.
	 *
	 *	@return	The optional String attribute EmptyExpansion.
	 */
	String getOptionalEmptyExpansion();

	/**
	 *	Get the required String attribute DefaultExpansion.
	 *
	 *	@return	The required String attribute DefaultExpansion.
	 */
	String getRequiredDefaultExpansion();

	/**
	 *	Get the array of optional ICFGenKbGelSwitchLimbObj array of instances referenced by the SwitchLimb key.
	 *
	 *	@return	The optional ICFGenKbGelSwitchLimbObj[] array of instances referenced by the SwitchLimb key.
	 */
	List<ICFGenKbGelSwitchLimbObj> getOptionalChildrenSwitchLimb();

	/**
	 *	Get the array of optional ICFGenKbGelSwitchLimbObj array of instances referenced by the SwitchLimb key.
	 *
	 *	@return	The optional ICFGenKbGelSwitchLimbObj[] array of instances referenced by the SwitchLimb key.
	 */
	List<ICFGenKbGelSwitchLimbObj> getOptionalChildrenSwitchLimb( boolean forceRead );

}
