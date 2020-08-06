#pragma once

// Description: C++18 edit object instance specification for CFGenKb SecDevice.

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

	class CFGenKbSecDeviceEditObj
	: public virtual ICFGenKbSecDeviceEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbSecDeviceObj* orig;
		cfcore::CFGenKbSecDeviceBuff* buff;
		cfcore::ICFGenKbSecUserObj* createdBy = NULL;
		cfcore::ICFGenKbSecUserObj* updatedBy = NULL;
	public:
		CFGenKbSecDeviceEditObj( cfcore::ICFGenKbSecDeviceObj* argOrig );
		virtual ~CFGenKbSecDeviceEditObj();

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

		virtual ICFGenKbSecDeviceObj* realize();

		virtual cfcore::ICFGenKbSecDeviceObj* read( bool forceRead = false );

		virtual ICFGenKbSecDeviceObj* create();

		virtual ICFGenKbSecDeviceEditObj* update();

		virtual ICFGenKbSecDeviceEditObj* deleteInstance();

		virtual cfcore::ICFGenKbSecDeviceTableObj* getSecDeviceTable();

		virtual cfcore::ICFGenKbSecDeviceEditObj* getEdit();

		virtual cfcore::ICFGenKbSecDeviceEditObj* getSecDeviceEdit();

		virtual ICFGenKbSecDeviceEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbSecDeviceObj* getOrig();

		virtual cfcore::ICFGenKbSecDeviceObj* getOrigAsSecDevice();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbSecDeviceBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbSecDeviceBuff* value );

		inline cfcore::CFGenKbSecDeviceBuff* getSecDeviceBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbSecDeviceBuff*>( buff ) );
		};

		inline cfcore::CFGenKbSecDeviceBuff* getSecDeviceEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbSecDevicePKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbSecDevicePKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const uuid_ptr_t getRequiredSecUserId();
		virtual const uuid_ptr_t getRequiredSecUserIdReference();

		virtual const std::string& getRequiredDevName();
		virtual const std::string* getRequiredDevNameReference();
		virtual void setRequiredDevName( const std::string& value );

		virtual bool isOptionalPubKeyNull();
		virtual const std::string& getOptionalPubKeyValue();
		virtual const std::string* getOptionalPubKeyReference();
		virtual void setOptionalPubKeyNull();
		virtual void setOptionalPubKeyValue( const std::string& value );

		virtual cfcore::ICFGenKbSecUserObj* getRequiredContainerSecUser( bool forceRead = false );
		virtual void setRequiredContainerSecUser( cfcore::ICFGenKbSecUserObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
