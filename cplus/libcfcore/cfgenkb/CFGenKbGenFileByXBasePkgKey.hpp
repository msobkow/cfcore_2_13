#pragma once

// Description: C++18 specification for a GenFile by XBasePkg index key object.

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

	class CFGenKbGenFileBuff;

	class CFGenKbGenFileByXBasePkgKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalBasePackageTenantId;
		cflib::CFLibNullableInt64 optionalBasePackageGelCacheId;
		cflib::CFLibNullableInt64 optionalBasePackageGelId;
	public:
		CFGenKbGenFileByXBasePkgKey();
		CFGenKbGenFileByXBasePkgKey( const CFGenKbGenFileByXBasePkgKey& src );
		virtual ~CFGenKbGenFileByXBasePkgKey();

		virtual const int64_t getOptionalBasePackageTenantIdValue() const;
		virtual const int64_t* getOptionalBasePackageTenantIdReference() const;
		virtual const bool isOptionalBasePackageTenantIdNull() const;
		virtual void setOptionalBasePackageTenantIdNull();
		virtual void setOptionalBasePackageTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalBasePackageGelCacheIdValue() const;
		virtual const int64_t* getOptionalBasePackageGelCacheIdReference() const;
		virtual const bool isOptionalBasePackageGelCacheIdNull() const;
		virtual void setOptionalBasePackageGelCacheIdNull();
		virtual void setOptionalBasePackageGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalBasePackageGelIdValue() const;
		virtual const int64_t* getOptionalBasePackageGelIdReference() const;
		virtual const bool isOptionalBasePackageGelIdNull() const;
		virtual void setOptionalBasePackageGelIdNull();
		virtual void setOptionalBasePackageGelIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator <( const CFGenKbGenFileBuff& rhs );

		bool operator <=( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator <=( const CFGenKbGenFileBuff& rhs );

		bool operator ==( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator ==( const CFGenKbGenFileBuff& rhs );

		bool operator !=( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator !=( const CFGenKbGenFileBuff& rhs );

		bool operator >=( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator >=( const CFGenKbGenFileBuff& rhs );

		bool operator >( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator >( const CFGenKbGenFileBuff& rhs );
		cfcore::CFGenKbGenFileByXBasePkgKey operator =( cfcore::CFGenKbGenFileByXBasePkgKey& src );
		cfcore::CFGenKbGenFileByXBasePkgKey operator =( cfcore::CFGenKbGenFileBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenFileByXBasePkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenFileByXBasePkgKey> {
		typedef cfcore::CFGenKbGenFileByXBasePkgKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

