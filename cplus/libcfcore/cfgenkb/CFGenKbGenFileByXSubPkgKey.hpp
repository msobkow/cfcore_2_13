#pragma once

// Description: C++18 specification for a GenFile by XSubPkg index key object.

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

	class CFGenKbGenFileBuff;

	class CFGenKbGenFileByXSubPkgKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalSubPackageTenantId;
		cflib::CFLibNullableInt64 optionalSubPackageGelCacheId;
		cflib::CFLibNullableInt64 optionalSubPackageGelId;
	public:
		CFGenKbGenFileByXSubPkgKey();
		CFGenKbGenFileByXSubPkgKey( const CFGenKbGenFileByXSubPkgKey& src );
		virtual ~CFGenKbGenFileByXSubPkgKey();

		virtual const int64_t getOptionalSubPackageTenantIdValue() const;
		virtual const int64_t* getOptionalSubPackageTenantIdReference() const;
		virtual const bool isOptionalSubPackageTenantIdNull() const;
		virtual void setOptionalSubPackageTenantIdNull();
		virtual void setOptionalSubPackageTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalSubPackageGelCacheIdValue() const;
		virtual const int64_t* getOptionalSubPackageGelCacheIdReference() const;
		virtual const bool isOptionalSubPackageGelCacheIdNull() const;
		virtual void setOptionalSubPackageGelCacheIdNull();
		virtual void setOptionalSubPackageGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalSubPackageGelIdValue() const;
		virtual const int64_t* getOptionalSubPackageGelIdReference() const;
		virtual const bool isOptionalSubPackageGelIdNull() const;
		virtual void setOptionalSubPackageGelIdNull();
		virtual void setOptionalSubPackageGelIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator <( const CFGenKbGenFileBuff& rhs );

		bool operator <=( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator <=( const CFGenKbGenFileBuff& rhs );

		bool operator ==( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator ==( const CFGenKbGenFileBuff& rhs );

		bool operator !=( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator !=( const CFGenKbGenFileBuff& rhs );

		bool operator >=( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator >=( const CFGenKbGenFileBuff& rhs );

		bool operator >( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator >( const CFGenKbGenFileBuff& rhs );
		cfcore::CFGenKbGenFileByXSubPkgKey operator =( cfcore::CFGenKbGenFileByXSubPkgKey& src );
		cfcore::CFGenKbGenFileByXSubPkgKey operator =( cfcore::CFGenKbGenFileBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenFileByXSubPkgKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenFileByXSubPkgKey> {
		typedef cfcore::CFGenKbGenFileByXSubPkgKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

