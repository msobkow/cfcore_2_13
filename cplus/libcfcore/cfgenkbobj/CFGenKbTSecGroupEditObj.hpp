#pragma once

// Description: C++18 edit object instance specification for CFGenKb TSecGroup.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

namespace cfcore {

	class CFGenKbTSecGroupEditObj
	: public virtual ICFGenKbTSecGroupEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbTSecGroupObj* orig;
		cfcore::CFGenKbTSecGroupBuff* buff;
		cfcore::ICFGenKbSecUserObj* createdBy = NULL;
		cfcore::ICFGenKbSecUserObj* updatedBy = NULL;
	public:
		CFGenKbTSecGroupEditObj( cfcore::ICFGenKbTSecGroupObj* argOrig );
		virtual ~CFGenKbTSecGroupEditObj();

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

		virtual ICFGenKbTSecGroupObj* realize();

		virtual cfcore::ICFGenKbTSecGroupObj* read( bool forceRead = false );

		virtual ICFGenKbTSecGroupObj* create();

		virtual ICFGenKbTSecGroupEditObj* update();

		virtual ICFGenKbTSecGroupEditObj* deleteInstance();

		virtual cfcore::ICFGenKbTSecGroupTableObj* getTSecGroupTable();

		virtual cfcore::ICFGenKbTSecGroupEditObj* getEdit();

		virtual cfcore::ICFGenKbTSecGroupEditObj* getTSecGroupEdit();

		virtual ICFGenKbTSecGroupEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbTSecGroupObj* getOrig();

		virtual cfcore::ICFGenKbTSecGroupObj* getOrigAsTSecGroup();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbTSecGroupBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbTSecGroupBuff* value );

		inline cfcore::CFGenKbTSecGroupBuff* getTSecGroupBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbTSecGroupBuff*>( buff ) );
		};

		inline cfcore::CFGenKbTSecGroupBuff* getTSecGroupEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbTSecGroupPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbTSecGroupPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredTenantId();
		virtual const int64_t* getRequiredTenantIdReference();

		virtual const int32_t getRequiredTSecGroupId();
		virtual const int32_t* getRequiredTSecGroupIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual const bool getRequiredIsVisible();
		virtual const bool* getRequiredIsVisibleReference();
		virtual void setRequiredIsVisible( const bool value );

		virtual cfcore::ICFGenKbTenantObj* getRequiredContainerTenant( bool forceRead = false );
		virtual void setRequiredContainerTenant( cfcore::ICFGenKbTenantObj* value );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> getOptionalComponentsInclude( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTSecGrpMembObj*> getOptionalComponentsMember( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> getRequiredChildrenIncByGroup( bool forceRead = false );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
