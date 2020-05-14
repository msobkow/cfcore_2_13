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

#include <msscf/MssCFGenBindObj.hpp>
#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenContext.hpp>

namespace cfcore {

	const std::string MssCFGenBindObj::CLASS_NAME( "MssCFGenBindObj" );
	const std::string MssCFGenBindObj::S_Asterisk( "*" );
	const std::string MssCFGenBindObj::S_Object( "Object" );
	const std::string MssCFGenBindObj::S_GenContext( "genContext" );

	MssCFGenBindObj::MssCFGenBindObj()
	: CFGenKbGenBindObj()
	{
	}

	MssCFGenBindObj::MssCFGenBindObj( MssCFEngine* engine )
	: CFGenKbGenBindObj( engine )
	{
	}

	MssCFGenBindObj::MssCFGenBindObj(
		MssCFEngine* engine,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: CFGenKbGenBindObj( engine )
	{
		static const std::string S_ProcName( "constructor-5-arg" );
		static const std::string S_LookupToolSet( "requiredLookupToolSet" );
		static const std::string S_LookupScopeDef( "optionalLookupScopeDef" );
		static const std::string S_LookupGenDef( "requiredLookupGenDef" );
		static const std::string S_ToolSet( "toolset" );
		static const std::string S_GenDefClassName( "genDefClassName" );
		static const std::string S_ItemName( "itemName" );
		if( toolset.length() < 1 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 2, S_ToolSet );
		}
		if( genDefClassName.length() < 1 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 4, S_GenDefClassName );
		}
		if( itemName.length() < 1 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 5, S_ItemName );
		}
		CFGenKbGenItemBuff* genItemBuff = getGenItemBuff();
		ICFGenKbToolSetObj* requiredLookupToolSet = schema->getToolSetTableObj()->readToolSetByNameIdx( toolset );
		if( requiredLookupToolSet == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				2,
				S_LookupToolSet );
		}
		genItemBuff->setRequiredToolSetId( requiredLookupToolSet->getRequiredId() );
		if( ( scopeDefClassName != NULL ) && ( scopeDefClassName->length() > 0 ) ) {
			std::string useScopeDefClassName;
			if( *scopeDefClassName == S_Asterisk ) {
				useScopeDefClassName = S_Object;
			}
			else {
				useScopeDefClassName = engine->fixGenDefName( *scopeDefClassName );
			}
			ICFGenKbDefClassObj* optionalLookupScopeDef = schema->getDefClassTableObj()->readDefClassByNameIdx( useScopeDefClassName );
			if( optionalLookupScopeDef == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					3,
					S_LookupScopeDef );
			}
			genItemBuff->setOptionalScopeDefIdValue( optionalLookupScopeDef->getRequiredId() );
		}
		else {
			genItemBuff->setOptionalScopeDefIdNull();
		}
		std::string useGenDefClassName = engine->fixGenDefName( genDefClassName );
		ICFGenKbDefClassObj* requiredLookupGenDef = schema->getDefClassTableObj()->readDefClassByNameIdx( useGenDefClassName );
		if( requiredLookupGenDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				4,
				S_LookupGenDef );
		}
		genItemBuff->setRequiredGenDefId( requiredLookupGenDef->getRequiredId() );
		genItemBuff->setRequiredName( itemName );
	}

	MssCFGenBindObj::~MssCFGenBindObj() {
	}

	std::string MssCFGenBindObj::expandBody( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expandBody" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}
}
