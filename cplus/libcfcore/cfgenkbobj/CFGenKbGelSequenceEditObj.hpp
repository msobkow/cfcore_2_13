#pragma once

// Description: C++18 edit object instance specification for CFGenKb GelSequence.

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

	class CFGenKbGelSequenceEditObj
	: public CFGenKbGelInstructionEditObj,
	  public virtual ICFGenKbGelSequenceEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFGenKbGelSequenceEditObj( cfcore::ICFGenKbGelSequenceObj* argOrig );
		virtual ~CFGenKbGelSequenceEditObj();

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

		virtual cfcore::ICFGenKbGelSequenceTableObj* getGelSequenceTable();

		virtual cfcore::ICFGenKbGelSequenceEditObj* getGelSequenceEdit();

		virtual ICFGenKbGelInstructionEditObj* beginEdit();

		virtual cfcore::ICFGenKbGelSequenceObj* getOrigAsGelSequence();

		virtual cfcore::CFGenKbGelInstructionBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGelInstructionBuff* value );

		inline cfcore::CFGenKbGelSequenceBuff* getGelSequenceBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGelSequenceBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGelSequenceBuff* getGelSequenceEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff ) );
		};

		virtual bool isOptionalFirstInstTenantIdNull();
		virtual const int64_t getOptionalFirstInstTenantIdValue();
		virtual const int64_t* getOptionalFirstInstTenantIdReference();

		virtual bool isOptionalFirstInstGelCacheIdNull();
		virtual const int64_t getOptionalFirstInstGelCacheIdValue();
		virtual const int64_t* getOptionalFirstInstGelCacheIdReference();

		virtual bool isOptionalFirstInstIdNull();
		virtual const int64_t getOptionalFirstInstIdValue();
		virtual const int64_t* getOptionalFirstInstIdReference();

		virtual bool isOptionalLastInstTenantIdNull();
		virtual const int64_t getOptionalLastInstTenantIdValue();
		virtual const int64_t* getOptionalLastInstTenantIdReference();

		virtual bool isOptionalLastInstGelCacheIdNull();
		virtual const int64_t getOptionalLastInstGelCacheIdValue();
		virtual const int64_t* getOptionalLastInstGelCacheIdReference();

		virtual bool isOptionalLastInstIdNull();
		virtual const int64_t getOptionalLastInstIdValue();
		virtual const int64_t* getOptionalLastInstIdReference();

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> getOptionalChildrenCalls( bool forceRead = false );

		virtual cfcore::ICFGenKbGelCallObj* getOptionalLookupFirstInst( bool forceRead = false );
		virtual void setOptionalLookupFirstInst( cfcore::ICFGenKbGelCallObj* value );

		virtual cfcore::ICFGenKbGelCallObj* getOptionalLookupLastInst( bool forceRead = false );
		virtual void setOptionalLookupLastInst( cfcore::ICFGenKbGelCallObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		virtual std::string expand( MssCFGenContext* genContext );
		virtual void addCalledInstruction( ICFGenKbGelCacheObj* gelCache, ICFGenKbGelInstructionObj* calledInstruction );
	};
}
