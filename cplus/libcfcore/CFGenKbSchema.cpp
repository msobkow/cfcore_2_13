// Description: C++18 implementation of a CFGenKb schema.

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

#include <cflib/ICFLibPublic.hpp>

using namespace std;

#include <cfgenkb/CFGenKbSchema.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>

namespace cfcore {

	const std::string CFGenKbSchema::CLASS_NAME( "CFGenKbSchema" );

	CFGenKbSchema::CFGenKbSchema()
	: ICFGenKbSchema()
 	{
		authorization = NULL;
		tablePerms = NULL;
		jndiName = NULL;
		schemaDbName = new std::string( "GenKb213" );
		lowerDbSchemaName = new std::string( "GenKb213" );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );

		tableCluster = NULL;
		tableDefClass = NULL;
		tableGelBoilerplate = NULL;
		tableGelBuiltin = NULL;
		tableGelCache = NULL;
		tableGelCall = NULL;
		tableGelConstrain = NULL;
		tableGelCounter = NULL;
		tableGelError = NULL;
		tableGelExecutable = NULL;
		tableGelExpansion = NULL;
		tableGelInstruction = NULL;
		tableGelIterator = NULL;
		tableGelModifier = NULL;
		tableGelPop = NULL;
		tableGelPrefixLine = NULL;
		tableGelReference = NULL;
		tableGelSequence = NULL;
		tableGelSpread = NULL;
		tableGelSwitch = NULL;
		tableGelSwitchLimb = NULL;
		tableGenBind = NULL;
		tableGenFile = NULL;
		tableGenItem = NULL;
		tableGenIterator = NULL;
		tableGenReference = NULL;
		tableGenRule = NULL;
		tableGenTrunc = NULL;
		tableHostNode = NULL;
		tableRuleCart = NULL;
		tableRuleType = NULL;
		tableSecApp = NULL;
		tableSecDevice = NULL;
		tableSecForm = NULL;
		tableSecGroup = NULL;
		tableSecGroupForm = NULL;
		tableSecGrpInc = NULL;
		tableSecGrpMemb = NULL;
		tableSecSession = NULL;
		tableSecUser = NULL;
		tableSysCluster = NULL;
		tableTSecGroup = NULL;
		tableTSecGrpInc = NULL;
		tableTSecGrpMemb = NULL;
		tableTenant = NULL;
		tableTool = NULL;
		tableToolSet = NULL;
	}

	CFGenKbSchema::CFGenKbSchema( const std::string& argJndiName )
	: ICFGenKbSchema()
	{
		static const std::string S_ProcName( "CFGenKbSchema-constructor" );
		static const std::string S_ArgJndiName( "argJndiName" );
		if( argJndiName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_ArgJndiName );
		}
		authorization = NULL;
		tablePerms = NULL;
		jndiName = new std::string( argJndiName );
		schemaDbName = new std::string( "GenKb213" );
		lowerDbSchemaName = new std::string( "GenKb213" );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );

		tableCluster = NULL;
		tableDefClass = NULL;
		tableGelBoilerplate = NULL;
		tableGelBuiltin = NULL;
		tableGelCache = NULL;
		tableGelCall = NULL;
		tableGelConstrain = NULL;
		tableGelCounter = NULL;
		tableGelError = NULL;
		tableGelExecutable = NULL;
		tableGelExpansion = NULL;
		tableGelInstruction = NULL;
		tableGelIterator = NULL;
		tableGelModifier = NULL;
		tableGelPop = NULL;
		tableGelPrefixLine = NULL;
		tableGelReference = NULL;
		tableGelSequence = NULL;
		tableGelSpread = NULL;
		tableGelSwitch = NULL;
		tableGelSwitchLimb = NULL;
		tableGenBind = NULL;
		tableGenFile = NULL;
		tableGenItem = NULL;
		tableGenIterator = NULL;
		tableGenReference = NULL;
		tableGenRule = NULL;
		tableGenTrunc = NULL;
		tableHostNode = NULL;
		tableRuleCart = NULL;
		tableRuleType = NULL;
		tableSecApp = NULL;
		tableSecDevice = NULL;
		tableSecForm = NULL;
		tableSecGroup = NULL;
		tableSecGroupForm = NULL;
		tableSecGrpInc = NULL;
		tableSecGrpMemb = NULL;
		tableSecSession = NULL;
		tableSecUser = NULL;
		tableSysCluster = NULL;
		tableTSecGroup = NULL;
		tableTSecGrpInc = NULL;
		tableTSecGrpMemb = NULL;
		tableTenant = NULL;
		tableTool = NULL;
		tableToolSet = NULL;
	}

	CFGenKbSchema::~CFGenKbSchema() {
		authorization = NULL;
		if( tablePerms != NULL ) {
			delete tablePerms;
			tablePerms = NULL;
		}
		if( jndiName != NULL ) {
			delete jndiName;
			jndiName = NULL;
		}
		if( schemaDbName != NULL ) {
			delete schemaDbName;
			schemaDbName = NULL;
		}
		if( lowerDbSchemaName != NULL ) {
			delete lowerDbSchemaName;
			lowerDbSchemaName = NULL;
		}

		if( tableCluster != NULL ) {
			delete tableCluster;
			tableCluster = NULL;
		}
		if( tableDefClass != NULL ) {
			delete tableDefClass;
			tableDefClass = NULL;
		}
		if( tableGelCache != NULL ) {
			delete tableGelCache;
			tableGelCache = NULL;
		}
		if( tableGelIterator != NULL ) {
			delete tableGelIterator;
			tableGelIterator = NULL;
		}
		if( tableGelSpread != NULL ) {
			delete tableGelSpread;
			tableGelSpread = NULL;
		}
		if( tableGelPop != NULL ) {
			delete tableGelPop;
			tableGelPop = NULL;
		}
		if( tableGelPrefixLine != NULL ) {
			delete tableGelPrefixLine;
			tableGelPrefixLine = NULL;
		}
		if( tableGelReference != NULL ) {
			delete tableGelReference;
			tableGelReference = NULL;
		}
		if( tableGelCall != NULL ) {
			delete tableGelCall;
			tableGelCall = NULL;
		}
		if( tableGelExecutable != NULL ) {
			delete tableGelExecutable;
			tableGelExecutable = NULL;
		}
		if( tableGelSequence != NULL ) {
			delete tableGelSequence;
			tableGelSequence = NULL;
		}
		if( tableGelSwitch != NULL ) {
			delete tableGelSwitch;
			tableGelSwitch = NULL;
		}
		if( tableGelError != NULL ) {
			delete tableGelError;
			tableGelError = NULL;
		}
		if( tableGelBoilerplate != NULL ) {
			delete tableGelBoilerplate;
			tableGelBoilerplate = NULL;
		}
		if( tableGelBuiltin != NULL ) {
			delete tableGelBuiltin;
			tableGelBuiltin = NULL;
		}
		if( tableGelConstrain != NULL ) {
			delete tableGelConstrain;
			tableGelConstrain = NULL;
		}
		if( tableGelCounter != NULL ) {
			delete tableGelCounter;
			tableGelCounter = NULL;
		}
		if( tableGelExpansion != NULL ) {
			delete tableGelExpansion;
			tableGelExpansion = NULL;
		}
		if( tableGelModifier != NULL ) {
			delete tableGelModifier;
			tableGelModifier = NULL;
		}
		if( tableGelInstruction != NULL ) {
			delete tableGelInstruction;
			tableGelInstruction = NULL;
		}
		if( tableGelSwitchLimb != NULL ) {
			delete tableGelSwitchLimb;
			tableGelSwitchLimb = NULL;
		}
		if( tableGenIterator != NULL ) {
			delete tableGenIterator;
			tableGenIterator = NULL;
		}
		if( tableGenReference != NULL ) {
			delete tableGenReference;
			tableGenReference = NULL;
		}
		if( tableGenTrunc != NULL ) {
			delete tableGenTrunc;
			tableGenTrunc = NULL;
		}
		if( tableGenFile != NULL ) {
			delete tableGenFile;
			tableGenFile = NULL;
		}
		if( tableGenRule != NULL ) {
			delete tableGenRule;
			tableGenRule = NULL;
		}
		if( tableGenBind != NULL ) {
			delete tableGenBind;
			tableGenBind = NULL;
		}
		if( tableGenItem != NULL ) {
			delete tableGenItem;
			tableGenItem = NULL;
		}
		if( tableHostNode != NULL ) {
			delete tableHostNode;
			tableHostNode = NULL;
		}
		if( tableRuleCart != NULL ) {
			delete tableRuleCart;
			tableRuleCart = NULL;
		}
		if( tableRuleType != NULL ) {
			delete tableRuleType;
			tableRuleType = NULL;
		}
		if( tableSecApp != NULL ) {
			delete tableSecApp;
			tableSecApp = NULL;
		}
		if( tableSecDevice != NULL ) {
			delete tableSecDevice;
			tableSecDevice = NULL;
		}
		if( tableSecForm != NULL ) {
			delete tableSecForm;
			tableSecForm = NULL;
		}
		if( tableSecGroup != NULL ) {
			delete tableSecGroup;
			tableSecGroup = NULL;
		}
		if( tableSecGroupForm != NULL ) {
			delete tableSecGroupForm;
			tableSecGroupForm = NULL;
		}
		if( tableSecGrpInc != NULL ) {
			delete tableSecGrpInc;
			tableSecGrpInc = NULL;
		}
		if( tableSecGrpMemb != NULL ) {
			delete tableSecGrpMemb;
			tableSecGrpMemb = NULL;
		}
		if( tableSecSession != NULL ) {
			delete tableSecSession;
			tableSecSession = NULL;
		}
		if( tableSecUser != NULL ) {
			delete tableSecUser;
			tableSecUser = NULL;
		}
		if( tableSysCluster != NULL ) {
			delete tableSysCluster;
			tableSysCluster = NULL;
		}
		if( tableTSecGroup != NULL ) {
			delete tableTSecGroup;
			tableTSecGroup = NULL;
		}
		if( tableTSecGrpInc != NULL ) {
			delete tableTSecGrpInc;
			tableTSecGrpInc = NULL;
		}
		if( tableTSecGrpMemb != NULL ) {
			delete tableTSecGrpMemb;
			tableTSecGrpMemb = NULL;
		}
		if( tableTenant != NULL ) {
			delete tableTenant;
			tableTenant = NULL;
		}
		if( tableTool != NULL ) {
			delete tableTool;
			tableTool = NULL;
		}
		if( tableToolSet != NULL ) {
			delete tableToolSet;
			tableToolSet = NULL;
		}
	}

	cfcore::CFGenKbAuthorization* CFGenKbSchema::getAuthorization() const {
		return( authorization );
	}

	void CFGenKbSchema::setAuthorization( cfcore::CFGenKbAuthorization* value ) {
		authorization = value;
	}

	const std::string* CFGenKbSchema::getJndiName() const {
		return( jndiName );
	}

	void CFGenKbSchema::setJndiName( const std::string& value ) {
		if( jndiName != NULL ) {
			delete jndiName;
			jndiName = NULL;
		}
		if( value.length() > 0 ) {
			jndiName = new std::string( value );
		}
	}

	bool CFGenKbSchema::isConnected() {
		static const std::string S_ProcName( "isConnected" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	bool CFGenKbSchema::connect() {
		static const std::string S_ProcName( "connect" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	bool CFGenKbSchema::connect( const std::string& username, const std::string& password ) {
		static const std::string S_ProcName( "connect-userpw" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	bool CFGenKbSchema::connect( const std::string& loginId, const std::string& password, const std::string& clusterName, const std::string& tenantName ) {
		static const std::string S_ProcName( "connect-full" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	void CFGenKbSchema::disconnect( bool doCommit ) {
		static const std::string S_ProcName( "disconnect" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	void CFGenKbSchema::logout( cfcore::CFGenKbAuthorization* auth ) {
		static const std::string S_ProcName( "logout" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	ICFGenKbSchema* CFGenKbSchema::newSchema() {
		static const std::string S_ProcName( "newSchema" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	int16_t CFGenKbSchema::nextDefClassIdGen() {
		static const std::string S_ProcName( "nextDefClassIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int16_t CFGenKbSchema::nextRuleTypeIdGen() {
		static const std::string S_ProcName( "nextRuleTypeIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int16_t CFGenKbSchema::nextToolIdGen() {
		static const std::string S_ProcName( "nextToolIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int16_t CFGenKbSchema::nextToolSetIdGen() {
		static const std::string S_ProcName( "nextToolSetIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int64_t CFGenKbSchema::nextClusterIdGen() {
		static const std::string S_ProcName( "nextClusterIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int64_t CFGenKbSchema::nextTenantIdGen() {
		static const std::string S_ProcName( "nextTenantIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::ICFGenKbClusterTable* CFGenKbSchema::getTableCluster() {
		return( tableCluster );
	}

	void CFGenKbSchema::setTableCluster( cfcore::ICFGenKbClusterTable* value ) {
		if( tableCluster != NULL ) {
			delete tableCluster;
			tableCluster = NULL;
		}
		tableCluster = value;
	}

	cfcore::ICFGenKbDefClassTable* CFGenKbSchema::getTableDefClass() {
		return( tableDefClass );
	}

	void CFGenKbSchema::setTableDefClass( cfcore::ICFGenKbDefClassTable* value ) {
		if( tableDefClass != NULL ) {
			delete tableDefClass;
			tableDefClass = NULL;
		}
		tableDefClass = value;
	}

	cfcore::ICFGenKbGelBoilerplateTable* CFGenKbSchema::getTableGelBoilerplate() {
		return( tableGelBoilerplate );
	}

	void CFGenKbSchema::setTableGelBoilerplate( cfcore::ICFGenKbGelBoilerplateTable* value ) {
		if( tableGelBoilerplate != NULL ) {
			delete tableGelBoilerplate;
			tableGelBoilerplate = NULL;
		}
		tableGelBoilerplate = value;
	}

	cfcore::ICFGenKbGelBuiltinTable* CFGenKbSchema::getTableGelBuiltin() {
		return( tableGelBuiltin );
	}

	void CFGenKbSchema::setTableGelBuiltin( cfcore::ICFGenKbGelBuiltinTable* value ) {
		if( tableGelBuiltin != NULL ) {
			delete tableGelBuiltin;
			tableGelBuiltin = NULL;
		}
		tableGelBuiltin = value;
	}

	cfcore::ICFGenKbGelCacheTable* CFGenKbSchema::getTableGelCache() {
		return( tableGelCache );
	}

	void CFGenKbSchema::setTableGelCache( cfcore::ICFGenKbGelCacheTable* value ) {
		if( tableGelCache != NULL ) {
			delete tableGelCache;
			tableGelCache = NULL;
		}
		tableGelCache = value;
	}

	cfcore::ICFGenKbGelCallTable* CFGenKbSchema::getTableGelCall() {
		return( tableGelCall );
	}

	void CFGenKbSchema::setTableGelCall( cfcore::ICFGenKbGelCallTable* value ) {
		if( tableGelCall != NULL ) {
			delete tableGelCall;
			tableGelCall = NULL;
		}
		tableGelCall = value;
	}

	cfcore::ICFGenKbGelConstrainTable* CFGenKbSchema::getTableGelConstrain() {
		return( tableGelConstrain );
	}

	void CFGenKbSchema::setTableGelConstrain( cfcore::ICFGenKbGelConstrainTable* value ) {
		if( tableGelConstrain != NULL ) {
			delete tableGelConstrain;
			tableGelConstrain = NULL;
		}
		tableGelConstrain = value;
	}

	cfcore::ICFGenKbGelCounterTable* CFGenKbSchema::getTableGelCounter() {
		return( tableGelCounter );
	}

	void CFGenKbSchema::setTableGelCounter( cfcore::ICFGenKbGelCounterTable* value ) {
		if( tableGelCounter != NULL ) {
			delete tableGelCounter;
			tableGelCounter = NULL;
		}
		tableGelCounter = value;
	}

	cfcore::ICFGenKbGelErrorTable* CFGenKbSchema::getTableGelError() {
		return( tableGelError );
	}

	void CFGenKbSchema::setTableGelError( cfcore::ICFGenKbGelErrorTable* value ) {
		if( tableGelError != NULL ) {
			delete tableGelError;
			tableGelError = NULL;
		}
		tableGelError = value;
	}

	cfcore::ICFGenKbGelExecutableTable* CFGenKbSchema::getTableGelExecutable() {
		return( tableGelExecutable );
	}

	void CFGenKbSchema::setTableGelExecutable( cfcore::ICFGenKbGelExecutableTable* value ) {
		if( tableGelExecutable != NULL ) {
			delete tableGelExecutable;
			tableGelExecutable = NULL;
		}
		tableGelExecutable = value;
	}

	cfcore::ICFGenKbGelExpansionTable* CFGenKbSchema::getTableGelExpansion() {
		return( tableGelExpansion );
	}

	void CFGenKbSchema::setTableGelExpansion( cfcore::ICFGenKbGelExpansionTable* value ) {
		if( tableGelExpansion != NULL ) {
			delete tableGelExpansion;
			tableGelExpansion = NULL;
		}
		tableGelExpansion = value;
	}

	cfcore::ICFGenKbGelInstructionTable* CFGenKbSchema::getTableGelInstruction() {
		return( tableGelInstruction );
	}

	void CFGenKbSchema::setTableGelInstruction( cfcore::ICFGenKbGelInstructionTable* value ) {
		if( tableGelInstruction != NULL ) {
			delete tableGelInstruction;
			tableGelInstruction = NULL;
		}
		tableGelInstruction = value;
	}

	cfcore::ICFGenKbGelIteratorTable* CFGenKbSchema::getTableGelIterator() {
		return( tableGelIterator );
	}

	void CFGenKbSchema::setTableGelIterator( cfcore::ICFGenKbGelIteratorTable* value ) {
		if( tableGelIterator != NULL ) {
			delete tableGelIterator;
			tableGelIterator = NULL;
		}
		tableGelIterator = value;
	}

	cfcore::ICFGenKbGelModifierTable* CFGenKbSchema::getTableGelModifier() {
		return( tableGelModifier );
	}

	void CFGenKbSchema::setTableGelModifier( cfcore::ICFGenKbGelModifierTable* value ) {
		if( tableGelModifier != NULL ) {
			delete tableGelModifier;
			tableGelModifier = NULL;
		}
		tableGelModifier = value;
	}

	cfcore::ICFGenKbGelPopTable* CFGenKbSchema::getTableGelPop() {
		return( tableGelPop );
	}

	void CFGenKbSchema::setTableGelPop( cfcore::ICFGenKbGelPopTable* value ) {
		if( tableGelPop != NULL ) {
			delete tableGelPop;
			tableGelPop = NULL;
		}
		tableGelPop = value;
	}

	cfcore::ICFGenKbGelPrefixLineTable* CFGenKbSchema::getTableGelPrefixLine() {
		return( tableGelPrefixLine );
	}

	void CFGenKbSchema::setTableGelPrefixLine( cfcore::ICFGenKbGelPrefixLineTable* value ) {
		if( tableGelPrefixLine != NULL ) {
			delete tableGelPrefixLine;
			tableGelPrefixLine = NULL;
		}
		tableGelPrefixLine = value;
	}

	cfcore::ICFGenKbGelReferenceTable* CFGenKbSchema::getTableGelReference() {
		return( tableGelReference );
	}

	void CFGenKbSchema::setTableGelReference( cfcore::ICFGenKbGelReferenceTable* value ) {
		if( tableGelReference != NULL ) {
			delete tableGelReference;
			tableGelReference = NULL;
		}
		tableGelReference = value;
	}

	cfcore::ICFGenKbGelSequenceTable* CFGenKbSchema::getTableGelSequence() {
		return( tableGelSequence );
	}

	void CFGenKbSchema::setTableGelSequence( cfcore::ICFGenKbGelSequenceTable* value ) {
		if( tableGelSequence != NULL ) {
			delete tableGelSequence;
			tableGelSequence = NULL;
		}
		tableGelSequence = value;
	}

	cfcore::ICFGenKbGelSpreadTable* CFGenKbSchema::getTableGelSpread() {
		return( tableGelSpread );
	}

	void CFGenKbSchema::setTableGelSpread( cfcore::ICFGenKbGelSpreadTable* value ) {
		if( tableGelSpread != NULL ) {
			delete tableGelSpread;
			tableGelSpread = NULL;
		}
		tableGelSpread = value;
	}

	cfcore::ICFGenKbGelSwitchTable* CFGenKbSchema::getTableGelSwitch() {
		return( tableGelSwitch );
	}

	void CFGenKbSchema::setTableGelSwitch( cfcore::ICFGenKbGelSwitchTable* value ) {
		if( tableGelSwitch != NULL ) {
			delete tableGelSwitch;
			tableGelSwitch = NULL;
		}
		tableGelSwitch = value;
	}

	cfcore::ICFGenKbGelSwitchLimbTable* CFGenKbSchema::getTableGelSwitchLimb() {
		return( tableGelSwitchLimb );
	}

	void CFGenKbSchema::setTableGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbTable* value ) {
		if( tableGelSwitchLimb != NULL ) {
			delete tableGelSwitchLimb;
			tableGelSwitchLimb = NULL;
		}
		tableGelSwitchLimb = value;
	}

	cfcore::ICFGenKbGenBindTable* CFGenKbSchema::getTableGenBind() {
		return( tableGenBind );
	}

	void CFGenKbSchema::setTableGenBind( cfcore::ICFGenKbGenBindTable* value ) {
		if( tableGenBind != NULL ) {
			delete tableGenBind;
			tableGenBind = NULL;
		}
		tableGenBind = value;
	}

	cfcore::ICFGenKbGenFileTable* CFGenKbSchema::getTableGenFile() {
		return( tableGenFile );
	}

	void CFGenKbSchema::setTableGenFile( cfcore::ICFGenKbGenFileTable* value ) {
		if( tableGenFile != NULL ) {
			delete tableGenFile;
			tableGenFile = NULL;
		}
		tableGenFile = value;
	}

	cfcore::ICFGenKbGenItemTable* CFGenKbSchema::getTableGenItem() {
		return( tableGenItem );
	}

	void CFGenKbSchema::setTableGenItem( cfcore::ICFGenKbGenItemTable* value ) {
		if( tableGenItem != NULL ) {
			delete tableGenItem;
			tableGenItem = NULL;
		}
		tableGenItem = value;
	}

	cfcore::ICFGenKbGenIteratorTable* CFGenKbSchema::getTableGenIterator() {
		return( tableGenIterator );
	}

	void CFGenKbSchema::setTableGenIterator( cfcore::ICFGenKbGenIteratorTable* value ) {
		if( tableGenIterator != NULL ) {
			delete tableGenIterator;
			tableGenIterator = NULL;
		}
		tableGenIterator = value;
	}

	cfcore::ICFGenKbGenReferenceTable* CFGenKbSchema::getTableGenReference() {
		return( tableGenReference );
	}

	void CFGenKbSchema::setTableGenReference( cfcore::ICFGenKbGenReferenceTable* value ) {
		if( tableGenReference != NULL ) {
			delete tableGenReference;
			tableGenReference = NULL;
		}
		tableGenReference = value;
	}

	cfcore::ICFGenKbGenRuleTable* CFGenKbSchema::getTableGenRule() {
		return( tableGenRule );
	}

	void CFGenKbSchema::setTableGenRule( cfcore::ICFGenKbGenRuleTable* value ) {
		if( tableGenRule != NULL ) {
			delete tableGenRule;
			tableGenRule = NULL;
		}
		tableGenRule = value;
	}

	cfcore::ICFGenKbGenTruncTable* CFGenKbSchema::getTableGenTrunc() {
		return( tableGenTrunc );
	}

	void CFGenKbSchema::setTableGenTrunc( cfcore::ICFGenKbGenTruncTable* value ) {
		if( tableGenTrunc != NULL ) {
			delete tableGenTrunc;
			tableGenTrunc = NULL;
		}
		tableGenTrunc = value;
	}

	cfcore::ICFGenKbHostNodeTable* CFGenKbSchema::getTableHostNode() {
		return( tableHostNode );
	}

	void CFGenKbSchema::setTableHostNode( cfcore::ICFGenKbHostNodeTable* value ) {
		if( tableHostNode != NULL ) {
			delete tableHostNode;
			tableHostNode = NULL;
		}
		tableHostNode = value;
	}

	cfcore::ICFGenKbRuleCartTable* CFGenKbSchema::getTableRuleCart() {
		return( tableRuleCart );
	}

	void CFGenKbSchema::setTableRuleCart( cfcore::ICFGenKbRuleCartTable* value ) {
		if( tableRuleCart != NULL ) {
			delete tableRuleCart;
			tableRuleCart = NULL;
		}
		tableRuleCart = value;
	}

	cfcore::ICFGenKbRuleTypeTable* CFGenKbSchema::getTableRuleType() {
		return( tableRuleType );
	}

	void CFGenKbSchema::setTableRuleType( cfcore::ICFGenKbRuleTypeTable* value ) {
		if( tableRuleType != NULL ) {
			delete tableRuleType;
			tableRuleType = NULL;
		}
		tableRuleType = value;
	}

	cfcore::ICFGenKbSecAppTable* CFGenKbSchema::getTableSecApp() {
		return( tableSecApp );
	}

	void CFGenKbSchema::setTableSecApp( cfcore::ICFGenKbSecAppTable* value ) {
		if( tableSecApp != NULL ) {
			delete tableSecApp;
			tableSecApp = NULL;
		}
		tableSecApp = value;
	}

	cfcore::ICFGenKbSecDeviceTable* CFGenKbSchema::getTableSecDevice() {
		return( tableSecDevice );
	}

	void CFGenKbSchema::setTableSecDevice( cfcore::ICFGenKbSecDeviceTable* value ) {
		if( tableSecDevice != NULL ) {
			delete tableSecDevice;
			tableSecDevice = NULL;
		}
		tableSecDevice = value;
	}

	cfcore::ICFGenKbSecFormTable* CFGenKbSchema::getTableSecForm() {
		return( tableSecForm );
	}

	void CFGenKbSchema::setTableSecForm( cfcore::ICFGenKbSecFormTable* value ) {
		if( tableSecForm != NULL ) {
			delete tableSecForm;
			tableSecForm = NULL;
		}
		tableSecForm = value;
	}

	cfcore::ICFGenKbSecGroupTable* CFGenKbSchema::getTableSecGroup() {
		return( tableSecGroup );
	}

	void CFGenKbSchema::setTableSecGroup( cfcore::ICFGenKbSecGroupTable* value ) {
		if( tableSecGroup != NULL ) {
			delete tableSecGroup;
			tableSecGroup = NULL;
		}
		tableSecGroup = value;
	}

	cfcore::ICFGenKbSecGroupFormTable* CFGenKbSchema::getTableSecGroupForm() {
		return( tableSecGroupForm );
	}

	void CFGenKbSchema::setTableSecGroupForm( cfcore::ICFGenKbSecGroupFormTable* value ) {
		if( tableSecGroupForm != NULL ) {
			delete tableSecGroupForm;
			tableSecGroupForm = NULL;
		}
		tableSecGroupForm = value;
	}

	cfcore::ICFGenKbSecGrpIncTable* CFGenKbSchema::getTableSecGrpInc() {
		return( tableSecGrpInc );
	}

	void CFGenKbSchema::setTableSecGrpInc( cfcore::ICFGenKbSecGrpIncTable* value ) {
		if( tableSecGrpInc != NULL ) {
			delete tableSecGrpInc;
			tableSecGrpInc = NULL;
		}
		tableSecGrpInc = value;
	}

	cfcore::ICFGenKbSecGrpMembTable* CFGenKbSchema::getTableSecGrpMemb() {
		return( tableSecGrpMemb );
	}

	void CFGenKbSchema::setTableSecGrpMemb( cfcore::ICFGenKbSecGrpMembTable* value ) {
		if( tableSecGrpMemb != NULL ) {
			delete tableSecGrpMemb;
			tableSecGrpMemb = NULL;
		}
		tableSecGrpMemb = value;
	}

	cfcore::ICFGenKbSecSessionTable* CFGenKbSchema::getTableSecSession() {
		return( tableSecSession );
	}

	void CFGenKbSchema::setTableSecSession( cfcore::ICFGenKbSecSessionTable* value ) {
		if( tableSecSession != NULL ) {
			delete tableSecSession;
			tableSecSession = NULL;
		}
		tableSecSession = value;
	}

	cfcore::ICFGenKbSecUserTable* CFGenKbSchema::getTableSecUser() {
		return( tableSecUser );
	}

	void CFGenKbSchema::setTableSecUser( cfcore::ICFGenKbSecUserTable* value ) {
		if( tableSecUser != NULL ) {
			delete tableSecUser;
			tableSecUser = NULL;
		}
		tableSecUser = value;
	}

	cfcore::ICFGenKbSysClusterTable* CFGenKbSchema::getTableSysCluster() {
		return( tableSysCluster );
	}

	void CFGenKbSchema::setTableSysCluster( cfcore::ICFGenKbSysClusterTable* value ) {
		if( tableSysCluster != NULL ) {
			delete tableSysCluster;
			tableSysCluster = NULL;
		}
		tableSysCluster = value;
	}

	cfcore::ICFGenKbTSecGroupTable* CFGenKbSchema::getTableTSecGroup() {
		return( tableTSecGroup );
	}

	void CFGenKbSchema::setTableTSecGroup( cfcore::ICFGenKbTSecGroupTable* value ) {
		if( tableTSecGroup != NULL ) {
			delete tableTSecGroup;
			tableTSecGroup = NULL;
		}
		tableTSecGroup = value;
	}

	cfcore::ICFGenKbTSecGrpIncTable* CFGenKbSchema::getTableTSecGrpInc() {
		return( tableTSecGrpInc );
	}

	void CFGenKbSchema::setTableTSecGrpInc( cfcore::ICFGenKbTSecGrpIncTable* value ) {
		if( tableTSecGrpInc != NULL ) {
			delete tableTSecGrpInc;
			tableTSecGrpInc = NULL;
		}
		tableTSecGrpInc = value;
	}

	cfcore::ICFGenKbTSecGrpMembTable* CFGenKbSchema::getTableTSecGrpMemb() {
		return( tableTSecGrpMemb );
	}

	void CFGenKbSchema::setTableTSecGrpMemb( cfcore::ICFGenKbTSecGrpMembTable* value ) {
		if( tableTSecGrpMemb != NULL ) {
			delete tableTSecGrpMemb;
			tableTSecGrpMemb = NULL;
		}
		tableTSecGrpMemb = value;
	}

	cfcore::ICFGenKbTenantTable* CFGenKbSchema::getTableTenant() {
		return( tableTenant );
	}

	void CFGenKbSchema::setTableTenant( cfcore::ICFGenKbTenantTable* value ) {
		if( tableTenant != NULL ) {
			delete tableTenant;
			tableTenant = NULL;
		}
		tableTenant = value;
	}

	cfcore::ICFGenKbToolTable* CFGenKbSchema::getTableTool() {
		return( tableTool );
	}

	void CFGenKbSchema::setTableTool( cfcore::ICFGenKbToolTable* value ) {
		if( tableTool != NULL ) {
			delete tableTool;
			tableTool = NULL;
		}
		tableTool = value;
	}

	cfcore::ICFGenKbToolSetTable* CFGenKbSchema::getTableToolSet() {
		return( tableToolSet );
	}

	void CFGenKbSchema::setTableToolSet( cfcore::ICFGenKbToolSetTable* value ) {
		if( tableToolSet != NULL ) {
			delete tableToolSet;
			tableToolSet = NULL;
		}
		tableToolSet = value;
	}

	bool CFGenKbSchema::isTransactionOpen() const {
		static const std::string S_ProcName( "isTransactionOpen" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	bool CFGenKbSchema::beginTransaction() {
		static const std::string S_ProcName( "beginTransaction" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	void CFGenKbSchema::commit() {
		static const std::string S_ProcName( "commit" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	void CFGenKbSchema::rollback() {
		static const std::string S_ProcName( "rollback" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	cfcore::ICFGenKbTablePerms* CFGenKbSchema::getTablePerms() {
		return( tablePerms );
	}

	void CFGenKbSchema::setTablePerms( cfcore::ICFGenKbTablePerms* value ) {
		if( tablePerms != NULL ) {
			delete tablePerms;
			tablePerms = NULL;
		}
		tablePerms = value;
	}

	void CFGenKbSchema::releasePreparedStatements() {
	}

	const std::string* CFGenKbSchema::getDbSchemaName() const {
		return( schemaDbName );
	}

	const std::string* CFGenKbSchema::getLowerDbSchemaName() const {
		return( lowerDbSchemaName );
	}

	void CFGenKbSchema::setDbSchemaName( const std::string& argDbSchemaName ) {
		static const std::string S_ProcName( "setDbSchemaName" );
		static const std::string S_ArgDbSchemaName( "argDbSchemaName" );
		if( argDbSchemaName.length() <= 0 ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_ArgDbSchemaName );
		}
		if( schemaDbName != NULL ) {
			delete schemaDbName;
			schemaDbName = NULL;
		}
		if( lowerDbSchemaName != NULL ) {
			delete lowerDbSchemaName;
			lowerDbSchemaName = NULL;
		}
		schemaDbName = new std::string( argDbSchemaName );
		lowerDbSchemaName = new std::string( argDbSchemaName );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );
	}

}
