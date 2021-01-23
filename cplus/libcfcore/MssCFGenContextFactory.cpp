/*
 *  MSS Code Factory CFCore 2.13 MssCF
 *
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <msscf/MssCFGenContextFactory.hpp>
#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenContext.hpp>

namespace cfcore {

	MssCFGenContextFactory::MssCFGenContextFactory() {
	}

	MssCFGenContextFactory::~MssCFGenContextFactory() {
	}

	MssCFGenContext* MssCFGenContextFactory::newGenContext(
		const std::string& generatingBuild,
		MssCFGenContext* genContext,
		const std::string& subClassGenDefName,
		cflib::ICFLibAnyObj* subObject )
	{
		return( new MssCFGenContext( generatingBuild, genContext, subClassGenDefName, subObject ) );
	}

	MssCFGenContext* MssCFGenContextFactory::newGenContext(
		const std::string& generatingBuild,
		MssCFEngine* engine,
		const std::string& argRootGenDir,
		const std::string& toolset,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	{
		return( new MssCFGenContext( generatingBuild,
			engine,
			argRootGenDir,
			toolset,
			scopeDefClassName,
			genDefClassName,
			itemName ) );
	}

	MssCFGenContext* MssCFGenContextFactory::newGenContext(
		const std::string& generatingBuild,
		MssCFEngine* engine,
		const std::string& argRootGenDir,
		const std::string& toolset,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		cflib::ICFLibAnyObj* argGenDef,
		cflib::ICFLibAnyObj* argScopeDef )
	{
		return( new MssCFGenContext( generatingBuild,
			engine,
			argRootGenDir,
			toolset,
			scopeDefClassName,
			genDefClassName,
			itemName,
			argGenDef,
			argScopeDef ) );
	}
}
