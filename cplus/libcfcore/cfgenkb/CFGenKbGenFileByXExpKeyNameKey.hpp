#pragma once

// Description: C++18 specification for a GenFile by XExpKeyName index key object.

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

	class CFGenKbGenFileByXExpKeyNameKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalExpansionKeyNameTenantId;
		cflib::CFLibNullableInt64 optionalExpansionKeyNameGelCacheId;
		cflib::CFLibNullableInt64 optionalExpansionKeyNameGelId;
	public:
		CFGenKbGenFileByXExpKeyNameKey();
		CFGenKbGenFileByXExpKeyNameKey( const CFGenKbGenFileByXExpKeyNameKey& src );
		virtual ~CFGenKbGenFileByXExpKeyNameKey();

		virtual const int64_t getOptionalExpansionKeyNameTenantIdValue() const;
		virtual const int64_t* getOptionalExpansionKeyNameTenantIdReference() const;
		virtual const bool isOptionalExpansionKeyNameTenantIdNull() const;
		virtual void setOptionalExpansionKeyNameTenantIdNull();
		virtual void setOptionalExpansionKeyNameTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionKeyNameGelCacheIdValue() const;
		virtual const int64_t* getOptionalExpansionKeyNameGelCacheIdReference() const;
		virtual const bool isOptionalExpansionKeyNameGelCacheIdNull() const;
		virtual void setOptionalExpansionKeyNameGelCacheIdNull();
		virtual void setOptionalExpansionKeyNameGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionKeyNameGelIdValue() const;
		virtual const int64_t* getOptionalExpansionKeyNameGelIdReference() const;
		virtual const bool isOptionalExpansionKeyNameGelIdNull() const;
		virtual void setOptionalExpansionKeyNameGelIdNull();
		virtual void setOptionalExpansionKeyNameGelIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator <( const CFGenKbGenFileBuff& rhs );

		bool operator <=( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator <=( const CFGenKbGenFileBuff& rhs );

		bool operator ==( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator ==( const CFGenKbGenFileBuff& rhs );

		bool operator !=( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator !=( const CFGenKbGenFileBuff& rhs );

		bool operator >=( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator >=( const CFGenKbGenFileBuff& rhs );

		bool operator >( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator >( const CFGenKbGenFileBuff& rhs );
		cfcore::CFGenKbGenFileByXExpKeyNameKey operator =( cfcore::CFGenKbGenFileByXExpKeyNameKey& src );
		cfcore::CFGenKbGenFileByXExpKeyNameKey operator =( cfcore::CFGenKbGenFileBuff& src );
};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenFileByXExpKeyNameKey& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenFileByXExpKeyNameKey> {
		typedef cfcore::CFGenKbGenFileByXExpKeyNameKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

