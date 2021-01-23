#pragma once

// Description: C++18 edit object instance specification for CFGenKb GelPrefixLine.

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

	class CFGenKbGelPrefixLineEditObj
	: public CFGenKbGelInstructionEditObj,
	  public virtual ICFGenKbGelPrefixLineEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFGenKbGelPrefixLineEditObj( cfcore::ICFGenKbGelPrefixLineObj* argOrig );
		virtual ~CFGenKbGelPrefixLineEditObj();

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

		virtual ICFGenKbGelInstructionObj* realize();

		virtual ICFGenKbGelInstructionObj* create();

		virtual ICFGenKbGelInstructionEditObj* update();

		virtual ICFGenKbGelInstructionEditObj* deleteInstance();

		virtual cfcore::ICFGenKbGelPrefixLineTableObj* getGelPrefixLineTable();

		virtual cfcore::ICFGenKbGelPrefixLineEditObj* getGelPrefixLineEdit();

		virtual ICFGenKbGelInstructionEditObj* beginEdit();

		virtual cfcore::ICFGenKbGelPrefixLineObj* getOrigAsGelPrefixLine();

		virtual cfcore::CFGenKbGelInstructionBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGelInstructionBuff* value );

		inline cfcore::CFGenKbGelPrefixLineBuff* getGelPrefixLineBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGelPrefixLineBuff* getGelPrefixLineEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff ) );
		};

		virtual const std::string& getRequiredPrefixName();
		virtual const std::string* getRequiredPrefixNameReference();
		virtual void setRequiredPrefixName( const std::string& value );

		virtual bool isOptionalRemainderTenantIdNull();
		virtual const int64_t getOptionalRemainderTenantIdValue();
		virtual const int64_t* getOptionalRemainderTenantIdReference();

		virtual const int64_t getRequiredRemainderGelCacheId();
		virtual const int64_t* getRequiredRemainderGelCacheIdReference();

		virtual bool isOptionalRemainderInstIdNull();
		virtual const int64_t getOptionalRemainderInstIdValue();
		virtual const int64_t* getOptionalRemainderInstIdReference();

		virtual cfcore::ICFGenKbGelInstructionObj* getOptionalLookupRemainder( bool forceRead = false );
		virtual void setOptionalLookupRemainder( cfcore::ICFGenKbGelInstructionObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		virtual std::string expand( MssCFGenContext* genContext );
	};
}
