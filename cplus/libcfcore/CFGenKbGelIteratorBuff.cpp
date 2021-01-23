// Description: C++18 implementation for a GelIterator buffer object.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByBeforeIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByFirstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByEachIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByLastIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByLoneIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorByEmptyIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGelIteratorBuff::GENDEFNAME( "GelIterator" );
	const classcode_t CFGenKbGelIteratorBuff::CLASS_CODE = 0xa917L;
	const std::string CFGenKbGelIteratorBuff::CLASS_NAME( "CFGenKbGelIteratorBuff" );
		const std::string CFGenKbGelIteratorBuff::COLNAME_ITERATORNAME( "IteratorName" );
		const std::string CFGenKbGelIteratorBuff::COLNAME_EXPANDBEFORE( "ExpandBefore" );
		const std::string CFGenKbGelIteratorBuff::COLNAME_EXPANDFIRST( "ExpandFirst" );
		const std::string CFGenKbGelIteratorBuff::COLNAME_EXPANDEACH( "ExpandEach" );
		const std::string CFGenKbGelIteratorBuff::COLNAME_EXPANDLAST( "ExpandLast" );
		const std::string CFGenKbGelIteratorBuff::COLNAME_EXPANDLONE( "ExpandLone" );
		const std::string CFGenKbGelIteratorBuff::COLNAME_EXPANDEMPTY( "ExpandEmpty" );
		const std::string CFGenKbGelIteratorBuff::COLNAME_EXPANDAFTER( "ExpandAfter" );
	const int64_t CFGenKbGelIteratorBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelIteratorBuff::GELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelIteratorBuff::GELINSTID_INIT_VALUE = 0LL;
	const std::string CFGenKbGelIteratorBuff::ITERATORNAME_INIT_VALUE( "" );
	const std::string CFGenKbGelIteratorBuff::EXPANDBEFORE_INIT_VALUE( "" );
	const std::string CFGenKbGelIteratorBuff::EXPANDFIRST_INIT_VALUE( "" );
	const std::string CFGenKbGelIteratorBuff::EXPANDEACH_INIT_VALUE( "" );
	const std::string CFGenKbGelIteratorBuff::EXPANDLAST_INIT_VALUE( "" );
	const std::string CFGenKbGelIteratorBuff::EXPANDLONE_INIT_VALUE( "" );
	const std::string CFGenKbGelIteratorBuff::EXPANDEMPTY_INIT_VALUE( "" );
	const std::string CFGenKbGelIteratorBuff::EXPANDAFTER_INIT_VALUE( "" );
	const int64_t CFGenKbGelIteratorBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelIteratorBuff::GELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelIteratorBuff::GELINSTID_MIN_VALUE = 0LL;
	const std::string::size_type CFGenKbGelIteratorBuff::ITERATORNAME_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelIteratorBuff::EXPANDBEFORE_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelIteratorBuff::EXPANDFIRST_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelIteratorBuff::EXPANDEACH_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelIteratorBuff::EXPANDLAST_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelIteratorBuff::EXPANDLONE_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelIteratorBuff::EXPANDEMPTY_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelIteratorBuff::EXPANDAFTER_MAX_LEN = 127;

	CFGenKbGelIteratorBuff::CFGenKbGelIteratorBuff()
	: CFGenKbGelInstructionBuff()
	{
		requiredIteratorName = new std::string( cfcore::CFGenKbGelIteratorBuff::ITERATORNAME_INIT_VALUE );
		optionalExpandBefore = NULL;
		optionalExpandFirst = NULL;
		requiredExpandEach = new std::string( cfcore::CFGenKbGelIteratorBuff::EXPANDEACH_INIT_VALUE );
		optionalExpandLast = NULL;
		optionalExpandLone = NULL;
		optionalExpandEmpty = NULL;
		optionalExpandAfter = NULL;
	}

	CFGenKbGelIteratorBuff::CFGenKbGelIteratorBuff( const CFGenKbGelIteratorBuff& src )
	: CFGenKbGelInstructionBuff()
	{
		requiredIteratorName = new std::string( cfcore::CFGenKbGelIteratorBuff::ITERATORNAME_INIT_VALUE );
		optionalExpandBefore = NULL;
		optionalExpandFirst = NULL;
		requiredExpandEach = new std::string( cfcore::CFGenKbGelIteratorBuff::EXPANDEACH_INIT_VALUE );
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

	CFGenKbGelIteratorBuff::~CFGenKbGelIteratorBuff() {
		if( requiredIteratorName != NULL ) {
			delete requiredIteratorName;
			requiredIteratorName = NULL;
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

	cflib::ICFLibCloneableObj* CFGenKbGelIteratorBuff::clone() {
		CFGenKbGelIteratorBuff* copy = new CFGenKbGelIteratorBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGelIteratorBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelIteratorBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelIteratorBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfcore::CFGenKbGelInstructionBuff::implementsClassCode( argClassCode ) );
		}
	}

	const std::string& CFGenKbGelIteratorBuff::getRequiredIteratorName() const {
		return( *requiredIteratorName );
	}

	const std::string* CFGenKbGelIteratorBuff::getRequiredIteratorNameReference() const {
		return( requiredIteratorName );
	}

	void CFGenKbGelIteratorBuff::setRequiredIteratorName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredIteratorName" );
		if( value.length() > CFGenKbGelIteratorBuff::ITERATORNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::ITERATORNAME_MAX_LEN );
		}
		if( requiredIteratorName != NULL ) {
			delete requiredIteratorName;
			requiredIteratorName = NULL;
		}
		requiredIteratorName = new std::string( value );
	}

	const bool CFGenKbGelIteratorBuff::isOptionalExpandBeforeNull() const {
		return( optionalExpandBefore == NULL );
	}

	const std::string& CFGenKbGelIteratorBuff::getOptionalExpandBeforeValue() const {
		static const std::string S_ProcName( "getOptionalExpandBeforeValue" );
		if( optionalExpandBefore == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandBefore );
	}

	const std::string* CFGenKbGelIteratorBuff::getOptionalExpandBeforeReference() const {
		return( optionalExpandBefore );
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandBeforeNull() {
		if( optionalExpandBefore != NULL ) {
			delete optionalExpandBefore;
			optionalExpandBefore = NULL;
		}
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandBeforeValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandBeforeValue" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDBEFORE_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDBEFORE_MAX_LEN );
		}
		if( optionalExpandBefore != NULL ) {
			delete optionalExpandBefore;
			optionalExpandBefore = NULL;
		}
		optionalExpandBefore = new std::string( value );
	}

	const bool CFGenKbGelIteratorBuff::isOptionalExpandFirstNull() const {
		return( optionalExpandFirst == NULL );
	}

	const std::string& CFGenKbGelIteratorBuff::getOptionalExpandFirstValue() const {
		static const std::string S_ProcName( "getOptionalExpandFirstValue" );
		if( optionalExpandFirst == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandFirst );
	}

	const std::string* CFGenKbGelIteratorBuff::getOptionalExpandFirstReference() const {
		return( optionalExpandFirst );
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandFirstNull() {
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandFirstValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandFirstValue" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDFIRST_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDFIRST_MAX_LEN );
		}
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
		optionalExpandFirst = new std::string( value );
	}

	const std::string& CFGenKbGelIteratorBuff::getRequiredExpandEach() const {
		return( *requiredExpandEach );
	}

	const std::string* CFGenKbGelIteratorBuff::getRequiredExpandEachReference() const {
		return( requiredExpandEach );
	}

	void CFGenKbGelIteratorBuff::setRequiredExpandEach( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredExpandEach" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDEACH_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDEACH_MAX_LEN );
		}
		if( requiredExpandEach != NULL ) {
			delete requiredExpandEach;
			requiredExpandEach = NULL;
		}
		requiredExpandEach = new std::string( value );
	}

	const bool CFGenKbGelIteratorBuff::isOptionalExpandLastNull() const {
		return( optionalExpandLast == NULL );
	}

	const std::string& CFGenKbGelIteratorBuff::getOptionalExpandLastValue() const {
		static const std::string S_ProcName( "getOptionalExpandLastValue" );
		if( optionalExpandLast == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandLast );
	}

	const std::string* CFGenKbGelIteratorBuff::getOptionalExpandLastReference() const {
		return( optionalExpandLast );
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandLastNull() {
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandLastValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandLastValue" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDLAST_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDLAST_MAX_LEN );
		}
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
		optionalExpandLast = new std::string( value );
	}

	const bool CFGenKbGelIteratorBuff::isOptionalExpandLoneNull() const {
		return( optionalExpandLone == NULL );
	}

	const std::string& CFGenKbGelIteratorBuff::getOptionalExpandLoneValue() const {
		static const std::string S_ProcName( "getOptionalExpandLoneValue" );
		if( optionalExpandLone == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandLone );
	}

	const std::string* CFGenKbGelIteratorBuff::getOptionalExpandLoneReference() const {
		return( optionalExpandLone );
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandLoneNull() {
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandLoneValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandLoneValue" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDLONE_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDLONE_MAX_LEN );
		}
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
		optionalExpandLone = new std::string( value );
	}

	const bool CFGenKbGelIteratorBuff::isOptionalExpandEmptyNull() const {
		return( optionalExpandEmpty == NULL );
	}

	const std::string& CFGenKbGelIteratorBuff::getOptionalExpandEmptyValue() const {
		static const std::string S_ProcName( "getOptionalExpandEmptyValue" );
		if( optionalExpandEmpty == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandEmpty );
	}

	const std::string* CFGenKbGelIteratorBuff::getOptionalExpandEmptyReference() const {
		return( optionalExpandEmpty );
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandEmptyNull() {
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandEmptyValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandEmptyValue" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDEMPTY_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDEMPTY_MAX_LEN );
		}
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
		optionalExpandEmpty = new std::string( value );
	}

	const bool CFGenKbGelIteratorBuff::isOptionalExpandAfterNull() const {
		return( optionalExpandAfter == NULL );
	}

	const std::string& CFGenKbGelIteratorBuff::getOptionalExpandAfterValue() const {
		static const std::string S_ProcName( "getOptionalExpandAfterValue" );
		if( optionalExpandAfter == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandAfter );
	}

	const std::string* CFGenKbGelIteratorBuff::getOptionalExpandAfterReference() const {
		return( optionalExpandAfter );
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandAfterNull() {
		if( optionalExpandAfter != NULL ) {
			delete optionalExpandAfter;
			optionalExpandAfter = NULL;
		}
	}

	void CFGenKbGelIteratorBuff::setOptionalExpandAfterValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandAfterValue" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDAFTER_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDAFTER_MAX_LEN );
		}
		if( optionalExpandAfter != NULL ) {
			delete optionalExpandAfter;
			optionalExpandAfter = NULL;
		}
		optionalExpandAfter = new std::string( value );
	}

	size_t CFGenKbGelIteratorBuff::hashCode() const {
		size_t hashCode = CFGenKbGelInstructionBuff::hashCode();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredIteratorName() );
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

	CFGenKbGelIteratorBuff CFGenKbGelIteratorBuff::operator =( cfcore::CFGenKbGelIteratorBuff& src ) {
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

	bool CFGenKbGelIteratorBuff::operator <( const CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelIteratorBuff::operator <( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <=( const CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <=( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <=( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelIteratorBuff::operator <=( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <=( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <=( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator <=( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator ==( const CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator ==( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator ==( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelIteratorBuff::operator ==( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator ==( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator ==( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator ==( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator ==( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator !=( const CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator !=( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator !=( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelIteratorBuff::operator !=( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator !=( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator !=( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator !=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator !=( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >=( const CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >=( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >=( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelIteratorBuff::operator >=( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >=( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >=( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >=( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >( const CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >( const CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelIteratorBuff::operator >( const CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelIteratorBuff::operator >( const CFGenKbGelIteratorBuff& rhs ) {
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

	std::string CFGenKbGelIteratorBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelIteratorBuff" );
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

	bool operator <(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() != rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByBeforeIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEachIdxKey& rhs ) {
		if( lhs.getRequiredExpandEach() < rhs.getRequiredExpandEach() ) {
			return( false );
		}
		else if( lhs.getRequiredExpandEach() > rhs.getRequiredExpandEach() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLastIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorBuff& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

