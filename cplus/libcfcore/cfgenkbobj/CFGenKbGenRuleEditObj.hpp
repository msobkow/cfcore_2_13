#pragma once

// Description: C++18 edit object instance specification for CFGenKb GenRule.

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

	class CFGenKbGenRuleEditObj
	: public CFGenKbGenItemEditObj,
	  public virtual ICFGenKbGenRuleEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFGenKbGenRuleEditObj( cfcore::ICFGenKbGenRuleObj* argOrig );
		virtual ~CFGenKbGenRuleEditObj();

		virtual const std::string& getClassName() const;

		virtual const classcode_t getClassCode() const;
		virtual bool implementsClassCode( const classcode_t value ) const;
		virtual std::string toString();

		virtual const std::string getGenDefName();

		virtual cflib::ICFLibAnyObj* getObjQualifier( const classcode_t* qualifyingClass );

		virtual cflib::ICFLibAnyObj* getNamedObject( const classcode_t* qualifyingClass, const std::string& objName );

		virtual cflib::ICFLibAnyObj* getNamedObject( const std::string& objName );

		virtual std::string getObjQualifiedName();

		virtual std::string getObjFullName();

		virtual ICFGenKbGenItemObj* realize();

		virtual ICFGenKbGenItemObj* create();

		virtual ICFGenKbGenItemEditObj* update();

		virtual ICFGenKbGenItemEditObj* deleteInstance();

		virtual cfcore::ICFGenKbGenRuleTableObj* getGenRuleTable();

		virtual cfcore::ICFGenKbGenRuleEditObj* getGenRuleEdit();

		virtual ICFGenKbGenItemEditObj* beginEdit();

		virtual cfcore::ICFGenKbGenRuleObj* getOrigAsGenRule();

		virtual cfcore::CFGenKbGenItemBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGenItemBuff* value );

		inline cfcore::CFGenKbGenRuleBuff* getGenRuleBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGenRuleBuff* getGenRuleEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
		};

		virtual const std::string& getRequiredDefinedNear();
		virtual const std::string* getRequiredDefinedNearReference();
		virtual void setRequiredDefinedNear( const std::string& value );

		virtual const std::string& getRequiredBody();
		virtual const std::string* getRequiredBodyReference();
		virtual void setRequiredBody( const std::string& value );

		virtual bool isOptionalBodyTenantIdNull();
		virtual const int64_t getOptionalBodyTenantIdValue();
		virtual const int64_t* getOptionalBodyTenantIdReference();
		virtual void setOptionalBodyTenantIdNull();
		virtual void setOptionalBodyTenantIdValue( const int64_t value );

		virtual bool isOptionalBodyGelCacheIdNull();
		virtual const int64_t getOptionalBodyGelCacheIdValue();
		virtual const int64_t* getOptionalBodyGelCacheIdReference();
		virtual void setOptionalBodyGelCacheIdNull();
		virtual void setOptionalBodyGelCacheIdValue( const int64_t value );

		virtual bool isOptionalBodyGelIdNull();
		virtual const int64_t getOptionalBodyGelIdValue();
		virtual const int64_t* getOptionalBodyGelIdReference();
		virtual void setOptionalBodyGelIdNull();
		virtual void setOptionalBodyGelIdValue( const int64_t value );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsBodyGel( bool forceRead = false );
		virtual void setOptionalComponentsBodyGel( cfcore::ICFGenKbGelExecutableObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
