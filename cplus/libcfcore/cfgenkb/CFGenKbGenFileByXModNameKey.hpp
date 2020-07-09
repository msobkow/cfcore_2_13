#pragma once

// Description: C++18 specification for a GenFile by XModName index key object.

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

	class CFGenKbGenFileByXModNameKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalModuleNameTenantId;
		cflib::CFLibNullableInt64 optionalModuleNameGelCacheId;
		cflib::CFLibNullableInt64 optionalModuleNameGelId;
	public:
		CFGenKbGenFileByXModNameKey();
		CFGenKbGenFileByXModNameKey( const CFGenKbGenFileByXModNameKey& src );
		virtual ~CFGenKbGenFileByXModNameKey();

		virtual const int64_t getOptionalModuleNameTenantIdValue() const;
		virtual const int64_t* getOptionalModuleNameTenantIdReference() const;
		virtual const bool isOptionalModuleNameTenantIdNull() const;
		virtual void setOptionalModuleNameTenantIdNull();
		virtual void setOptionalModuleNameTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalModuleNameGelCacheIdValue() const;
		virtual const int64_t* getOptionalModuleNameGelCacheIdReference() const;
		virtual const bool isOptionalModuleNameGelCacheIdNull() const;
		virtual void setOptionalModuleNameGelCacheIdNull();
		virtual void setOptionalModuleNameGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalModuleNameGelIdValue() const;
		virtual const int64_t* getOptionalModuleNameGelIdReference() const;
		virtual const bool isOptionalModuleNameGelIdNull() const;
		virtual void setOptionalModuleNameGelIdNull();
		virtual void setOptionalModuleNameGelIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator <( const CFGenKbGenFileBuff& rhs );

		bool operator <=( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator <=( const CFGenKbGenFileBuff& rhs );

		bool operator ==( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator ==( const CFGenKbGenFileBuff& rhs );

		bool operator !=( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator !=( const CFGenKbGenFileBuff& rhs );

		bool operator >=( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator >=( const CFGenKbGenFileBuff& rhs );

		bool operator >( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator >( const CFGenKbGenFileBuff& rhs );
		cfcore::CFGenKbGenFileByXModNameKey operator =( cfcore::CFGenKbGenFileByXModNameKey& src );
		cfcore::CFGenKbGenFileByXModNameKey operator =( cfcore::CFGenKbGenFileBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenFileByXModNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenFileByXModNameKey> {
		typedef cfcore::CFGenKbGenFileByXModNameKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

