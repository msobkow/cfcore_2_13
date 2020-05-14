#pragma once

// Description: C++18 specification for a GenItem by AltIdx index key object.

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
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGenItemBuff;

	class CFGenKbGenItemByAltIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		std::string* requiredName;
		int16_t requiredToolSetId;
		cflib::CFLibNullableInt16 optionalScopeDefId;
		int16_t requiredGenDefId;
	public:
		CFGenKbGenItemByAltIdxKey();
		CFGenKbGenItemByAltIdxKey( const CFGenKbGenItemByAltIdxKey& src );
		virtual ~CFGenKbGenItemByAltIdxKey();

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual const int16_t getRequiredToolSetId() const;
		virtual const int16_t* getRequiredToolSetIdReference() const;
		virtual void setRequiredToolSetId( const int16_t value );

		virtual const int16_t getOptionalScopeDefIdValue() const;
		virtual const int16_t* getOptionalScopeDefIdReference() const;
		virtual const bool isOptionalScopeDefIdNull() const;
		virtual void setOptionalScopeDefIdNull();
		virtual void setOptionalScopeDefIdValue( const int16_t value );

		virtual const int16_t getRequiredGenDefId() const;
		virtual const int16_t* getRequiredGenDefIdReference() const;
		virtual void setRequiredGenDefId( const int16_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator <( const CFGenKbGenItemBuff& rhs );

		bool operator <=( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator <=( const CFGenKbGenItemBuff& rhs );

		bool operator ==( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator ==( const CFGenKbGenItemBuff& rhs );

		bool operator !=( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator !=( const CFGenKbGenItemBuff& rhs );

		bool operator >=( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator >=( const CFGenKbGenItemBuff& rhs );

		bool operator >( const CFGenKbGenItemByAltIdxKey& rhs );
		bool operator >( const CFGenKbGenItemBuff& rhs );
		cfcore::CFGenKbGenItemByAltIdxKey operator =( cfcore::CFGenKbGenItemByAltIdxKey& src );
		cfcore::CFGenKbGenItemByAltIdxKey operator =( cfcore::CFGenKbGenItemBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemByAltIdxKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenItemByAltIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenItemByAltIdxKey> {
		typedef cfcore::CFGenKbGenItemByAltIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

