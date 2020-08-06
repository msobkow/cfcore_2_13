#pragma once

// Description: C++18 edit object instance specification for CFGenKb GelInstruction.

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

	class CFGenKbGelInstructionEditObj
	: public virtual ICFGenKbGelInstructionEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfcore::ICFGenKbGelInstructionObj* orig;
		cfcore::CFGenKbGelInstructionBuff* buff;
	public:
		CFGenKbGelInstructionEditObj( cfcore::ICFGenKbGelInstructionObj* argOrig );
		virtual ~CFGenKbGelInstructionEditObj();

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

		virtual ICFGenKbGelInstructionObj* realize();

		virtual cfcore::ICFGenKbGelInstructionObj* read( bool forceRead = false );

		virtual ICFGenKbGelInstructionObj* create();

		virtual ICFGenKbGelInstructionEditObj* update();

		virtual ICFGenKbGelInstructionEditObj* deleteInstance();

		virtual cfcore::ICFGenKbGelInstructionTableObj* getGelInstructionTable();

		virtual cfcore::ICFGenKbGelInstructionEditObj* getEdit();

		virtual cfcore::ICFGenKbGelInstructionEditObj* getGelInstructionEdit();

		virtual ICFGenKbGelInstructionEditObj* beginEdit();

		virtual void endEdit();

		virtual cfcore::ICFGenKbGelInstructionObj* getOrig();

		virtual cfcore::ICFGenKbGelInstructionObj* getOrigAsGelInstruction();

		virtual cfcore::ICFGenKbSchemaObj* getSchema();

		virtual cfcore::CFGenKbGelInstructionBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGelInstructionBuff* value );

		inline cfcore::CFGenKbGelInstructionBuff* getGelInstructionBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGelInstructionBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGelInstructionBuff* getGelInstructionEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff ) );
		};

		virtual cfcore::CFGenKbGelInstructionPKey* getPKey();
		virtual void setPKey( cfcore::CFGenKbGelInstructionPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredTenantId();
		virtual const int64_t* getRequiredTenantIdReference();

		virtual const int64_t getRequiredGelCacheId();
		virtual const int64_t* getRequiredGelCacheIdReference();

		virtual const int64_t getRequiredGelInstId();
		virtual const int64_t* getRequiredGelInstIdReference();

		virtual bool isOptionalChainInstTenantIdNull();
		virtual const int64_t getOptionalChainInstTenantIdValue();
		virtual const int64_t* getOptionalChainInstTenantIdReference();

		virtual bool isOptionalChainInstGelCacheIdNull();
		virtual const int64_t getOptionalChainInstGelCacheIdValue();
		virtual const int64_t* getOptionalChainInstGelCacheIdReference();

		virtual bool isOptionalChainInstGelInstIdNull();
		virtual const int64_t getOptionalChainInstGelInstIdValue();
		virtual const int64_t* getOptionalChainInstGelInstIdReference();

		virtual const std::string& getRequiredSourceText();
		virtual const std::string* getRequiredSourceTextReference();
		virtual void setRequiredSourceText( const std::string& value );

		virtual cfcore::ICFGenKbTenantObj* getRequiredOwnerTenant( bool forceRead = false );
		virtual void setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value );

		virtual cfcore::ICFGenKbGelCacheObj* getRequiredContainerGelCache( bool forceRead = false );
		virtual void setRequiredContainerGelCache( cfcore::ICFGenKbGelCacheObj* value );

		virtual cfcore::ICFGenKbGelInstructionObj* getOptionalLookupChainInst( bool forceRead = false );
		virtual void setOptionalLookupChainInst( cfcore::ICFGenKbGelInstructionObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		virtual void linkChainInstruction( ICFGenKbGelInstructionObj* calledInstruction );
		virtual void addCalledInstruction( ICFGenKbGelCacheObj* gelCache, ICFGenKbGelInstructionObj* calledInstruction );
		virtual std::string expand( MssCFGenContext* genContext );
	};
}
