#pragma once

// Description: C++18 edit object instance specification for CFGenKb GelSwitchLimb.

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

	class CFGenKbGelSwitchLimbEditObj
	: public virtual ICFGenKbGelSwitchLimbEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbGelSwitchLimbObj* orig;
		cfcore::CFGenKbGelSwitchLimbBuff* buff;
	public:
		CFGenKbGelSwitchLimbEditObj( cfcore::ICFGenKbGelSwitchLimbObj* argOrig );
		virtual ~CFGenKbGelSwitchLimbEditObj();

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

		virtual ICFGenKbGelSwitchLimbObj* realize();

		virtual cfcore::ICFGenKbGelSwitchLimbObj* read( bool forceRead = false );

		virtual ICFGenKbGelSwitchLimbObj* create();

		virtual ICFGenKbGelSwitchLimbEditObj* update();

		virtual ICFGenKbGelSwitchLimbEditObj* deleteInstance();

		virtual cfcore::ICFGenKbGelSwitchLimbTableObj* getGelSwitchLimbTable();

		virtual cfcore::ICFGenKbGelSwitchLimbEditObj* getEdit();

		virtual cfcore::ICFGenKbGelSwitchLimbEditObj* getGelSwitchLimbEdit();

		virtual ICFGenKbGelSwitchLimbEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbGelSwitchLimbObj* getOrig();

		virtual cfcore::ICFGenKbGelSwitchLimbObj* getOrigAsGelSwitchLimb();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbGelSwitchLimbBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGelSwitchLimbBuff* value );

		inline cfcore::CFGenKbGelSwitchLimbBuff* getGelSwitchLimbBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGelSwitchLimbBuff* getGelSwitchLimbEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbGelSwitchLimbPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbGelSwitchLimbPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredTenantId();
		virtual const int64_t* getRequiredTenantIdReference();

		virtual const int64_t getRequiredGelCacheId();
		virtual const int64_t* getRequiredGelCacheIdReference();

		virtual const int64_t getRequiredGelInstId();
		virtual const int64_t* getRequiredGelInstIdReference();

		virtual const std::string& getRequiredLimbName();
		virtual const std::string* getRequiredLimbNameReference();
		virtual void setRequiredLimbName( const std::string& value );

		virtual const std::string& getRequiredLimbExpansion();
		virtual const std::string* getRequiredLimbExpansionReference();
		virtual void setRequiredLimbExpansion( const std::string& value );

		virtual cfcore::ICFGenKbGelSwitchObj* getRequiredParentSwitch( bool forceRead = false );
		virtual void setRequiredParentSwitch( cfcore::ICFGenKbGelSwitchObj* value );

		virtual cfcore::ICFGenKbTenantObj* getRequiredOwnerTenant( bool forceRead = false );
		virtual void setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
