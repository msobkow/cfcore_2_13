#pragma once

// Description: C++18 Interface for an declementation of an in-memory RAM CFGenKb schema.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

namespace cfcore {

	class CFGenKbRamSchema
	: public cfcore::CFGenKbSchema,
	  public virtual cfcore::ICFGenKbSchema
	{
	protected:
		bool sessConnected = false;
		bool tranOpen = false;
		int16_t nextDefClassIdGenValue;
		int16_t nextRuleTypeIdGenValue;
		int16_t nextToolIdGenValue;
		int16_t nextToolSetIdGenValue;
		int64_t nextClusterIdGenValue;
		int64_t nextTenantIdGenValue;

	public:
		static const std::string CLASS_NAME;

	CFGenKbRamSchema();
	virtual ~CFGenKbRamSchema();
	virtual bool isConnected();
	virtual bool connect();
	virtual bool connect( const std::string& username, const std::string& password );
	virtual bool connect( const std::string& loginId, const std::string& password, const std::string& clusterName, const std::string& tenantName );
	virtual void disconnect( bool doCommit );
	virtual bool isTransactionOpen();
	virtual bool beginTransaction();
	virtual void commit();
	virtual void rollback();
	virtual cfcore::ICFGenKbSchema* newSchema();

	virtual int16_t nextDefClassIdGen();
	virtual int16_t nextRuleTypeIdGen();
	virtual int16_t nextToolIdGen();
	virtual int16_t nextToolSetIdGen();
	virtual int64_t nextClusterIdGen();
	virtual int64_t nextTenantIdGen();
	virtual void releasePreparedStatements();
	};
}
