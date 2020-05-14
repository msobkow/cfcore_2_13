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

#include <iostream>
#include <fstream>

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemEditObj.hpp>

namespace cfcore {

	class MssCFCounter;
	class MssCFEngine;
	class MssCFGenFileObj;
	class MssCFGenRuleObj;
	class MssCFGenTruncObj;
	class MssCFGenBindObj;
	class MssCFGenReferenceObj;
	class MssCFGenIteratorObj;

	class MssCFGenContext : public CFGenKbGenItemEditObj
	{
		protected:

			std::string strGeneratingBuild;

			MssCFEngine* genEngine = NULL;

			/**
			 *	Generation contexts form a simple stack.
			 */
			MssCFGenContext* prevContext = NULL;

			/**
			 *	The generation context needs to track information about the file being
			 *	generated.
			 */
			std::string rootGenDir;
			std::string outputDirName;
			std::string outputGenerateOnce;
			std::string outputModuleName;
			std::string outputBaseName;
			std::string outputName;
			std::string outputFullName;
			std::ofstream* output = NULL;
			MssCFGenFileObj* genFile = NULL;
			MssCFGenContext* genFileContext = NULL;
			std::string genGenerateOnce;
			std::string genModuleName;
			std::string genBasePackageName;
			std::string genSubPackageName;
			std::string genDefClassName;
			std::string sourceBundle;
			std::string sourcePackage;

			/**
			 *	The generation context also tracks the current generation definition,
			 *	scope definition, and classes of them.
			 */
			cflib::ICFLibAnyObj* genDef = NULL;
			cflib::ICFLibAnyObj* scopeDef = NULL;

			/**
			 *	In order to support positional/indexed parameter binding, counters are
			 *	provided that can be created and used within a context.  They're automatically
			 *	disposed when the context stack pops.
			 */
			std::map<std::string,MssCFCounter*>* counterMap = NULL;

			ICFGenKbGelInstructionObj* genBasePackageBin = NULL;
			ICFGenKbGelInstructionObj* genModuleNameBin = NULL;

			/**
			 *	Because it is much easier to deal with memory management of strings
			 *	in C++ by using string instances instead of pointers, there is no way
			 *	to return a NULL from a binding, as bindings are expected to always
			 *	return strings in C++.
			 *
			 *	Instead, the binding methods use setBindIsNull() and clearBindIsNull()
			 *	to indicate whether they returned an empty string or a NULL.
			 *
			 *	The code which expandes the bindings then checks the value of the
			 *	flag variable using isExpansionNull().
			 */
			bool expansionIsNull = true;

		public:
			static const std::string CLASS_NAME;

			virtual const std::string& getGeneratingBuild();
			virtual void setGeneratingBuild( const std::string& value );

			virtual const std::string& getGenGenerateOnce();

			virtual const std::string getSourceBundle() const;
			virtual cflib::ICFLibAnyObj* getGenDef() const;
			virtual void setGenDef( cflib::ICFLibAnyObj* value );
			virtual cflib::ICFLibAnyObj* getScopeDef() const;
			virtual MssCFEngine* getGenEngine() const;
			virtual void setGenEngine( MssCFEngine* value );
			virtual MssCFGenContext* getGenFileContext() const;
			virtual const std::string& getGenFileGenerateOnce() const;
			virtual const std::string& getGenFileModuleName() const;
			virtual const std::string& getGenFileBaseName() const;
			virtual const std::string& getGenFileName() const;
			virtual const std::string& getGenFileFullName() const;
			virtual const std::string& getSourcePackage() const;
			virtual std::string getGeneratorName() const;
			virtual std::string getGeneratorVersion() const;
			virtual std::string getGenDate() const;
			virtual std::string getGenTime() const;
			virtual std::string getGenTimestamp() const;
			virtual std::string getGenSerializableUID();
			virtual std::string getGenBasePackageName();
			virtual std::string getGenModuleName();
			virtual MssCFGenFileObj* getGenFile() const;
			virtual std::string getGenSubPackageName();
			virtual MssCFGenContext* getPrevContext() const;
			virtual const std::string& getRootGenDir() const;
			virtual void setExpansionIsNull( bool argValue = true );
			virtual void clearExpansionIsNull();
			virtual bool isExpansionNull() const;

			/**
			 *	Release an instance properly.  You must never do "delete genContext"; use
			 *	"genContext->release()" instead.
			 *
			 *	Returns the prevContext of this instance before it was deleted, making
			 *	it easy to write a chaining loop that deletes entire segments of the
			 *	GenContext stack managed by an MssCFEngine instance.
			 */
			MssCFGenContext* release();

			/**
			 *	Construct an expansion context for the stack that pushes a sub class and definition.
			 */
			MssCFGenContext(
				const std::string& generatingBuild,
				MssCFGenContext* genContext,
				const std::string& subClassGenDefName,
				cflib::ICFLibAnyObj* subObject );

			/**
			 *	Construct an instance.  Only invoked to create binding entries.
			 */
			MssCFGenContext(
				const std::string& generatingBuild,
				MssCFEngine* engine,
				const std::string& argRootGenDir,
				const std::string& toolset,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName );

			/**
			 *	Construct an expansion context for the stack.
			 */
			MssCFGenContext(
				const std::string& generatingBuild,
				MssCFEngine* engine,
				const std::string& argRootGenDir,
				const std::string& toolset,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName,
				cflib::ICFLibAnyObj* argGenDef,
				cflib::ICFLibAnyObj* argScopeDef );

			virtual ~MssCFGenContext();

			virtual MssCFGenContext* buildRefContext( cflib::ICFLibAnyObj* genDef );
			virtual void setRootGenDir( const std::string& value );
			virtual void setPrevContext( MssCFGenContext* value );
			virtual void setOutput( std::ofstream* value );
			virtual void setOutputDirName( const std::string& value );
			virtual void setOutputGenerateOnce( const std::string& value );
			virtual void setOutputModuleName( const std::string& value );
			virtual void setOutputBaseName( const std::string& value );
			virtual void setOutputName( const std::string& value );
			virtual void setOutputFullName( const std::string& value );
			virtual void setGenFile( MssCFGenFileObj* value );
			virtual void setGenFileContext( MssCFGenContext* value );
			virtual void setGenSubPackageName( const std::string& value );
			virtual void setGenDefClassName( const std::string& value );
			virtual void setSourceBundle( const std::string& value );
			virtual void setSourcePackage( const std::string& value );

			/**
			 *	Close the source file
			 */
			virtual void closeSourceFile();

			/**
			 *	Expand the body of an item
			 */
			virtual std::string expandItemBody( ICFGenKbGenItemObj* genItem );

			virtual void flush();
			virtual void newLine();

			/**
			 *	Wrapper for the BufferedWriter output stream
			 */
			virtual void write( int c );
			virtual void write( const std::string& s );

			virtual MssCFCounter* addCounter( const std::string& name );
			virtual MssCFCounter* getCounter( const std::string& name );

			virtual void openSourceFile(
				MssCFGenFileObj* argGenFile,
				const std::string& argGenDefClassName,
				const std::string& argSourceBundle,
				const std::string& moduleName,
				const std::string& fullPackage,
				const std::string& baseGenDir,
				const std::string& baseWorkDir,
				const std::string& srcFileDir,
				const std::string& fileName,
				const std::string& generateOnce );
	};
}
