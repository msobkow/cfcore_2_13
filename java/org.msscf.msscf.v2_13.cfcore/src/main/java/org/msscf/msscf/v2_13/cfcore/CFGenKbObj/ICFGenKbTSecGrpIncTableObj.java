// Description: Java 11 Table Object interface for CFGenKb.

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

public interface ICFGenKbTSecGrpIncTableObj
{
	ICFGenKbSchemaObj getSchema();
	void setSchema( ICFGenKbSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new TSecGrpInc instance.
	 *
	 *	@return	A new instance.
	 */
	ICFGenKbTSecGrpIncObj newInstance();

	/**
	 *	Instantiate a new TSecGrpInc edition of the specified TSecGrpInc instance.
	 *
	 *	@return	A new edition.
	 */
	ICFGenKbTSecGrpIncEditObj newEditInstance( ICFGenKbTSecGrpIncObj orig );

	/**
	 *	Internal use only.
	 */
	ICFGenKbTSecGrpIncObj realiseTSecGrpInc( ICFGenKbTSecGrpIncObj Obj );

	/**
	 *	Internal use only.
	 */
	ICFGenKbTSecGrpIncObj createTSecGrpInc( ICFGenKbTSecGrpIncObj Obj );

	/**
	 *	Read a TSecGrpInc-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The TSecGrpInc-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFGenKbTSecGrpIncObj readTSecGrpInc( CFGenKbTSecGrpIncPKey pkey );

	/**
	 *	Read a TSecGrpInc-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The TSecGrpInc-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFGenKbTSecGrpIncObj readTSecGrpInc( CFGenKbTSecGrpIncPKey pkey,
		boolean forceRead );

	ICFGenKbTSecGrpIncObj readCachedTSecGrpInc( CFGenKbTSecGrpIncPKey pkey );

	public void reallyDeepDisposeTSecGrpInc( ICFGenKbTSecGrpIncObj obj );

	void deepDisposeTSecGrpInc( CFGenKbTSecGrpIncPKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFGenKbTSecGrpIncObj lockTSecGrpInc( CFGenKbTSecGrpIncPKey pkey );

	/**
	 *	Return a sorted list of all the TSecGrpInc-derived instances in the database.
	 *
	 *	@return	List of ICFGenKbTSecGrpIncObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> readAllTSecGrpInc();

	/**
	 *	Return a sorted map of all the TSecGrpInc-derived instances in the database.
	 *
	 *	@return	List of ICFGenKbTSecGrpIncObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> readAllTSecGrpInc( boolean forceRead );

	List<ICFGenKbTSecGrpIncObj> readCachedAllTSecGrpInc();

	/**
	 *	Return a sorted map of a page of the TSecGrpInc-derived instances in the database.
	 *
	 *	@return	List of ICFGenKbTSecGrpIncObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> pageAllTSecGrpInc(Long priorTenantId,
		Long priorTSecGrpIncId );

	/**
	 *	Get the CFGenKbTSecGrpIncObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGrpIncId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbTSecGrpIncObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbTSecGrpIncObj readTSecGrpIncByIdIdx( long TenantId,
		long TSecGrpIncId );

	/**
	 *	Get the CFGenKbTSecGrpIncObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGrpIncId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbTSecGrpIncObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbTSecGrpIncObj readTSecGrpIncByIdIdx( long TenantId,
		long TSecGrpIncId,
		boolean forceRead );

	/**
	 *	Get the map of CFGenKbTSecGrpIncObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpIncObj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> readTSecGrpIncByTenantIdx( long TenantId );

	/**
	 *	Get the map of CFGenKbTSecGrpIncObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpIncObj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> readTSecGrpIncByTenantIdx( long TenantId,
		boolean forceRead );

	/**
	 *	Get the map of CFGenKbTSecGrpIncObj instances sorted by their primary keys for the duplicate GroupIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpIncObj cached instances sorted by their primary keys for the duplicate GroupIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> readTSecGrpIncByGroupIdx( long TenantId,
		int TSecGroupId );

	/**
	 *	Get the map of CFGenKbTSecGrpIncObj instances sorted by their primary keys for the duplicate GroupIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpIncObj cached instances sorted by their primary keys for the duplicate GroupIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> readTSecGrpIncByGroupIdx( long TenantId,
		int TSecGroupId,
		boolean forceRead );

	/**
	 *	Get the map of CFGenKbTSecGrpIncObj instances sorted by their primary keys for the duplicate IncludeIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argIncludeGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpIncObj cached instances sorted by their primary keys for the duplicate IncludeIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> readTSecGrpIncByIncludeIdx( long TenantId,
		int IncludeGroupId );

	/**
	 *	Get the map of CFGenKbTSecGrpIncObj instances sorted by their primary keys for the duplicate IncludeIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argIncludeGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpIncObj cached instances sorted by their primary keys for the duplicate IncludeIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> readTSecGrpIncByIncludeIdx( long TenantId,
		int IncludeGroupId,
		boolean forceRead );

	/**
	 *	Get the CFGenKbTSecGrpIncObj instance for the unique UIncludeIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argIncludeGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbTSecGrpIncObj cached instance for the unique UIncludeIdx key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbTSecGrpIncObj readTSecGrpIncByUIncludeIdx(long TenantId,
		int TSecGroupId,
		int IncludeGroupId );

	/**
	 *	Get the CFGenKbTSecGrpIncObj instance for the unique UIncludeIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argIncludeGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbTSecGrpIncObj refreshed instance for the unique UIncludeIdx key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbTSecGrpIncObj readTSecGrpIncByUIncludeIdx(long TenantId,
		int TSecGroupId,
		int IncludeGroupId,
		boolean forceRead );

	ICFGenKbTSecGrpIncObj readCachedTSecGrpIncByIdIdx( long TenantId,
		long TSecGrpIncId );

	List<ICFGenKbTSecGrpIncObj> readCachedTSecGrpIncByTenantIdx( long TenantId );

	List<ICFGenKbTSecGrpIncObj> readCachedTSecGrpIncByGroupIdx( long TenantId,
		int TSecGroupId );

	List<ICFGenKbTSecGrpIncObj> readCachedTSecGrpIncByIncludeIdx( long TenantId,
		int IncludeGroupId );

	ICFGenKbTSecGrpIncObj readCachedTSecGrpIncByUIncludeIdx( long TenantId,
		int TSecGroupId,
		int IncludeGroupId );

	void deepDisposeTSecGrpIncByIdIdx( long TenantId,
		long TSecGrpIncId );

	void deepDisposeTSecGrpIncByTenantIdx( long TenantId );

	void deepDisposeTSecGrpIncByGroupIdx( long TenantId,
		int TSecGroupId );

	void deepDisposeTSecGrpIncByIncludeIdx( long TenantId,
		int IncludeGroupId );

	void deepDisposeTSecGrpIncByUIncludeIdx( long TenantId,
		int TSecGroupId,
		int IncludeGroupId );

	/**
	 *	Read a page of data as a List of TSecGrpInc-derived instances sorted by their primary keys,
	 *	as identified by the duplicate TenantIdx key attributes.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	A List of TSecGrpInc-derived instances sorted by their primary keys,
	 *		as identified by the key attributes, which may be an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> pageTSecGrpIncByTenantIdx( long TenantId,
		Long priorTenantId,
		Long priorTSecGrpIncId );

	/**
	 *	Read a page of data as a List of TSecGrpInc-derived instances sorted by their primary keys,
	 *	as identified by the duplicate GroupIdx key attributes.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	A List of TSecGrpInc-derived instances sorted by their primary keys,
	 *		as identified by the key attributes, which may be an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> pageTSecGrpIncByGroupIdx( long TenantId,
		int TSecGroupId,
		Long priorTenantId,
		Long priorTSecGrpIncId );

	/**
	 *	Read a page of data as a List of TSecGrpInc-derived instances sorted by their primary keys,
	 *	as identified by the duplicate IncludeIdx key attributes.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argIncludeGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@return	A List of TSecGrpInc-derived instances sorted by their primary keys,
	 *		as identified by the key attributes, which may be an empty set.
	 */
	List<ICFGenKbTSecGrpIncObj> pageTSecGrpIncByIncludeIdx( long TenantId,
		int IncludeGroupId,
		Long priorTenantId,
		Long priorTSecGrpIncId );

	/**
	 *	Internal use only.
	 */
	ICFGenKbTSecGrpIncObj updateTSecGrpInc( ICFGenKbTSecGrpIncObj Obj );

	/**
	 *	Internal use only.
	 */
	void deleteTSecGrpInc( ICFGenKbTSecGrpIncObj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGrpIncId	The TSecGrpInc key attribute of the instance generating the id.
	 */
	void deleteTSecGrpIncByIdIdx( long TenantId,
		long TSecGrpIncId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 */
	void deleteTSecGrpIncByTenantIdx( long TenantId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 */
	void deleteTSecGrpIncByGroupIdx( long TenantId,
		int TSecGroupId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argIncludeGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 */
	void deleteTSecGrpIncByIncludeIdx( long TenantId,
		int IncludeGroupId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 *
	 *	@param	argIncludeGroupId	The TSecGrpInc key attribute of the instance generating the id.
	 */
	void deleteTSecGrpIncByUIncludeIdx(long TenantId,
		int TSecGroupId,
		int IncludeGroupId );
}
