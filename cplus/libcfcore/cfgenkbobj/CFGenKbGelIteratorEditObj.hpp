#pragma once

// Description: C++18 edit object instance specification for CFGenKb GelIterator.

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

	class CFGenKbGelIteratorEditObj
	: public CFGenKbGelInstructionEditObj,
	  public virtual ICFGenKbGelIteratorEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFGenKbGelIteratorEditObj( cfcore::ICFGenKbGelIteratorObj* argOrig );
		virtual ~CFGenKbGelIteratorEditObj();

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

		virtual cfcore::ICFGenKbGelIteratorTableObj* getGelIteratorTable();

		virtual cfcore::ICFGenKbGelIteratorEditObj* getGelIteratorEdit();

		virtual ICFGenKbGelInstructionEditObj* beginEdit();

		virtual cfcore::ICFGenKbGelIteratorObj* getOrigAsGelIterator();

		virtual cfcore::CFGenKbGelInstructionBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGelInstructionBuff* value );

		inline cfcore::CFGenKbGelIteratorBuff* getGelIteratorBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGelIteratorBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGelIteratorBuff* getGelIteratorEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff ) );
		};

		virtual const std::string& getRequiredIteratorName();
		virtual const std::string* getRequiredIteratorNameReference();
		virtual void setRequiredIteratorName( const std::string& value );

		virtual bool isOptionalExpandBeforeNull();
		virtual const std::string& getOptionalExpandBeforeValue();
		virtual const std::string* getOptionalExpandBeforeReference();
		virtual void setOptionalExpandBeforeNull();
		virtual void setOptionalExpandBeforeValue( const std::string& value );

		virtual bool isOptionalExpandFirstNull();
		virtual const std::string& getOptionalExpandFirstValue();
		virtual const std::string* getOptionalExpandFirstReference();
		virtual void setOptionalExpandFirstNull();
		virtual void setOptionalExpandFirstValue( const std::string& value );

		virtual const std::string& getRequiredExpandEach();
		virtual const std::string* getRequiredExpandEachReference();
		virtual void setRequiredExpandEach( const std::string& value );

		virtual bool isOptionalExpandLastNull();
		virtual const std::string& getOptionalExpandLastValue();
		virtual const std::string* getOptionalExpandLastReference();
		virtual void setOptionalExpandLastNull();
		virtual void setOptionalExpandLastValue( const std::string& value );

		virtual bool isOptionalExpandLoneNull();
		virtual const std::string& getOptionalExpandLoneValue();
		virtual const std::string* getOptionalExpandLoneReference();
		virtual void setOptionalExpandLoneNull();
		virtual void setOptionalExpandLoneValue( const std::string& value );

		virtual bool isOptionalExpandEmptyNull();
		virtual const std::string& getOptionalExpandEmptyValue();
		virtual const std::string* getOptionalExpandEmptyReference();
		virtual void setOptionalExpandEmptyNull();
		virtual void setOptionalExpandEmptyValue( const std::string& value );

		virtual bool isOptionalExpandAfterNull();
		virtual const std::string& getOptionalExpandAfterValue();
		virtual const std::string* getOptionalExpandAfterReference();
		virtual void setOptionalExpandAfterNull();
		virtual void setOptionalExpandAfterValue( const std::string& value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		virtual std::string expand( MssCFGenContext* genContext );
	};
}
