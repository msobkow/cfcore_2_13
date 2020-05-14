#pragma once

// Description: C++18 edit object instance specification for CFGenKb GenIterator.

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
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

namespace cfcore {

	class CFGenKbGenIteratorEditObj
	: public CFGenKbGenItemEditObj,
	  public virtual ICFGenKbGenIteratorEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFGenKbGenIteratorEditObj( cfcore::ICFGenKbGenIteratorObj* argOrig );
		virtual ~CFGenKbGenIteratorEditObj();

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

		virtual ICFGenKbGenItemObj* realize();

		virtual ICFGenKbGenItemObj* create();

		virtual ICFGenKbGenItemEditObj* update();

		virtual ICFGenKbGenItemEditObj* deleteInstance();

		virtual cfcore::ICFGenKbGenIteratorTableObj* getGenIteratorTable();

		virtual cfcore::ICFGenKbGenIteratorEditObj* getGenIteratorEdit();

		virtual ICFGenKbGenItemEditObj* beginEdit();

		virtual cfcore::ICFGenKbGenIteratorObj* getOrigAsGenIterator();

		virtual cfcore::CFGenKbGenItemBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGenItemBuff* value );

		inline cfcore::CFGenKbGenIteratorBuff* getGenIteratorBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGenIteratorBuff* getGenIteratorEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
		};

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
