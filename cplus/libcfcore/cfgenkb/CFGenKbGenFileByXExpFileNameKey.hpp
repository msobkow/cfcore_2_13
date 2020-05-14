#pragma once

// Description: C++18 specification for a GenFile by XExpFileName index key object.

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

	class CFGenKbGenFileByXExpFileNameKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalExpansionFileNameTenantId;
		cflib::CFLibNullableInt64 optionalExpansionFileNameGelCacheId;
		cflib::CFLibNullableInt64 optionalExpansionFileNameGelId;
	public:
		CFGenKbGenFileByXExpFileNameKey();
		CFGenKbGenFileByXExpFileNameKey( const CFGenKbGenFileByXExpFileNameKey& src );
		virtual ~CFGenKbGenFileByXExpFileNameKey();

		virtual const int64_t getOptionalExpansionFileNameTenantIdValue() const;
		virtual const int64_t* getOptionalExpansionFileNameTenantIdReference() const;
		virtual const bool isOptionalExpansionFileNameTenantIdNull() const;
		virtual void setOptionalExpansionFileNameTenantIdNull();
		virtual void setOptionalExpansionFileNameTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionFileNameGelCacheIdValue() const;
		virtual const int64_t* getOptionalExpansionFileNameGelCacheIdReference() const;
		virtual const bool isOptionalExpansionFileNameGelCacheIdNull() const;
		virtual void setOptionalExpansionFileNameGelCacheIdNull();
		virtual void setOptionalExpansionFileNameGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionFileNameGelIdValue() const;
		virtual const int64_t* getOptionalExpansionFileNameGelIdReference() const;
		virtual const bool isOptionalExpansionFileNameGelIdNull() const;
		virtual void setOptionalExpansionFileNameGelIdNull();
		virtual void setOptionalExpansionFileNameGelIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator <( const CFGenKbGenFileBuff& rhs );

		bool operator <=( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator <=( const CFGenKbGenFileBuff& rhs );

		bool operator ==( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator ==( const CFGenKbGenFileBuff& rhs );

		bool operator !=( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator !=( const CFGenKbGenFileBuff& rhs );

		bool operator >=( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator >=( const CFGenKbGenFileBuff& rhs );

		bool operator >( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator >( const CFGenKbGenFileBuff& rhs );
		cfcore::CFGenKbGenFileByXExpFileNameKey operator =( cfcore::CFGenKbGenFileByXExpFileNameKey& src );
		cfcore::CFGenKbGenFileByXExpFileNameKey operator =( cfcore::CFGenKbGenFileBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenFileByXExpFileNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenFileByXExpFileNameKey> {
		typedef cfcore::CFGenKbGenFileByXExpFileNameKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

