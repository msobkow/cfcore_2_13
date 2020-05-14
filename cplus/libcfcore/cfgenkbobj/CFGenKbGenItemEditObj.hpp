#pragma once

// Description: C++18 edit object instance specification for CFGenKb GenItem.

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

	class CFGenKbGenItemEditObj
	: public virtual ICFGenKbGenItemEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbGenItemObj* orig;
		cfcore::CFGenKbGenItemBuff* buff;
	public:
		CFGenKbGenItemEditObj( cfcore::ICFGenKbGenItemObj* argOrig );
		virtual ~CFGenKbGenItemEditObj();

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

		virtual ICFGenKbGenItemObj* realize();

		virtual cfcore::ICFGenKbGenItemObj* read( bool forceRead = false );

		virtual ICFGenKbGenItemObj* create();

		virtual ICFGenKbGenItemEditObj* update();

		virtual ICFGenKbGenItemEditObj* deleteInstance();

		virtual cfcore::ICFGenKbGenItemTableObj* getGenItemTable();

		virtual cfcore::ICFGenKbGenItemEditObj* getEdit();

		virtual cfcore::ICFGenKbGenItemEditObj* getGenItemEdit();

		virtual ICFGenKbGenItemEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbGenItemObj* getOrig();

		virtual cfcore::ICFGenKbGenItemObj* getOrigAsGenItem();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbGenItemBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGenItemBuff* value );

		inline cfcore::CFGenKbGenItemBuff* getGenItemBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGenItemBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGenItemBuff* getGenItemEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbGenItemPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbGenItemPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredTenantId();
		virtual const int64_t* getRequiredTenantIdReference();

		virtual const int64_t getRequiredCartridgeId();
		virtual const int64_t* getRequiredCartridgeIdReference();

		virtual const int64_t getRequiredItemId();
		virtual const int64_t* getRequiredItemIdReference();

		virtual const int16_t getRequiredRuleTypeId();
		virtual const int16_t* getRequiredRuleTypeIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual const int16_t getRequiredToolSetId();
		virtual const int16_t* getRequiredToolSetIdReference();

		virtual bool isOptionalScopeDefIdNull();
		virtual const int16_t getOptionalScopeDefIdValue();
		virtual const int16_t* getOptionalScopeDefIdReference();

		virtual const int16_t getRequiredGenDefId();
		virtual const int16_t* getRequiredGenDefIdReference();

		virtual bool isOptionalGelExecutableTenantIdNull();
		virtual const int64_t getOptionalGelExecutableTenantIdValue();
		virtual const int64_t* getOptionalGelExecutableTenantIdReference();
		virtual void setOptionalGelExecutableTenantIdNull();
		virtual void setOptionalGelExecutableTenantIdValue( const int64_t value );

		virtual bool isOptionalGelExecutableGelCacheIdNull();
		virtual const int64_t getOptionalGelExecutableGelCacheIdValue();
		virtual const int64_t* getOptionalGelExecutableGelCacheIdReference();
		virtual void setOptionalGelExecutableGelCacheIdNull();
		virtual void setOptionalGelExecutableGelCacheIdValue( const int64_t value );

		virtual bool isOptionalGelExecutableIdNull();
		virtual const int64_t getOptionalGelExecutableIdValue();
		virtual const int64_t* getOptionalGelExecutableIdReference();
		virtual void setOptionalGelExecutableIdNull();
		virtual void setOptionalGelExecutableIdValue( const int64_t value );

		virtual bool isOptionalProbeTenantIdNull();
		virtual const int64_t getOptionalProbeTenantIdValue();
		virtual const int64_t* getOptionalProbeTenantIdReference();

		virtual bool isOptionalProbeCartridgeIdNull();
		virtual const int64_t getOptionalProbeCartridgeIdValue();
		virtual const int64_t* getOptionalProbeCartridgeIdReference();

		virtual bool isOptionalProbeGenItemIdNull();
		virtual const int64_t getOptionalProbeGenItemIdValue();
		virtual const int64_t* getOptionalProbeGenItemIdReference();

		virtual cfcore::ICFGenKbTenantObj* getRequiredOwnerTenant( bool forceRead = false );
		virtual void setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value );

		virtual cfcore::ICFGenKbRuleCartObj* getRequiredContainerCartridge( bool forceRead = false );
		virtual void setRequiredContainerCartridge( cfcore::ICFGenKbRuleCartObj* value );

		virtual cfcore::ICFGenKbRuleTypeObj* getRequiredLookupRuleType( bool forceRead = false );
		virtual void setRequiredLookupRuleType( cfcore::ICFGenKbRuleTypeObj* value );

		virtual cfcore::ICFGenKbToolSetObj* getRequiredLookupToolSet( bool forceRead = false );
		virtual void setRequiredLookupToolSet( cfcore::ICFGenKbToolSetObj* value );

		virtual cfcore::ICFGenKbDefClassObj* getOptionalLookupScopeDef( bool forceRead = false );
		virtual void setOptionalLookupScopeDef( cfcore::ICFGenKbDefClassObj* value );

		virtual cfcore::ICFGenKbDefClassObj* getRequiredLookupGenDef( bool forceRead = false );
		virtual void setRequiredLookupGenDef( cfcore::ICFGenKbDefClassObj* value );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsGelExec( bool forceRead = false );
		virtual void setOptionalComponentsGelExec( cfcore::ICFGenKbGelExecutableObj* value );

		virtual cfcore::ICFGenKbGenItemObj* getOptionalLookupProbe( bool forceRead = false );
		virtual void setOptionalLookupProbe( cfcore::ICFGenKbGenItemObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
