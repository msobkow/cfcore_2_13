#pragma once

// Description: C++18 Table Object specification for CFGenKb.

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

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>

namespace cfcore {
	class ICFGenKbSchemaObj;
	class ICFGenKbClusterObj;
	class ICFGenKbClusterEditObj;
	class ICFGenKbClusterTableObj;
	class ICFGenKbDefClassObj;
	class ICFGenKbDefClassEditObj;
	class ICFGenKbDefClassTableObj;
	class ICFGenKbGelBoilerplateObj;
	class ICFGenKbGelBoilerplateEditObj;
	class ICFGenKbGelBoilerplateTableObj;
	class ICFGenKbGelBuiltinObj;
	class ICFGenKbGelBuiltinEditObj;
	class ICFGenKbGelBuiltinTableObj;
	class ICFGenKbGelCacheObj;
	class ICFGenKbGelCacheEditObj;
	class ICFGenKbGelCacheTableObj;
	class ICFGenKbGelCallObj;
	class ICFGenKbGelCallEditObj;
	class ICFGenKbGelCallTableObj;
	class ICFGenKbGelConstrainObj;
	class ICFGenKbGelConstrainEditObj;
	class ICFGenKbGelConstrainTableObj;
	class ICFGenKbGelCounterObj;
	class ICFGenKbGelCounterEditObj;
	class ICFGenKbGelCounterTableObj;
	class ICFGenKbGelErrorObj;
	class ICFGenKbGelErrorEditObj;
	class ICFGenKbGelErrorTableObj;
	class ICFGenKbGelExecutableObj;
	class ICFGenKbGelExecutableEditObj;
	class ICFGenKbGelExecutableTableObj;
	class ICFGenKbGelExpansionObj;
	class ICFGenKbGelExpansionEditObj;
	class ICFGenKbGelExpansionTableObj;
	class ICFGenKbGelInstructionObj;
	class ICFGenKbGelInstructionEditObj;
	class ICFGenKbGelInstructionTableObj;
	class ICFGenKbGelIteratorObj;
	class ICFGenKbGelIteratorEditObj;
	class ICFGenKbGelIteratorTableObj;
	class ICFGenKbGelModifierObj;
	class ICFGenKbGelModifierEditObj;
	class ICFGenKbGelModifierTableObj;
	class ICFGenKbGelPopObj;
	class ICFGenKbGelPopEditObj;
	class ICFGenKbGelPopTableObj;
	class ICFGenKbGelPrefixLineObj;
	class ICFGenKbGelPrefixLineEditObj;
	class ICFGenKbGelPrefixLineTableObj;
	class ICFGenKbGelReferenceObj;
	class ICFGenKbGelReferenceEditObj;
	class ICFGenKbGelReferenceTableObj;
	class ICFGenKbGelSequenceObj;
	class ICFGenKbGelSequenceEditObj;
	class ICFGenKbGelSequenceTableObj;
	class ICFGenKbGelSpreadObj;
	class ICFGenKbGelSpreadEditObj;
	class ICFGenKbGelSpreadTableObj;
	class ICFGenKbGelSwitchObj;
	class ICFGenKbGelSwitchEditObj;
	class ICFGenKbGelSwitchTableObj;
	class ICFGenKbGelSwitchLimbObj;
	class ICFGenKbGelSwitchLimbEditObj;
	class ICFGenKbGelSwitchLimbTableObj;
	class ICFGenKbGenBindObj;
	class ICFGenKbGenBindEditObj;
	class ICFGenKbGenBindTableObj;
	class ICFGenKbGenFileObj;
	class ICFGenKbGenFileEditObj;
	class ICFGenKbGenFileTableObj;
	class ICFGenKbGenItemObj;
	class ICFGenKbGenItemEditObj;
	class ICFGenKbGenItemTableObj;
	class ICFGenKbGenIteratorObj;
	class ICFGenKbGenIteratorEditObj;
	class ICFGenKbGenIteratorTableObj;
	class ICFGenKbGenReferenceObj;
	class ICFGenKbGenReferenceEditObj;
	class ICFGenKbGenReferenceTableObj;
	class ICFGenKbGenRuleObj;
	class ICFGenKbGenRuleEditObj;
	class ICFGenKbGenRuleTableObj;
	class ICFGenKbGenTruncObj;
	class ICFGenKbGenTruncEditObj;
	class ICFGenKbGenTruncTableObj;
	class ICFGenKbHostNodeObj;
	class ICFGenKbHostNodeEditObj;
	class ICFGenKbHostNodeTableObj;
	class ICFGenKbRuleCartObj;
	class ICFGenKbRuleCartEditObj;
	class ICFGenKbRuleCartTableObj;
	class ICFGenKbRuleTypeObj;
	class ICFGenKbRuleTypeEditObj;
	class ICFGenKbRuleTypeTableObj;
	class ICFGenKbSecAppObj;
	class ICFGenKbSecAppEditObj;
	class ICFGenKbSecAppTableObj;
	class ICFGenKbSecDeviceObj;
	class ICFGenKbSecDeviceEditObj;
	class ICFGenKbSecDeviceTableObj;
	class ICFGenKbSecFormObj;
	class ICFGenKbSecFormEditObj;
	class ICFGenKbSecFormTableObj;
	class ICFGenKbSecGroupObj;
	class ICFGenKbSecGroupEditObj;
	class ICFGenKbSecGroupTableObj;
	class ICFGenKbSecGroupFormObj;
	class ICFGenKbSecGroupFormEditObj;
	class ICFGenKbSecGroupFormTableObj;
	class ICFGenKbSecGrpIncObj;
	class ICFGenKbSecGrpIncEditObj;
	class ICFGenKbSecGrpIncTableObj;
	class ICFGenKbSecGrpMembObj;
	class ICFGenKbSecGrpMembEditObj;
	class ICFGenKbSecGrpMembTableObj;
	class ICFGenKbSecSessionObj;
	class ICFGenKbSecSessionEditObj;
	class ICFGenKbSecSessionTableObj;
	class ICFGenKbSecUserObj;
	class ICFGenKbSecUserEditObj;
	class ICFGenKbSecUserTableObj;
	class ICFGenKbSysClusterObj;
	class ICFGenKbSysClusterEditObj;
	class ICFGenKbSysClusterTableObj;
	class ICFGenKbTSecGroupObj;
	class ICFGenKbTSecGroupEditObj;
	class ICFGenKbTSecGroupTableObj;
	class ICFGenKbTSecGrpIncObj;
	class ICFGenKbTSecGrpIncEditObj;
	class ICFGenKbTSecGrpIncTableObj;
	class ICFGenKbTSecGrpMembObj;
	class ICFGenKbTSecGrpMembEditObj;
	class ICFGenKbTSecGrpMembTableObj;
	class ICFGenKbTenantObj;
	class ICFGenKbTenantEditObj;
	class ICFGenKbTenantTableObj;
	class ICFGenKbToolObj;
	class ICFGenKbToolEditObj;
	class ICFGenKbToolTableObj;
	class ICFGenKbToolSetObj;
	class ICFGenKbToolSetEditObj;
	class ICFGenKbToolSetTableObj;
}

#include <cfgenkbobj/ICFGenKbHostNodeObj.hpp>
#include <cfgenkbobj/ICFGenKbHostNodeEditObj.hpp>
#include <cfgenkbobj/ICFGenKbHostNodeTableObj.hpp>

namespace cfcore {

	class CFGenKbHostNodeTableObj
	: public virtual ICFGenKbHostNodeTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* members;
		std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* allHostNode;
		std::map< cfcore::CFGenKbHostNodeByClusterIdxKey,
			std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>*>* indexByClusterIdx;
		std::map< cfcore::CFGenKbHostNodeByUDescrIdxKey,
			cfcore::ICFGenKbHostNodeObj*>* indexByUDescrIdx;
		std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey,
			cfcore::ICFGenKbHostNodeObj*>* indexByHostNameIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbHostNodeTableObj();
		CFGenKbHostNodeTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbHostNodeTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbHostNodeObj* newInstance();

		virtual cfcore::ICFGenKbHostNodeEditObj* newEditInstance( cfcore::ICFGenKbHostNodeObj* orig );

		virtual cfcore::ICFGenKbHostNodeObj* realizeHostNode( cfcore::ICFGenKbHostNodeObj* Obj );

		virtual void deepDisposeByIdIdx( const int64_t ClusterId,
			const int64_t HostNodeId );
		virtual void deepDisposeByClusterIdx( const int64_t ClusterId );
		virtual void deepDisposeByUDescrIdx( const int64_t ClusterId,
			const std::string& Description );
		virtual void deepDisposeByHostNameIdx( const int64_t ClusterId,
			const std::string& HostName );
		virtual void reallyDeepDisposeHostNode( cfcore::ICFGenKbHostNodeObj* Obj );
		virtual cfcore::ICFGenKbHostNodeObj* createHostNode( cfcore::ICFGenKbHostNodeEditObj* Obj );

		virtual cfcore::ICFGenKbHostNodeObj* readHostNode( cfcore::CFGenKbHostNodePKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbHostNodeObj* lockHostNode( cfcore::CFGenKbHostNodePKey* pkey );

		virtual std::vector<cfcore::ICFGenKbHostNodeObj*> readAllHostNode( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbHostNodeObj*> pageAllHostNode(const int64_t* priorClusterId,
			const int64_t* priorHostNodeId );

		virtual cfcore::ICFGenKbHostNodeObj* readHostNodeByIdIdx( const int64_t ClusterId,
			const int64_t HostNodeId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbHostNodeObj*> readHostNodeByClusterIdx( const int64_t ClusterId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbHostNodeObj* readHostNodeByUDescrIdx( const int64_t ClusterId,
			const std::string& Description, bool forceRead = false );

		virtual cfcore::ICFGenKbHostNodeObj* readHostNodeByHostNameIdx( const int64_t ClusterId,
			const std::string& HostName, bool forceRead = false );

		virtual cfcore::ICFGenKbHostNodeObj* readCachedHostNode( cfcore::CFGenKbHostNodePKey* pkey );

		virtual cfcore::ICFGenKbHostNodeObj* readCachedHostNodeByIdIdx( const int64_t ClusterId,
			const int64_t HostNodeId );

		virtual std::vector<cfcore::ICFGenKbHostNodeObj*> readCachedHostNodeByClusterIdx( const int64_t ClusterId );

		virtual cfcore::ICFGenKbHostNodeObj* readCachedHostNodeByUDescrIdx( const int64_t ClusterId,
			const std::string& Description );

		virtual cfcore::ICFGenKbHostNodeObj* readCachedHostNodeByHostNameIdx( const int64_t ClusterId,
			const std::string& HostName );

		virtual cfcore::ICFGenKbHostNodeObj* readHostNodeByLookupHostNameIdx( const int64_t ClusterId,
			const std::string& HostName, bool forceRead = false );

		virtual cfcore::ICFGenKbHostNodeObj* readCachedHostNodeByLookupHostNameIdx( const int64_t ClusterId,
			const std::string& HostName );

		virtual std::vector<cfcore::ICFGenKbHostNodeObj*> pageHostNodeByClusterIdx( const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorHostNodeId );

		virtual cfcore::ICFGenKbHostNodeObj* updateHostNode( cfcore::ICFGenKbHostNodeEditObj* Obj );

		virtual void deleteHostNode( cfcore::ICFGenKbHostNodeEditObj* Obj );

		virtual void deleteHostNodeByIdIdx( const int64_t ClusterId,
			const int64_t HostNodeId );

		virtual void deleteHostNodeByClusterIdx( const int64_t ClusterId );

		virtual void deleteHostNodeByUDescrIdx( const int64_t ClusterId,
			const std::string& Description );

		virtual void deleteHostNodeByHostNameIdx( const int64_t ClusterId,
			const std::string& HostName );

		virtual void reallyDetachFromIndexesHostNode( cfcore::ICFGenKbHostNodeObj* Obj );

	};

}
