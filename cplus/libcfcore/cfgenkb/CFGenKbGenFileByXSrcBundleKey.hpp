#pragma once

// Description: C++18 specification for a GenFile by XSrcBundle index key object.

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

	class CFGenKbGenFileByXSrcBundleKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalSourceBundleTenantId;
		cflib::CFLibNullableInt64 optionalSourceBundleGelCacheId;
		cflib::CFLibNullableInt64 optionalSourceBundleGelId;
	public:
		CFGenKbGenFileByXSrcBundleKey();
		CFGenKbGenFileByXSrcBundleKey( const CFGenKbGenFileByXSrcBundleKey& src );
		virtual ~CFGenKbGenFileByXSrcBundleKey();

		virtual const int64_t getOptionalSourceBundleTenantIdValue() const;
		virtual const int64_t* getOptionalSourceBundleTenantIdReference() const;
		virtual const bool isOptionalSourceBundleTenantIdNull() const;
		virtual void setOptionalSourceBundleTenantIdNull();
		virtual void setOptionalSourceBundleTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalSourceBundleGelCacheIdValue() const;
		virtual const int64_t* getOptionalSourceBundleGelCacheIdReference() const;
		virtual const bool isOptionalSourceBundleGelCacheIdNull() const;
		virtual void setOptionalSourceBundleGelCacheIdNull();
		virtual void setOptionalSourceBundleGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalSourceBundleGelIdValue() const;
		virtual const int64_t* getOptionalSourceBundleGelIdReference() const;
		virtual const bool isOptionalSourceBundleGelIdNull() const;
		virtual void setOptionalSourceBundleGelIdNull();
		virtual void setOptionalSourceBundleGelIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator <( const CFGenKbGenFileBuff& rhs );

		bool operator <=( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator <=( const CFGenKbGenFileBuff& rhs );

		bool operator ==( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator ==( const CFGenKbGenFileBuff& rhs );

		bool operator !=( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator !=( const CFGenKbGenFileBuff& rhs );

		bool operator >=( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator >=( const CFGenKbGenFileBuff& rhs );

		bool operator >( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator >( const CFGenKbGenFileBuff& rhs );
		cfcore::CFGenKbGenFileByXSrcBundleKey operator =( cfcore::CFGenKbGenFileByXSrcBundleKey& src );
		cfcore::CFGenKbGenFileByXSrcBundleKey operator =( cfcore::CFGenKbGenFileBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenFileByXSrcBundleKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenFileByXSrcBundleKey> {
		typedef cfcore::CFGenKbGenFileByXSrcBundleKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

