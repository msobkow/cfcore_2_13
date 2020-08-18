
// Description: Java 11 DbIO interface for Tenant.

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

package org.msscf.msscf.v2_13.cfcore.CFGenKb;

import java.lang.reflect.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfcore.CFGenKb.*;

/*
 *	CFGenKbTenantTable database interface for Tenant
 */
public interface ICFGenKbTenantTable
{
	/**
	 *	Get the next TSecGroupIdGen id generator value.
	 *
	 *	@param	PKey	The primary key of the Tenant instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	int nextTSecGroupIdGen( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Get the next TSecGroupIdGen id generator value.
	 *
	 *	@param	argId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	int nextTSecGroupIdGen( CFGenKbAuthorization Authorization,
		long argId );

	/**
	 *	Get the next TSecGrpIncIdGen id generator value.
	 *
	 *	@param	PKey	The primary key of the Tenant instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextTSecGrpIncIdGen( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Get the next TSecGrpIncIdGen id generator value.
	 *
	 *	@param	argId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextTSecGrpIncIdGen( CFGenKbAuthorization Authorization,
		long argId );

	/**
	 *	Get the next TSecGrpMembIdGen id generator value.
	 *
	 *	@param	PKey	The primary key of the Tenant instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextTSecGrpMembIdGen( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Get the next TSecGrpMembIdGen id generator value.
	 *
	 *	@param	argId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextTSecGrpMembIdGen( CFGenKbAuthorization Authorization,
		long argId );

	/**
	 *	Get the next GelCacheIdGen id generator value.
	 *
	 *	@param	PKey	The primary key of the Tenant instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextGelCacheIdGen( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Get the next GelCacheIdGen id generator value.
	 *
	 *	@param	argId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextGelCacheIdGen( CFGenKbAuthorization Authorization,
		long argId );

	/**
	 *	Get the next GelInstructionIdGen id generator value.
	 *
	 *	@param	PKey	The primary key of the Tenant instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextGelInstructionIdGen( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Get the next GelInstructionIdGen id generator value.
	 *
	 *	@param	argId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextGelInstructionIdGen( CFGenKbAuthorization Authorization,
		long argId );

	/**
	 *	Get the next GenItemIdGen id generator value.
	 *
	 *	@param	PKey	The primary key of the Tenant instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextGenItemIdGen( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Get the next GenItemIdGen id generator value.
	 *
	 *	@param	argId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextGenItemIdGen( CFGenKbAuthorization Authorization,
		long argId );

	/**
	 *	Get the next RuleCartIdGen id generator value.
	 *
	 *	@param	PKey	The primary key of the Tenant instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextRuleCartIdGen( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Get the next RuleCartIdGen id generator value.
	 *
	 *	@param	argId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 *
	 *	@return The next id value as generated by the cluster database.
	 */
	long nextRuleCartIdGen( CFGenKbAuthorization Authorization,
		long argId );


	/**
	 *	Create the instance in the database, and update the specified buffer
	 *	with the assigned primary key.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	Buff	The buffer to be created.
	 */
	void createTenant( CFGenKbAuthorization Authorization,
		CFGenKbTenantBuff Buff );


	/**
	 *	Update the instance in the database, and update the specified buffer
	 *	with any calculated changes imposed by the associated stored procedure.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	Buff	The buffer to be updated.
	 */
	void updateTenant( CFGenKbAuthorization Authorization,
		CFGenKbTenantBuff Buff );


	/**
	 *	Delete the instance from the database.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	Buff	The buffer to be deleted.
	 */
	void deleteTenant( CFGenKbAuthorization Authorization,
		CFGenKbTenantBuff Buff );
	/**
	 *	Delete the Tenant instance identified by the primary key attributes.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argId	The Tenant key attribute of the instance generating the id.
	 */
	void deleteTenantByIdIdx( CFGenKbAuthorization Authorization,
		long argId );

	/**
	 *	Delete the Tenant instance identified by the primary key.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argKey	The primary key identifying the instance to be deleted.
	 */
	void deleteTenantByIdIdx( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey argKey );
	/**
	 *	Delete the Tenant instances identified by the key ClusterIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argClusterId	The Tenant key attribute of the instance generating the id.
	 */
	void deleteTenantByClusterIdx( CFGenKbAuthorization Authorization,
		long argClusterId );

	/**
	 *	Delete the Tenant instances identified by the key ClusterIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argKey	The key identifying the instances to be deleted.
	 */
	void deleteTenantByClusterIdx( CFGenKbAuthorization Authorization,
		CFGenKbTenantByClusterIdxKey argKey );
	/**
	 *	Delete the Tenant instances identified by the key UNameIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argClusterId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@param	argTenantName	The Tenant key attribute of the instance generating the id.
	 */
	void deleteTenantByUNameIdx( CFGenKbAuthorization Authorization,
		long argClusterId,
		String argTenantName );

	/**
	 *	Delete the Tenant instances identified by the key UNameIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argKey	The key identifying the instances to be deleted.
	 */
	void deleteTenantByUNameIdx( CFGenKbAuthorization Authorization,
		CFGenKbTenantByUNameIdxKey argKey );


	/**
	 *	Read the derived Tenant buffer instance by primary key.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	PKey	The primary key of the Tenant instance to be read.
	 *
	 *	@return The buffer instance for the specified primary key, or null if there is
	 *		no such existing key value.
	 */
	CFGenKbTenantBuff readDerived( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Lock the derived Tenant buffer instance by primary key.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	PKey	The primary key of the Tenant instance to be locked.
	 *
	 *	@return The buffer instance for the specified primary key, or null if there is
	 *		no such existing key value.
	 */
	CFGenKbTenantBuff lockDerived( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Read all Tenant instances.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@return An array of derived buffer instances, potentially with 0 elements in the set.
	 */
	CFGenKbTenantBuff[] readAllDerived( CFGenKbAuthorization Authorization );

	/**
	 *	Read the derived Tenant buffer instance identified by the unique key IdIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@return The buffer instance for the specified key, or null if there is
	 *		no such existing key value.
	 */
	CFGenKbTenantBuff readDerivedByIdIdx( CFGenKbAuthorization Authorization,
		long Id );

	/**
	 *	Read an array of the derived Tenant buffer instances identified by the duplicate key ClusterIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argClusterId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@return An array of derived buffer instances for the specified key, potentially with 0 elements in the set.
	 */
	CFGenKbTenantBuff[] readDerivedByClusterIdx( CFGenKbAuthorization Authorization,
		long ClusterId );

	/**
	 *	Read the derived Tenant buffer instance identified by the unique key UNameIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argClusterId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@param	argTenantName	The Tenant key attribute of the instance generating the id.
	 *
	 *	@return The buffer instance for the specified key, or null if there is
	 *		no such existing key value.
	 */
	CFGenKbTenantBuff readDerivedByUNameIdx( CFGenKbAuthorization Authorization,
		long ClusterId,
		String TenantName );

	/**
	 *	Read the specific Tenant buffer instance identified by the primary key.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	PKey	The primary key of the Tenant instance to be locked.
	 *
	 *	@return The buffer instance for the specified primary key, or null if there is
	 *		no such existing key value.
	 *
	 *	@throws	CFLibNotSupportedException thrown by client-side implementations.
	 */
	CFGenKbTenantBuff readBuff( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Lock the specific Tenant buffer instance identified by the primary key.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	PKey	The primary key of the Tenant instance to be locked.
	 *
	 *	@return The buffer instance for the specified primary key, or null if there is
	 *		no such existing key value.
	 *
	 *	@throws	CFLibNotSupportedException thrown by client-side implementations.
	 */
	CFGenKbTenantBuff lockBuff( CFGenKbAuthorization Authorization,
		CFGenKbTenantPKey PKey );

	/**
	 *	Read all the specific Tenant buffer instances.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@return All the specific Tenant instances in the database accessible for the Authorization.
	 */
	CFGenKbTenantBuff[] readAllBuff( CFGenKbAuthorization Authorization );

	/**
	 *	Read a page of all the specific Tenant buffer instances.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@return All the specific Tenant instances in the database accessible for the Authorization.
	 */
	CFGenKbTenantBuff[] pageAllBuff( CFGenKbAuthorization Authorization,
		Long priorId );

	/**
	 *	Read the specific Tenant buffer instance identified by the unique key IdIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@return The buffer instance for the specified key, or null if there is
	 *		no such existing key value.
	 *
	 *	@throws	CFLibNotSupportedException thrown by client-side implementations.
	 */
	CFGenKbTenantBuff readBuffByIdIdx( CFGenKbAuthorization Authorization,
		long Id );

	/**
	 *	Read an array of the specific Tenant buffer instances identified by the duplicate key ClusterIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argClusterId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@return An array of derived buffer instances for the specified key, potentially with 0 elements in the set.
	 *
	 *	@throws	CFLibNotSupportedException thrown by client-side implementations.
	 */
	CFGenKbTenantBuff[] readBuffByClusterIdx( CFGenKbAuthorization Authorization,
		long ClusterId );

	/**
	 *	Read the specific Tenant buffer instance identified by the unique key UNameIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argClusterId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@param	argTenantName	The Tenant key attribute of the instance generating the id.
	 *
	 *	@return The buffer instance for the specified key, or null if there is
	 *		no such existing key value.
	 *
	 *	@throws	CFLibNotSupportedException thrown by client-side implementations.
	 */
	CFGenKbTenantBuff readBuffByUNameIdx( CFGenKbAuthorization Authorization,
		long ClusterId,
		String TenantName );

	/**
	 *	Read a page array of the specific Tenant buffer instances identified by the duplicate key ClusterIdx.
	 *
	 *	@param	Authorization	The session authorization information.
	 *
	 *	@param	argClusterId	The Tenant key attribute of the instance generating the id.
	 *
	 *	@return An array of derived buffer instances for the specified key, potentially with 0 elements in the set.
	 *
	 *	@throws	CFLibNotSupportedException thrown by client-side implementations.
	 */
	CFGenKbTenantBuff[] pageBuffByClusterIdx( CFGenKbAuthorization Authorization,
		long ClusterId,
		Long priorId );

	/**
	 *	Release any prepared statements allocated by this instance.
	 *
	 *	@throws CFLibNotSupportedException thrown by client-side implementations.
	 */
	void releasePreparedStatements();
}
