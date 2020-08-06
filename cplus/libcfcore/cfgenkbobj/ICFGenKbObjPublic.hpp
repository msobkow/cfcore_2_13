#pragma once

// Description: C++18 Public object interface for CFGenKb.

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

#include <cfgenkbobj/ICFGenKbSchemaObj.hpp>

#include <cfgenkbobj/ICFGenKbClusterObj.hpp>
#include <cfgenkbobj/ICFGenKbDefClassObj.hpp>
#include <cfgenkbobj/ICFGenKbGelBoilerplateObj.hpp>
#include <cfgenkbobj/ICFGenKbGelBuiltinObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCacheObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCallObj.hpp>
#include <cfgenkbobj/ICFGenKbGelConstrainObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCounterObj.hpp>
#include <cfgenkbobj/ICFGenKbGelErrorObj.hpp>
#include <cfgenkbobj/ICFGenKbGelExecutableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelExpansionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelIteratorObj.hpp>
#include <cfgenkbobj/ICFGenKbGelModifierObj.hpp>
#include <cfgenkbobj/ICFGenKbGelPopObj.hpp>
#include <cfgenkbobj/ICFGenKbGelPrefixLineObj.hpp>
#include <cfgenkbobj/ICFGenKbGelReferenceObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSequenceObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSpreadObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSwitchObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSwitchLimbObj.hpp>
#include <cfgenkbobj/ICFGenKbGenBindObj.hpp>
#include <cfgenkbobj/ICFGenKbGenFileObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemObj.hpp>
#include <cfgenkbobj/ICFGenKbGenIteratorObj.hpp>
#include <cfgenkbobj/ICFGenKbGenReferenceObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/ICFGenKbGenTruncObj.hpp>
#include <cfgenkbobj/ICFGenKbHostNodeObj.hpp>
#include <cfgenkbobj/ICFGenKbRuleCartObj.hpp>
#include <cfgenkbobj/ICFGenKbRuleTypeObj.hpp>
#include <cfgenkbobj/ICFGenKbSecAppObj.hpp>
#include <cfgenkbobj/ICFGenKbSecDeviceObj.hpp>
#include <cfgenkbobj/ICFGenKbSecFormObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGroupObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGroupFormObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGrpIncObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGrpMembObj.hpp>
#include <cfgenkbobj/ICFGenKbSecSessionObj.hpp>
#include <cfgenkbobj/ICFGenKbSecUserObj.hpp>
#include <cfgenkbobj/ICFGenKbSysClusterObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGroupObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGrpIncObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGrpMembObj.hpp>
#include <cfgenkbobj/ICFGenKbTenantObj.hpp>
#include <cfgenkbobj/ICFGenKbToolObj.hpp>
#include <cfgenkbobj/ICFGenKbToolSetObj.hpp>

#include <cfgenkbobj/ICFGenKbClusterEditObj.hpp>
#include <cfgenkbobj/ICFGenKbDefClassEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelBoilerplateEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelBuiltinEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCacheEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCallEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelConstrainEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCounterEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelErrorEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelExecutableEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelExpansionEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelIteratorEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelModifierEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelPopEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelPrefixLineEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelReferenceEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSequenceEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSpreadEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSwitchEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSwitchLimbEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenBindEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenFileEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenIteratorEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenReferenceEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenTruncEditObj.hpp>
#include <cfgenkbobj/ICFGenKbHostNodeEditObj.hpp>
#include <cfgenkbobj/ICFGenKbRuleCartEditObj.hpp>
#include <cfgenkbobj/ICFGenKbRuleTypeEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecAppEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecDeviceEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecFormEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGroupEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGroupFormEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGrpIncEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGrpMembEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecSessionEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecUserEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSysClusterEditObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGroupEditObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGrpIncEditObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGrpMembEditObj.hpp>
#include <cfgenkbobj/ICFGenKbTenantEditObj.hpp>
#include <cfgenkbobj/ICFGenKbToolEditObj.hpp>
#include <cfgenkbobj/ICFGenKbToolSetEditObj.hpp>

#include <cfgenkbobj/ICFGenKbClusterTableObj.hpp>
#include <cfgenkbobj/ICFGenKbDefClassTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelBoilerplateTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelBuiltinTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCacheTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCallTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelConstrainTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCounterTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelErrorTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelExecutableTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelExpansionTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelIteratorTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelModifierTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelPopTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelPrefixLineTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelReferenceTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSequenceTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSpreadTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSwitchTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSwitchLimbTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenBindTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenFileTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenIteratorTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenReferenceTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenTruncTableObj.hpp>
#include <cfgenkbobj/ICFGenKbHostNodeTableObj.hpp>
#include <cfgenkbobj/ICFGenKbRuleCartTableObj.hpp>
#include <cfgenkbobj/ICFGenKbRuleTypeTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecAppTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecDeviceTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecFormTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGroupTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGroupFormTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGrpIncTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGrpMembTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecSessionTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSecUserTableObj.hpp>
#include <cfgenkbobj/ICFGenKbSysClusterTableObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGroupTableObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGrpIncTableObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGrpMembTableObj.hpp>
#include <cfgenkbobj/ICFGenKbTenantTableObj.hpp>
#include <cfgenkbobj/ICFGenKbToolTableObj.hpp>
#include <cfgenkbobj/ICFGenKbToolSetTableObj.hpp>
