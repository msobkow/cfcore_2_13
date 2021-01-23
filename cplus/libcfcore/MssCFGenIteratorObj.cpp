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

#include <msscf/MssCFGenIteratorObj.hpp>
#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenContext.hpp>
#include <msscf/MssCFGenContextFactory.hpp>

namespace cfcore {

	const std::string MssCFGenIteratorObj::CLASS_NAME( "MssCFGenIteratorObj" );
	const std::string MssCFGenIteratorObj::S_Asterisk( "*" );
	const std::string MssCFGenIteratorObj::S_GenContext( "genContext" );
	const std::string MssCFGenIteratorObj::S_Object( "Object" );

	ICFGenKbDefClassObj* MssCFGenIteratorObj::getDetailClass() const {
		return( detailClass );
	}

	void MssCFGenIteratorObj::setDetailClass( ICFGenKbDefClassObj* value ) {
		detailClass = value;
	}

	MssCFGenIteratorObj::MssCFGenIteratorObj()
	: CFGenKbGenIteratorObj()
	{
	}

	MssCFGenIteratorObj::MssCFGenIteratorObj( MssCFEngine* schema )
	: CFGenKbGenIteratorObj( dynamic_cast<ICFGenKbSchemaObj*>( schema )  )
	{
	}

	MssCFGenIteratorObj::MssCFGenIteratorObj(
		MssCFEngine* engine,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		const std::string& detailClassName )
	: CFGenKbGenIteratorObj( dynamic_cast<ICFGenKbSchemaObj*>( engine ) )
	{
		static const std::string S_ProcName( "constructor-6-arg" );
		static const std::string S_LookupToolSet( "requiredLookupToolSet" );
		static const std::string S_LookupScopeDef( "optionalLookupScopeDef" );
		static const std::string S_LookupGenDef( "requiredLookupGenDef" );
		static const std::string S_LookupDetailClass( "requiredLookupDetailClass" );
		static const std::string S_ToolSet( "toolset" );
		static const std::string S_GenDefClassName( "genDefClassName" );
		static const std::string S_ItemName( "itemName" );
		static const std::string S_DetailClassName( "detailClassName" );
		if( toolset.length() < 1 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 2, S_ToolSet );
		}
		if( genDefClassName.length() < 1 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 4, S_GenDefClassName );
		}
		if( itemName.length() < 1 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 5, S_ItemName );
		}
		if( itemName.length() < 1 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 6, S_DetailClassName );
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
		std::string useDetailClassName = engine->fixGenDefName( detailClassName );
		detailClass = schema->getDefClassTableObj()->readDefClassByNameIdx( useDetailClassName );
#if 0
		// Actually, the detail Class for an Object *is* NULL, because there *is* no generic C++ base class
		if( detailClass == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				6,
				S_LookupDetailClass );
		}
#endif
	}

	MssCFGenIteratorObj::~MssCFGenIteratorObj() {
	}

	std::string MssCFGenIteratorObj::expandBody( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expandBody" );
		static const std::string S_Msg( "Cannot directly expand an iterator" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_Msg );
	}

	cflib::ICFLibAnyObj* MssCFGenIteratorObj::dereference( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "dereference" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	ICFGenKbDefClassObj* MssCFGenIteratorObj::getRequiredLookupDetailDef() const {
		return (requiredLookupDetailDef);
	}

	void MssCFGenIteratorObj::setRequiredLookupDetailDef( ICFGenKbDefClassObj* value ) {
		requiredLookupDetailDef = value;
	}

	std::vector<cflib::ICFLibAnyObj*>* MssCFGenIteratorObj::enumerateDetails( MssCFGenContext* genContext ) {
		const std::string S_ProcName( "enumerateDetails" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	std::string MssCFGenIteratorObj::expandEach( MssCFGenContext* genContext, const std::string& body ) {
		static const std::string S_ProcName( "expandEach" );
		static const std::string S_Body( "body" );
		CFLIB_EXCEPTION_DECLINFO
		std::string subExpansion;
		MssCFGenContext* subContext = NULL;
		std::string subClassName;
		cflib::ICFLibAnyObj* elt = NULL;
		std::vector<cflib::ICFLibAnyObj*>::iterator* e;
		std::vector<cflib::ICFLibAnyObj*>* v = NULL;
		std::string ret( "" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		if( 0 >= body.length() ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				2,
				S_Body );
		}

		//	getDetailList() is used to ensure that the element list is of the proper detail type

		v = getDetailList( genContext );
		if( v == NULL ) {
			static const std::string S_Msg( "getDetailList() returned a null" );
			throw new cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				S_Msg );
		}

		//	Get the attributes of the generation context for creating sub-contexts

		subClassName = getDetailClass()->getRequiredName();

		ICFGenKbGenItemObj* genItem;
		for( auto iterV = v->begin(); iterV != v->end(); iterV++ ) {
			if( *iterV != NULL ) {
				genItem = dynamic_cast<ICFGenKbGenItemObj*>( *iterV );
				if( genItem != NULL ) {
					try {
						subContext = genContext->getGenEngine()->getGenContextFactory()->newGenContext( genContext->getGeneratingBuild(), genContext, subClassName, elt );
						subExpansion = subContext->expandItemBody( genItem );
						genContext->setExpansionIsNull( subContext->isExpansionNull() );
					}
					CFLIB_EXCEPTION_CATCH_FALLTHROUGH

					if( subContext != NULL ) {
						subContext->release();
						subContext = NULL;
					}

					CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

					ret = ret + subExpansion;
				}
				else {
					static const std::string S_Msg( "Only instances of ICFGenKbGenItemObj* are supported" );
					throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
						S_ProcName,
						S_Msg );
				}
			}
		}

		delete v;
		v = NULL;

		return( ret );
	}	

	std::vector<cflib::ICFLibAnyObj*>* MssCFGenIteratorObj::getDetailList( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getDetailList" );
		cflib::ICFLibAnyObj* elt = NULL;
		std::vector<ICFLibAnyObj*>* ret = NULL;
		std::vector<ICFLibAnyObj*>* e = NULL;

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}

		e = enumerateDetails( genContext );
		if( e == NULL ) {
			static const std::string S_Msg( "enumerateDetails() returned a null" );
			throw new cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				S_Msg );
		}

		ret = new std::vector<ICFLibAnyObj*>();

		for( auto iterE = e->begin(); iterE != e->end(); iterE++ ) {
			elt = *iterE;
			if( elt != NULL ) {
				ret->insert( ret->end(), elt );
			}
		}

		delete e;
		e = NULL;

		return( ret );
	}
}

