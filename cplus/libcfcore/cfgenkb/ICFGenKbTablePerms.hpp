#pragma once

// Description: C++18 CFGenKb Table Permissions Interface.

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

#include <uuid/uuid.h>

#include <array>
#include <cassert>
#include <cstddef>
#include <chrono>
#include <ctime>
#include <functional>
#include <list>
#include <string>


namespace cfcore {

	class CFGenKbAuthorization;

	class ICFGenKbTablePerms
	{
	public:
		ICFGenKbTablePerms();
		virtual ~ICFGenKbTablePerms();

		virtual bool allowCreateCluster( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadCluster( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateCluster( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteCluster( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateDefClass( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadDefClass( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateDefClass( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDefClass( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelBoilerplate( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelBoilerplate( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelBoilerplate( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelBoilerplate( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelBuiltin( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelBuiltin( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelBuiltin( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelBuiltin( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelCache( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelCache( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelCache( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelCache( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelCall( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelCall( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelCall( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelCall( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelConstrain( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelConstrain( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelConstrain( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelConstrain( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelCounter( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelCounter( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelCounter( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelCounter( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelError( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelError( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelError( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelError( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelExecutable( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelExecutable( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelExecutable( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelExecutable( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelExpansion( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelExpansion( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelExpansion( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelExpansion( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelInstruction( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelInstruction( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelInstruction( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelInstruction( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelIterator( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelIterator( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelIterator( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelIterator( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelModifier( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelModifier( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelModifier( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelModifier( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelPop( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelPop( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelPop( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelPop( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelPrefixLine( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelPrefixLine( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelPrefixLine( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelPrefixLine( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelReference( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelReference( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelReference( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelReference( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelSequence( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelSequence( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelSequence( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelSequence( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelSpread( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelSpread( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelSpread( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelSpread( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelSwitch( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelSwitch( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelSwitch( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelSwitch( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGelSwitchLimb( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGenBind( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGenBind( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGenBind( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGenBind( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGenFile( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGenFile( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGenFile( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGenFile( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGenItem( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGenItem( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGenItem( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGenItem( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGenIterator( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGenIterator( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGenIterator( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGenIterator( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGenReference( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGenReference( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGenReference( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGenReference( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGenRule( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGenRule( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGenRule( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGenRule( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateGenTrunc( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadGenTrunc( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateGenTrunc( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteGenTrunc( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateHostNode( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadHostNode( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateHostNode( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteHostNode( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateRuleCart( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadRuleCart( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateRuleCart( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteRuleCart( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateRuleType( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadRuleType( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateRuleType( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteRuleType( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateSecApp( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadSecApp( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateSecApp( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSecApp( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateSecDevice( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadSecDevice( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateSecDevice( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSecDevice( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateSecForm( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadSecForm( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateSecForm( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSecForm( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateSecGroup( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadSecGroup( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateSecGroup( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSecGroup( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadSecGroupForm( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadSecGrpInc( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadSecGrpMemb( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateSecSession( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadSecSession( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateSecSession( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSecSession( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateSecUser( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadSecUser( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateSecUser( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSecUser( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateSysCluster( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadSysCluster( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateSysCluster( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSysCluster( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateTSecGroup( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadTSecGroup( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateTSecGroup( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTSecGroup( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateTSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadTSecGrpInc( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateTSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadTSecGrpMemb( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateTenant( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadTenant( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateTenant( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTenant( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateTool( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadTool( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateTool( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTool( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual bool allowCreateToolSet( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowReadToolSet( const cfcore::CFGenKbAuthorization Authorization ) = 0;
		virtual bool allowUpdateToolSet( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
		virtual bool allowDeleteToolSet( const cfcore::CFGenKbAuthorization* Authorization ) = 0;
	};
}
