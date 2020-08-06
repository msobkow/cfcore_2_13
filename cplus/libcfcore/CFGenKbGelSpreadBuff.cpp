// Description: C++18 implementation for a GelSpread buffer object.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByBetweenIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByBeforeIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByFirstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByEachIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByLastIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByLoneIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadByEmptyIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGelSpreadBuff::GENDEFNAME( "GelSpread" );
	const classcode_t CFGenKbGelSpreadBuff::CLASS_CODE = 0xa918L;
	const std::string CFGenKbGelSpreadBuff::CLASS_NAME( "CFGenKbGelSpreadBuff" );
		const std::string CFGenKbGelSpreadBuff::COLNAME_ITERATORNAME( "IteratorName" );
		const std::string CFGenKbGelSpreadBuff::COLNAME_EXPANDBETWEEN( "ExpandBetween" );
		const std::string CFGenKbGelSpreadBuff::COLNAME_EXPANDBEFORE( "ExpandBefore" );
		const std::string CFGenKbGelSpreadBuff::COLNAME_EXPANDFIRST( "ExpandFirst" );
		const std::string CFGenKbGelSpreadBuff::COLNAME_EXPANDEACH( "ExpandEach" );
		const std::string CFGenKbGelSpreadBuff::COLNAME_EXPANDLAST( "ExpandLast" );
		const std::string CFGenKbGelSpreadBuff::COLNAME_EXPANDLONE( "ExpandLone" );
		const std::string CFGenKbGelSpreadBuff::COLNAME_EXPANDEMPTY( "ExpandEmpty" );
		const std::string CFGenKbGelSpreadBuff::COLNAME_EXPANDAFTER( "ExpandAfter" );
	const int64_t CFGenKbGelSpreadBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSpreadBuff::GELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSpreadBuff::GELINSTID_INIT_VALUE = 0LL;
	const std::string CFGenKbGelSpreadBuff::ITERATORNAME_INIT_VALUE( "" );
	const std::string CFGenKbGelSpreadBuff::EXPANDBETWEEN_INIT_VALUE( "" );
	const std::string CFGenKbGelSpreadBuff::EXPANDBEFORE_INIT_VALUE( "" );
	const std::string CFGenKbGelSpreadBuff::EXPANDFIRST_INIT_VALUE( "" );
	const std::string CFGenKbGelSpreadBuff::EXPANDEACH_INIT_VALUE( "" );
	const std::string CFGenKbGelSpreadBuff::EXPANDLAST_INIT_VALUE( "" );
	const std::string CFGenKbGelSpreadBuff::EXPANDLONE_INIT_VALUE( "" );
	const std::string CFGenKbGelSpreadBuff::EXPANDEMPTY_INIT_VALUE( "" );
	const std::string CFGenKbGelSpreadBuff::EXPANDAFTER_INIT_VALUE( "" );
	const int64_t CFGenKbGelSpreadBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSpreadBuff::GELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSpreadBuff::GELINSTID_MIN_VALUE = 0LL;
	const std::string::size_type CFGenKbGelSpreadBuff::ITERATORNAME_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSpreadBuff::EXPANDBETWEEN_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSpreadBuff::EXPANDBEFORE_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSpreadBuff::EXPANDFIRST_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSpreadBuff::EXPANDEACH_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSpreadBuff::EXPANDLAST_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSpreadBuff::EXPANDLONE_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSpreadBuff::EXPANDEMPTY_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSpreadBuff::EXPANDAFTER_MAX_LEN = 127;

	CFGenKbGelSpreadBuff::CFGenKbGelSpreadBuff()
	: CFGenKbGelInstructionBuff()
	{
		requiredIteratorName = new std::string( cfcore::CFGenKbGelSpreadBuff::ITERATORNAME_INIT_VALUE );
		optionalExpandBetween = NULL;
		optionalExpandBefore = NULL;
		optionalExpandFirst = NULL;
		requiredExpandEach = new std::string( cfcore::CFGenKbGelSpreadBuff::EXPANDEACH_INIT_VALUE );
		optionalExpandLast = NULL;
		optionalExpandLone = NULL;
		optionalExpandEmpty = NULL;
		optionalExpandAfter = NULL;
	}

	CFGenKbGelSpreadBuff::CFGenKbGelSpreadBuff( const CFGenKbGelSpreadBuff& src )
	: CFGenKbGelInstructionBuff()
	{
		requiredIteratorName = new std::string( cfcore::CFGenKbGelSpreadBuff::ITERATORNAME_INIT_VALUE );
		optionalExpandBetween = NULL;
		optionalExpandBefore = NULL;
		optionalExpandFirst = NULL;
		requiredExpandEach = new std::string( cfcore::CFGenKbGelSpreadBuff::EXPANDEACH_INIT_VALUE );
		optionalExpandLast = NULL;
		optionalExpandLone = NULL;
		optionalExpandEmpty = NULL;
		optionalExpandAfter = NULL;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredGelInstId( src.getRequiredGelInstId() );
		setRequiredRevision( src.getRequiredRevision() );
		if( src.isOptionalChainInstTenantIdNull() ) {
			setOptionalChainInstTenantIdNull();
		}
		else {
			setOptionalChainInstTenantIdValue( src.getOptionalChainInstTenantIdValue() );
		}
		if( src.isOptionalChainInstGelCacheIdNull() ) {
			setOptionalChainInstGelCacheIdNull();
		}
		else {
			setOptionalChainInstGelCacheIdValue( src.getOptionalChainInstGelCacheIdValue() );
		}
		if( src.isOptionalChainInstGelInstIdNull() ) {
			setOptionalChainInstGelInstIdNull();
		}
		else {
			setOptionalChainInstGelInstIdValue( src.getOptionalChainInstGelInstIdValue() );
		}
		setRequiredSourceText( src.getRequiredSourceText() );
		setRequiredIteratorName( src.getRequiredIteratorName() );
		if( src.isOptionalExpandBetweenNull() ) {
			setOptionalExpandBetweenNull();
		}
		else {
			setOptionalExpandBetweenValue( src.getOptionalExpandBetweenValue() );
		}
		if( src.isOptionalExpandBeforeNull() ) {
			setOptionalExpandBeforeNull();
		}
		else {
			setOptionalExpandBeforeValue( src.getOptionalExpandBeforeValue() );
		}
		if( src.isOptionalExpandFirstNull() ) {
			setOptionalExpandFirstNull();
		}
		else {
			setOptionalExpandFirstValue( src.getOptionalExpandFirstValue() );
		}
		setRequiredExpandEach( src.getRequiredExpandEach() );
		if( src.isOptionalExpandLastNull() ) {
			setOptionalExpandLastNull();
		}
		else {
			setOptionalExpandLastValue( src.getOptionalExpandLastValue() );
		}
		if( src.isOptionalExpandLoneNull() ) {
			setOptionalExpandLoneNull();
		}
		else {
			setOptionalExpandLoneValue( src.getOptionalExpandLoneValue() );
		}
		if( src.isOptionalExpandEmptyNull() ) {
			setOptionalExpandEmptyNull();
		}
		else {
			setOptionalExpandEmptyValue( src.getOptionalExpandEmptyValue() );
		}
		if( src.isOptionalExpandAfterNull() ) {
			setOptionalExpandAfterNull();
		}
		else {
			setOptionalExpandAfterValue( src.getOptionalExpandAfterValue() );
		}
	}

	CFGenKbGelSpreadBuff::~CFGenKbGelSpreadBuff() {
		if( requiredIteratorName != NULL ) {
			delete requiredIteratorName;
			requiredIteratorName = NULL;
		}
		if( optionalExpandBetween != NULL ) {
			delete optionalExpandBetween;
			optionalExpandBetween = NULL;
		}
		if( optionalExpandBefore != NULL ) {
			delete optionalExpandBefore;
			optionalExpandBefore = NULL;
		}
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
		if( requiredExpandEach != NULL ) {
			delete requiredExpandEach;
			requiredExpandEach = NULL;
		}
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
		if( optionalExpandAfter != NULL ) {
			delete optionalExpandAfter;
			optionalExpandAfter = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbGelSpreadBuff::clone() {
		CFGenKbGelSpreadBuff* copy = new CFGenKbGelSpreadBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGelSpreadBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSpreadBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelSpreadBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfcore::CFGenKbGelInstructionBuff::implementsClassCode( argClassCode ) );
		}
	}

	const std::string& CFGenKbGelSpreadBuff::getRequiredIteratorName() const {
		return( *requiredIteratorName );
	}

	const std::string* CFGenKbGelSpreadBuff::getRequiredIteratorNameReference() const {
		return( requiredIteratorName );
	}

	void CFGenKbGelSpreadBuff::setRequiredIteratorName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredIteratorName" );
		if( value.length() > CFGenKbGelSpreadBuff::ITERATORNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::ITERATORNAME_MAX_LEN );
		}
		if( requiredIteratorName != NULL ) {
			delete requiredIteratorName;
			requiredIteratorName = NULL;
		}
		requiredIteratorName = new std::string( value );
	}

	const bool CFGenKbGelSpreadBuff::isOptionalExpandBetweenNull() const {
		return( optionalExpandBetween == NULL );
	}

	const std::string& CFGenKbGelSpreadBuff::getOptionalExpandBetweenValue() const {
		static const std::string S_ProcName( "getOptionalExpandBetweenValue" );
		if( optionalExpandBetween == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandBetween );
	}

	const std::string* CFGenKbGelSpreadBuff::getOptionalExpandBetweenReference() const {
		return( optionalExpandBetween );
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandBetweenNull() {
		if( optionalExpandBetween != NULL ) {
			delete optionalExpandBetween;
			optionalExpandBetween = NULL;
		}
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandBetweenValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandBetweenValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDBETWEEN_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDBETWEEN_MAX_LEN );
		}
		if( optionalExpandBetween != NULL ) {
			delete optionalExpandBetween;
			optionalExpandBetween = NULL;
		}
		optionalExpandBetween = new std::string( value );
	}

	const bool CFGenKbGelSpreadBuff::isOptionalExpandBeforeNull() const {
		return( optionalExpandBefore == NULL );
	}

	const std::string& CFGenKbGelSpreadBuff::getOptionalExpandBeforeValue() const {
		static const std::string S_ProcName( "getOptionalExpandBeforeValue" );
		if( optionalExpandBefore == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandBefore );
	}

	const std::string* CFGenKbGelSpreadBuff::getOptionalExpandBeforeReference() const {
		return( optionalExpandBefore );
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandBeforeNull() {
		if( optionalExpandBefore != NULL ) {
			delete optionalExpandBefore;
			optionalExpandBefore = NULL;
		}
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandBeforeValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandBeforeValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDBEFORE_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDBEFORE_MAX_LEN );
		}
		if( optionalExpandBefore != NULL ) {
			delete optionalExpandBefore;
			optionalExpandBefore = NULL;
		}
		optionalExpandBefore = new std::string( value );
	}

	const bool CFGenKbGelSpreadBuff::isOptionalExpandFirstNull() const {
		return( optionalExpandFirst == NULL );
	}

	const std::string& CFGenKbGelSpreadBuff::getOptionalExpandFirstValue() const {
		static const std::string S_ProcName( "getOptionalExpandFirstValue" );
		if( optionalExpandFirst == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandFirst );
	}

	const std::string* CFGenKbGelSpreadBuff::getOptionalExpandFirstReference() const {
		return( optionalExpandFirst );
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandFirstNull() {
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandFirstValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandFirstValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDFIRST_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDFIRST_MAX_LEN );
		}
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
		optionalExpandFirst = new std::string( value );
	}

	const std::string& CFGenKbGelSpreadBuff::getRequiredExpandEach() const {
		return( *requiredExpandEach );
	}

	const std::string* CFGenKbGelSpreadBuff::getRequiredExpandEachReference() const {
		return( requiredExpandEach );
	}

	void CFGenKbGelSpreadBuff::setRequiredExpandEach( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredExpandEach" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDEACH_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDEACH_MAX_LEN );
		}
		if( requiredExpandEach != NULL ) {
			delete requiredExpandEach;
			requiredExpandEach = NULL;
		}
		requiredExpandEach = new std::string( value );
	}

	const bool CFGenKbGelSpreadBuff::isOptionalExpandLastNull() const {
		return( optionalExpandLast == NULL );
	}

	const std::string& CFGenKbGelSpreadBuff::getOptionalExpandLastValue() const {
		static const std::string S_ProcName( "getOptionalExpandLastValue" );
		if( optionalExpandLast == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandLast );
	}

	const std::string* CFGenKbGelSpreadBuff::getOptionalExpandLastReference() const {
		return( optionalExpandLast );
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandLastNull() {
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandLastValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandLastValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDLAST_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDLAST_MAX_LEN );
		}
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
		optionalExpandLast = new std::string( value );
	}

	const bool CFGenKbGelSpreadBuff::isOptionalExpandLoneNull() const {
		return( optionalExpandLone == NULL );
	}

	const std::string& CFGenKbGelSpreadBuff::getOptionalExpandLoneValue() const {
		static const std::string S_ProcName( "getOptionalExpandLoneValue" );
		if( optionalExpandLone == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandLone );
	}

	const std::string* CFGenKbGelSpreadBuff::getOptionalExpandLoneReference() const {
		return( optionalExpandLone );
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandLoneNull() {
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandLoneValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandLoneValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDLONE_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDLONE_MAX_LEN );
		}
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
		optionalExpandLone = new std::string( value );
	}

	const bool CFGenKbGelSpreadBuff::isOptionalExpandEmptyNull() const {
		return( optionalExpandEmpty == NULL );
	}

	const std::string& CFGenKbGelSpreadBuff::getOptionalExpandEmptyValue() const {
		static const std::string S_ProcName( "getOptionalExpandEmptyValue" );
		if( optionalExpandEmpty == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandEmpty );
	}

	const std::string* CFGenKbGelSpreadBuff::getOptionalExpandEmptyReference() const {
		return( optionalExpandEmpty );
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandEmptyNull() {
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandEmptyValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandEmptyValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDEMPTY_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDEMPTY_MAX_LEN );
		}
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
		optionalExpandEmpty = new std::string( value );
	}

	const bool CFGenKbGelSpreadBuff::isOptionalExpandAfterNull() const {
		return( optionalExpandAfter == NULL );
	}

	const std::string& CFGenKbGelSpreadBuff::getOptionalExpandAfterValue() const {
		static const std::string S_ProcName( "getOptionalExpandAfterValue" );
		if( optionalExpandAfter == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandAfter );
	}

	const std::string* CFGenKbGelSpreadBuff::getOptionalExpandAfterReference() const {
		return( optionalExpandAfter );
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandAfterNull() {
		if( optionalExpandAfter != NULL ) {
			delete optionalExpandAfter;
			optionalExpandAfter = NULL;
		}
	}

	void CFGenKbGelSpreadBuff::setOptionalExpandAfterValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandAfterValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDAFTER_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDAFTER_MAX_LEN );
		}
		if( optionalExpandAfter != NULL ) {
			delete optionalExpandAfter;
			optionalExpandAfter = NULL;
		}
		optionalExpandAfter = new std::string( value );
	}

	size_t CFGenKbGelSpreadBuff::hashCode() const {
		size_t hashCode = CFGenKbGelInstructionBuff::hashCode();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredIteratorName() );
		if( ! isOptionalExpandBetweenNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandBetweenValue() );
		}
		if( ! isOptionalExpandBeforeNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandBeforeValue() );
		}
		if( ! isOptionalExpandFirstNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandFirstValue() );
		}
		hashCode = hashCode + cflib::CFLib::hash( getRequiredExpandEach() );
		if( ! isOptionalExpandLastNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandLastValue() );
		}
		if( ! isOptionalExpandLoneNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandLoneValue() );
		}
		if( ! isOptionalExpandEmptyNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandEmptyValue() );
		}
		if( ! isOptionalExpandAfterNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandAfterValue() );
		}
		return( hashCode );
	}

	CFGenKbGelSpreadBuff CFGenKbGelSpreadBuff::operator =( cfcore::CFGenKbGelSpreadBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredGelInstId( src.getRequiredGelInstId() );
		setRequiredRevision( src.getRequiredRevision() );
		if( src.isOptionalChainInstTenantIdNull() ) {
			setOptionalChainInstTenantIdNull();
		}
		else {
			setOptionalChainInstTenantIdValue( src.getOptionalChainInstTenantIdValue() );
		}
		if( src.isOptionalChainInstGelCacheIdNull() ) {
			setOptionalChainInstGelCacheIdNull();
		}
		else {
			setOptionalChainInstGelCacheIdValue( src.getOptionalChainInstGelCacheIdValue() );
		}
		if( src.isOptionalChainInstGelInstIdNull() ) {
			setOptionalChainInstGelInstIdNull();
		}
		else {
			setOptionalChainInstGelInstIdValue( src.getOptionalChainInstGelInstIdValue() );
		}
		setRequiredSourceText( src.getRequiredSourceText() );
		setRequiredIteratorName( src.getRequiredIteratorName() );
		if( src.isOptionalExpandBetweenNull() ) {
			setOptionalExpandBetweenNull();
		}
		else {
			setOptionalExpandBetweenValue( src.getOptionalExpandBetweenValue() );
		}
		if( src.isOptionalExpandBeforeNull() ) {
			setOptionalExpandBeforeNull();
		}
		else {
			setOptionalExpandBeforeValue( src.getOptionalExpandBeforeValue() );
		}
		if( src.isOptionalExpandFirstNull() ) {
			setOptionalExpandFirstNull();
		}
		else {
			setOptionalExpandFirstValue( src.getOptionalExpandFirstValue() );
		}
		setRequiredExpandEach( src.getRequiredExpandEach() );
		if( src.isOptionalExpandLastNull() ) {
			setOptionalExpandLastNull();
		}
		else {
			setOptionalExpandLastValue( src.getOptionalExpandLastValue() );
		}
		if( src.isOptionalExpandLoneNull() ) {
			setOptionalExpandLoneNull();
		}
		else {
			setOptionalExpandLoneValue( src.getOptionalExpandLoneValue() );
		}
		if( src.isOptionalExpandEmptyNull() ) {
			setOptionalExpandEmptyNull();
		}
		else {
			setOptionalExpandEmptyValue( src.getOptionalExpandEmptyValue() );
		}
		if( src.isOptionalExpandAfterNull() ) {
			setOptionalExpandAfterNull();
		}
		else {
			setOptionalExpandAfterValue( src.getOptionalExpandAfterValue() );
		}
		return( *this );
	}

	bool CFGenKbGelSpreadBuff::operator <( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator <( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator <( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator <( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator <( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator <( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator <( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator <( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator <( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( getRequiredIteratorName() > rhs.getRequiredIteratorName() ) {
			return( false );
		}
		else if( getRequiredIteratorName() < rhs.getRequiredIteratorName() ) {
			return( true );
		}
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandAfterNull() ) {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( false );
			}
			if( getOptionalExpandAfterValue() > rhs.getOptionalExpandAfterValue() ) {
				return( false );
			}
			else if( getOptionalExpandAfterValue() < rhs.getOptionalExpandAfterValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator <=( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator <=( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator <=( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator <=( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator <=( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator <=( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator <=( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator <=( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator <=( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( getRequiredIteratorName() > rhs.getRequiredIteratorName() ) {
			return( false );
		}
		else if( getRequiredIteratorName() < rhs.getRequiredIteratorName() ) {
			return( true );
		}
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandAfterNull() ) {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( false );
			}
			if( getOptionalExpandAfterValue() > rhs.getOptionalExpandAfterValue() ) {
				return( false );
			}
			else if( getOptionalExpandAfterValue() < rhs.getOptionalExpandAfterValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator ==( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				if( getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator ==( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				if( getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator ==( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				if( getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator ==( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator ==( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator ==( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator ==( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				if( getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator ==( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator ==( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				if( getOptionalChainInstTenantIdValue() != rhs.getOptionalChainInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				if( getOptionalChainInstGelCacheIdValue() != rhs.getOptionalChainInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				if( getOptionalChainInstGelInstIdValue() != rhs.getOptionalChainInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( getRequiredSourceText() != rhs.getRequiredSourceText() ) {
			return( false );
		}
		if( getRequiredIteratorName() != rhs.getRequiredIteratorName() ) {
			return( false );
		}
		if( ! isOptionalExpandBetweenNull() ) {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				if( getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpandBeforeNull() ) {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				if( getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpandFirstNull() ) {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				if( getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		if( ! isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpandEmptyNull() ) {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				if( getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpandAfterNull() ) {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				if( getOptionalExpandAfterValue() != rhs.getOptionalExpandAfterValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator !=( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator !=( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator !=( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator !=( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator !=( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator !=( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator !=( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator !=( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator !=( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstTenantIdValue() != rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelCacheIdValue() != rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelInstIdValue() != rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSourceText() != rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( getRequiredIteratorName() != rhs.getRequiredIteratorName() ) {
			return( true );
		}
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpandAfterNull() ) {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
			if( getOptionalExpandAfterValue() != rhs.getOptionalExpandAfterValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator >=( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator >=( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator >=( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator >=( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator >=( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator >=( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator >=( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator >=( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator >=( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( getRequiredIteratorName() < rhs.getRequiredIteratorName() ) {
			return( false );
		}
		else if( getRequiredIteratorName() > rhs.getRequiredIteratorName() ) {
			return( true );
		}
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpandAfterNull() ) {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
			if( getOptionalExpandAfterValue() < rhs.getOptionalExpandAfterValue() ) {
				return( false );
			}
			else if( getOptionalExpandAfterValue() > rhs.getOptionalExpandAfterValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadBuff::operator >( const CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator >( const CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator >( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator >( const CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator >( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator >( const CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator >( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator >( const CFGenKbGelInstructionPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSpreadBuff::operator >( const CFGenKbGelSpreadBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( getRequiredIteratorName() < rhs.getRequiredIteratorName() ) {
			return( false );
		}
		else if( getRequiredIteratorName() > rhs.getRequiredIteratorName() ) {
			return( true );
		}
		if( ! isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpandAfterNull() ) {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
			if( getOptionalExpandAfterValue() < rhs.getOptionalExpandAfterValue() ) {
				return( false );
			}
			else if( getOptionalExpandAfterValue() > rhs.getOptionalExpandAfterValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbGelSpreadBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSpreadBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_IteratorName( "IteratorName" );
		static const std::string S_ExpandBetween( "ExpandBetween" );
		static const std::string S_ExpandBefore( "ExpandBefore" );
		static const std::string S_ExpandFirst( "ExpandFirst" );
		static const std::string S_ExpandEach( "ExpandEach" );
		static const std::string S_ExpandLast( "ExpandLast" );
		static const std::string S_ExpandLone( "ExpandLone" );
		static const std::string S_ExpandEmpty( "ExpandEmpty" );
		static const std::string S_ExpandAfter( "ExpandAfter" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelInstId, getRequiredGelInstId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		if( ! isOptionalChainInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstTenantId, getOptionalChainInstTenantIdValue() ) );
		}
		if( ! isOptionalChainInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstGelCacheId, getOptionalChainInstGelCacheIdValue() ) );
		}
		if( ! isOptionalChainInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstGelInstId, getOptionalChainInstGelInstIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SourceText, getRequiredSourceText() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_IteratorName, getRequiredIteratorName() ) );
		if( ! isOptionalExpandBetweenNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandBetween, getOptionalExpandBetweenValue() ) );
		}
		if( ! isOptionalExpandBeforeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandBefore, getOptionalExpandBeforeValue() ) );
		}
		if( ! isOptionalExpandFirstNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandFirst, getOptionalExpandFirstValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEach, getRequiredExpandEach() ) );
		if( ! isOptionalExpandLastNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLast, getOptionalExpandLastValue() ) );
		}
		if( ! isOptionalExpandLoneNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLone, getOptionalExpandLoneValue() ) );
		}
		if( ! isOptionalExpandEmptyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEmpty, getOptionalExpandEmptyValue() ) );
		}
		if( ! isOptionalExpandAfterNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandAfter, getOptionalExpandAfterValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( lhs.getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( lhs.getRequiredIteratorName() > rhs.getRequiredIteratorName() ) {
			return( false );
		}
		else if( lhs.getRequiredIteratorName() < rhs.getRequiredIteratorName() ) {
			return( true );
		}
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandAfterNull() ) {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandAfterValue() > rhs.getOptionalExpandAfterValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandAfterValue() < rhs.getOptionalExpandAfterValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( lhs.getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( lhs.getRequiredIteratorName() > rhs.getRequiredIteratorName() ) {
			return( false );
		}
		else if( lhs.getRequiredIteratorName() < rhs.getRequiredIteratorName() ) {
			return( true );
		}
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandAfterNull() ) {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandAfterValue() > rhs.getOptionalExpandAfterValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandAfterValue() < rhs.getOptionalExpandAfterValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				if( lhs.getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				if( lhs.getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				if( lhs.getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				if( lhs.getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				if( lhs.getOptionalChainInstTenantIdValue() != rhs.getOptionalChainInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				if( lhs.getOptionalChainInstGelCacheIdValue() != rhs.getOptionalChainInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				if( lhs.getOptionalChainInstGelInstIdValue() != rhs.getOptionalChainInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSourceText() != rhs.getRequiredSourceText() ) {
			return( false );
		}
		if( lhs.getRequiredIteratorName() != rhs.getRequiredIteratorName() ) {
			return( false );
		}
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				if( lhs.getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				if( lhs.getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				if( lhs.getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				if( lhs.getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandAfterNull() ) {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				if( lhs.getOptionalExpandAfterValue() != rhs.getOptionalExpandAfterValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstTenantIdValue() != rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelCacheIdValue() != rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelInstIdValue() != rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSourceText() != rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( lhs.getRequiredIteratorName() != rhs.getRequiredIteratorName() ) {
			return( true );
		}
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() != rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() != rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpandAfterNull() ) {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandAfterValue() != rhs.getOptionalExpandAfterValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( lhs.getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( lhs.getRequiredIteratorName() < rhs.getRequiredIteratorName() ) {
			return( false );
		}
		else if( lhs.getRequiredIteratorName() > rhs.getRequiredIteratorName() ) {
			return( true );
		}
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandAfterNull() ) {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandAfterValue() < rhs.getOptionalExpandAfterValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandAfterValue() > rhs.getOptionalExpandAfterValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( ! lhs.isOptionalChainInstTenantIdNull() ) {
			if( rhs.isOptionalChainInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstTenantIdValue() < rhs.getOptionalChainInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstTenantIdValue() > rhs.getOptionalChainInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelCacheIdNull() ) {
			if( rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelCacheIdValue() < rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelCacheIdValue() > rhs.getOptionalChainInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalChainInstGelInstIdNull() ) {
			if( rhs.isOptionalChainInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalChainInstGelInstIdValue() < rhs.getOptionalChainInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalChainInstGelInstIdValue() > rhs.getOptionalChainInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalChainInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSourceText() < rhs.getRequiredSourceText() ) {
			return( false );
		}
		else if( lhs.getRequiredSourceText() > rhs.getRequiredSourceText() ) {
			return( true );
		}
		if( lhs.getRequiredIteratorName() < rhs.getRequiredIteratorName() ) {
			return( false );
		}
		else if( lhs.getRequiredIteratorName() > rhs.getRequiredIteratorName() ) {
			return( true );
		}
		if( ! lhs.isOptionalExpandBetweenNull() ) {
			if( rhs.isOptionalExpandBetweenNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBetweenValue() < rhs.getOptionalExpandBetweenValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBetweenValue() > rhs.getOptionalExpandBetweenValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBetweenNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandBeforeNull() ) {
			if( rhs.isOptionalExpandBeforeNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandBeforeValue() < rhs.getOptionalExpandBeforeValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandBeforeValue() > rhs.getOptionalExpandBeforeValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandBeforeNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpandAfterNull() ) {
			if( rhs.isOptionalExpandAfterNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandAfterValue() < rhs.getOptionalExpandAfterValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandAfterValue() > rhs.getOptionalExpandAfterValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandAfterNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

