#pragma once

// Description: C++18 edit object instance specification for CFGenKb SecGroup.

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

	class CFGenKbSecGroupEditObj
	: public virtual ICFGenKbSecGroupEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbSecGroupObj* orig;
		cfcore::CFGenKbSecGroupBuff* buff;
		cfcore::ICFGenKbSecUserObj* createdBy = NULL;
		cfcore::ICFGenKbSecUserObj* updatedBy = NULL;
	public:
		CFGenKbSecGroupEditObj( cfcore::ICFGenKbSecGroupObj* argOrig );
		virtual ~CFGenKbSecGroupEditObj();

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

		virtual ICFGenKbSecGroupObj* realize();

		virtual cfcore::ICFGenKbSecGroupObj* read( bool forceRead = false );

		virtual ICFGenKbSecGroupObj* create();

		virtual ICFGenKbSecGroupEditObj* update();

		virtual ICFGenKbSecGroupEditObj* deleteInstance();

		virtual cfcore::ICFGenKbSecGroupTableObj* getSecGroupTable();

		virtual cfcore::ICFGenKbSecGroupEditObj* getEdit();

		virtual cfcore::ICFGenKbSecGroupEditObj* getSecGroupEdit();

		virtual ICFGenKbSecGroupEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbSecGroupObj* getOrig();

		virtual cfcore::ICFGenKbSecGroupObj* getOrigAsSecGroup();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbSecGroupBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbSecGroupBuff* value );

		inline cfcore::CFGenKbSecGroupBuff* getSecGroupBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbSecGroupBuff*>( buff ) );
		};

		inline cfcore::CFGenKbSecGroupBuff* getSecGroupEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbSecGroupPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbSecGroupPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredClusterId();
		virtual const int64_t* getRequiredClusterIdReference();

		virtual const int32_t getRequiredSecGroupId();
		virtual const int32_t* getRequiredSecGroupIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual const bool getRequiredIsVisible();
		virtual const bool* getRequiredIsVisibleReference();
		virtual void setRequiredIsVisible( const bool value );

		virtual cfcore::ICFGenKbClusterObj* getRequiredContainerCluster( bool forceRead = false );
		virtual void setRequiredContainerCluster( cfcore::ICFGenKbClusterObj* value );

		virtual std::vector<cfcore::ICFGenKbSecGrpIncObj*> getOptionalComponentsInclude( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGrpMembObj*> getOptionalComponentsMember( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGrpIncObj*> getRequiredChildrenIncByGroup( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> getOptionalComponentsForm( bool forceRead = false );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
