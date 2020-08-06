#pragma once

// Description: C++18 specification for a ToolSet buffer object.

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

#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbToolSetPKey;
	class CFGenKbToolSetByNameIdxKey;
	class CFGenKbToolSetByTool0IdxKey;
	class CFGenKbToolSetByTool1IdxKey;
	class CFGenKbToolSetByTool2IdxKey;
	class CFGenKbToolSetByTool3IdxKey;
	class CFGenKbToolSetByTool4IdxKey;
	class CFGenKbToolSetByTool5IdxKey;
	class CFGenKbToolSetByTool6IdxKey;
	class CFGenKbToolSetByTool7IdxKey;

	class CFGenKbToolSetBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_ID;
		static const std::string COLNAME_NAME;
		static const std::string COLNAME_DESCR;
		static const std::string COLNAME_REVISIONSTRING;
		static const std::string COLNAME_ISSUPPORTED;
		static const std::string COLNAME_GENERATE;
		static const std::string COLNAME_TOOLID0;
		static const std::string COLNAME_TOOLID1;
		static const std::string COLNAME_TOOLID2;
		static const std::string COLNAME_TOOLID3;
		static const std::string COLNAME_TOOLID4;
		static const std::string COLNAME_TOOLID5;
		static const std::string COLNAME_TOOLID6;
		static const std::string COLNAME_TOOLID7;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int16_t ID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const bool ISSUPPORTED_INIT_VALUE;
		static const bool GENERATE_INIT_VALUE;
		static const int16_t TOOLID0_INIT_VALUE;
		static const int16_t TOOLID1_INIT_VALUE;
		static const int16_t TOOLID2_INIT_VALUE;
		static const int16_t TOOLID3_INIT_VALUE;
		static const int16_t TOOLID4_INIT_VALUE;
		static const int16_t TOOLID5_INIT_VALUE;
		static const int16_t TOOLID6_INIT_VALUE;
		static const int16_t TOOLID7_INIT_VALUE;
		static const int16_t ID_MIN_VALUE;
		static const int16_t TOOLID0_MIN_VALUE;
		static const int16_t TOOLID1_MIN_VALUE;
		static const int16_t TOOLID2_MIN_VALUE;
		static const int16_t TOOLID3_MIN_VALUE;
		static const int16_t TOOLID4_MIN_VALUE;
		static const int16_t TOOLID5_MIN_VALUE;
		static const int16_t TOOLID6_MIN_VALUE;
		static const int16_t TOOLID7_MIN_VALUE;
		static const int16_t ID_MAX_VALUE;
		static const int16_t TOOLID0_MAX_VALUE;
		static const int16_t TOOLID1_MAX_VALUE;
		static const int16_t TOOLID2_MAX_VALUE;
		static const int16_t TOOLID3_MAX_VALUE;
		static const int16_t TOOLID4_MAX_VALUE;
		static const int16_t TOOLID5_MAX_VALUE;
		static const int16_t TOOLID6_MAX_VALUE;
		static const int16_t TOOLID7_MAX_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
		static const std::string::size_type DESCR_MAX_LEN;
		static const std::string::size_type REVISIONSTRING_MAX_LEN;
	protected:
		int16_t requiredId;
		std::string* requiredName;
		std::string* optionalDescr;
		std::string* optionalRevisionString;
		bool requiredIsSupported;
		bool requiredGenerate;
		int16_t requiredToolId0;
		cflib::CFLibNullableInt16 optionalToolId1;
		cflib::CFLibNullableInt16 optionalToolId2;
		cflib::CFLibNullableInt16 optionalToolId3;
		cflib::CFLibNullableInt16 optionalToolId4;
		cflib::CFLibNullableInt16 optionalToolId5;
		cflib::CFLibNullableInt16 optionalToolId6;
		cflib::CFLibNullableInt16 optionalToolId7;
		int32_t requiredRevision;
	public:
		CFGenKbToolSetBuff();

		CFGenKbToolSetBuff( const CFGenKbToolSetBuff& src );

		virtual ~CFGenKbToolSetBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int16_t getRequiredId() const;
		virtual const int16_t* getRequiredIdReference() const;
		virtual void setRequiredId( const int16_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual const std::string& getOptionalDescrValue() const;
		virtual const std::string* getOptionalDescrReference() const;
		virtual const bool isOptionalDescrNull() const;
		virtual void setOptionalDescrNull();
		virtual void setOptionalDescrValue( const std::string& value );

		virtual const std::string& getOptionalRevisionStringValue() const;
		virtual const std::string* getOptionalRevisionStringReference() const;
		virtual const bool isOptionalRevisionStringNull() const;
		virtual void setOptionalRevisionStringNull();
		virtual void setOptionalRevisionStringValue( const std::string& value );

		virtual const bool getRequiredIsSupported() const;
		virtual const bool* getRequiredIsSupportedReference() const;
		virtual void setRequiredIsSupported( const bool value );

		virtual const bool getRequiredGenerate() const;
		virtual const bool* getRequiredGenerateReference() const;
		virtual void setRequiredGenerate( const bool value );

		virtual const int16_t getRequiredToolId0() const;
		virtual const int16_t* getRequiredToolId0Reference() const;
		virtual void setRequiredToolId0( const int16_t value );

		virtual const int16_t getOptionalToolId1Value() const;
		virtual const int16_t* getOptionalToolId1Reference() const;
		virtual const bool isOptionalToolId1Null() const;
		virtual void setOptionalToolId1Null();
		virtual void setOptionalToolId1Value( const int16_t value );

		virtual const int16_t getOptionalToolId2Value() const;
		virtual const int16_t* getOptionalToolId2Reference() const;
		virtual const bool isOptionalToolId2Null() const;
		virtual void setOptionalToolId2Null();
		virtual void setOptionalToolId2Value( const int16_t value );

		virtual const int16_t getOptionalToolId3Value() const;
		virtual const int16_t* getOptionalToolId3Reference() const;
		virtual const bool isOptionalToolId3Null() const;
		virtual void setOptionalToolId3Null();
		virtual void setOptionalToolId3Value( const int16_t value );

		virtual const int16_t getOptionalToolId4Value() const;
		virtual const int16_t* getOptionalToolId4Reference() const;
		virtual const bool isOptionalToolId4Null() const;
		virtual void setOptionalToolId4Null();
		virtual void setOptionalToolId4Value( const int16_t value );

		virtual const int16_t getOptionalToolId5Value() const;
		virtual const int16_t* getOptionalToolId5Reference() const;
		virtual const bool isOptionalToolId5Null() const;
		virtual void setOptionalToolId5Null();
		virtual void setOptionalToolId5Value( const int16_t value );

		virtual const int16_t getOptionalToolId6Value() const;
		virtual const int16_t* getOptionalToolId6Reference() const;
		virtual const bool isOptionalToolId6Null() const;
		virtual void setOptionalToolId6Null();
		virtual void setOptionalToolId6Value( const int16_t value );

		virtual const int16_t getOptionalToolId7Value() const;
		virtual const int16_t* getOptionalToolId7Reference() const;
		virtual const bool isOptionalToolId7Null() const;
		virtual void setOptionalToolId7Null();
		virtual void setOptionalToolId7Value( const int16_t value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator <( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator <( const CFGenKbToolSetByTool1IdxKey& rhs );
		bool operator <( const CFGenKbToolSetByTool2IdxKey& rhs );
		bool operator <( const CFGenKbToolSetByTool3IdxKey& rhs );
		bool operator <( const CFGenKbToolSetByTool4IdxKey& rhs );
		bool operator <( const CFGenKbToolSetByTool5IdxKey& rhs );
		bool operator <( const CFGenKbToolSetByTool6IdxKey& rhs );
		bool operator <( const CFGenKbToolSetByTool7IdxKey& rhs );
		bool operator <( const CFGenKbToolSetPKey& rhs );
		bool operator <( const CFGenKbToolSetBuff& rhs );

		bool operator <=( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator <=( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator <=( const CFGenKbToolSetByTool1IdxKey& rhs );
		bool operator <=( const CFGenKbToolSetByTool2IdxKey& rhs );
		bool operator <=( const CFGenKbToolSetByTool3IdxKey& rhs );
		bool operator <=( const CFGenKbToolSetByTool4IdxKey& rhs );
		bool operator <=( const CFGenKbToolSetByTool5IdxKey& rhs );
		bool operator <=( const CFGenKbToolSetByTool6IdxKey& rhs );
		bool operator <=( const CFGenKbToolSetByTool7IdxKey& rhs );
		bool operator <=( const CFGenKbToolSetPKey& rhs );
		bool operator <=( const CFGenKbToolSetBuff& rhs );

		bool operator ==( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator ==( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator ==( const CFGenKbToolSetByTool1IdxKey& rhs );
		bool operator ==( const CFGenKbToolSetByTool2IdxKey& rhs );
		bool operator ==( const CFGenKbToolSetByTool3IdxKey& rhs );
		bool operator ==( const CFGenKbToolSetByTool4IdxKey& rhs );
		bool operator ==( const CFGenKbToolSetByTool5IdxKey& rhs );
		bool operator ==( const CFGenKbToolSetByTool6IdxKey& rhs );
		bool operator ==( const CFGenKbToolSetByTool7IdxKey& rhs );
		bool operator ==( const CFGenKbToolSetPKey& rhs );
		bool operator ==( const CFGenKbToolSetBuff& rhs );

		bool operator !=( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator !=( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator !=( const CFGenKbToolSetByTool1IdxKey& rhs );
		bool operator !=( const CFGenKbToolSetByTool2IdxKey& rhs );
		bool operator !=( const CFGenKbToolSetByTool3IdxKey& rhs );
		bool operator !=( const CFGenKbToolSetByTool4IdxKey& rhs );
		bool operator !=( const CFGenKbToolSetByTool5IdxKey& rhs );
		bool operator !=( const CFGenKbToolSetByTool6IdxKey& rhs );
		bool operator !=( const CFGenKbToolSetByTool7IdxKey& rhs );
		bool operator !=( const CFGenKbToolSetPKey& rhs );
		bool operator !=( const CFGenKbToolSetBuff& rhs );

		bool operator >=( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator >=( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator >=( const CFGenKbToolSetByTool1IdxKey& rhs );
		bool operator >=( const CFGenKbToolSetByTool2IdxKey& rhs );
		bool operator >=( const CFGenKbToolSetByTool3IdxKey& rhs );
		bool operator >=( const CFGenKbToolSetByTool4IdxKey& rhs );
		bool operator >=( const CFGenKbToolSetByTool5IdxKey& rhs );
		bool operator >=( const CFGenKbToolSetByTool6IdxKey& rhs );
		bool operator >=( const CFGenKbToolSetByTool7IdxKey& rhs );
		bool operator >=( const CFGenKbToolSetPKey& rhs );
		bool operator >=( const CFGenKbToolSetBuff& rhs );

		bool operator >( const CFGenKbToolSetByNameIdxKey& rhs );
		bool operator >( const CFGenKbToolSetByTool0IdxKey& rhs );
		bool operator >( const CFGenKbToolSetByTool1IdxKey& rhs );
		bool operator >( const CFGenKbToolSetByTool2IdxKey& rhs );
		bool operator >( const CFGenKbToolSetByTool3IdxKey& rhs );
		bool operator >( const CFGenKbToolSetByTool4IdxKey& rhs );
		bool operator >( const CFGenKbToolSetByTool5IdxKey& rhs );
		bool operator >( const CFGenKbToolSetByTool6IdxKey& rhs );
		bool operator >( const CFGenKbToolSetByTool7IdxKey& rhs );
		bool operator >( const CFGenKbToolSetPKey& rhs );
		bool operator >( const CFGenKbToolSetBuff& rhs );
		cfcore::CFGenKbToolSetBuff operator =( cfcore::CFGenKbToolSetBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs );
	bool operator <(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByNameIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool0IdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetPKey& rhs );
	bool operator >(const  cfcore::CFGenKbToolSetBuff& lhs, const cfcore::CFGenKbToolSetBuff& rhs );

	template<> struct hash<cfcore::CFGenKbToolSetBuff> {
		typedef cfcore::CFGenKbToolSetBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

