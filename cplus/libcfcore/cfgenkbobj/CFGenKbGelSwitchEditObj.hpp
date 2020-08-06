#pragma once

// Description: C++18 edit object instance specification for CFGenKb GelSwitch.

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
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

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

	class CFGenKbGelSwitchEditObj
	: public CFGenKbGelInstructionEditObj,
	  public virtual ICFGenKbGelSwitchEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFGenKbGelSwitchEditObj( cfcore::ICFGenKbGelSwitchObj* argOrig );
		virtual ~CFGenKbGelSwitchEditObj();

		virtual const std::string& getClassName() const;

		virtual const classcode_t getClassCode() const;
		virtual bool implementsClassCode( const classcode_t value ) const;
		virtual std::string toString();

		virtual const std::string getGenDefName();

		virtual cflib::ICFLibAnyObj* getObjQualifier( const classcode_t* qualifyingClass );

		virtual cflib::ICFLibAnyObj* getNamedObject( const classcode_t* qualifyingClass, const std::string& objName );

		virtual cflib::ICFLibAnyObj* getNamedObject( const std::string& objName );

		virtual std::string getObjQualifiedName();

		virtual std::string getObjFullName();

		virtual ICFGenKbGelInstructionObj* realize();

		virtual ICFGenKbGelInstructionObj* create();

		virtual ICFGenKbGelInstructionEditObj* update();

		virtual ICFGenKbGelInstructionEditObj* deleteInstance();

		virtual cfcore::ICFGenKbGelSwitchTableObj* getGelSwitchTable();

		virtual cfcore::ICFGenKbGelSwitchEditObj* getGelSwitchEdit();

		virtual ICFGenKbGelInstructionEditObj* beginEdit();

		virtual cfcore::ICFGenKbGelSwitchObj* getOrigAsGelSwitch();

		virtual cfcore::CFGenKbGelInstructionBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGelInstructionBuff* value );

		inline cfcore::CFGenKbGelSwitchBuff* getGelSwitchBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGelSwitchBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGelSwitchBuff* getGelSwitchEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff ) );
		};

		virtual const std::string& getRequiredValueExpansion();
		virtual const std::string* getRequiredValueExpansionReference();
		virtual void setRequiredValueExpansion( const std::string& value );

		virtual bool isOptionalNilExpansionNull();
		virtual const std::string& getOptionalNilExpansionValue();
		virtual const std::string* getOptionalNilExpansionReference();
		virtual void setOptionalNilExpansionNull();
		virtual void setOptionalNilExpansionValue( const std::string& value );

		virtual bool isOptionalEmptyExpansionNull();
		virtual const std::string& getOptionalEmptyExpansionValue();
		virtual const std::string* getOptionalEmptyExpansionReference();
		virtual void setOptionalEmptyExpansionNull();
		virtual void setOptionalEmptyExpansionValue( const std::string& value );

		virtual const std::string& getRequiredDefaultExpansion();
		virtual const std::string* getRequiredDefaultExpansionReference();
		virtual void setRequiredDefaultExpansion( const std::string& value );

		virtual std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> getOptionalChildrenSwitchLimb( bool forceRead = false );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		virtual std::string expand( MssCFGenContext* genContext );
	};
}
