// Description: C++18 implementation for a GelCall buffer object.

/*
 *	com.github.msobkow.CFCore
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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbGelInstructionByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByGelCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelInstructionByChainIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallByCacheIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallBySeqIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallByCallInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallByPrevInstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelCallByNextInstIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGelCallBuff::GENDEFNAME( "GelCall" );
	const classcode_t CFGenKbGelCallBuff::CLASS_CODE = 0xa91cL;
	const std::string CFGenKbGelCallBuff::CLASS_NAME( "CFGenKbGelCallBuff" );
		const std::string CFGenKbGelCallBuff::COLNAME_SEQINSTTENANTID( "SeqInstTenantId" );
		const std::string CFGenKbGelCallBuff::COLNAME_SEQINSTGELCACHEID( "SeqInstGelCacheId" );
		const std::string CFGenKbGelCallBuff::COLNAME_SEQINSTID( "SeqInstId" );
		const std::string CFGenKbGelCallBuff::COLNAME_CALLINSTTENANTID( "CallInstTenantId" );
		const std::string CFGenKbGelCallBuff::COLNAME_CALLINSTGELCACHEID( "CallInstGelCacheId" );
		const std::string CFGenKbGelCallBuff::COLNAME_CALLINSTID( "CallInstId" );
		const std::string CFGenKbGelCallBuff::COLNAME_PREVINSTTENANTID( "PrevInstTenantId" );
		const std::string CFGenKbGelCallBuff::COLNAME_PREVINSTGELCACHEID( "PrevInstGelCacheId" );
		const std::string CFGenKbGelCallBuff::COLNAME_PREVINSTGELINSTID( "PrevInstGelInstId" );
		const std::string CFGenKbGelCallBuff::COLNAME_NEXTINSTTENANTID( "NextInstTenantId" );
		const std::string CFGenKbGelCallBuff::COLNAME_NEXTINSTGELCACHEID( "NextInstGelCacheId" );
		const std::string CFGenKbGelCallBuff::COLNAME_NEXTINSTGELINSTID( "NextInstGelInstId" );
	const int64_t CFGenKbGelCallBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::GELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::GELINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::SEQINSTTENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::SEQINSTGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::SEQINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::CALLINSTTENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::CALLINSTGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::CALLINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::PREVINSTTENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::PREVINSTGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::PREVINSTGELINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::NEXTINSTTENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::NEXTINSTGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::NEXTINSTGELINSTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::GELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::GELINSTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::SEQINSTTENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::SEQINSTGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::SEQINSTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::CALLINSTTENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::CALLINSTGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::CALLINSTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::PREVINSTTENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::PREVINSTGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::PREVINSTGELINSTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::NEXTINSTTENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::NEXTINSTGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelCallBuff::NEXTINSTGELINSTID_MIN_VALUE = 0LL;

	CFGenKbGelCallBuff::CFGenKbGelCallBuff()
	: CFGenKbGelInstructionBuff()
	{
		optionalSeqInstTenantId.setNull();
		optionalSeqInstGelCacheId.setNull();
		optionalSeqInstId.setNull();
		optionalCallInstTenantId.setNull();
		optionalCallInstGelCacheId.setNull();
		optionalCallInstId.setNull();
		optionalPrevInstTenantId.setNull();
		optionalPrevInstGelCacheId.setNull();
		optionalPrevInstGelInstId.setNull();
		optionalNextInstTenantId.setNull();
		optionalNextInstGelCacheId.setNull();
		optionalNextInstGelInstId.setNull();
	}

	CFGenKbGelCallBuff::CFGenKbGelCallBuff( const CFGenKbGelCallBuff& src )
	: CFGenKbGelInstructionBuff()
	{
		optionalSeqInstTenantId.setNull();
		optionalSeqInstGelCacheId.setNull();
		optionalSeqInstId.setNull();
		optionalCallInstTenantId.setNull();
		optionalCallInstGelCacheId.setNull();
		optionalCallInstId.setNull();
		optionalPrevInstTenantId.setNull();
		optionalPrevInstGelCacheId.setNull();
		optionalPrevInstGelInstId.setNull();
		optionalNextInstTenantId.setNull();
		optionalNextInstGelCacheId.setNull();
		optionalNextInstGelInstId.setNull();
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
		if( src.isOptionalSeqInstTenantIdNull() ) {
			setOptionalSeqInstTenantIdNull();
		}
		else {
			setOptionalSeqInstTenantIdValue( src.getOptionalSeqInstTenantIdValue() );
		}
		if( src.isOptionalSeqInstGelCacheIdNull() ) {
			setOptionalSeqInstGelCacheIdNull();
		}
		else {
			setOptionalSeqInstGelCacheIdValue( src.getOptionalSeqInstGelCacheIdValue() );
		}
		if( src.isOptionalSeqInstIdNull() ) {
			setOptionalSeqInstIdNull();
		}
		else {
			setOptionalSeqInstIdValue( src.getOptionalSeqInstIdValue() );
		}
		if( src.isOptionalCallInstTenantIdNull() ) {
			setOptionalCallInstTenantIdNull();
		}
		else {
			setOptionalCallInstTenantIdValue( src.getOptionalCallInstTenantIdValue() );
		}
		if( src.isOptionalCallInstGelCacheIdNull() ) {
			setOptionalCallInstGelCacheIdNull();
		}
		else {
			setOptionalCallInstGelCacheIdValue( src.getOptionalCallInstGelCacheIdValue() );
		}
		if( src.isOptionalCallInstIdNull() ) {
			setOptionalCallInstIdNull();
		}
		else {
			setOptionalCallInstIdValue( src.getOptionalCallInstIdValue() );
		}
		if( src.isOptionalPrevInstTenantIdNull() ) {
			setOptionalPrevInstTenantIdNull();
		}
		else {
			setOptionalPrevInstTenantIdValue( src.getOptionalPrevInstTenantIdValue() );
		}
		if( src.isOptionalPrevInstGelCacheIdNull() ) {
			setOptionalPrevInstGelCacheIdNull();
		}
		else {
			setOptionalPrevInstGelCacheIdValue( src.getOptionalPrevInstGelCacheIdValue() );
		}
		if( src.isOptionalPrevInstGelInstIdNull() ) {
			setOptionalPrevInstGelInstIdNull();
		}
		else {
			setOptionalPrevInstGelInstIdValue( src.getOptionalPrevInstGelInstIdValue() );
		}
		if( src.isOptionalNextInstTenantIdNull() ) {
			setOptionalNextInstTenantIdNull();
		}
		else {
			setOptionalNextInstTenantIdValue( src.getOptionalNextInstTenantIdValue() );
		}
		if( src.isOptionalNextInstGelCacheIdNull() ) {
			setOptionalNextInstGelCacheIdNull();
		}
		else {
			setOptionalNextInstGelCacheIdValue( src.getOptionalNextInstGelCacheIdValue() );
		}
		if( src.isOptionalNextInstGelInstIdNull() ) {
			setOptionalNextInstGelInstIdNull();
		}
		else {
			setOptionalNextInstGelInstIdValue( src.getOptionalNextInstGelInstIdValue() );
		}
	}

	CFGenKbGelCallBuff::~CFGenKbGelCallBuff() {
	}

	cflib::ICFLibCloneableObj* CFGenKbGelCallBuff::clone() {
		CFGenKbGelCallBuff* copy = new CFGenKbGelCallBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGelCallBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelCallBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelCallBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfcore::CFGenKbGelInstructionBuff::implementsClassCode( argClassCode ) );
		}
	}

	const bool CFGenKbGelCallBuff::isOptionalSeqInstTenantIdNull() const {
		return( optionalSeqInstTenantId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalSeqInstTenantIdValue() const {
		return( optionalSeqInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalSeqInstTenantIdReference() const {
		return( optionalSeqInstTenantId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalSeqInstTenantIdNull() {
		optionalSeqInstTenantId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalSeqInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSeqInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::SEQINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::SEQINSTTENANTID_MIN_VALUE );
		}
		optionalSeqInstTenantId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalSeqInstGelCacheIdNull() const {
		return( optionalSeqInstGelCacheId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalSeqInstGelCacheIdValue() const {
		return( optionalSeqInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalSeqInstGelCacheIdReference() const {
		return( optionalSeqInstGelCacheId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalSeqInstGelCacheIdNull() {
		optionalSeqInstGelCacheId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalSeqInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSeqInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::SEQINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::SEQINSTGELCACHEID_MIN_VALUE );
		}
		optionalSeqInstGelCacheId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalSeqInstIdNull() const {
		return( optionalSeqInstId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalSeqInstIdValue() const {
		return( optionalSeqInstId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalSeqInstIdReference() const {
		return( optionalSeqInstId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalSeqInstIdNull() {
		optionalSeqInstId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalSeqInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSeqInstIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::SEQINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::SEQINSTID_MIN_VALUE );
		}
		optionalSeqInstId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalCallInstTenantIdNull() const {
		return( optionalCallInstTenantId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalCallInstTenantIdValue() const {
		return( optionalCallInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalCallInstTenantIdReference() const {
		return( optionalCallInstTenantId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalCallInstTenantIdNull() {
		optionalCallInstTenantId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalCallInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalCallInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::CALLINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::CALLINSTTENANTID_MIN_VALUE );
		}
		optionalCallInstTenantId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalCallInstGelCacheIdNull() const {
		return( optionalCallInstGelCacheId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalCallInstGelCacheIdValue() const {
		return( optionalCallInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalCallInstGelCacheIdReference() const {
		return( optionalCallInstGelCacheId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalCallInstGelCacheIdNull() {
		optionalCallInstGelCacheId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalCallInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalCallInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::CALLINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::CALLINSTGELCACHEID_MIN_VALUE );
		}
		optionalCallInstGelCacheId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalCallInstIdNull() const {
		return( optionalCallInstId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalCallInstIdValue() const {
		return( optionalCallInstId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalCallInstIdReference() const {
		return( optionalCallInstId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalCallInstIdNull() {
		optionalCallInstId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalCallInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalCallInstIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::CALLINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::CALLINSTID_MIN_VALUE );
		}
		optionalCallInstId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalPrevInstTenantIdNull() const {
		return( optionalPrevInstTenantId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalPrevInstTenantIdValue() const {
		return( optionalPrevInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalPrevInstTenantIdReference() const {
		return( optionalPrevInstTenantId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalPrevInstTenantIdNull() {
		optionalPrevInstTenantId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalPrevInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrevInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::PREVINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::PREVINSTTENANTID_MIN_VALUE );
		}
		optionalPrevInstTenantId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalPrevInstGelCacheIdNull() const {
		return( optionalPrevInstGelCacheId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalPrevInstGelCacheIdValue() const {
		return( optionalPrevInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalPrevInstGelCacheIdReference() const {
		return( optionalPrevInstGelCacheId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalPrevInstGelCacheIdNull() {
		optionalPrevInstGelCacheId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalPrevInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrevInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::PREVINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::PREVINSTGELCACHEID_MIN_VALUE );
		}
		optionalPrevInstGelCacheId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalPrevInstGelInstIdNull() const {
		return( optionalPrevInstGelInstId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalPrevInstGelInstIdValue() const {
		return( optionalPrevInstGelInstId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalPrevInstGelInstIdReference() const {
		return( optionalPrevInstGelInstId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalPrevInstGelInstIdNull() {
		optionalPrevInstGelInstId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalPrevInstGelInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrevInstGelInstIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::PREVINSTGELINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::PREVINSTGELINSTID_MIN_VALUE );
		}
		optionalPrevInstGelInstId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalNextInstTenantIdNull() const {
		return( optionalNextInstTenantId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalNextInstTenantIdValue() const {
		return( optionalNextInstTenantId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalNextInstTenantIdReference() const {
		return( optionalNextInstTenantId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalNextInstTenantIdNull() {
		optionalNextInstTenantId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalNextInstTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextInstTenantIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::NEXTINSTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::NEXTINSTTENANTID_MIN_VALUE );
		}
		optionalNextInstTenantId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalNextInstGelCacheIdNull() const {
		return( optionalNextInstGelCacheId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalNextInstGelCacheIdValue() const {
		return( optionalNextInstGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalNextInstGelCacheIdReference() const {
		return( optionalNextInstGelCacheId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalNextInstGelCacheIdNull() {
		optionalNextInstGelCacheId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalNextInstGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextInstGelCacheIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::NEXTINSTGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::NEXTINSTGELCACHEID_MIN_VALUE );
		}
		optionalNextInstGelCacheId.setValue( value );
	}

	const bool CFGenKbGelCallBuff::isOptionalNextInstGelInstIdNull() const {
		return( optionalNextInstGelInstId.isNull() );
	}

	const int64_t CFGenKbGelCallBuff::getOptionalNextInstGelInstIdValue() const {
		return( optionalNextInstGelInstId.getValue() );
	}

	const int64_t* CFGenKbGelCallBuff::getOptionalNextInstGelInstIdReference() const {
		return( optionalNextInstGelInstId.getReference() );
	}

	void CFGenKbGelCallBuff::setOptionalNextInstGelInstIdNull() {
		optionalNextInstGelInstId.setNull();
	}

	void CFGenKbGelCallBuff::setOptionalNextInstGelInstIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextInstGelInstIdValue" );
		if( value < cfcore::CFGenKbGelCallBuff::NEXTINSTGELINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelCallBuff::NEXTINSTGELINSTID_MIN_VALUE );
		}
		optionalNextInstGelInstId.setValue( value );
	}

	size_t CFGenKbGelCallBuff::hashCode() const {
		size_t hashCode = CFGenKbGelInstructionBuff::hashCode();
		if( ! isOptionalSeqInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSeqInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSeqInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSeqInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSeqInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalCallInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalCallInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalCallInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalCallInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalCallInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalPrevInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalPrevInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalPrevInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalPrevInstGelInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalNextInstTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNextInstTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNextInstGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNextInstGelInstIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFGenKbGelCallBuff CFGenKbGelCallBuff::operator =( cfcore::CFGenKbGelCallBuff& src ) {
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
		if( src.isOptionalSeqInstTenantIdNull() ) {
			setOptionalSeqInstTenantIdNull();
		}
		else {
			setOptionalSeqInstTenantIdValue( src.getOptionalSeqInstTenantIdValue() );
		}
		if( src.isOptionalSeqInstGelCacheIdNull() ) {
			setOptionalSeqInstGelCacheIdNull();
		}
		else {
			setOptionalSeqInstGelCacheIdValue( src.getOptionalSeqInstGelCacheIdValue() );
		}
		if( src.isOptionalSeqInstIdNull() ) {
			setOptionalSeqInstIdNull();
		}
		else {
			setOptionalSeqInstIdValue( src.getOptionalSeqInstIdValue() );
		}
		if( src.isOptionalCallInstTenantIdNull() ) {
			setOptionalCallInstTenantIdNull();
		}
		else {
			setOptionalCallInstTenantIdValue( src.getOptionalCallInstTenantIdValue() );
		}
		if( src.isOptionalCallInstGelCacheIdNull() ) {
			setOptionalCallInstGelCacheIdNull();
		}
		else {
			setOptionalCallInstGelCacheIdValue( src.getOptionalCallInstGelCacheIdValue() );
		}
		if( src.isOptionalCallInstIdNull() ) {
			setOptionalCallInstIdNull();
		}
		else {
			setOptionalCallInstIdValue( src.getOptionalCallInstIdValue() );
		}
		if( src.isOptionalPrevInstTenantIdNull() ) {
			setOptionalPrevInstTenantIdNull();
		}
		else {
			setOptionalPrevInstTenantIdValue( src.getOptionalPrevInstTenantIdValue() );
		}
		if( src.isOptionalPrevInstGelCacheIdNull() ) {
			setOptionalPrevInstGelCacheIdNull();
		}
		else {
			setOptionalPrevInstGelCacheIdValue( src.getOptionalPrevInstGelCacheIdValue() );
		}
		if( src.isOptionalPrevInstGelInstIdNull() ) {
			setOptionalPrevInstGelInstIdNull();
		}
		else {
			setOptionalPrevInstGelInstIdValue( src.getOptionalPrevInstGelInstIdValue() );
		}
		if( src.isOptionalNextInstTenantIdNull() ) {
			setOptionalNextInstTenantIdNull();
		}
		else {
			setOptionalNextInstTenantIdValue( src.getOptionalNextInstTenantIdValue() );
		}
		if( src.isOptionalNextInstGelCacheIdNull() ) {
			setOptionalNextInstGelCacheIdNull();
		}
		else {
			setOptionalNextInstGelCacheIdValue( src.getOptionalNextInstGelCacheIdValue() );
		}
		if( src.isOptionalNextInstGelInstIdNull() ) {
			setOptionalNextInstGelInstIdNull();
		}
		else {
			setOptionalNextInstGelInstIdValue( src.getOptionalNextInstGelInstIdValue() );
		}
		return( *this );
	}

	bool CFGenKbGelCallBuff::operator <( const CFGenKbGelCallByCacheIdxKey& rhs ) {
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
		return( false );
	}

	bool CFGenKbGelCallBuff::operator <( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator <( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator <( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator <( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator <( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelCallBuff::operator <( const CFGenKbGelCallBuff& rhs ) {
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
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator <=( const CFGenKbGelCallByCacheIdxKey& rhs ) {
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
		return( true );
	}

	bool CFGenKbGelCallBuff::operator <=( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator <=( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator <=( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator <=( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator <=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelCallBuff::operator <=( const CFGenKbGelCallBuff& rhs ) {
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
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator ==( const CFGenKbGelCallByCacheIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator ==( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				if( getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				if( getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				if( getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator ==( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				if( getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				if( getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				if( getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator ==( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				if( getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				if( getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				if( getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator ==( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				if( getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				if( getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				if( getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator ==( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelCallBuff::operator ==( const CFGenKbGelCallBuff& rhs ) {
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
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				if( getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				if( getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				if( getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				if( getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				if( getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				if( getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				if( getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				if( getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				if( getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				if( getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				if( getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				if( getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator !=( const CFGenKbGelCallByCacheIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator !=( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator !=( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator !=( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator !=( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator !=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelCallBuff::operator !=( const CFGenKbGelCallBuff& rhs ) {
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
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator >=( const CFGenKbGelCallByCacheIdxKey& rhs ) {
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
		return( true );
	}

	bool CFGenKbGelCallBuff::operator >=( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator >=( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator >=( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator >=( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator >=( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelCallBuff::operator >=( const CFGenKbGelCallBuff& rhs ) {
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
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelCallBuff::operator >( const CFGenKbGelCallByCacheIdxKey& rhs ) {
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
		return( false );
	}

	bool CFGenKbGelCallBuff::operator >( const CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator >( const CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator >( const CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator >( const CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelCallBuff::operator >( const CFGenKbGelInstructionPKey& rhs ) {
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

	bool CFGenKbGelCallBuff::operator >( const CFGenKbGelCallBuff& rhs ) {
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
		if( ! isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbGelCallBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCallBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_SeqInstTenantId( "SeqInstTenantId" );
		static const std::string S_SeqInstGelCacheId( "SeqInstGelCacheId" );
		static const std::string S_SeqInstId( "SeqInstId" );
		static const std::string S_CallInstTenantId( "CallInstTenantId" );
		static const std::string S_CallInstGelCacheId( "CallInstGelCacheId" );
		static const std::string S_CallInstId( "CallInstId" );
		static const std::string S_PrevInstTenantId( "PrevInstTenantId" );
		static const std::string S_PrevInstGelCacheId( "PrevInstGelCacheId" );
		static const std::string S_PrevInstGelInstId( "PrevInstGelInstId" );
		static const std::string S_NextInstTenantId( "NextInstTenantId" );
		static const std::string S_NextInstGelCacheId( "NextInstGelCacheId" );
		static const std::string S_NextInstGelInstId( "NextInstGelInstId" );
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
		if( ! isOptionalSeqInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstTenantId, getOptionalSeqInstTenantIdValue() ) );
		}
		if( ! isOptionalSeqInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstGelCacheId, getOptionalSeqInstGelCacheIdValue() ) );
		}
		if( ! isOptionalSeqInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstId, getOptionalSeqInstIdValue() ) );
		}
		if( ! isOptionalCallInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstTenantId, getOptionalCallInstTenantIdValue() ) );
		}
		if( ! isOptionalCallInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstGelCacheId, getOptionalCallInstGelCacheIdValue() ) );
		}
		if( ! isOptionalCallInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstId, getOptionalCallInstIdValue() ) );
		}
		if( ! isOptionalPrevInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstTenantId, getOptionalPrevInstTenantIdValue() ) );
		}
		if( ! isOptionalPrevInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstGelCacheId, getOptionalPrevInstGelCacheIdValue() ) );
		}
		if( ! isOptionalPrevInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstGelInstId, getOptionalPrevInstGelInstIdValue() ) );
		}
		if( ! isOptionalNextInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstTenantId, getOptionalNextInstTenantIdValue() ) );
		}
		if( ! isOptionalNextInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstGelCacheId, getOptionalNextInstGelCacheIdValue() ) );
		}
		if( ! isOptionalNextInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstGelInstId, getOptionalNextInstGelInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs ) {
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
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
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
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs ) {
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
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
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
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				if( lhs.getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				if( lhs.getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				if( lhs.getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				if( lhs.getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				if( lhs.getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				if( lhs.getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				if( lhs.getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				if( lhs.getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				if( lhs.getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				if( lhs.getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				if( lhs.getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				if( lhs.getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
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
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				if( lhs.getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				if( lhs.getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				if( lhs.getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				if( lhs.getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				if( lhs.getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				if( lhs.getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				if( lhs.getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				if( lhs.getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				if( lhs.getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				if( lhs.getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				if( lhs.getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				if( lhs.getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
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
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() != rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() != rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() != rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() != rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() != rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() != rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() != rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() != rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() != rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() != rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() != rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() != rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs ) {
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
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
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
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCacheIdxKey& rhs ) {
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
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBySeqIdxKey& rhs ) {
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByCallInstIdxKey& rhs ) {
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByPrevInstIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallByNextInstIdxKey& rhs ) {
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelCallBuff& lhs, const cfcore::CFGenKbGelCallBuff& rhs ) {
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
		if( ! lhs.isOptionalSeqInstTenantIdNull() ) {
			if( rhs.isOptionalSeqInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstTenantIdValue() < rhs.getOptionalSeqInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstTenantIdValue() > rhs.getOptionalSeqInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstGelCacheIdNull() ) {
			if( rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstGelCacheIdValue() < rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstGelCacheIdValue() > rhs.getOptionalSeqInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSeqInstIdNull() ) {
			if( rhs.isOptionalSeqInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSeqInstIdValue() < rhs.getOptionalSeqInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSeqInstIdValue() > rhs.getOptionalSeqInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSeqInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstTenantIdNull() ) {
			if( rhs.isOptionalCallInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstTenantIdValue() < rhs.getOptionalCallInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstTenantIdValue() > rhs.getOptionalCallInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstGelCacheIdNull() ) {
			if( rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstGelCacheIdValue() < rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstGelCacheIdValue() > rhs.getOptionalCallInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalCallInstIdNull() ) {
			if( rhs.isOptionalCallInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalCallInstIdValue() < rhs.getOptionalCallInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalCallInstIdValue() > rhs.getOptionalCallInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalCallInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstTenantIdNull() ) {
			if( rhs.isOptionalPrevInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstTenantIdValue() < rhs.getOptionalPrevInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstTenantIdValue() > rhs.getOptionalPrevInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelCacheIdNull() ) {
			if( rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelCacheIdValue() < rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelCacheIdValue() > rhs.getOptionalPrevInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevInstGelInstIdNull() ) {
			if( rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevInstGelInstIdValue() < rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevInstGelInstIdValue() > rhs.getOptionalPrevInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevInstGelInstIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstTenantIdNull() ) {
			if( rhs.isOptionalNextInstTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstTenantIdValue() < rhs.getOptionalNextInstTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstTenantIdValue() > rhs.getOptionalNextInstTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelCacheIdNull() ) {
			if( rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelCacheIdValue() < rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelCacheIdValue() > rhs.getOptionalNextInstGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextInstGelInstIdNull() ) {
			if( rhs.isOptionalNextInstGelInstIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextInstGelInstIdValue() < rhs.getOptionalNextInstGelInstIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextInstGelInstIdValue() > rhs.getOptionalNextInstGelInstIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextInstGelInstIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

