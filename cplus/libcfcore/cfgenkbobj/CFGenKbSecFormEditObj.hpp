#pragma once

// Description: C++18 edit object instance specification for CFGenKb SecForm.

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

	class CFGenKbSecFormEditObj
	: public virtual ICFGenKbSecFormEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbSecFormObj* orig;
		cfcore::CFGenKbSecFormBuff* buff;
		cfcore::ICFGenKbSecUserObj* createdBy = NULL;
		cfcore::ICFGenKbSecUserObj* updatedBy = NULL;
	public:
		CFGenKbSecFormEditObj( cfcore::ICFGenKbSecFormObj* argOrig );
		virtual ~CFGenKbSecFormEditObj();

		virtual const std::string& getClassName() const;

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );
		virtual cfcore::ICFGenKbSecUserObj* getCreatedBy();
		virtual const std::chrono::system_clock::time_point& getCreatedAt();
		virtual cfcore::ICFGenKbSecUserObj* getUpdatedBy();
		virtual const std::chrono::system_clock::time_point& getUpdatedAt();

		virtual void setCreatedBy( cfcore::ICFGenKbSecUserObj* value );
		virtual void setCreatedAt( const std::chrono::system_clock::time_point& value );
		virtual void setUpdatedBy( cfcore::ICFGenKbSecUserObj* value );
		virtual void setUpdatedAt( const std::chrono::system_clock::time_point& value );

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

		virtual ICFGenKbSecFormObj* realize();

		virtual cfcore::ICFGenKbSecFormObj* read( bool forceRead = false );

		virtual ICFGenKbSecFormObj* create();

		virtual ICFGenKbSecFormEditObj* update();

		virtual ICFGenKbSecFormEditObj* deleteInstance();

		virtual cfcore::ICFGenKbSecFormTableObj* getSecFormTable();

		virtual cfcore::ICFGenKbSecFormEditObj* getEdit();

		virtual cfcore::ICFGenKbSecFormEditObj* getSecFormEdit();

		virtual ICFGenKbSecFormEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbSecFormObj* getOrig();

		virtual cfcore::ICFGenKbSecFormObj* getOrigAsSecForm();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbSecFormBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbSecFormBuff* value );

		inline cfcore::CFGenKbSecFormBuff* getSecFormBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbSecFormBuff*>( buff ) );
		};

		inline cfcore::CFGenKbSecFormBuff* getSecFormEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbSecFormPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbSecFormPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredClusterId();
		virtual const int64_t* getRequiredClusterIdReference();

		virtual const int32_t getRequiredSecFormId();
		virtual const int32_t* getRequiredSecFormIdReference();

		virtual const int32_t getRequiredSecAppId();
		virtual const int32_t* getRequiredSecAppIdReference();

		virtual const std::string& getRequiredJEEServletMapName();
		virtual const std::string* getRequiredJEEServletMapNameReference();
		virtual void setRequiredJEEServletMapName( const std::string& value );

		virtual cfcore::ICFGenKbClusterObj* getRequiredOwnerCluster( bool forceRead = false );
		virtual void setRequiredOwnerCluster( cfcore::ICFGenKbClusterObj* value );

		virtual cfcore::ICFGenKbSecAppObj* getRequiredContainerApplication( bool forceRead = false );
		virtual void setRequiredContainerApplication( cfcore::ICFGenKbSecAppObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
