// Description: Java 11 client configuration file for a CFGenKb schema.

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

package org.msscf.msscf.v2_13.cfcore.CFGenKb;

import java.io.*;
import java.lang.reflect.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;

public class CFGenKbClientConfigurationFile
{
	protected String fileName = null;
	protected Properties props = new Properties();
	protected String keyStore = null;
	protected String deviceName = null;

	public CFGenKbClientConfigurationFile() {
	}

	public String getFileName() {
		return( fileName );
	}

	public void setFileName( String value ) {
		fileName = value;
	}

	public String get( String theKey ) {
		return( props.getProperty( theKey ) );
	}

	public void set( String theKey, String theValue ) {
		set( theKey, theValue, false );
	}

	public void set(String theKey, String theValue, boolean doSave ) {
		props.put( theKey, theValue );
		if( doSave ) {
			save();
		}
	}

	public void load() {
		load( fileName );
	}

	public void load( String configFileName ) {
		boolean doSave = false;
		try {
			FileReader reader = new FileReader( configFileName );
			props.load( reader );
			reader.close();
			keyStore = null;
			deviceName = null;
			loadServerURLProperties();
		}
		catch( FileNotFoundException e ) {
			doSave = true;
		}
		catch( IOException e ) {
			throw new CFLibRuntimeException( getClass(),
				"load",
				"IOException " + e.getMessage(),
				e );
		}
		if( doSave ) {
			save();
		}
	}

	public void save() {
		try {
			FileWriter writer = new FileWriter( fileName );
			props.store( writer, "CFGenKbClientConfigurationFile" );
			writer.close();
		}
		catch( IOException e ) {
			throw new CFLibRuntimeException( getClass(),
				"save",
				"IOException " + e.getMessage(),
				e );
		}
	}

	public String getKeyStore() {
		if( keyStore == null ) {
			keyStore = get( "KeyStore" );
		}
		return( keyStore );
	}

	public void setKeyStore( String value ) {
		keyStore = value;
		set( "KeyStore", keyStore );
	}

	public String getDeviceName() {
		if( deviceName == null ) {
			deviceName = get( "DeviceName" );
		}
		return( deviceName );
	}

	public void setDeviceName( String value ) {
		deviceName = value;
		set( "DeviceName", deviceName );
	}

	public final int maxServerURL = 20;
	public final int maxServerURLIndex = maxServerURL - 1;
	public final String attrNamePrefix = "ServerURL";

	protected String arrServerURL[] = new String[0];

	public String[] getServerURLArray() {
		return( arrServerURL );
	}

	public void loadServerURLProperties() {
		int curIdx;
		int maxURL = 0;
		String curURL;
		String attrName;
		for( curIdx = 0; curIdx < maxServerURL; curIdx ++ ) {
			attrName = attrNamePrefix + Integer.toString( curIdx );
			curURL = get( attrName );
			if( ( curURL != null ) && ( curURL.length() > 0 ) ) {
				maxURL = curIdx + 1;
			}
		}
		if( maxURL > 0 ) {
			String newServerURL[] = new String[ maxURL ];
			for( curIdx = 0; curIdx < maxURL; curIdx ++ ) {
				attrName = attrNamePrefix + Integer.toString( curIdx );
				curURL = get( attrName );
				newServerURL[curIdx] = curURL;
			}
			arrServerURL = newServerURL;
		}
	}

	public String getLatestServerURL() {
		String latest;
		String curServerURL[] = arrServerURL;
		if( curServerURL.length > 0 ) {
			latest = curServerURL[0];
		}
		else {
			latest = null;
		}
		return( latest );
	}

	public void setLatestServerURL( String value ) {
		final String S_ProcName = "setLatestServerURL";
		if( ( value == null ) || ( value.length() <= 0 ) ) {
			throw new CFLibNullArgumentException( getClass(),
				S_ProcName,
				1,
				"value" );
		}

		int foundServerURLAtIndex = -1;
		String curServerURLArray[] = arrServerURL;
		int numIdx = curServerURLArray.length;
		int curIdx;
		String curServerURL;

		for( curIdx = 0; curIdx < numIdx; curIdx ++ ) {
			curServerURL = curServerURLArray[curIdx];
			if( value.equals( curServerURL ) ) {
				foundServerURLAtIndex = curIdx;
				curIdx = numIdx;
			}
		}

		if( foundServerURLAtIndex == 0 ) {
			// Do nothing -- it's already at the top
			return;
		}

		String attrName;
		String curValue;
		String newServerURL[];

		if( foundServerURLAtIndex == -1 ) {
			// Not found, needs to be inserted at head
			newServerURL = new String[ numIdx + 1 ];
			newServerURL[0] = value;
			for( curIdx = 0; curIdx < numIdx; curIdx ++ ) {
				newServerURL[ curIdx + 1 ] = arrServerURL[ curIdx ];
			}
			arrServerURL = newServerURL;
			numIdx = newServerURL.length;
			curIdx = numIdx - 1;
			while( curIdx >= 0 ) {
				attrName = attrNamePrefix + Integer.toString( curIdx );
				curValue = newServerURL[ curIdx ];
				set( attrName, curValue );
				curIdx --;
			}
			save();
		}
		else if( foundServerURLAtIndex < maxServerURL ) {
			// Found, needs to move up
			newServerURL = new String[ numIdx ];
			newServerURL[0] = value;
			for( curIdx = 0; curIdx < foundServerURLAtIndex; curIdx ++ ) {
				newServerURL[ curIdx + 1 ] = curServerURLArray[curIdx];
			}
			curIdx ++;
			while( curIdx < numIdx ) {
				newServerURL[ curIdx + 1 ] = curServerURLArray[curIdx];
				curIdx ++;
			}
		}
		else {
			// Found past maximum allowable index, trim array of serverURL.
			newServerURL = new String[ maxServerURL ];
			newServerURL[0] = value;
			for( curIdx = 0; curIdx < maxServerURL; curIdx ++ ) {
				newServerURL[ curIdx + 1 ] = curServerURLArray[curIdx];
			}
		}

		arrServerURL = newServerURL;
		numIdx = newServerURL.length;
		for( curIdx = 0; curIdx < numIdx; curIdx ++ ) {
			attrName = attrNamePrefix + Integer.toString( curIdx );
			curValue = newServerURL[ curIdx ];
			set( attrName, curValue );
		}

		save();
	}
}
