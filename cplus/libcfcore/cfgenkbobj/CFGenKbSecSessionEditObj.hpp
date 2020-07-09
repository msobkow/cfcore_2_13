#pragma once

// Description: C++18 edit object instance specification for CFGenKb SecSession.

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

	class CFGenKbSecSessionEditObj
	: public virtual ICFGenKbSecSessionEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbSecSessionObj* orig;
		cfcore::CFGenKbSecSessionBuff* buff;
	public:
		CFGenKbSecSessionEditObj( cfcore::ICFGenKbSecSessionObj* argOrig );
		virtual ~CFGenKbSecSessionEditObj();

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

		virtual ICFGenKbSecSessionObj* realize();

		virtual cfcore::ICFGenKbSecSessionObj* read( bool forceRead = false );

		virtual ICFGenKbSecSessionObj* create();

		virtual ICFGenKbSecSessionEditObj* update();

		virtual ICFGenKbSecSessionEditObj* deleteInstance();

		virtual cfcore::ICFGenKbSecSessionTableObj* getSecSessionTable();

		virtual cfcore::ICFGenKbSecSessionEditObj* getEdit();

		virtual cfcore::ICFGenKbSecSessionEditObj* getSecSessionEdit();

		virtual ICFGenKbSecSessionEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbSecSessionObj* getOrig();

		virtual cfcore::ICFGenKbSecSessionObj* getOrigAsSecSession();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbSecSessionBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbSecSessionBuff* value );

		inline cfcore::CFGenKbSecSessionBuff* getSecSessionBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbSecSessionBuff*>( buff ) );
		};

		inline cfcore::CFGenKbSecSessionBuff* getSecSessionEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbSecSessionPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbSecSessionPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const uuid_ptr_t getRequiredSecSessionId();
		virtual const uuid_ptr_t getRequiredSecSessionIdReference();

		virtual const uuid_ptr_t getRequiredSecUserId();
		virtual const uuid_ptr_t getRequiredSecUserIdReference();

		virtual bool isOptionalSecDevNameNull();
		virtual const std::string& getOptionalSecDevNameValue();
		virtual const std::string* getOptionalSecDevNameReference();
		virtual void setOptionalSecDevNameNull();
		virtual void setOptionalSecDevNameValue( const std::string& value );

		virtual const std::chrono::system_clock::time_point& getRequiredStart();
		virtual const std::chrono::system_clock::time_point* getRequiredStartReference();
		virtual void setRequiredStart( const std::chrono::system_clock::time_point& value );

		virtual bool isOptionalFinishNull();
		virtual const std::chrono::system_clock::time_point& getOptionalFinishValue();
		virtual const std::chrono::system_clock::time_point* getOptionalFinishReference();
		virtual void setOptionalFinishNull();
		virtual void setOptionalFinishValue( const std::chrono::system_clock::time_point& value );

		virtual bool isOptionalSecProxyIdNull();
		virtual const uuid_ptr_t getOptionalSecProxyIdValue();
		virtual const uuid_ptr_t getOptionalSecProxyIdReference();

		virtual cfcore::ICFGenKbSecUserObj* getRequiredContainerSecUser( bool forceRead = false );
		virtual void setRequiredContainerSecUser( cfcore::ICFGenKbSecUserObj* value );

		virtual cfcore::ICFGenKbSecUserObj* getRequiredParentSecProxy( bool forceRead = false );
		virtual void setRequiredParentSecProxy( cfcore::ICFGenKbSecUserObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
