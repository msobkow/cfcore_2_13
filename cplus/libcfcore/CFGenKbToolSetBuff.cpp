// Description: C++18 implementation for a ToolSet buffer object.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbToolSetByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool0IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool1IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool2IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool3IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool4IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool5IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool6IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetByTool7IdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbToolSetBuff::S_VALUE( "value" );
	const std::string CFGenKbToolSetBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbToolSetBuff::GENDEFNAME( "ToolSet" );
	const classcode_t CFGenKbToolSetBuff::CLASS_CODE = 0xa928L;
	const std::string CFGenKbToolSetBuff::CLASS_NAME( "CFGenKbToolSetBuff" );
		const std::string CFGenKbToolSetBuff::COLNAME_ID( "Id" );
		const std::string CFGenKbToolSetBuff::COLNAME_NAME( "Name" );
		const std::string CFGenKbToolSetBuff::COLNAME_DESCR( "Descr" );
		const std::string CFGenKbToolSetBuff::COLNAME_REVISIONSTRING( "RevisionString" );
		const std::string CFGenKbToolSetBuff::COLNAME_ISSUPPORTED( "IsSupported" );
		const std::string CFGenKbToolSetBuff::COLNAME_GENERATE( "Generate" );
		const std::string CFGenKbToolSetBuff::COLNAME_TOOLID0( "ToolId0" );
		const std::string CFGenKbToolSetBuff::COLNAME_TOOLID1( "ToolId1" );
		const std::string CFGenKbToolSetBuff::COLNAME_TOOLID2( "ToolId2" );
		const std::string CFGenKbToolSetBuff::COLNAME_TOOLID3( "ToolId3" );
		const std::string CFGenKbToolSetBuff::COLNAME_TOOLID4( "ToolId4" );
		const std::string CFGenKbToolSetBuff::COLNAME_TOOLID5( "ToolId5" );
		const std::string CFGenKbToolSetBuff::COLNAME_TOOLID6( "ToolId6" );
		const std::string CFGenKbToolSetBuff::COLNAME_TOOLID7( "ToolId7" );
	const int16_t CFGenKbToolSetBuff::ID_INIT_VALUE = (int16_t)0;
	const std::string CFGenKbToolSetBuff::NAME_INIT_VALUE( "" );
	const bool CFGenKbToolSetBuff::ISSUPPORTED_INIT_VALUE = true;
	const bool CFGenKbToolSetBuff::GENERATE_INIT_VALUE = true;
	const int16_t CFGenKbToolSetBuff::TOOLID0_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID1_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID2_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID3_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID4_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID5_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID6_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID7_INIT_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::ID_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID0_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID1_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID2_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID3_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID4_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID5_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID6_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::TOOLID7_MIN_VALUE = (int16_t)0;
	const int16_t CFGenKbToolSetBuff::ID_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbToolSetBuff::TOOLID0_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbToolSetBuff::TOOLID1_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbToolSetBuff::TOOLID2_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbToolSetBuff::TOOLID3_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbToolSetBuff::TOOLID4_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbToolSetBuff::TOOLID5_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbToolSetBuff::TOOLID6_MAX_VALUE = (int16_t)32767;
	const int16_t CFGenKbToolSetBuff::TOOLID7_MAX_VALUE = (int16_t)32767;
	const std::string::size_type CFGenKbToolSetBuff::NAME_MAX_LEN = 511;
	const std::string::size_type CFGenKbToolSetBuff::DESCR_MAX_LEN = 255;
	const std::string::size_type CFGenKbToolSetBuff::REVISIONSTRING_MAX_LEN = 255;

	CFGenKbToolSetBuff::CFGenKbToolSetBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredId = cfcore::CFGenKbToolSetBuff::ID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbToolSetBuff::NAME_INIT_VALUE );
		optionalDescr = NULL;
		optionalRevisionString = NULL;
		requiredIsSupported = cfcore::CFGenKbToolSetBuff::ISSUPPORTED_INIT_VALUE;
		requiredGenerate = cfcore::CFGenKbToolSetBuff::GENERATE_INIT_VALUE;
		requiredToolId0 = cfcore::CFGenKbToolSetBuff::TOOLID0_INIT_VALUE;
		optionalToolId1.setNull();
		optionalToolId2.setNull();
		optionalToolId3.setNull();
		optionalToolId4.setNull();
		optionalToolId5.setNull();
		optionalToolId6.setNull();
		optionalToolId7.setNull();
	}

	CFGenKbToolSetBuff::CFGenKbToolSetBuff( const CFGenKbToolSetBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredId = cfcore::CFGenKbToolSetBuff::ID_INIT_VALUE;
		requiredName = new std::string( cfcore::CFGenKbToolSetBuff::NAME_INIT_VALUE );
		optionalDescr = NULL;
		optionalRevisionString = NULL;
		requiredIsSupported = cfcore::CFGenKbToolSetBuff::ISSUPPORTED_INIT_VALUE;
		requiredGenerate = cfcore::CFGenKbToolSetBuff::GENERATE_INIT_VALUE;
		requiredToolId0 = cfcore::CFGenKbToolSetBuff::TOOLID0_INIT_VALUE;
		optionalToolId1.setNull();
		optionalToolId2.setNull();
		optionalToolId3.setNull();
		optionalToolId4.setNull();
		optionalToolId5.setNull();
		optionalToolId6.setNull();
		optionalToolId7.setNull();
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalDescrNull() ) {
			setOptionalDescrNull();
		}
		else {
			setOptionalDescrValue( src.getOptionalDescrValue() );
		}
		if( src.isOptionalRevisionStringNull() ) {
			setOptionalRevisionStringNull();
		}
		else {
			setOptionalRevisionStringValue( src.getOptionalRevisionStringValue() );
		}
		setRequiredIsSupported( src.getRequiredIsSupported() );
		setRequiredGenerate( src.getRequiredGenerate() );
		setRequiredToolId0( src.getRequiredToolId0() );
		if( src.isOptionalToolId1Null() ) {
			setOptionalToolId1Null();
		}
		else {
			setOptionalToolId1Value( src.getOptionalToolId1Value() );
		}
		if( src.isOptionalToolId2Null() ) {
			setOptionalToolId2Null();
		}
		else {
			setOptionalToolId2Value( src.getOptionalToolId2Value() );
		}
		if( src.isOptionalToolId3Null() ) {
			setOptionalToolId3Null();
		}
		else {
			setOptionalToolId3Value( src.getOptionalToolId3Value() );
		}
		if( src.isOptionalToolId4Null() ) {
			setOptionalToolId4Null();
		}
		else {
			setOptionalToolId4Value( src.getOptionalToolId4Value() );
		}
		if( src.isOptionalToolId5Null() ) {
			setOptionalToolId5Null();
		}
		else {
			setOptionalToolId5Value( src.getOptionalToolId5Value() );
		}
		if( src.isOptionalToolId6Null() ) {
			setOptionalToolId6Null();
		}
		else {
			setOptionalToolId6Value( src.getOptionalToolId6Value() );
		}
		if( src.isOptionalToolId7Null() ) {
			setOptionalToolId7Null();
		}
		else {
			setOptionalToolId7Value( src.getOptionalToolId7Value() );
		}
	}

	CFGenKbToolSetBuff::~CFGenKbToolSetBuff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		if( optionalDescr != NULL ) {
			delete optionalDescr;
			optionalDescr = NULL;
		}
		if( optionalRevisionString != NULL ) {
			delete optionalRevisionString;
			optionalRevisionString = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbToolSetBuff::clone() {
		CFGenKbToolSetBuff* copy = new CFGenKbToolSetBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbToolSetBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbToolSetBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbToolSetBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const int16_t CFGenKbToolSetBuff::getRequiredId() const {
		return( requiredId );
	}

	const int16_t* CFGenKbToolSetBuff::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbToolSetBuff::setRequiredId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfcore::CFGenKbToolSetBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::ID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::ID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::ID_MAX_VALUE );
		}
		requiredId = value;
	}

	const std::string& CFGenKbToolSetBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFGenKbToolSetBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFGenKbToolSetBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFGenKbToolSetBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbToolSetBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	const bool CFGenKbToolSetBuff::isOptionalDescrNull() const {
		return( optionalDescr == NULL );
	}

	const std::string& CFGenKbToolSetBuff::getOptionalDescrValue() const {
		static const std::string S_ProcName( "getOptionalDescrValue" );
		if( optionalDescr == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalDescr );
	}

	const std::string* CFGenKbToolSetBuff::getOptionalDescrReference() const {
		return( optionalDescr );
	}

	void CFGenKbToolSetBuff::setOptionalDescrNull() {
		if( optionalDescr != NULL ) {
			delete optionalDescr;
			optionalDescr = NULL;
		}
	}

	void CFGenKbToolSetBuff::setOptionalDescrValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalDescrValue" );
		if( value.length() > CFGenKbToolSetBuff::DESCR_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbToolSetBuff::DESCR_MAX_LEN );
		}
		if( optionalDescr != NULL ) {
			delete optionalDescr;
			optionalDescr = NULL;
		}
		optionalDescr = new std::string( value );
	}

	const bool CFGenKbToolSetBuff::isOptionalRevisionStringNull() const {
		return( optionalRevisionString == NULL );
	}

	const std::string& CFGenKbToolSetBuff::getOptionalRevisionStringValue() const {
		static const std::string S_ProcName( "getOptionalRevisionStringValue" );
		if( optionalRevisionString == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalRevisionString );
	}

	const std::string* CFGenKbToolSetBuff::getOptionalRevisionStringReference() const {
		return( optionalRevisionString );
	}

	void CFGenKbToolSetBuff::setOptionalRevisionStringNull() {
		if( optionalRevisionString != NULL ) {
			delete optionalRevisionString;
			optionalRevisionString = NULL;
		}
	}

	void CFGenKbToolSetBuff::setOptionalRevisionStringValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalRevisionStringValue" );
		if( value.length() > CFGenKbToolSetBuff::REVISIONSTRING_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbToolSetBuff::REVISIONSTRING_MAX_LEN );
		}
		if( optionalRevisionString != NULL ) {
			delete optionalRevisionString;
			optionalRevisionString = NULL;
		}
		optionalRevisionString = new std::string( value );
	}

	const bool CFGenKbToolSetBuff::getRequiredIsSupported() const {
		return( requiredIsSupported );
	}

	const bool* CFGenKbToolSetBuff::getRequiredIsSupportedReference() const {
		return( &requiredIsSupported );
	}

	void CFGenKbToolSetBuff::setRequiredIsSupported( const bool value ) {
		requiredIsSupported = value;
	}

	const bool CFGenKbToolSetBuff::getRequiredGenerate() const {
		return( requiredGenerate );
	}

	const bool* CFGenKbToolSetBuff::getRequiredGenerateReference() const {
		return( &requiredGenerate );
	}

	void CFGenKbToolSetBuff::setRequiredGenerate( const bool value ) {
		requiredGenerate = value;
	}

	const int16_t CFGenKbToolSetBuff::getRequiredToolId0() const {
		return( requiredToolId0 );
	}

	const int16_t* CFGenKbToolSetBuff::getRequiredToolId0Reference() const {
		return( &requiredToolId0 );
	}

	void CFGenKbToolSetBuff::setRequiredToolId0( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredToolId0" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID0_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID0_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID0_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID0_MAX_VALUE );
		}
		requiredToolId0 = value;
	}

	const bool CFGenKbToolSetBuff::isOptionalToolId1Null() const {
		return( optionalToolId1.isNull() );
	}

	const int16_t CFGenKbToolSetBuff::getOptionalToolId1Value() const {
		return( optionalToolId1.getValue() );
	}

	const int16_t* CFGenKbToolSetBuff::getOptionalToolId1Reference() const {
		return( optionalToolId1.getReference() );
	}

	void CFGenKbToolSetBuff::setOptionalToolId1Null() {
		optionalToolId1.setNull();
	}

	void CFGenKbToolSetBuff::setOptionalToolId1Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId1Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID1_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID1_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID1_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID1_MAX_VALUE );
		}
		optionalToolId1.setValue( value );
	}

	const bool CFGenKbToolSetBuff::isOptionalToolId2Null() const {
		return( optionalToolId2.isNull() );
	}

	const int16_t CFGenKbToolSetBuff::getOptionalToolId2Value() const {
		return( optionalToolId2.getValue() );
	}

	const int16_t* CFGenKbToolSetBuff::getOptionalToolId2Reference() const {
		return( optionalToolId2.getReference() );
	}

	void CFGenKbToolSetBuff::setOptionalToolId2Null() {
		optionalToolId2.setNull();
	}

	void CFGenKbToolSetBuff::setOptionalToolId2Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId2Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID2_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID2_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID2_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID2_MAX_VALUE );
		}
		optionalToolId2.setValue( value );
	}

	const bool CFGenKbToolSetBuff::isOptionalToolId3Null() const {
		return( optionalToolId3.isNull() );
	}

	const int16_t CFGenKbToolSetBuff::getOptionalToolId3Value() const {
		return( optionalToolId3.getValue() );
	}

	const int16_t* CFGenKbToolSetBuff::getOptionalToolId3Reference() const {
		return( optionalToolId3.getReference() );
	}

	void CFGenKbToolSetBuff::setOptionalToolId3Null() {
		optionalToolId3.setNull();
	}

	void CFGenKbToolSetBuff::setOptionalToolId3Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId3Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID3_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID3_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID3_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID3_MAX_VALUE );
		}
		optionalToolId3.setValue( value );
	}

	const bool CFGenKbToolSetBuff::isOptionalToolId4Null() const {
		return( optionalToolId4.isNull() );
	}

	const int16_t CFGenKbToolSetBuff::getOptionalToolId4Value() const {
		return( optionalToolId4.getValue() );
	}

	const int16_t* CFGenKbToolSetBuff::getOptionalToolId4Reference() const {
		return( optionalToolId4.getReference() );
	}

	void CFGenKbToolSetBuff::setOptionalToolId4Null() {
		optionalToolId4.setNull();
	}

	void CFGenKbToolSetBuff::setOptionalToolId4Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId4Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID4_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID4_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID4_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID4_MAX_VALUE );
		}
		optionalToolId4.setValue( value );
	}

	const bool CFGenKbToolSetBuff::isOptionalToolId5Null() const {
		return( optionalToolId5.isNull() );
	}

	const int16_t CFGenKbToolSetBuff::getOptionalToolId5Value() const {
		return( optionalToolId5.getValue() );
	}

	const int16_t* CFGenKbToolSetBuff::getOptionalToolId5Reference() const {
		return( optionalToolId5.getReference() );
	}

	void CFGenKbToolSetBuff::setOptionalToolId5Null() {
		optionalToolId5.setNull();
	}

	void CFGenKbToolSetBuff::setOptionalToolId5Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId5Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID5_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID5_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID5_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID5_MAX_VALUE );
		}
		optionalToolId5.setValue( value );
	}

	const bool CFGenKbToolSetBuff::isOptionalToolId6Null() const {
		return( optionalToolId6.isNull() );
	}

	const int16_t CFGenKbToolSetBuff::getOptionalToolId6Value() const {
		return( optionalToolId6.getValue() );
	}

	const int16_t* CFGenKbToolSetBuff::getOptionalToolId6Reference() const {
		return( optionalToolId6.getReference() );
	}

	void CFGenKbToolSetBuff::setOptionalToolId6Null() {
		optionalToolId6.setNull();
	}

	void CFGenKbToolSetBuff::setOptionalToolId6Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId6Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID6_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID6_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID6_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID6_MAX_VALUE );
		}
		optionalToolId6.setValue( value );
	}

	const bool CFGenKbToolSetBuff::isOptionalToolId7Null() const {
		return( optionalToolId7.isNull() );
	}

	const int16_t CFGenKbToolSetBuff::getOptionalToolId7Value() const {
		return( optionalToolId7.getValue() );
	}

	const int16_t* CFGenKbToolSetBuff::getOptionalToolId7Reference() const {
		return( optionalToolId7.getReference() );
	}

	void CFGenKbToolSetBuff::setOptionalToolId7Null() {
		optionalToolId7.setNull();
	}

	void CFGenKbToolSetBuff::setOptionalToolId7Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId7Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID7_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID7_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID7_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID7_MAX_VALUE );
		}
		optionalToolId7.setValue( value );
	}

	int32_t CFGenKbToolSetBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbToolSetBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbToolSetBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = ( hashCode * 0x10000 ) + getRequiredId();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		if( ! isOptionalDescrNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalDescrValue() );
		}
		if( ! isOptionalRevisionStringNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalRevisionStringValue() );
		}
		if( getRequiredIsSupported() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		if( getRequiredGenerate() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		hashCode = ( hashCode * 0x10000 ) + getRequiredToolId0();
		if( ! isOptionalToolId1Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId1Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalToolId2Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId2Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalToolId3Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId3Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalToolId4Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId4Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalToolId5Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId5Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalToolId6Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId6Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalToolId7Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId7Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFGenKbToolSetBuff CFGenKbToolSetBuff::operator =( cfcore::CFGenKbToolSetBuff& src ) {
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalDescrNull() ) {
			setOptionalDescrNull();
		}
		else {
			setOptionalDescrValue( src.getOptionalDescrValue() );
		}
		if( src.isOptionalRevisionStringNull() ) {
			setOptionalRevisionStringNull();
		}
		else {
			setOptionalRevisionStringValue( src.getOptionalRevisionStringValue() );
		}
		setRequiredIsSupported( src.getRequiredIsSupported() );
		setRequiredGenerate( src.getRequiredGenerate() );
		setRequiredToolId0( src.getRequiredToolId0() );
		if( src.isOptionalToolId1Null() ) {
			setOptionalToolId1Null();
		}
		else {
			setOptionalToolId1Value( src.getOptionalToolId1Value() );
		}
		if( src.isOptionalToolId2Null() ) {
			setOptionalToolId2Null();
		}
		else {
			setOptionalToolId2Value( src.getOptionalToolId2Value() );
		}
		if( src.isOptionalToolId3Null() ) {
			setOptionalToolId3Null();
		}
		else {
			setOptionalToolId3Value( src.getOptionalToolId3Value() );
		}
		if( src.isOptionalToolId4Null() ) {
			setOptionalToolId4Null();
		}
		else {
			setOptionalToolId4Value( src.getOptionalToolId4Value() );
		}
		if( src.isOptionalToolId5Null() ) {
			setOptionalToolId5Null();
		}
		else {
			setOptionalToolId5Value( src.getOptionalToolId5Value() );
		}
		if( src.isOptionalToolId6Null() ) {
			setOptionalToolId6Null();
		}
		else {
			setOptionalToolId6Value( src.getOptionalToolId6Value() );
		}
		if( src.isOptionalToolId7Null() ) {
			setOptionalToolId7Null();
		}
		else {
			setOptionalToolId7Value( src.getOptionalToolId7Value() );
		}
		return( *this );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetByNameIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( false );
			}
			if( getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
			if( getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		if( getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( true );
		}
		if( getRequiredGenerate() > rhs.getRequiredGenerate() ) {
			return( false );
		}
		else if( getRequiredGenerate() < rhs.getRequiredGenerate() ) {
			return( true );
		}
		if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetByNameIdxKey& rhs ) {
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator <=( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( false );
			}
			if( getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
			if( getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		if( getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( true );
		}
		if( getRequiredGenerate() > rhs.getRequiredGenerate() ) {
			return( false );
		}
		else if( getRequiredGenerate() < rhs.getRequiredGenerate() ) {
			return( true );
		}
		if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetByNameIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( ! rhs.isOptionalToolId1Null() ) {
				if( getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( ! rhs.isOptionalToolId2Null() ) {
				if( getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( ! rhs.isOptionalToolId3Null() ) {
				if( getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( ! rhs.isOptionalToolId4Null() ) {
				if( getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( ! rhs.isOptionalToolId5Null() ) {
				if( getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( ! rhs.isOptionalToolId6Null() ) {
				if( getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( ! rhs.isOptionalToolId7Null() ) {
				if( getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator ==( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! isOptionalDescrNull() ) {
			if( ! rhs.isOptionalDescrNull() ) {
				if( getOptionalDescrValue() != rhs.getOptionalDescrValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDescrNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				if( getOptionalRevisionStringValue() != rhs.getOptionalRevisionStringValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
		}
		if( getRequiredIsSupported() != rhs.getRequiredIsSupported() ) {
			return( false );
		}
		if( getRequiredGenerate() != rhs.getRequiredGenerate() ) {
			return( false );
		}
		if( getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( false );
		}
		if( ! isOptionalToolId1Null() ) {
			if( ! rhs.isOptionalToolId1Null() ) {
				if( getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId2Null() ) {
			if( ! rhs.isOptionalToolId2Null() ) {
				if( getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId3Null() ) {
			if( ! rhs.isOptionalToolId3Null() ) {
				if( getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId4Null() ) {
			if( ! rhs.isOptionalToolId4Null() ) {
				if( getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId5Null() ) {
			if( ! rhs.isOptionalToolId5Null() ) {
				if( getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId6Null() ) {
			if( ! rhs.isOptionalToolId6Null() ) {
				if( getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId7Null() ) {
			if( ! rhs.isOptionalToolId7Null() ) {
				if( getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetByNameIdxKey& rhs ) {
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator !=( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( getOptionalDescrValue() != rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( getOptionalRevisionStringValue() != rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		if( getRequiredIsSupported() != rhs.getRequiredIsSupported() ) {
			return( true );
		}
		if( getRequiredGenerate() != rhs.getRequiredGenerate() ) {
			return( true );
		}
		if( getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( true );
		}
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetByNameIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >=( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
		}
		if( getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( true );
		}
		if( getRequiredGenerate() < rhs.getRequiredGenerate() ) {
			return( false );
		}
		else if( getRequiredGenerate() > rhs.getRequiredGenerate() ) {
			return( true );
		}
		if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetByNameIdxKey& rhs ) {
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbToolSetBuff::operator >( const CFGenKbToolSetBuff& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( true );
		}
		if( getRequiredGenerate() < rhs.getRequiredGenerate() ) {
			return( false );
		}
		else if( getRequiredGenerate() > rhs.getRequiredGenerate() ) {
			return( true );
		}
		if( getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbToolSetBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_Descr( "Descr" );
		static const std::string S_RevisionString( "RevisionString" );
		static const std::string S_IsSupported( "IsSupported" );
		static const std::string S_Generate( "Generate" );
		static const std::string S_ToolId0( "ToolId0" );
		static const std::string S_ToolId1( "ToolId1" );
		static const std::string S_ToolId2( "ToolId2" );
		static const std::string S_ToolId3( "ToolId3" );
		static const std::string S_ToolId4( "ToolId4" );
		static const std::string S_ToolId5( "ToolId5" );
		static const std::string S_ToolId6( "ToolId6" );
		static const std::string S_ToolId7( "ToolId7" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		if( ! isOptionalDescrNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Descr, getOptionalDescrValue() ) );
		}
		if( ! isOptionalRevisionStringNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_RevisionString, getOptionalRevisionStringValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsSupported, getRequiredIsSupported() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_Generate, getRequiredGenerate() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId0, getRequiredToolId0() ) );
		if( ! isOptionalToolId1Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId1, getOptionalToolId1Value() ) );
		}
		if( ! isOptionalToolId2Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId2, getOptionalToolId2Value() ) );
		}
		if( ! isOptionalToolId3Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId3, getOptionalToolId3Value() ) );
		}
		if( ! isOptionalToolId4Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId4, getOptionalToolId4Value() ) );
		}
		if( ! isOptionalToolId5Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId5, getOptionalToolId5Value() ) );
		}
		if( ! isOptionalToolId6Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId6, getOptionalToolId6Value() ) );
		}
		if( ! isOptionalToolId7Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId7, getOptionalToolId7Value() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
			if( lhs.getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( lhs.getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( true );
		}
		if( lhs.getRequiredGenerate() > rhs.getRequiredGenerate() ) {
			return( false );
		}
		else if( lhs.getRequiredGenerate() < rhs.getRequiredGenerate() ) {
			return( true );
		}
		if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
			if( lhs.getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( lhs.getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( true );
		}
		if( lhs.getRequiredGenerate() > rhs.getRequiredGenerate() ) {
			return( false );
		}
		else if( lhs.getRequiredGenerate() < rhs.getRequiredGenerate() ) {
			return( true );
		}
		if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( true );
		}
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( ! rhs.isOptionalToolId1Null() ) {
				if( lhs.getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( ! rhs.isOptionalToolId2Null() ) {
				if( lhs.getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( ! rhs.isOptionalToolId3Null() ) {
				if( lhs.getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( ! rhs.isOptionalToolId4Null() ) {
				if( lhs.getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( ! rhs.isOptionalToolId5Null() ) {
				if( lhs.getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( ! rhs.isOptionalToolId6Null() ) {
				if( lhs.getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( ! rhs.isOptionalToolId7Null() ) {
				if( lhs.getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( ! rhs.isOptionalDescrNull() ) {
				if( lhs.getOptionalDescrValue() != rhs.getOptionalDescrValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				if( lhs.getOptionalRevisionStringValue() != rhs.getOptionalRevisionStringValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsSupported() != rhs.getRequiredIsSupported() ) {
			return( false );
		}
		if( lhs.getRequiredGenerate() != rhs.getRequiredGenerate() ) {
			return( false );
		}
		if( lhs.getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( false );
		}
		if( ! lhs.isOptionalToolId1Null() ) {
			if( ! rhs.isOptionalToolId1Null() ) {
				if( lhs.getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId2Null() ) {
			if( ! rhs.isOptionalToolId2Null() ) {
				if( lhs.getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId3Null() ) {
			if( ! rhs.isOptionalToolId3Null() ) {
				if( lhs.getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId4Null() ) {
			if( ! rhs.isOptionalToolId4Null() ) {
				if( lhs.getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId5Null() ) {
			if( ! rhs.isOptionalToolId5Null() ) {
				if( lhs.getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId6Null() ) {
			if( ! rhs.isOptionalToolId6Null() ) {
				if( lhs.getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId7Null() ) {
			if( ! rhs.isOptionalToolId7Null() ) {
				if( lhs.getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescrValue() != rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( lhs.getOptionalRevisionStringValue() != rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsSupported() != rhs.getRequiredIsSupported() ) {
			return( true );
		}
		if( lhs.getRequiredGenerate() != rhs.getRequiredGenerate() ) {
			return( true );
		}
		if( lhs.getRequiredToolId0() != rhs.getRequiredToolId0() ) {
			return( true );
		}
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( lhs.getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( lhs.getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( true );
		}
		if( lhs.getRequiredGenerate() < rhs.getRequiredGenerate() ) {
			return( false );
		}
		else if( lhs.getRequiredGenerate() > rhs.getRequiredGenerate() ) {
			return( true );
		}
		if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs ) {
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs ) {
		if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalDescrNull() ) {
			if( rhs.isOptionalDescrNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescrValue() < rhs.getOptionalDescrValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescrValue() > rhs.getOptionalDescrValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescrNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRevisionStringNull() ) {
			if( rhs.isOptionalRevisionStringNull() ) {
				return( true );
			}
			if( lhs.getOptionalRevisionStringValue() < rhs.getOptionalRevisionStringValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRevisionStringValue() > rhs.getOptionalRevisionStringValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRevisionStringNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsSupported() < rhs.getRequiredIsSupported() ) {
			return( false );
		}
		else if( lhs.getRequiredIsSupported() > rhs.getRequiredIsSupported() ) {
			return( true );
		}
		if( lhs.getRequiredGenerate() < rhs.getRequiredGenerate() ) {
			return( false );
		}
		else if( lhs.getRequiredGenerate() > rhs.getRequiredGenerate() ) {
			return( true );
		}
		if( lhs.getRequiredToolId0() < rhs.getRequiredToolId0() ) {
			return( false );
		}
		else if( lhs.getRequiredToolId0() > rhs.getRequiredToolId0() ) {
			return( true );
		}
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( false );
	}
}

