#pragma once

// Description: C++18 edit object instance specification for CFGenKb SysCluster.

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

	class CFGenKbSysClusterEditObj
	: public virtual ICFGenKbSysClusterEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbSysClusterObj* orig;
		cfcore::CFGenKbSysClusterBuff* buff;
	public:
		CFGenKbSysClusterEditObj( cfcore::ICFGenKbSysClusterObj* argOrig );
		virtual ~CFGenKbSysClusterEditObj();

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

		virtual ICFGenKbSysClusterObj* realize();

		virtual cfcore::ICFGenKbSysClusterObj* read( bool forceRead = false );

		virtual ICFGenKbSysClusterObj* create();

		virtual ICFGenKbSysClusterEditObj* update();

		virtual ICFGenKbSysClusterEditObj* deleteInstance();

		virtual cfcore::ICFGenKbSysClusterTableObj* getSysClusterTable();

		virtual cfcore::ICFGenKbSysClusterEditObj* getEdit();

		virtual cfcore::ICFGenKbSysClusterEditObj* getSysClusterEdit();

		virtual ICFGenKbSysClusterEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbSysClusterObj* getOrig();

		virtual cfcore::ICFGenKbSysClusterObj* getOrigAsSysCluster();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbSysClusterBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbSysClusterBuff* value );

		inline cfcore::CFGenKbSysClusterBuff* getSysClusterBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbSysClusterBuff*>( buff ) );
		};

		inline cfcore::CFGenKbSysClusterBuff* getSysClusterEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbSysClusterBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbSysClusterPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbSysClusterPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int32_t getRequiredSingletonId();
		virtual const int32_t* getRequiredSingletonIdReference();
		virtual void setRequiredSingletonId( const int32_t value );

		virtual const int64_t getRequiredClusterId();
		virtual const int64_t* getRequiredClusterIdReference();

		virtual cfcore::ICFGenKbClusterObj* getRequiredContainerCluster( bool forceRead = false );
		virtual void setRequiredContainerCluster( cfcore::ICFGenKbClusterObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
