#pragma once

// Description: C++18 specification for a GelSwitch buffer object.

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

#include <cfgenkb/CFGenKbGelInstructionBuff.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGelInstructionPKey;

	class CFGenKbGelSwitchBuff : public CFGenKbGelInstructionBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_VALUEEXPANSION;
		static const std::string COLNAME_NILEXPANSION;
		static const std::string COLNAME_EMPTYEXPANSION;
		static const std::string COLNAME_DEFAULTEXPANSION;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const int64_t GELINSTID_INIT_VALUE;
		static const std::string VALUEEXPANSION_INIT_VALUE;
		static const std::string NILEXPANSION_INIT_VALUE;
		static const std::string EMPTYEXPANSION_INIT_VALUE;
		static const std::string DEFAULTEXPANSION_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const int64_t GELINSTID_MIN_VALUE;
		static const std::string::size_type VALUEEXPANSION_MAX_LEN;
		static const std::string::size_type NILEXPANSION_MAX_LEN;
		static const std::string::size_type EMPTYEXPANSION_MAX_LEN;
		static const std::string::size_type DEFAULTEXPANSION_MAX_LEN;
	protected:
		std::string* requiredValueExpansion;
		std::string* optionalNilExpansion;
		std::string* optionalEmptyExpansion;
		std::string* requiredDefaultExpansion;
	public:
		CFGenKbGelSwitchBuff();
		CFGenKbGelSwitchBuff( const CFGenKbGelSwitchBuff& src );
		virtual ~CFGenKbGelSwitchBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const std::string& getRequiredValueExpansion() const;
		virtual const std::string* getRequiredValueExpansionReference() const;
		virtual void setRequiredValueExpansion( const std::string& value );

		virtual const std::string& getOptionalNilExpansionValue() const;
		virtual const std::string* getOptionalNilExpansionReference() const;
		virtual const bool isOptionalNilExpansionNull() const;
		virtual void setOptionalNilExpansionNull();
		virtual void setOptionalNilExpansionValue( const std::string& value );

		virtual const std::string& getOptionalEmptyExpansionValue() const;
		virtual const std::string* getOptionalEmptyExpansionReference() const;
		virtual const bool isOptionalEmptyExpansionNull() const;
		virtual void setOptionalEmptyExpansionNull();
		virtual void setOptionalEmptyExpansionValue( const std::string& value );

		virtual const std::string& getRequiredDefaultExpansion() const;
		virtual const std::string* getRequiredDefaultExpansionReference() const;
		virtual void setRequiredDefaultExpansion( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGelInstructionPKey& rhs );
		bool operator <( const CFGenKbGelSwitchBuff& rhs );

		bool operator <=( const CFGenKbGelInstructionPKey& rhs );
		bool operator <=( const CFGenKbGelSwitchBuff& rhs );

		bool operator ==( const CFGenKbGelInstructionPKey& rhs );
		bool operator ==( const CFGenKbGelSwitchBuff& rhs );

		bool operator !=( const CFGenKbGelInstructionPKey& rhs );
		bool operator !=( const CFGenKbGelSwitchBuff& rhs );

		bool operator >=( const CFGenKbGelInstructionPKey& rhs );
		bool operator >=( const CFGenKbGelSwitchBuff& rhs );

		bool operator >( const CFGenKbGelInstructionPKey& rhs );
		bool operator >( const CFGenKbGelSwitchBuff& rhs );
		cfcore::CFGenKbGelSwitchBuff operator =( cfcore::CFGenKbGelSwitchBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelSwitchBuff& lhs, const cfcore::CFGenKbGelSwitchBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelSwitchBuff> {
		typedef cfcore::CFGenKbGelSwitchBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

