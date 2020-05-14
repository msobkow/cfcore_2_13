#pragma once

// Description: C++18 Instance Edit Object interface for CFGenKb GelSpread.

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
#include <cfgenkb/CFGenKbGelSpreadBuff.hpp>

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

#include <cfgenkbobj/ICFGenKbSecUserObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSpreadObj.hpp>

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

	class ICFGenKbGelSpreadEditObj
	: public virtual cfcore::ICFGenKbGelInstructionEditObj,
	  public virtual cfcore::ICFGenKbGelSpreadObj
	{
	public:
		static const std::string CLASS_NAME;
		ICFGenKbGelSpreadEditObj();
		virtual ~ICFGenKbGelSpreadEditObj();
		virtual const std::string& getClassName() const = 0;

		inline cfcore::CFGenKbGelSpreadBuff* getGelSpreadBuff() {
			return( static_cast<cfcore::CFGenKbGelSpreadBuff*>( getBuff() ) );
		};

		inline cfcore::CFGenKbGelSpreadBuff* getGelSpreadEditBuff() {
			return( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( getBuff() ) );
		};

		virtual cfcore::ICFGenKbGelSpreadObj* getOrigAsGelSpread() = 0;

		virtual cfcore::ICFGenKbGelInstructionEditObj* beginEdit() = 0;

		virtual const std::string& getRequiredIteratorName() = 0;
		virtual const std::string* getRequiredIteratorNameReference() = 0;
		virtual void setRequiredIteratorName( const std::string& value ) = 0;

		virtual bool isOptionalExpandBetweenNull() = 0;
		virtual const std::string& getOptionalExpandBetweenValue() = 0;
		virtual const std::string* getOptionalExpandBetweenReference() = 0;
		virtual void setOptionalExpandBetweenNull() = 0;
		virtual void setOptionalExpandBetweenValue( const std::string& value ) = 0;

		virtual bool isOptionalExpandBeforeNull() = 0;
		virtual const std::string& getOptionalExpandBeforeValue() = 0;
		virtual const std::string* getOptionalExpandBeforeReference() = 0;
		virtual void setOptionalExpandBeforeNull() = 0;
		virtual void setOptionalExpandBeforeValue( const std::string& value ) = 0;

		virtual bool isOptionalExpandFirstNull() = 0;
		virtual const std::string& getOptionalExpandFirstValue() = 0;
		virtual const std::string* getOptionalExpandFirstReference() = 0;
		virtual void setOptionalExpandFirstNull() = 0;
		virtual void setOptionalExpandFirstValue( const std::string& value ) = 0;

		virtual const std::string& getRequiredExpandEach() = 0;
		virtual const std::string* getRequiredExpandEachReference() = 0;
		virtual void setRequiredExpandEach( const std::string& value ) = 0;

		virtual bool isOptionalExpandLastNull() = 0;
		virtual const std::string& getOptionalExpandLastValue() = 0;
		virtual const std::string* getOptionalExpandLastReference() = 0;
		virtual void setOptionalExpandLastNull() = 0;
		virtual void setOptionalExpandLastValue( const std::string& value ) = 0;

		virtual bool isOptionalExpandLoneNull() = 0;
		virtual const std::string& getOptionalExpandLoneValue() = 0;
		virtual const std::string* getOptionalExpandLoneReference() = 0;
		virtual void setOptionalExpandLoneNull() = 0;
		virtual void setOptionalExpandLoneValue( const std::string& value ) = 0;

		virtual bool isOptionalExpandEmptyNull() = 0;
		virtual const std::string& getOptionalExpandEmptyValue() = 0;
		virtual const std::string* getOptionalExpandEmptyReference() = 0;
		virtual void setOptionalExpandEmptyNull() = 0;
		virtual void setOptionalExpandEmptyValue( const std::string& value ) = 0;

		virtual bool isOptionalExpandAfterNull() = 0;
		virtual const std::string& getOptionalExpandAfterValue() = 0;
		virtual const std::string* getOptionalExpandAfterReference() = 0;
		virtual void setOptionalExpandAfterNull() = 0;
		virtual void setOptionalExpandAfterValue( const std::string& value ) = 0;

		virtual std::string expand( MssCFGenContext* genContext ) = 0;
	};
}
