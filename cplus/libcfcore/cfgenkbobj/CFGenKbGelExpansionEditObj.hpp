#pragma once

// Description: C++18 edit object instance specification for CFGenKb GelExpansion.

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

	class CFGenKbGelExpansionEditObj
	: public CFGenKbGelInstructionEditObj,
	  public virtual ICFGenKbGelExpansionEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFGenKbGelExpansionEditObj( cfcore::ICFGenKbGelExpansionObj* argOrig );
		virtual ~CFGenKbGelExpansionEditObj();

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

		virtual cfcore::ICFGenKbGelExpansionTableObj* getGelExpansionTable();

		virtual cfcore::ICFGenKbGelExpansionEditObj* getGelExpansionEdit();

		virtual ICFGenKbGelInstructionEditObj* beginEdit();

		virtual cfcore::ICFGenKbGelExpansionObj* getOrigAsGelExpansion();

		virtual cfcore::CFGenKbGelInstructionBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGelInstructionBuff* value );

		inline cfcore::CFGenKbGelExpansionBuff* getGelExpansionBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGelExpansionBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGelExpansionBuff* getGelExpansionEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGelExpansionBuff*>( buff ) );
		};

		virtual const std::string& getRequiredMacroName();
		virtual const std::string* getRequiredMacroNameReference();
		virtual void setRequiredMacroName( const std::string& value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		virtual std::string expand( MssCFGenContext* genContext );
	};
}
