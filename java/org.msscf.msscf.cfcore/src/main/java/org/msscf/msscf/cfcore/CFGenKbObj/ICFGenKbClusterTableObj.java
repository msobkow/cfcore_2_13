// Description: Java 11 Table Object interface for CFGenKb.

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

package org.msscf.msscf.cfcore.CFGenKbObj;

import java.math.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.cflib.CFLib.*;
import org.msscf.msscf.cfcore.CFGenKb.*;

public interface ICFGenKbClusterTableObj
{
	ICFGenKbSchemaObj getSchema();
	void setSchema( ICFGenKbSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new Cluster instance.
	 *
	 *	@return	A new instance.
	 */
	ICFGenKbClusterObj newInstance();

	/**
	 *	Instantiate a new Cluster edition of the specified Cluster instance.
	 *
	 *	@return	A new edition.
	 */
	ICFGenKbClusterEditObj newEditInstance( ICFGenKbClusterObj orig );

	/**
	 *	Internal use only.
	 */
	ICFGenKbClusterObj realiseCluster( ICFGenKbClusterObj Obj );

	/**
	 *	Internal use only.
	 */
	ICFGenKbClusterObj createCluster( ICFGenKbClusterObj Obj );

	/**
	 *	Read a Cluster-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The Cluster-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFGenKbClusterObj readCluster( CFGenKbClusterPKey pkey );

	/**
	 *	Read a Cluster-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The Cluster-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFGenKbClusterObj readCluster( CFGenKbClusterPKey pkey,
		boolean forceRead );

	ICFGenKbClusterObj readCachedCluster( CFGenKbClusterPKey pkey );

	public void reallyDeepDisposeCluster( ICFGenKbClusterObj obj );

	void deepDisposeCluster( CFGenKbClusterPKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFGenKbClusterObj lockCluster( CFGenKbClusterPKey pkey );

	/**
	 *	Return a sorted list of all the Cluster-derived instances in the database.
	 *
	 *	@return	List of ICFGenKbClusterObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFGenKbClusterObj> readAllCluster();

	/**
	 *	Return a sorted map of all the Cluster-derived instances in the database.
	 *
	 *	@return	List of ICFGenKbClusterObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFGenKbClusterObj> readAllCluster( boolean forceRead );

	List<ICFGenKbClusterObj> readCachedAllCluster();

	/**
	 *	Return a sorted map of a page of the Cluster-derived instances in the database.
	 *
	 *	@return	List of ICFGenKbClusterObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFGenKbClusterObj> pageAllCluster(Long priorId );

	/**
	 *	Get the CFGenKbClusterObj instance for the primary key attributes.
	 *
	 *	@param	argId	The Cluster key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbClusterObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbClusterObj readClusterByIdIdx( long Id );

	/**
	 *	Get the CFGenKbClusterObj instance for the primary key attributes.
	 *
	 *	@param	argId	The Cluster key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbClusterObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbClusterObj readClusterByIdIdx( long Id,
		boolean forceRead );

	/**
	 *	Get the CFGenKbClusterObj instance for the unique UDomNameIdx key.
	 *
	 *	@param	argFullDomName	The Cluster key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbClusterObj cached instance for the unique UDomNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbClusterObj readClusterByUDomNameIdx(String FullDomName );

	/**
	 *	Get the CFGenKbClusterObj instance for the unique UDomNameIdx key.
	 *
	 *	@param	argFullDomName	The Cluster key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbClusterObj refreshed instance for the unique UDomNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbClusterObj readClusterByUDomNameIdx(String FullDomName,
		boolean forceRead );

	/**
	 *	Get the CFGenKbClusterObj instance for the unique UDescrIdx key.
	 *
	 *	@param	argDescription	The Cluster key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbClusterObj cached instance for the unique UDescrIdx key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbClusterObj readClusterByUDescrIdx(String Description );

	/**
	 *	Get the CFGenKbClusterObj instance for the unique UDescrIdx key.
	 *
	 *	@param	argDescription	The Cluster key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbClusterObj refreshed instance for the unique UDescrIdx key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbClusterObj readClusterByUDescrIdx(String Description,
		boolean forceRead );

	ICFGenKbClusterObj readCachedClusterByIdIdx( long Id );

	ICFGenKbClusterObj readCachedClusterByUDomNameIdx( String FullDomName );

	ICFGenKbClusterObj readCachedClusterByUDescrIdx( String Description );

	void deepDisposeClusterByIdIdx( long Id );

	void deepDisposeClusterByUDomNameIdx( String FullDomName );

	void deepDisposeClusterByUDescrIdx( String Description );

	/**
	 *	Internal use only.
	 */
	ICFGenKbClusterObj updateCluster( ICFGenKbClusterObj Obj );

	/**
	 *	Internal use only.
	 */
	void deleteCluster( ICFGenKbClusterObj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argId	The Cluster key attribute of the instance generating the id.
	 */
	void deleteClusterByIdIdx( long Id );

	/**
	 *	Internal use only.
	 *
	 *	@param	argFullDomName	The Cluster key attribute of the instance generating the id.
	 */
	void deleteClusterByUDomNameIdx(String FullDomName );

	/**
	 *	Internal use only.
	 *
	 *	@param	argDescription	The Cluster key attribute of the instance generating the id.
	 */
	void deleteClusterByUDescrIdx(String Description );

	ICFGenKbClusterObj getSystemCluster();
}
