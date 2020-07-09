#pragma once

// Description: C++18 edit object instance specification for CFGenKb GelCache.

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
	class MssCFEngine;
	class MssCFGenContext;
	class MssCFGelCompiler;
	class MssCFGenFileObj;
	class MssCFGenRuleObj;
	class MssCFGenTruncObj;
	class MssCFGenBindObj;
	class MssCFGenReferenceObj;
	class MssCFGenIteratorObj;
}


namespace cfcore {

	class CFGenKbGelCacheEditObj
	: public virtual ICFGenKbGelCacheEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbGelCacheObj* orig;
		cfcore::CFGenKbGelCacheBuff* buff;
	public:
		CFGenKbGelCacheEditObj( cfcore::ICFGenKbGelCacheObj* argOrig );
		virtual ~CFGenKbGelCacheEditObj();

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

		virtual ICFGenKbGelCacheObj* realize();

		virtual cfcore::ICFGenKbGelCacheObj* read( bool forceRead = false );

		virtual ICFGenKbGelCacheObj* create();

		virtual ICFGenKbGelCacheEditObj* update();

		virtual ICFGenKbGelCacheEditObj* deleteInstance();

		virtual cfcore::ICFGenKbGelCacheTableObj* getGelCacheTable();

		virtual cfcore::ICFGenKbGelCacheEditObj* getEdit();

		virtual cfcore::ICFGenKbGelCacheEditObj* getGelCacheEdit();

		virtual ICFGenKbGelCacheEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbGelCacheObj* getOrig();

		virtual cfcore::ICFGenKbGelCacheObj* getOrigAsGelCache();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbGelCacheBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGelCacheBuff* value );

		inline cfcore::CFGenKbGelCacheBuff* getGelCacheBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGelCacheBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGelCacheBuff* getGelCacheEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbGelCachePKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbGelCachePKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredTenantId();
		virtual const int64_t* getRequiredTenantIdReference();

		virtual const int64_t getRequiredGelCacheId();
		virtual const int64_t* getRequiredGelCacheIdReference();

		virtual const std::string& getRequiredCacheName();
		virtual const std::string* getRequiredCacheNameReference();
		virtual void setRequiredCacheName( const std::string& value );

		virtual cfcore::ICFGenKbTenantObj* getRequiredOwnerTenant( bool forceRead = false );
		virtual void setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		virtual ICFGenKbGelInstructionObj* lookupMacro( const std::string& macroBody );
		virtual ICFGenKbGelInstructionObj* rememberMacro( const std::string& macroBody, ICFGenKbGelInstructionObj* gel );
		virtual ICFGenKbGelExecutableObj* lookupExecutable( const std::string& macroBody );
		virtual ICFGenKbGelExecutableObj* rememberExecutable( const std::string& macroBody, ICFGenKbGelExecutableObj* gel );
	};
}
