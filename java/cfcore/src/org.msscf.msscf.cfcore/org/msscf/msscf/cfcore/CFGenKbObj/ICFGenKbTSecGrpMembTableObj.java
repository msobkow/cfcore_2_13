// Description: Java 11 Table Object interface for CFGenKb.

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

public interface ICFGenKbTSecGrpMembTableObj
{
	ICFGenKbSchemaObj getSchema();
	void setSchema( ICFGenKbSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new TSecGrpMemb instance.
	 *
	 *	@return	A new instance.
	 */
	ICFGenKbTSecGrpMembObj newInstance();

	/**
	 *	Instantiate a new TSecGrpMemb edition of the specified TSecGrpMemb instance.
	 *
	 *	@return	A new edition.
	 */
	ICFGenKbTSecGrpMembEditObj newEditInstance( ICFGenKbTSecGrpMembObj orig );

	/**
	 *	Internal use only.
	 */
	ICFGenKbTSecGrpMembObj realiseTSecGrpMemb( ICFGenKbTSecGrpMembObj Obj );

	/**
	 *	Internal use only.
	 */
	ICFGenKbTSecGrpMembObj createTSecGrpMemb( ICFGenKbTSecGrpMembObj Obj );

	/**
	 *	Read a TSecGrpMemb-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The TSecGrpMemb-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFGenKbTSecGrpMembObj readTSecGrpMemb( CFGenKbTSecGrpMembPKey pkey );

	/**
	 *	Read a TSecGrpMemb-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The TSecGrpMemb-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFGenKbTSecGrpMembObj readTSecGrpMemb( CFGenKbTSecGrpMembPKey pkey,
		boolean forceRead );

	ICFGenKbTSecGrpMembObj readCachedTSecGrpMemb( CFGenKbTSecGrpMembPKey pkey );

	public void reallyDeepDisposeTSecGrpMemb( ICFGenKbTSecGrpMembObj obj );

	void deepDisposeTSecGrpMemb( CFGenKbTSecGrpMembPKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFGenKbTSecGrpMembObj lockTSecGrpMemb( CFGenKbTSecGrpMembPKey pkey );

	/**
	 *	Return a sorted list of all the TSecGrpMemb-derived instances in the database.
	 *
	 *	@return	List of ICFGenKbTSecGrpMembObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> readAllTSecGrpMemb();

	/**
	 *	Return a sorted map of all the TSecGrpMemb-derived instances in the database.
	 *
	 *	@return	List of ICFGenKbTSecGrpMembObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> readAllTSecGrpMemb( boolean forceRead );

	List<ICFGenKbTSecGrpMembObj> readCachedAllTSecGrpMemb();

	/**
	 *	Return a sorted map of a page of the TSecGrpMemb-derived instances in the database.
	 *
	 *	@return	List of ICFGenKbTSecGrpMembObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> pageAllTSecGrpMemb(Long priorTenantId,
		Long priorTSecGrpMembId );

	/**
	 *	Get the CFGenKbTSecGrpMembObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGrpMembId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbTSecGrpMembObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbTSecGrpMembObj readTSecGrpMembByIdIdx( long TenantId,
		long TSecGrpMembId );

	/**
	 *	Get the CFGenKbTSecGrpMembObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGrpMembId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbTSecGrpMembObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbTSecGrpMembObj readTSecGrpMembByIdIdx( long TenantId,
		long TSecGrpMembId,
		boolean forceRead );

	/**
	 *	Get the map of CFGenKbTSecGrpMembObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpMembObj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> readTSecGrpMembByTenantIdx( long TenantId );

	/**
	 *	Get the map of CFGenKbTSecGrpMembObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpMembObj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> readTSecGrpMembByTenantIdx( long TenantId,
		boolean forceRead );

	/**
	 *	Get the map of CFGenKbTSecGrpMembObj instances sorted by their primary keys for the duplicate GroupIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpMembObj cached instances sorted by their primary keys for the duplicate GroupIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> readTSecGrpMembByGroupIdx( long TenantId,
		int TSecGroupId );

	/**
	 *	Get the map of CFGenKbTSecGrpMembObj instances sorted by their primary keys for the duplicate GroupIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpMembObj cached instances sorted by their primary keys for the duplicate GroupIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> readTSecGrpMembByGroupIdx( long TenantId,
		int TSecGroupId,
		boolean forceRead );

	/**
	 *	Get the map of CFGenKbTSecGrpMembObj instances sorted by their primary keys for the duplicate UserIdx key.
	 *
	 *	@param	argSecUserId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpMembObj cached instances sorted by their primary keys for the duplicate UserIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> readTSecGrpMembByUserIdx( UUID SecUserId );

	/**
	 *	Get the map of CFGenKbTSecGrpMembObj instances sorted by their primary keys for the duplicate UserIdx key.
	 *
	 *	@param	argSecUserId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	List of CFGenKbTSecGrpMembObj cached instances sorted by their primary keys for the duplicate UserIdx key,
	 *		which may be an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> readTSecGrpMembByUserIdx( UUID SecUserId,
		boolean forceRead );

	/**
	 *	Get the CFGenKbTSecGrpMembObj instance for the unique UUserIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argSecUserId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbTSecGrpMembObj cached instance for the unique UUserIdx key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbTSecGrpMembObj readTSecGrpMembByUUserIdx(long TenantId,
		int TSecGroupId,
		UUID SecUserId );

	/**
	 *	Get the CFGenKbTSecGrpMembObj instance for the unique UUserIdx key.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argSecUserId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	CFGenKbTSecGrpMembObj refreshed instance for the unique UUserIdx key, or
	 *		null if no such instance exists.
	 */
	ICFGenKbTSecGrpMembObj readTSecGrpMembByUUserIdx(long TenantId,
		int TSecGroupId,
		UUID SecUserId,
		boolean forceRead );

	ICFGenKbTSecGrpMembObj readCachedTSecGrpMembByIdIdx( long TenantId,
		long TSecGrpMembId );

	List<ICFGenKbTSecGrpMembObj> readCachedTSecGrpMembByTenantIdx( long TenantId );

	List<ICFGenKbTSecGrpMembObj> readCachedTSecGrpMembByGroupIdx( long TenantId,
		int TSecGroupId );

	List<ICFGenKbTSecGrpMembObj> readCachedTSecGrpMembByUserIdx( UUID SecUserId );

	ICFGenKbTSecGrpMembObj readCachedTSecGrpMembByUUserIdx( long TenantId,
		int TSecGroupId,
		UUID SecUserId );

	void deepDisposeTSecGrpMembByIdIdx( long TenantId,
		long TSecGrpMembId );

	void deepDisposeTSecGrpMembByTenantIdx( long TenantId );

	void deepDisposeTSecGrpMembByGroupIdx( long TenantId,
		int TSecGroupId );

	void deepDisposeTSecGrpMembByUserIdx( UUID SecUserId );

	void deepDisposeTSecGrpMembByUUserIdx( long TenantId,
		int TSecGroupId,
		UUID SecUserId );

	/**
	 *	Read a page of data as a List of TSecGrpMemb-derived instances sorted by their primary keys,
	 *	as identified by the duplicate TenantIdx key attributes.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	A List of TSecGrpMemb-derived instances sorted by their primary keys,
	 *		as identified by the key attributes, which may be an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> pageTSecGrpMembByTenantIdx( long TenantId,
		Long priorTenantId,
		Long priorTSecGrpMembId );

	/**
	 *	Read a page of data as a List of TSecGrpMemb-derived instances sorted by their primary keys,
	 *	as identified by the duplicate GroupIdx key attributes.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	A List of TSecGrpMemb-derived instances sorted by their primary keys,
	 *		as identified by the key attributes, which may be an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> pageTSecGrpMembByGroupIdx( long TenantId,
		int TSecGroupId,
		Long priorTenantId,
		Long priorTSecGrpMembId );

	/**
	 *	Read a page of data as a List of TSecGrpMemb-derived instances sorted by their primary keys,
	 *	as identified by the duplicate UserIdx key attributes.
	 *
	 *	@param	argSecUserId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@return	A List of TSecGrpMemb-derived instances sorted by their primary keys,
	 *		as identified by the key attributes, which may be an empty set.
	 */
	List<ICFGenKbTSecGrpMembObj> pageTSecGrpMembByUserIdx( UUID SecUserId,
		Long priorTenantId,
		Long priorTSecGrpMembId );

	/**
	 *	Internal use only.
	 */
	ICFGenKbTSecGrpMembObj updateTSecGrpMemb( ICFGenKbTSecGrpMembObj Obj );

	/**
	 *	Internal use only.
	 */
	void deleteTSecGrpMemb( ICFGenKbTSecGrpMembObj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGrpMembId	The TSecGrpMemb key attribute of the instance generating the id.
	 */
	void deleteTSecGrpMembByIdIdx( long TenantId,
		long TSecGrpMembId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 */
	void deleteTSecGrpMembByTenantIdx( long TenantId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpMemb key attribute of the instance generating the id.
	 */
	void deleteTSecGrpMembByGroupIdx( long TenantId,
		int TSecGroupId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argSecUserId	The TSecGrpMemb key attribute of the instance generating the id.
	 */
	void deleteTSecGrpMembByUserIdx( UUID SecUserId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argTSecGroupId	The TSecGrpMemb key attribute of the instance generating the id.
	 *
	 *	@param	argSecUserId	The TSecGrpMemb key attribute of the instance generating the id.
	 */
	void deleteTSecGrpMembByUUserIdx(long TenantId,
		int TSecGroupId,
		UUID SecUserId );
}
