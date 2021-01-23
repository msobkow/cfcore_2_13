#pragma once

// Description: C++18 edit object instance specification for CFGenKb SecGroupForm.

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

	class CFGenKbSecGroupFormEditObj
	: public virtual ICFGenKbSecGroupFormEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbSecGroupFormObj* orig;
		cfcore::CFGenKbSecGroupFormBuff* buff;
		cfcore::ICFGenKbSecUserObj* createdBy = NULL;
		cfcore::ICFGenKbSecUserObj* updatedBy = NULL;
	public:
		CFGenKbSecGroupFormEditObj( cfcore::ICFGenKbSecGroupFormObj* argOrig );
		virtual ~CFGenKbSecGroupFormEditObj();

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

		virtual ICFGenKbSecGroupFormObj* realize();

		virtual cfcore::ICFGenKbSecGroupFormObj* read( bool forceRead = false );

		virtual ICFGenKbSecGroupFormObj* create();

		virtual ICFGenKbSecGroupFormEditObj* update();

		virtual ICFGenKbSecGroupFormEditObj* deleteInstance();

		virtual cfcore::ICFGenKbSecGroupFormTableObj* getSecGroupFormTable();

		virtual cfcore::ICFGenKbSecGroupFormEditObj* getEdit();

		virtual cfcore::ICFGenKbSecGroupFormEditObj* getSecGroupFormEdit();

		virtual ICFGenKbSecGroupFormEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbSecGroupFormObj* getOrig();

		virtual cfcore::ICFGenKbSecGroupFormObj* getOrigAsSecGroupForm();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbSecGroupFormBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbSecGroupFormBuff* value );

		inline cfcore::CFGenKbSecGroupFormBuff* getSecGroupFormBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff ) );
		};

		inline cfcore::CFGenKbSecGroupFormBuff* getSecGroupFormEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbSecGroupFormPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbSecGroupFormPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredClusterId();
		virtual const int64_t* getRequiredClusterIdReference();

		virtual const int64_t getRequiredSecGroupFormId();
		virtual const int64_t* getRequiredSecGroupFormIdReference();

		virtual const int32_t getRequiredSecGroupId();
		virtual const int32_t* getRequiredSecGroupIdReference();

		virtual const int32_t getRequiredSecAppId();
		virtual const int32_t* getRequiredSecAppIdReference();

		virtual const int32_t getRequiredSecFormId();
		virtual const int32_t* getRequiredSecFormIdReference();

		virtual cfcore::ICFGenKbClusterObj* getRequiredOwnerCluster( bool forceRead = false );
		virtual void setRequiredOwnerCluster( cfcore::ICFGenKbClusterObj* value );

		virtual cfcore::ICFGenKbSecGroupObj* getRequiredContainerGroup( bool forceRead = false );
		virtual void setRequiredContainerGroup( cfcore::ICFGenKbSecGroupObj* value );

		virtual cfcore::ICFGenKbSecAppObj* getRequiredParentApp( bool forceRead = false );
		virtual void setRequiredParentApp( cfcore::ICFGenKbSecAppObj* value );

		virtual cfcore::ICFGenKbSecFormObj* getRequiredParentForm( bool forceRead = false );
		virtual void setRequiredParentForm( cfcore::ICFGenKbSecFormObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
