#pragma once

// Description: C++18 specification for a GelSwitchLimb buffer object.

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

	class CFGenKbGelSwitchLimbPKey;
	class CFGenKbGelSwitchLimbByTenantIdxKey;
	class CFGenKbGelSwitchLimbBySwitchIdxKey;

	class CFGenKbGelSwitchLimbBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TENANTID;
		static const std::string COLNAME_GELCACHEID;
		static const std::string COLNAME_GELINSTID;
		static const std::string COLNAME_LIMBNAME;
		static const std::string COLNAME_LIMBEXPANSION;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const int64_t GELINSTID_INIT_VALUE;
		static const std::string LIMBNAME_INIT_VALUE;
		static const std::string LIMBEXPANSION_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const int64_t GELINSTID_MIN_VALUE;
		static const std::string::size_type LIMBNAME_MAX_LEN;
		static const std::string::size_type LIMBEXPANSION_MAX_LEN;
	protected:
		int64_t requiredTenantId;
		int64_t requiredGelCacheId;
		int64_t requiredGelInstId;
		std::string* requiredLimbName;
		std::string* requiredLimbExpansion;
		int32_t requiredRevision;
	public:
		CFGenKbGelSwitchLimbBuff();

		CFGenKbGelSwitchLimbBuff( const CFGenKbGelSwitchLimbBuff& src );

		virtual ~CFGenKbGelSwitchLimbBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredGelCacheId() const;
		virtual const int64_t* getRequiredGelCacheIdReference() const;
		virtual void setRequiredGelCacheId( const int64_t value );

		virtual const int64_t getRequiredGelInstId() const;
		virtual const int64_t* getRequiredGelInstIdReference() const;
		virtual void setRequiredGelInstId( const int64_t value );

		virtual const std::string& getRequiredLimbName() const;
		virtual const std::string* getRequiredLimbNameReference() const;
		virtual void setRequiredLimbName( const std::string& value );

		virtual const std::string& getRequiredLimbExpansion() const;
		virtual const std::string* getRequiredLimbExpansionReference() const;
		virtual void setRequiredLimbExpansion( const std::string& value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator <( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
		bool operator <( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator <( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator <=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator <=( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
		bool operator <=( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator <=( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator ==( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator ==( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
		bool operator ==( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator ==( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator !=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator !=( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
		bool operator !=( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator !=( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator >=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator >=( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
		bool operator >=( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator >=( const CFGenKbGelSwitchLimbBuff& rhs );

		bool operator >( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
		bool operator >( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
		bool operator >( const CFGenKbGelSwitchLimbPKey& rhs );
		bool operator >( const CFGenKbGelSwitchLimbBuff& rhs );
		cfcore::CFGenKbGelSwitchLimbBuff operator =( cfcore::CFGenKbGelSwitchLimbBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelSwitchLimbBuff> {
		typedef cfcore::CFGenKbGelSwitchLimbBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

