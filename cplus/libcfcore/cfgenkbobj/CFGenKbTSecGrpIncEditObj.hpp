#pragma once

// Description: C++18 edit object instance specification for CFGenKb TSecGrpInc.

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

	class CFGenKbTSecGrpIncEditObj
	: public virtual ICFGenKbTSecGrpIncEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbTSecGrpIncObj* orig;
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		cfcore::ICFGenKbSecUserObj* createdBy = NULL;
		cfcore::ICFGenKbSecUserObj* updatedBy = NULL;
	public:
		CFGenKbTSecGrpIncEditObj( cfcore::ICFGenKbTSecGrpIncObj* argOrig );
		virtual ~CFGenKbTSecGrpIncEditObj();

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

		virtual ICFGenKbTSecGrpIncObj* realize();

		virtual cfcore::ICFGenKbTSecGrpIncObj* read( bool forceRead = false );

		virtual ICFGenKbTSecGrpIncObj* create();

		virtual ICFGenKbTSecGrpIncEditObj* update();

		virtual ICFGenKbTSecGrpIncEditObj* deleteInstance();

		virtual cfcore::ICFGenKbTSecGrpIncTableObj* getTSecGrpIncTable();

		virtual cfcore::ICFGenKbTSecGrpIncEditObj* getEdit();

		virtual cfcore::ICFGenKbTSecGrpIncEditObj* getTSecGrpIncEdit();

		virtual ICFGenKbTSecGrpIncEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbTSecGrpIncObj* getOrig();

		virtual cfcore::ICFGenKbTSecGrpIncObj* getOrigAsTSecGrpInc();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbTSecGrpIncBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbTSecGrpIncBuff* value );

		inline cfcore::CFGenKbTSecGrpIncBuff* getTSecGrpIncBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff ) );
		};

		inline cfcore::CFGenKbTSecGrpIncBuff* getTSecGrpIncEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbTSecGrpIncPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbTSecGrpIncPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredTenantId();
		virtual const int64_t* getRequiredTenantIdReference();

		virtual const int64_t getRequiredTSecGrpIncId();
		virtual const int64_t* getRequiredTSecGrpIncIdReference();

		virtual const int32_t getRequiredTSecGroupId();
		virtual const int32_t* getRequiredTSecGroupIdReference();

		virtual const int32_t getRequiredIncludeGroupId();
		virtual const int32_t* getRequiredIncludeGroupIdReference();

		virtual cfcore::ICFGenKbTenantObj* getRequiredOwnerTenant( bool forceRead = false );
		virtual void setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value );

		virtual cfcore::ICFGenKbTSecGroupObj* getRequiredContainerGroup( bool forceRead = false );
		virtual void setRequiredContainerGroup( cfcore::ICFGenKbTSecGroupObj* value );

		virtual cfcore::ICFGenKbTSecGroupObj* getRequiredParentSubGroup( bool forceRead = false );
		virtual void setRequiredParentSubGroup( cfcore::ICFGenKbTSecGroupObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
