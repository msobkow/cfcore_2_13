// Description: Java 11 Instance Edit Object interface for CFGenKb GelSequence.

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
import com.github.msobkow.cflib.CFLib.*;
import org.msscf.msscf.cfcore.CFGenKb.*;

public interface ICFGenKbGelSequenceEditObj
	extends ICFGenKbGelSequenceObj,
		ICFGenKbGelInstructionEditObj
{
	/*
	 *	Get the original for this edition cast as the specified type.
	 *
	 *	@return The original, non-modifiable instance cast to a ICFGenKbGelSequenceObj.
	 */
	ICFGenKbGelSequenceObj getOrigAsGelSequence();

	/**
	 *	Get the ICFGenKbGelCallObj instance referenced by the FirstInst key.
	 *
	 *	@return	The ICFGenKbGelCallObj instance referenced by the FirstInst key.
	 */
	ICFGenKbGelCallObj getOptionalLookupFirstInst();

	/**
	 *	Set the ICFGenKbGelCallObj instance referenced by the FirstInst key.
	 *
	 *	@param	value	the ICFGenKbGelCallObj instance to be referenced by the FirstInst key.
	 */
	void setOptionalLookupFirstInst( ICFGenKbGelCallObj value );

	/**
	 *	Get the ICFGenKbGelCallObj instance referenced by the LastInst key.
	 *
	 *	@return	The ICFGenKbGelCallObj instance referenced by the LastInst key.
	 */
	ICFGenKbGelCallObj getOptionalLookupLastInst();

	/**
	 *	Set the ICFGenKbGelCallObj instance referenced by the LastInst key.
	 *
	 *	@param	value	the ICFGenKbGelCallObj instance to be referenced by the LastInst key.
	 */
	void setOptionalLookupLastInst( ICFGenKbGelCallObj value );
}
