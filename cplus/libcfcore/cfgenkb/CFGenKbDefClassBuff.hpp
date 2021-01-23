#pragma once

// Description: C++18 specification for a DefClass buffer object.

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

#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbDefClassPKey;
	class CFGenKbDefClassByNameIdxKey;
	class CFGenKbDefClassByBaseIdxKey;

	class CFGenKbDefClassBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_ID;
		static const std::string COLNAME_NAME;
		static const std::string COLNAME_BASEID;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int16_t ID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int16_t BASEID_INIT_VALUE;
		static const int16_t ID_MIN_VALUE;
		static const int16_t BASEID_MIN_VALUE;
		static const int16_t ID_MAX_VALUE;
		static const int16_t BASEID_MAX_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
	protected:
		int16_t requiredId;
		std::string* requiredName;
		cflib::CFLibNullableInt16 optionalBaseId;
		int32_t requiredRevision;
	public:
		CFGenKbDefClassBuff();

		CFGenKbDefClassBuff( const CFGenKbDefClassBuff& src );

		virtual ~CFGenKbDefClassBuff();

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

		virtual const int16_t getOptionalBaseIdValue() const;
		virtual const int16_t* getOptionalBaseIdReference() const;
		virtual const bool isOptionalBaseIdNull() const;
		virtual void setOptionalBaseIdNull();
		virtual void setOptionalBaseIdValue( const int16_t value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbDefClassByNameIdxKey& rhs );
		bool operator <( const CFGenKbDefClassByBaseIdxKey& rhs );
		bool operator <( const CFGenKbDefClassPKey& rhs );
		bool operator <( const CFGenKbDefClassBuff& rhs );

		bool operator <=( const CFGenKbDefClassByNameIdxKey& rhs );
		bool operator <=( const CFGenKbDefClassByBaseIdxKey& rhs );
		bool operator <=( const CFGenKbDefClassPKey& rhs );
		bool operator <=( const CFGenKbDefClassBuff& rhs );

		bool operator ==( const CFGenKbDefClassByNameIdxKey& rhs );
		bool operator ==( const CFGenKbDefClassByBaseIdxKey& rhs );
		bool operator ==( const CFGenKbDefClassPKey& rhs );
		bool operator ==( const CFGenKbDefClassBuff& rhs );

		bool operator !=( const CFGenKbDefClassByNameIdxKey& rhs );
		bool operator !=( const CFGenKbDefClassByBaseIdxKey& rhs );
		bool operator !=( const CFGenKbDefClassPKey& rhs );
		bool operator !=( const CFGenKbDefClassBuff& rhs );

		bool operator >=( const CFGenKbDefClassByNameIdxKey& rhs );
		bool operator >=( const CFGenKbDefClassByBaseIdxKey& rhs );
		bool operator >=( const CFGenKbDefClassPKey& rhs );
		bool operator >=( const CFGenKbDefClassBuff& rhs );

		bool operator >( const CFGenKbDefClassByNameIdxKey& rhs );
		bool operator >( const CFGenKbDefClassByBaseIdxKey& rhs );
		bool operator >( const CFGenKbDefClassPKey& rhs );
		bool operator >( const CFGenKbDefClassBuff& rhs );
		cfcore::CFGenKbDefClassBuff operator =( cfcore::CFGenKbDefClassBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs );
	bool operator <(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs );

	bool operator >(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByNameIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassPKey& rhs );
	bool operator >(const  cfcore::CFGenKbDefClassBuff& lhs, const cfcore::CFGenKbDefClassBuff& rhs );

	template<> struct hash<cfcore::CFGenKbDefClassBuff> {
		typedef cfcore::CFGenKbDefClassBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

