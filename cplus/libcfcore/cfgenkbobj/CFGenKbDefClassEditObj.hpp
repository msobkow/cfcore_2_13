#pragma once

// Description: C++18 edit object instance specification for CFGenKb DefClass.

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

	class CFGenKbDefClassEditObj
	: public virtual ICFGenKbDefClassEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbDefClassObj* orig;
		cfcore::CFGenKbDefClassBuff* buff;
	public:
		CFGenKbDefClassEditObj( cfcore::ICFGenKbDefClassObj* argOrig );
		virtual ~CFGenKbDefClassEditObj();

		virtual const std::string& getClassName() const;

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );
		virtual const classcode_t getClassCode() const;
		virtual bool implementsClassCode( const classcode_t value ) const;
		virtual std::string toString();

		virtual std::string getObjName();

		virtual const std::string getGenDefName();

		virtual cflib::ICFLibAnyObj* getScope();
		virtual cflib::ICFLibAnyObj* getObjScope();

		virtual cflib::ICFLibAnyObj* getObjQualifier( const classcode_t* qualifyingClass );

		virtual cflib::ICFLibAnyObj* getNamedObject( const classcode_t* qualifyingClass, const std::string& objName );

		virtual cflib::ICFLibAnyObj* getNamedObject( const std::string& objName );

		virtual std::string getObjQualifiedName();

		virtual std::string getObjFullName();

		virtual ICFGenKbDefClassObj* realize();

		virtual cfcore::ICFGenKbDefClassObj* read( bool forceRead = false );

		virtual ICFGenKbDefClassObj* create();

		virtual ICFGenKbDefClassEditObj* update();

		virtual ICFGenKbDefClassEditObj* deleteInstance();

		virtual cfcore::ICFGenKbDefClassTableObj* getDefClassTable();

		virtual cfcore::ICFGenKbDefClassEditObj* getEdit();

		virtual cfcore::ICFGenKbDefClassEditObj* getDefClassEdit();

		virtual ICFGenKbDefClassEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbDefClassObj* getOrig();

		virtual cfcore::ICFGenKbDefClassObj* getOrigAsDefClass();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbDefClassBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbDefClassBuff* value );

		inline cfcore::CFGenKbDefClassBuff* getDefClassBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbDefClassBuff*>( buff ) );
		};

		inline cfcore::CFGenKbDefClassBuff* getDefClassEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbDefClassPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbDefClassPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int16_t getRequiredId();
		virtual const int16_t* getRequiredIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual bool isOptionalBaseIdNull();
		virtual const int16_t getOptionalBaseIdValue();
		virtual const int16_t* getOptionalBaseIdReference();

		virtual cfcore::ICFGenKbDefClassObj* getOptionalParentBaseDefClass( bool forceRead = false );
		virtual void setOptionalParentBaseDefClass( cfcore::ICFGenKbDefClassObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
