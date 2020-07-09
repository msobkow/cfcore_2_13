#pragma once

// Description: C++18 specification for a GenFile by XExpClsName index key object.

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
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGenFileBuff;

	class CFGenKbGenFileByXExpClsNameKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalExpansionClassNameTenantId;
		cflib::CFLibNullableInt64 optionalExpansionClassNameGelCacheId;
		cflib::CFLibNullableInt64 optionalExpansionClassNameGelId;
	public:
		CFGenKbGenFileByXExpClsNameKey();
		CFGenKbGenFileByXExpClsNameKey( const CFGenKbGenFileByXExpClsNameKey& src );
		virtual ~CFGenKbGenFileByXExpClsNameKey();

		virtual const int64_t getOptionalExpansionClassNameTenantIdValue() const;
		virtual const int64_t* getOptionalExpansionClassNameTenantIdReference() const;
		virtual const bool isOptionalExpansionClassNameTenantIdNull() const;
		virtual void setOptionalExpansionClassNameTenantIdNull();
		virtual void setOptionalExpansionClassNameTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionClassNameGelCacheIdValue() const;
		virtual const int64_t* getOptionalExpansionClassNameGelCacheIdReference() const;
		virtual const bool isOptionalExpansionClassNameGelCacheIdNull() const;
		virtual void setOptionalExpansionClassNameGelCacheIdNull();
		virtual void setOptionalExpansionClassNameGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionClassNameGelIdValue() const;
		virtual const int64_t* getOptionalExpansionClassNameGelIdReference() const;
		virtual const bool isOptionalExpansionClassNameGelIdNull() const;
		virtual void setOptionalExpansionClassNameGelIdNull();
		virtual void setOptionalExpansionClassNameGelIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator <( const CFGenKbGenFileBuff& rhs );

		bool operator <=( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator <=( const CFGenKbGenFileBuff& rhs );

		bool operator ==( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator ==( const CFGenKbGenFileBuff& rhs );

		bool operator !=( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator !=( const CFGenKbGenFileBuff& rhs );

		bool operator >=( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator >=( const CFGenKbGenFileBuff& rhs );

		bool operator >( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator >( const CFGenKbGenFileBuff& rhs );
		cfcore::CFGenKbGenFileByXExpClsNameKey operator =( cfcore::CFGenKbGenFileByXExpClsNameKey& src );
		cfcore::CFGenKbGenFileByXExpClsNameKey operator =( cfcore::CFGenKbGenFileBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenFileByXExpClsNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenFileByXExpClsNameKey> {
		typedef cfcore::CFGenKbGenFileByXExpClsNameKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

