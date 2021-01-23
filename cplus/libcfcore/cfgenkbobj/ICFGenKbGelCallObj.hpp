#pragma once

// Description: C++18 Object interface for CFGenKb GelCall.

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

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/CFGenKbGelCallBuff.hpp>

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
	class ICFGenKbGelCallEditObj;
}

#include <cfgenkbobj/ICFGenKbSecUserObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>

namespace cfcore {
	class MssCFEngine;
	class MssCFGenContext;
	class MssCFGelCompiler;
	class MssCFGenFileObj;
	class MssCFGenRuleObj;
	class MssCFGenTruncObj;
	class MssCFGenBindObj;
	class MssCFGenReferenceObj;
	class MssCFGenIteratorObj;
}


namespace cfcore {

	class ICFGenKbGelCallObj
	: public virtual cfcore::ICFGenKbGelInstructionObj
	{
	public:
		ICFGenKbGelCallObj();
		virtual ~ICFGenKbGelCallObj();
		virtual cfcore::ICFGenKbGelInstructionEditObj* beginEdit() = 0;

		virtual cfcore::ICFGenKbGelCallEditObj* getGelCallEdit() = 0;

		inline cfcore::CFGenKbGelCallBuff* getGelCallBuff() {
			return( static_cast<cfcore::CFGenKbGelCallBuff*>( getBuff() ) );
		};

		inline cfcore::CFGenKbGelCallBuff* getGelCallEditBuff() {
			return( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( getBuff() ) );
		};

		virtual bool isOptionalSeqInstTenantIdNull() = 0;
		virtual const int64_t getOptionalSeqInstTenantIdValue() = 0;
		virtual const int64_t* getOptionalSeqInstTenantIdReference() = 0;

		virtual bool isOptionalSeqInstGelCacheIdNull() = 0;
		virtual const int64_t getOptionalSeqInstGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalSeqInstGelCacheIdReference() = 0;

		virtual bool isOptionalSeqInstIdNull() = 0;
		virtual const int64_t getOptionalSeqInstIdValue() = 0;
		virtual const int64_t* getOptionalSeqInstIdReference() = 0;

		virtual bool isOptionalCallInstTenantIdNull() = 0;
		virtual const int64_t getOptionalCallInstTenantIdValue() = 0;
		virtual const int64_t* getOptionalCallInstTenantIdReference() = 0;

		virtual bool isOptionalCallInstGelCacheIdNull() = 0;
		virtual const int64_t getOptionalCallInstGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalCallInstGelCacheIdReference() = 0;

		virtual bool isOptionalCallInstIdNull() = 0;
		virtual const int64_t getOptionalCallInstIdValue() = 0;
		virtual const int64_t* getOptionalCallInstIdReference() = 0;

		virtual bool isOptionalPrevInstTenantIdNull() = 0;
		virtual const int64_t getOptionalPrevInstTenantIdValue() = 0;
		virtual const int64_t* getOptionalPrevInstTenantIdReference() = 0;

		virtual bool isOptionalPrevInstGelCacheIdNull() = 0;
		virtual const int64_t getOptionalPrevInstGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalPrevInstGelCacheIdReference() = 0;

		virtual bool isOptionalPrevInstGelInstIdNull() = 0;
		virtual const int64_t getOptionalPrevInstGelInstIdValue() = 0;
		virtual const int64_t* getOptionalPrevInstGelInstIdReference() = 0;

		virtual bool isOptionalNextInstTenantIdNull() = 0;
		virtual const int64_t getOptionalNextInstTenantIdValue() = 0;
		virtual const int64_t* getOptionalNextInstTenantIdReference() = 0;

		virtual bool isOptionalNextInstGelCacheIdNull() = 0;
		virtual const int64_t getOptionalNextInstGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalNextInstGelCacheIdReference() = 0;

		virtual bool isOptionalNextInstGelInstIdNull() = 0;
		virtual const int64_t getOptionalNextInstGelInstIdValue() = 0;
		virtual const int64_t* getOptionalNextInstGelInstIdReference() = 0;

		virtual cfcore::ICFGenKbGelSequenceObj* getOptionalParentSeqInst( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelInstructionObj* getOptionalLookupCallInst( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelCallObj* getOptionalLookupPrevInst( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelCallObj* getOptionalLookupNextInst( bool forceRead = false ) = 0;

		virtual std::string expand( MssCFGenContext* genContext ) = 0;
	};
}
