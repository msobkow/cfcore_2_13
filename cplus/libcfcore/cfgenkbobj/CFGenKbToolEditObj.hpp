#pragma once

// Description: C++18 edit object instance specification for CFGenKb Tool.

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

	class CFGenKbToolEditObj
	: public virtual ICFGenKbToolEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbToolObj* orig;
		cfcore::CFGenKbToolBuff* buff;
	public:
		CFGenKbToolEditObj( cfcore::ICFGenKbToolObj* argOrig );
		virtual ~CFGenKbToolEditObj();

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

		virtual ICFGenKbToolObj* realize();

		virtual cfcore::ICFGenKbToolObj* read( bool forceRead = false );

		virtual ICFGenKbToolObj* create();

		virtual ICFGenKbToolEditObj* update();

		virtual ICFGenKbToolEditObj* deleteInstance();

		virtual cfcore::ICFGenKbToolTableObj* getToolTable();

		virtual cfcore::ICFGenKbToolEditObj* getEdit();

		virtual cfcore::ICFGenKbToolEditObj* getToolEdit();

		virtual ICFGenKbToolEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbToolObj* getOrig();

		virtual cfcore::ICFGenKbToolObj* getOrigAsTool();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbToolBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbToolBuff* value );

		inline cfcore::CFGenKbToolBuff* getToolBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbToolBuff*>( buff ) );
		};

		inline cfcore::CFGenKbToolBuff* getToolEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbToolBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbToolPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbToolPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int16_t getRequiredId();
		virtual const int16_t* getRequiredIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual bool isOptionalReplacesIdNull();
		virtual const int16_t getOptionalReplacesIdValue();
		virtual const int16_t* getOptionalReplacesIdReference();

		virtual const bool getRequiredIsSupported();
		virtual const bool* getRequiredIsSupportedReference();
		virtual void setRequiredIsSupported( const bool value );

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupReplaces( bool forceRead = false );
		virtual void setOptionalLookupReplaces( cfcore::ICFGenKbToolObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
