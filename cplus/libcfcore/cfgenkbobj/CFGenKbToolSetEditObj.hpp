#pragma once

// Description: C++18 edit object instance specification for CFGenKb ToolSet.

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

	class CFGenKbToolSetEditObj
	: public virtual ICFGenKbToolSetEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbToolSetObj* orig;
		cfcore::CFGenKbToolSetBuff* buff;
	public:
		CFGenKbToolSetEditObj( cfcore::ICFGenKbToolSetObj* argOrig );
		virtual ~CFGenKbToolSetEditObj();

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

		virtual ICFGenKbToolSetObj* realize();

		virtual cfcore::ICFGenKbToolSetObj* read( bool forceRead = false );

		virtual ICFGenKbToolSetObj* create();

		virtual ICFGenKbToolSetEditObj* update();

		virtual ICFGenKbToolSetEditObj* deleteInstance();

		virtual cfcore::ICFGenKbToolSetTableObj* getToolSetTable();

		virtual cfcore::ICFGenKbToolSetEditObj* getEdit();

		virtual cfcore::ICFGenKbToolSetEditObj* getToolSetEdit();

		virtual ICFGenKbToolSetEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbToolSetObj* getOrig();

		virtual cfcore::ICFGenKbToolSetObj* getOrigAsToolSet();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbToolSetBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbToolSetBuff* value );

		inline cfcore::CFGenKbToolSetBuff* getToolSetBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbToolSetBuff*>( buff ) );
		};

		inline cfcore::CFGenKbToolSetBuff* getToolSetEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbToolSetPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbToolSetPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int16_t getRequiredId();
		virtual const int16_t* getRequiredIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual bool isOptionalDescrNull();
		virtual const std::string& getOptionalDescrValue();
		virtual const std::string* getOptionalDescrReference();
		virtual void setOptionalDescrNull();
		virtual void setOptionalDescrValue( const std::string& value );

		virtual bool isOptionalRevisionStringNull();
		virtual const std::string& getOptionalRevisionStringValue();
		virtual const std::string* getOptionalRevisionStringReference();
		virtual void setOptionalRevisionStringNull();
		virtual void setOptionalRevisionStringValue( const std::string& value );

		virtual const bool getRequiredIsSupported();
		virtual const bool* getRequiredIsSupportedReference();
		virtual void setRequiredIsSupported( const bool value );

		virtual const bool getRequiredGenerate();
		virtual const bool* getRequiredGenerateReference();
		virtual void setRequiredGenerate( const bool value );

		virtual const int16_t getRequiredToolId0();
		virtual const int16_t* getRequiredToolId0Reference();

		virtual bool isOptionalToolId1Null();
		virtual const int16_t getOptionalToolId1Value();
		virtual const int16_t* getOptionalToolId1Reference();

		virtual bool isOptionalToolId2Null();
		virtual const int16_t getOptionalToolId2Value();
		virtual const int16_t* getOptionalToolId2Reference();

		virtual bool isOptionalToolId3Null();
		virtual const int16_t getOptionalToolId3Value();
		virtual const int16_t* getOptionalToolId3Reference();

		virtual bool isOptionalToolId4Null();
		virtual const int16_t getOptionalToolId4Value();
		virtual const int16_t* getOptionalToolId4Reference();

		virtual bool isOptionalToolId5Null();
		virtual const int16_t getOptionalToolId5Value();
		virtual const int16_t* getOptionalToolId5Reference();

		virtual bool isOptionalToolId6Null();
		virtual const int16_t getOptionalToolId6Value();
		virtual const int16_t* getOptionalToolId6Reference();

		virtual bool isOptionalToolId7Null();
		virtual const int16_t getOptionalToolId7Value();
		virtual const int16_t* getOptionalToolId7Reference();

		virtual cfcore::ICFGenKbToolObj* getRequiredLookupTool0( bool forceRead = false );
		virtual void setRequiredLookupTool0( cfcore::ICFGenKbToolObj* value );

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool1( bool forceRead = false );
		virtual void setOptionalLookupTool1( cfcore::ICFGenKbToolObj* value );

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool2( bool forceRead = false );
		virtual void setOptionalLookupTool2( cfcore::ICFGenKbToolObj* value );

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool3( bool forceRead = false );
		virtual void setOptionalLookupTool3( cfcore::ICFGenKbToolObj* value );

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool4( bool forceRead = false );
		virtual void setOptionalLookupTool4( cfcore::ICFGenKbToolObj* value );

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool5( bool forceRead = false );
		virtual void setOptionalLookupTool5( cfcore::ICFGenKbToolObj* value );

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool6( bool forceRead = false );
		virtual void setOptionalLookupTool6( cfcore::ICFGenKbToolObj* value );

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool7( bool forceRead = false );
		virtual void setOptionalLookupTool7( cfcore::ICFGenKbToolObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
