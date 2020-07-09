#pragma once

// Description: C++18 edit object instance specification for CFGenKb GelCall.

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

	class CFGenKbGelCallEditObj
	: public CFGenKbGelInstructionEditObj,
	  public virtual ICFGenKbGelCallEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFGenKbGelCallEditObj( cfcore::ICFGenKbGelCallObj* argOrig );
		virtual ~CFGenKbGelCallEditObj();

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

		virtual cfcore::ICFGenKbGelCallTableObj* getGelCallTable();

		virtual cfcore::ICFGenKbGelCallEditObj* getGelCallEdit();

		virtual ICFGenKbGelInstructionEditObj* beginEdit();

		virtual cfcore::ICFGenKbGelCallObj* getOrigAsGelCall();

		virtual cfcore::CFGenKbGelInstructionBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGelInstructionBuff* value );

		inline cfcore::CFGenKbGelCallBuff* getGelCallBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGelCallBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGelCallBuff* getGelCallEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff ) );
		};

		virtual bool isOptionalSeqInstTenantIdNull();
		virtual const int64_t getOptionalSeqInstTenantIdValue();
		virtual const int64_t* getOptionalSeqInstTenantIdReference();

		virtual bool isOptionalSeqInstGelCacheIdNull();
		virtual const int64_t getOptionalSeqInstGelCacheIdValue();
		virtual const int64_t* getOptionalSeqInstGelCacheIdReference();

		virtual bool isOptionalSeqInstIdNull();
		virtual const int64_t getOptionalSeqInstIdValue();
		virtual const int64_t* getOptionalSeqInstIdReference();

		virtual bool isOptionalCallInstTenantIdNull();
		virtual const int64_t getOptionalCallInstTenantIdValue();
		virtual const int64_t* getOptionalCallInstTenantIdReference();

		virtual bool isOptionalCallInstGelCacheIdNull();
		virtual const int64_t getOptionalCallInstGelCacheIdValue();
		virtual const int64_t* getOptionalCallInstGelCacheIdReference();

		virtual bool isOptionalCallInstIdNull();
		virtual const int64_t getOptionalCallInstIdValue();
		virtual const int64_t* getOptionalCallInstIdReference();

		virtual bool isOptionalPrevInstTenantIdNull();
		virtual const int64_t getOptionalPrevInstTenantIdValue();
		virtual const int64_t* getOptionalPrevInstTenantIdReference();

		virtual bool isOptionalPrevInstGelCacheIdNull();
		virtual const int64_t getOptionalPrevInstGelCacheIdValue();
		virtual const int64_t* getOptionalPrevInstGelCacheIdReference();

		virtual bool isOptionalPrevInstGelInstIdNull();
		virtual const int64_t getOptionalPrevInstGelInstIdValue();
		virtual const int64_t* getOptionalPrevInstGelInstIdReference();

		virtual bool isOptionalNextInstTenantIdNull();
		virtual const int64_t getOptionalNextInstTenantIdValue();
		virtual const int64_t* getOptionalNextInstTenantIdReference();

		virtual bool isOptionalNextInstGelCacheIdNull();
		virtual const int64_t getOptionalNextInstGelCacheIdValue();
		virtual const int64_t* getOptionalNextInstGelCacheIdReference();

		virtual bool isOptionalNextInstGelInstIdNull();
		virtual const int64_t getOptionalNextInstGelInstIdValue();
		virtual const int64_t* getOptionalNextInstGelInstIdReference();

		virtual cfcore::ICFGenKbGelSequenceObj* getOptionalParentSeqInst( bool forceRead = false );
		virtual void setOptionalParentSeqInst( cfcore::ICFGenKbGelSequenceObj* value );

		virtual cfcore::ICFGenKbGelInstructionObj* getOptionalLookupCallInst( bool forceRead = false );
		virtual void setOptionalLookupCallInst( cfcore::ICFGenKbGelInstructionObj* value );

		virtual cfcore::ICFGenKbGelCallObj* getOptionalLookupPrevInst( bool forceRead = false );
		virtual void setOptionalLookupPrevInst( cfcore::ICFGenKbGelCallObj* value );

		virtual cfcore::ICFGenKbGelCallObj* getOptionalLookupNextInst( bool forceRead = false );
		virtual void setOptionalLookupNextInst( cfcore::ICFGenKbGelCallObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		virtual std::string expand( MssCFGenContext* genContext );
	};
}
