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

#include <msscf/MssCFGenTruncObj.hpp>
#include <msscf/MssCFGenContext.hpp>
#include <msscf/MssCFEngine.hpp>

namespace cfcore {

	const std::string MssCFGenTruncObj::CLASS_NAME( "MssCFGenTruncObj" );
	const std::string MssCFGenTruncObj::S_BodyBin( "bodyBin" );
	const std::string MssCFGenTruncObj::S_GenContext( "genContext" );

	MssCFGenTruncObj::MssCFGenTruncObj()
	: CFGenKbGenTruncObj()
	{
	}

	MssCFGenTruncObj::MssCFGenTruncObj( MssCFEngine* schema )
	: CFGenKbGenTruncObj( schema )
	{
	}

	MssCFGenTruncObj::~MssCFGenTruncObj() {
	}

	std::string MssCFGenTruncObj::getBody( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getBody" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		ICFGenKbGelInstructionObj* bodyBin = CFGenKbGenTruncObj::getBodyBin( genContext->getGenEngine()->getGelCompiler(), this );
		if( bodyBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_BodyBin );
		}
		std::string body = bodyBin->expand( genContext );
		if( genContext->isExpansionNull() ) {
			body = "$" + bodyBin->getRequiredSourceText() + "$";
		}
		genContext->clearExpansionIsNull();
		return( body );
	}

	std::string MssCFGenTruncObj::expandBody( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expandBody" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		ICFGenKbGelInstructionObj* bodyBin = CFGenKbGenTruncObj::getBodyBin( genContext->getGenEngine()->getGelCompiler(), this);
		if( bodyBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_BodyBin );
		}
		std::string ret = bodyBin->expand( genContext );
		if( ! genContext->isExpansionNull() ) {
			if( ret.length() > getRequiredTruncateAt() ) {
				ret = ret.substr( 0, getRequiredTruncateAt() );
			}
		}
		else {
			ret = "$" + bodyBin->getRequiredSourceText() + "$";
		}
		genContext->clearExpansionIsNull();
		return( ret );
	}
}

