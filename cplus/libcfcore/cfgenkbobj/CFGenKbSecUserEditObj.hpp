#pragma once

// Description: C++18 edit object instance specification for CFGenKb SecUser.

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

	class CFGenKbSecUserEditObj
	: public virtual ICFGenKbSecUserEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbSecUserObj* orig;
		cfcore::CFGenKbSecUserBuff* buff;
		cfcore::ICFGenKbSecUserObj* createdBy = NULL;
		cfcore::ICFGenKbSecUserObj* updatedBy = NULL;
	public:
		CFGenKbSecUserEditObj( cfcore::ICFGenKbSecUserObj* argOrig );
		virtual ~CFGenKbSecUserEditObj();

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

		virtual ICFGenKbSecUserObj* realize();

		virtual cfcore::ICFGenKbSecUserObj* read( bool forceRead = false );

		virtual ICFGenKbSecUserObj* create();

		virtual ICFGenKbSecUserEditObj* update();

		virtual ICFGenKbSecUserEditObj* deleteInstance();

		virtual cfcore::ICFGenKbSecUserTableObj* getSecUserTable();

		virtual cfcore::ICFGenKbSecUserEditObj* getEdit();

		virtual cfcore::ICFGenKbSecUserEditObj* getSecUserEdit();

		virtual ICFGenKbSecUserEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbSecUserObj* getOrig();

		virtual cfcore::ICFGenKbSecUserObj* getOrigAsSecUser();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbSecUserBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbSecUserBuff* value );

		inline cfcore::CFGenKbSecUserBuff* getSecUserBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbSecUserBuff*>( buff ) );
		};

		inline cfcore::CFGenKbSecUserBuff* getSecUserEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbSecUserPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbSecUserPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const uuid_ptr_t getRequiredSecUserId();
		virtual const uuid_ptr_t getRequiredSecUserIdReference();

		virtual const std::string& getRequiredLoginId();
		virtual const std::string* getRequiredLoginIdReference();
		virtual void setRequiredLoginId( const std::string& value );

		virtual const std::string& getRequiredEMailAddress();
		virtual const std::string* getRequiredEMailAddressReference();
		virtual void setRequiredEMailAddress( const std::string& value );

		virtual bool isOptionalEMailConfirmUuidNull();
		virtual const uuid_ptr_t getOptionalEMailConfirmUuidValue();
		virtual const uuid_ptr_t getOptionalEMailConfirmUuidReference();
		virtual void setOptionalEMailConfirmUuidNull();
		virtual void setOptionalEMailConfirmUuidValue( const uuid_ptr_t value );

		virtual bool isOptionalDfltDevUserIdNull();
		virtual const uuid_ptr_t getOptionalDfltDevUserIdValue();
		virtual const uuid_ptr_t getOptionalDfltDevUserIdReference();

		virtual bool isOptionalDfltDevNameNull();
		virtual const std::string& getOptionalDfltDevNameValue();
		virtual const std::string* getOptionalDfltDevNameReference();

		virtual const std::string& getRequiredPasswordHash();
		virtual const std::string* getRequiredPasswordHashReference();
		virtual void setRequiredPasswordHash( const std::string& value );

		virtual bool isOptionalPasswordResetUuidNull();
		virtual const uuid_ptr_t getOptionalPasswordResetUuidValue();
		virtual const uuid_ptr_t getOptionalPasswordResetUuidReference();
		virtual void setOptionalPasswordResetUuidNull();
		virtual void setOptionalPasswordResetUuidValue( const uuid_ptr_t value );

		virtual std::vector<cfcore::ICFGenKbSecDeviceObj*> getOptionalComponentsSecDev( bool forceRead = false );

		virtual cfcore::ICFGenKbSecDeviceObj* getOptionalLookupDefDev( bool forceRead = false );
		virtual void setOptionalLookupDefDev( cfcore::ICFGenKbSecDeviceObj* value );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> getOptionalComponentsSecSess( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> getOptionalChildrenSecProxy( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGrpMembObj*> getOptionalChildrenSecGrpMemb( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTSecGrpMembObj*> getOptionalChildrenTSecGrpMemb( bool forceRead = false );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
