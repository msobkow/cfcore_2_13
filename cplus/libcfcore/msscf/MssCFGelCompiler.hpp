#pragma once

/*
 *  MSS Code Factory CFCore 2.13 MssCF
 *
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <cfgenkbobj/CFGenKbGelBuiltinObj.hpp>
#include <cfgenkbobj/CFGenKbGelConstrainObj.hpp>
#include <cfgenkbobj/CFGenKbGelCounterObj.hpp>
#include <cfgenkbobj/CFGenKbGelModifierObj.hpp>
#include <cfgenkbobj/CFGenKbGelPopObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCacheObj.hpp>

namespace cfcore {

	class MssCFEngine;
	class MssCFGenContext;
	class MssCFCounter;
	class MssCFGenBindObj;
	class MssCFGenFileObj;
	class MssCFGenIteratorObj;
	class MssCFGenReferenceObj;
	class MssCFGenRuleObj;
	class MssCFGenTruncObj;

	class MssCFGelCompiler {

		protected:
			MssCFEngine* genEngine = NULL;
			ICFGenKbGelCacheObj* myGelCache = NULL;
			bool compileError = false;
			cflib::ICFLibMessageLog* log = NULL;
			cflib::CFLibCachedMessageLog msglog;

		public:

			virtual ICFGenKbGelCacheObj* getGelCache();

			virtual cflib::ICFLibMessageLog* getLog();
			virtual void setLog( cflib::ICFLibMessageLog* newlog );

			virtual cflib::ICFLibMessageLog* getCompileLog();

			static const std::string CLASS_NAME;
			static const std::string S_Asterisk;
			static const std::string S_Backslash;
			static const std::string S_Object;

			static const std::string _DOLLAR;

			/**
			 *	Sometimes you just want an empty expansion
			 */
			static const std::string _EMPTY;
			static const std::string _EMPTY_STRING;

			/**
			 *	Built-in stripLeadingZeroes strips all zeroes from
			 *	a string.
			 */
			static const std::string _STRIPLEADINGZEROES;

			/**
			 *	The GEL macro language supports iteration of definition details.
			 */
			static const std::string _ITERATE;
			static const std::string _ITERATOR_BEFORE;
			static const std::string _ITERATOR_FIRST;
			static const std::string _ITERATOR_EACH;
			static const std::string _ITERATOR_LAST;
			static const std::string _ITERATOR_AFTER;
			static const std::string _ITERATOR_LONE;
			static const std::string _ITERATOR_EMPTY;

			/**
			 *	The GEL macro language supports spreading of iterators.
			 */
			static const std::string _SPREAD;
			static const std::string _SPREAD_BETWEEN;

			/**
			 *	The GEL macro language supports temporary unwinding of the
			 *	expansion context stack.
			 */
			static const std::string _POP;
			static const std::string _POPTO;
			static const std::string _POPTOP;
			static const std::string _POPONEFROMTOP;

			/**
			 *	References let the GEL macro language "call" an expansion
			 *	from a completely different context.  See notes 12-MAY-1998.
			 */
			static const std::string _REFERENCE;

			/**
			 *	The GEL macro language supports branching through a switch directive.
			 *	The syntax is:
			 *
			 *		switch ValMacro Key1 Macro1, Key2 Macro2, default MacroDefault
			 *
			 *	There are two special keys as well:
			 *
			 *		nil
			 *		empty
			 *
			 *	The ValMacro is invoked to get a std::string result.  Failure of the macro
			 *	could produce a null value (special key `nil'), or this could mean
			 *	that the definition has no value to respond with.  The macro could
			 *	also return an empty string, which can't be typed in using macro
			 *	syntax.  If neither nil nor empty is returned, the KeyN strings are
			 *	compared in order.  Finally the MacroDefault is invoked.  At worst,
			 *	a null is returned by the evaluation.
			 */
			static const std::string _SWITCH;
			static const std::string _SWITCH_NIL;
			static const std::string _SWITCH_EMPTY;
			static const std::string _SWITCH_DEFAULT;

			/**
			 *	Simple case coercion can be performed on the results of macros.
			 */
			static const std::string _COERCE_UPPER;
			static const std::string _COERCE_LOWER;
			static const std::string _COERCE_LEADLOWER;
			static const std::string _COERCE_MIXED;

			/**
			 *  Line prefixing is used to embed license information.
			 */
			static const std::string _PREFIX_LINE;

			/**
			 *	Counters are a bit limited, but useful for positional parameter bindings.
			 *	Remember that new counters are initialized to 0, not 1.
			 *
			 *	Syntax is:
			 *
			 *		counter <name> new
			 *		counter <name> increment
			 *		counter <name> decrement
			 *		counter <name> value
			 */
			static const std::string _COUNTER;
			static const std::string _COUNTER_OP_NEW;
			static const std::string _COUNTER_OP_INCR;
			static const std::string _COUNTER_OP_DECR;
			static const std::string _COUNTER_OP_VALUE;

			/**
			 *	You can include information about the generator itself in the code produced.
			 */
			static const std::string _BUILTIN_GENERATORNAME;
			static const std::string _BUILTIN_GENERATORVERSION;
			static const std::string _BUILTIN_GENDATE;
			static const std::string _BUILTIN_GENTIME;
			static const std::string _BUILTIN_GENTIMESTAMP;
			static const std::string _BUILTIN_GENSERIALIZABLEUID;

			/**
			 *	Built-in macros are used to access information directly from the generation
			 *	context and the MssCFGenFileObj* definition used to open the current generation
			 *	file.
			 *	<p>
			 *	GenFileFullName expands to the fully pathed name of the currently open file.
			 *	<p>
			 *	GenFileName expands to the name of the file without any directory specs,
			 *	including any file-type suffixes.
			 *	<p>
			 *	GenFileBaseName expands to the name of the file without any directory specs,
			 *	and without the file-type suffix.
			 *	<p>
			 *	GenPackage expands to the name of the package being generated.
			 *	<p>
			 *	GenPackageDir expands to the subdirectory part of the package
			 *	converted to a directory (with forward slashes.)  The generation
			 *	root directory is <i>not</i> included.
			 *	<p>
			 *	GenPackageFullDir expands to include the generation root directory as
			 *	well as the package directory.  No processing is done on the root
			 *	directory, so on DOS-derived file systems there may be backslashes included.
			 */
			static const std::string _BUILTIN_GENERATINGCLASS;
			static const std::string _BUILTIN_GENFILEFULLNAME;
			static const std::string _BUILTIN_GENFILEBASENAME;
			static const std::string _BUILTIN_GENFILENAME;
			static const std::string _BUILTIN_GENFILEGENERATEONCE;
			static const std::string _BUILTIN_GENFILEMODULENAME;
			static const std::string _BUILTIN_GENSUBPACKAGE;
			static const std::string _BUILTIN_SOURCEBUNDLE;
			static const std::string _BUILTIN_SOURCEPACKAGE;

			/**
			 *  constrainMax and constrainMin are of the form:
			 *  
			 *	  constrainMax MaxValue MacroName
			 *	  constrainMin MinValue MacroName
			 *
			 *  Each expands MacroName, and converts the result to Long.
			 *  
			 *  MaxValue and MinValue can be numeric values or MacroNames.
			 *  If they are numeric values, they're converted to Long
			 *  If they are macro names, the macro is expanded and the result is converted to Long.
			 *  
			 *  Once all values are converted, inclusive comparisons are
			 *  made, and the resulting maximum or minimum value is converted
			 *  to a string and resturned as the result of the expansion.
			 *  
			 *  This means you can do range constraints like:
			 *  
			 *	  <GenRule GenDef="std::string Def" Name="FieldSize"
			 *		  >$constrainMin 4 MaxLen constrainMax 100 MaxLen$</GenRule>
			 */
			static const std::string _CONSTRAIN_MAX;
			static const std::string _CONSTRAIN_MIN;

			static const std::string S_MsgConstrainingValueExpansionNonNumeric;
			static const std::string S_MsgIsNotNumeric;
			static const std::string S_MsgEmptyNotAllowedForMacro;
			static const std::string S_MsgRemainderOfMacroNotCompiledToConstrainedValue;
			static const std::string S_MsgCounter;
			static const std::string S_MsgDoesNotExistInGenContext;
			static const std::string S_MsgBuildRefContextFailed;

			virtual MssCFEngine* getGenEngine();
			virtual void setGenEngine( MssCFEngine* value );

			virtual std::string getGenGenerateOnce( MssCFGenContext* genContext );
			virtual std::string getGenModuleName( MssCFGenContext* genContext );
			virtual std::string getGenBasePackageName( MssCFGenContext* genContext );
			virtual std::string getGenSubPackageName( MssCFGenContext* genContext );

			/**
			 *	Construct an instance.  Only invoked to create binding entries.
			 */
			MssCFGelCompiler( MssCFEngine* engine );
			virtual ~MssCFGelCompiler();

			/**
			 *	compileExecutable() Compiles an expansion body into a GEL executable.
			 */
			virtual ICFGenKbGelExecutableObj* compileExecutable( const std::string& keyExecutableName, const std::string& macro, ICFGenKbGenItemObj* optGenItem = NULL );

			/**
			 *	Was a compile error detected recently?
			 */
			virtual bool hasCompileError() const;

			/**
			 *	Get the error message text accumulated during compileExecutable().
			 */
			virtual const std::string& getErrorText() const;

			/**
			 *	Reset the compile error flag.
			 *	<p>
			 *	This method should only be invoked by parts of the compiler.
			 */
			virtual void clearCompileError();

			/**
			 *	Set the compile error flag.
			 *	<p>
			 *	This method should only be invoked by parts of the compiler.
			 */
			virtual void setCompileError();

	protected:

			class MssCFBuiltinEmpty : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinEmpty( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinEmpty();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGeneratingClass : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGeneratingClass( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGeneratingClass();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenFileBaseName : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGenFileBaseName( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGenFileBaseName();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenFileGenerateOnce : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGenFileGenerateOnce( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGenFileGenerateOnce();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenFileModuleName : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGenFileModuleName( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGenFileModuleName();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenFileName : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGenFileName( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGenFileName();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenFileFullName : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGenFileFullName( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGenFileFullName();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenSubPackageName : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGenSubPackageName( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGenSubPackageName();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinSourceBundle : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinSourceBundle( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinSourceBundle();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinSourcePackage : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinSourcePackage( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinSourcePackage();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGeneratorName : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGeneratorName( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGeneratorName();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGeneratorVersion : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGeneratorVersion( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGeneratorVersion();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenDate : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGenDate( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGenDate();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenTime : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGenTime( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGenTime();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenTimestamp : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGenTimestamp( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGenTimestamp();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenSerializableUID : public virtual CFGenKbGelBuiltinObj {
				public:
					MssCFBuiltinGenSerializableUID( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFBuiltinGenSerializableUID();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFConstrainMax : public virtual CFGenKbGelConstrainObj {
				public:
					MssCFConstrainMax( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFConstrainMax();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFConstrainMin : public virtual CFGenKbGelConstrainObj {
				public:
					MssCFConstrainMin( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFConstrainMin();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFCounterNew : public virtual CFGenKbGelCounterObj {
				public:
					MssCFCounterNew( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFCounterNew();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFCounterIncrement : public virtual CFGenKbGelCounterObj {
				public:
					MssCFCounterIncrement( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFCounterIncrement();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFCounterDecrement : public virtual CFGenKbGelCounterObj {
				public:
					MssCFCounterDecrement( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFCounterDecrement();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFCounterValue : public virtual CFGenKbGelCounterObj {
				public:
					MssCFCounterValue( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFCounterValue();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFModifierStripLeadingZeroes : public virtual CFGenKbGelModifierObj {
				public:
					MssCFModifierStripLeadingZeroes( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFModifierStripLeadingZeroes();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFModifierCoerceUpper : public virtual CFGenKbGelModifierObj {
				public:
					MssCFModifierCoerceUpper( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFModifierCoerceUpper();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFModifierCoerceLower : public virtual CFGenKbGelModifierObj {
				public:
					MssCFModifierCoerceLower( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFModifierCoerceLower();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFModifierCoerceMixed : public virtual CFGenKbGelModifierObj {
				public:
					MssCFModifierCoerceMixed( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFModifierCoerceMixed();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFModifierCoerceLeadLower : public virtual CFGenKbGelModifierObj {
				public:
					MssCFModifierCoerceLeadLower( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFModifierCoerceLeadLower();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFPop : public virtual CFGenKbGelPopObj {
				public:
					MssCFPop( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFPop();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFPopTo : public virtual CFGenKbGelPopObj {
				public:
					MssCFPopTo( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFPopTo();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFPopTop : public virtual CFGenKbGelPopObj {
				public:
					MssCFPopTop( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFPopTop();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			class MssCFPopOneFromTop : public virtual CFGenKbGelPopObj {
				public:
					MssCFPopOneFromTop( cfcore::ICFGenKbSchemaObj* argSchema );
					virtual ~MssCFPopOneFromTop();
					virtual std::string expand( MssCFGenContext* genContext );
			};

			/**
			 *	The meaning of linkInstruction has changed.  For a GelSequence invoker,
			 *	the instruction is attached as a new GelCall instance below the GelSequence.
			 *	For other instructions, they are attached as the ChainInst of the instruction,
			 *	which must be NULL when this method is invoked.  You can not daisy-chain
			 *	instructions because the instruction is to be immutable after it instruction
			 *	is returned by compileMacro().
			 *	<p>
			 *	The caller of compileMacro() is the one that uses linkInstruction() to wire
			 *	instructions together; the compileMacro() invocations no longer carry any
			 *	reference to an invoking instruction, in order to make it impossible for
			 *	me to forget to remove any code that still depends on that obsolete concept
			 *	of a caller.
			 */
			void linkInstruction( ICFGenKbGelInstructionObj* invokingGelInstruction, ICFGenKbGelInstructionObj* instruction );

	protected:

			/**
			 *	A normalized macro is one where there is exactly one space between each
			 *	token to be parsed, and no other text except the printable strings which
			 *	comprise the symbols of the parse.  Any leading or trailing spaces and
			 *	dollar signs are eliminated from the returned string.
			 */
			std::string normalizeMacro( const std::string& rawMacro );

			/**
			 *	When macros are found we need to compile them.  Note that the macro does not include the
			 *	enclosing dollar signs from the GEL source.  This code now presumes the macro is a
			 *	normalized macro, where exactly one space separates the symbols from each other.
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			virtual ICFGenKbGelInstructionObj* compileMacro( const std::string& macro );

			/**
			 *	Macros that start with "iterate " are special macros
			 *	used to iterate through a list of detail items.
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compileIteration( const std::string& macro );

			/**
			 *	Macros that start with "spread " are special macros
			 *	used to spread an iteration of detail items.
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compileSpread( const std::string& macro );

			/**
			 *	Macros that start with "counter " are special directives
			 *	which manipulate index counters.
			 *	<p>
			 *	Counters are a bit limited, but useful for positional parameter bindings.
			 *	Remember that new counters are initialized to 0, not 1.
			 *	<p>
			 *	Syntax is:
			 *	<UL>
			 *		<LI>counter name new</LI>
			 *		<LI>counter name increment</LI>
			 *		<LI>counter name decrement</LI>
			 *		<LI>counter name value</LI>
			 *	</UL>
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compileCounter( const std::string& macro );

			/**
			 *	The constraint macros enforce minimum and maximum evaluation constraints
			 *	over the value of their detail instructions.
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compileConstrainMax( const std::string& macro );
			ICFGenKbGelInstructionObj* compileConstrainMin( const std::string& macro );

			/**
			 *	Macros that start with "pop " are special directives
			 *	which temporarily unwind the expansion context n levels.
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compilePop( const std::string& macro );

			/**
			 *	Macros that start with "popto " are special directives
			 *	which temporarily unwind the expansion context until
			 *	the generation definition is an instance of the
			 *	parameter class.  If no such definition is found in
			 *	the stack, a warning is logged and the macro is
			 *	considered to be in error.
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compilePopTo( const std::string& macro );

			/**
			 *	Macros that start with "poptop " are special directives
			 *	which temporarily unwind the expansion context until
			 *	the highest instance of the parameter class is found.
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compilePopTop( const std::string& macro );

			/**
			 *	Macros that start with "poponefromtop " are special directives
			 *	which temporarily unwind the expansion context until
			 *	the second-highest instance of the parameter class is found.
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compilePopOneFromTop( const std::string& macro );

			/**
			 *	Macros that start with "reference " are special directives
			 *	which create a temporary call stack for expanding item
			 *	returned by the reference.
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compileReference( const std::string& macro );

			/**
			 *	The GEL macro language supports a prefixline directive.
			 *	<p>
			 *	The syntax is:
			 *	<blockquote>
			 *		prefixline PrefixMacro BodyMacro
			 *	</blockquote>
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compilePrefixLine( const std::string& macro );

			/**
			 *	The GEL macro language supports branching through a switch directive.
			 *	<p>
			 *	The syntax is:
			 *	<blockquote>
			 *		switch ValMacro Key1 Macro1, Key2 Macro2, default MacroDefault
			 *	</blockquote>
			 *	<p>
			 *	There are two special keys as well:
			 *	<ul>
			 *		<li>nil</li>
			 *		<li>empty</li>
			 *	</ul>
			 *	<p>
			 *	The ValMacro expansion instruction is invoked by the compiled
			 *	switch instruction to produce a result, which will either be a
			 *	nil (NULL) value, an empty value, or a text to be used for looking
			 *	up instructions by key, and resorting to the default instructions if
			 *	no match is found.
			 *	<p>
			 *	If the expansion is NULL, as indicated by MssCFGenContext.isExpansionNull(),
			 *	then the special nil instructions are executed if available, and the default
			 *	instructions if not.
			 *	<p>
			 *  If the expansion is a non-NULL empty string, then the special case
			 *	empty instructions are evaluated, if available, and the default
			 *	instructions if not.
			 *	<p>
			 *	This method returns NULL in case of a compile error,
			 *	logging the error to the compile log.
			 */
			ICFGenKbGelInstructionObj* compileSwitch( const std::string& macro );
	};
}
