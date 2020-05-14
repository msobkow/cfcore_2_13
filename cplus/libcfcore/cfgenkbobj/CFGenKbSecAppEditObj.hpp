#pragma once

// Description: C++18 edit object instance specification for CFGenKb SecApp.

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

	class CFGenKbSecAppEditObj
	: public virtual ICFGenKbSecAppEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbSecAppObj* orig;
		cfcore::CFGenKbSecAppBuff* buff;
		cfcore::ICFGenKbSecUserObj* createdBy = NULL;
		cfcore::ICFGenKbSecUserObj* updatedBy = NULL;
	public:
		CFGenKbSecAppEditObj( cfcore::ICFGenKbSecAppObj* argOrig );
		virtual ~CFGenKbSecAppEditObj();

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

		virtual ICFGenKbSecAppObj* realize();

		virtual cfcore::ICFGenKbSecAppObj* read( bool forceRead = false );

		virtual ICFGenKbSecAppObj* create();

		virtual ICFGenKbSecAppEditObj* update();

		virtual ICFGenKbSecAppEditObj* deleteInstance();

		virtual cfcore::ICFGenKbSecAppTableObj* getSecAppTable();

		virtual cfcore::ICFGenKbSecAppEditObj* getEdit();

		virtual cfcore::ICFGenKbSecAppEditObj* getSecAppEdit();

		virtual ICFGenKbSecAppEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbSecAppObj* getOrig();

		virtual cfcore::ICFGenKbSecAppObj* getOrigAsSecApp();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbSecAppBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbSecAppBuff* value );

		inline cfcore::CFGenKbSecAppBuff* getSecAppBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbSecAppBuff*>( buff ) );
		};

		inline cfcore::CFGenKbSecAppBuff* getSecAppEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbSecAppPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbSecAppPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredClusterId();
		virtual const int64_t* getRequiredClusterIdReference();

		virtual const int32_t getRequiredSecAppId();
		virtual const int32_t* getRequiredSecAppIdReference();

		virtual const std::string& getRequiredJEEMountName();
		virtual const std::string* getRequiredJEEMountNameReference();
		virtual void setRequiredJEEMountName( const std::string& value );

		virtual cfcore::ICFGenKbClusterObj* getRequiredContainerCluster( bool forceRead = false );
		virtual void setRequiredContainerCluster( cfcore::ICFGenKbClusterObj* value );

		virtual std::vector<cfcore::ICFGenKbSecFormObj*> getOptionalComponentsForm( bool forceRead = false );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
