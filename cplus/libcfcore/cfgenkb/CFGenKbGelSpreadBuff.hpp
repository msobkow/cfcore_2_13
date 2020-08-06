#pragma once

// Description: C++18 specification for a GelSpread buffer object.

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

#include <cfgenkb/CFGenKbGelInstructionBuff.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGelInstructionPKey;
	class CFGenKbGelSpreadByBetweenIdxKey;
	class CFGenKbGelSpreadByBeforeIdxKey;
	class CFGenKbGelSpreadByFirstIdxKey;
	class CFGenKbGelSpreadByEachIdxKey;
	class CFGenKbGelSpreadByLastIdxKey;
	class CFGenKbGelSpreadByLoneIdxKey;
	class CFGenKbGelSpreadByEmptyIdxKey;

	class CFGenKbGelSpreadBuff : public CFGenKbGelInstructionBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_ITERATORNAME;
		static const std::string COLNAME_EXPANDBETWEEN;
		static const std::string COLNAME_EXPANDBEFORE;
		static const std::string COLNAME_EXPANDFIRST;
		static const std::string COLNAME_EXPANDEACH;
		static const std::string COLNAME_EXPANDLAST;
		static const std::string COLNAME_EXPANDLONE;
		static const std::string COLNAME_EXPANDEMPTY;
		static const std::string COLNAME_EXPANDAFTER;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t GELCACHEID_INIT_VALUE;
		static const int64_t GELINSTID_INIT_VALUE;
		static const std::string ITERATORNAME_INIT_VALUE;
		static const std::string EXPANDBETWEEN_INIT_VALUE;
		static const std::string EXPANDBEFORE_INIT_VALUE;
		static const std::string EXPANDFIRST_INIT_VALUE;
		static const std::string EXPANDEACH_INIT_VALUE;
		static const std::string EXPANDLAST_INIT_VALUE;
		static const std::string EXPANDLONE_INIT_VALUE;
		static const std::string EXPANDEMPTY_INIT_VALUE;
		static const std::string EXPANDAFTER_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t GELCACHEID_MIN_VALUE;
		static const int64_t GELINSTID_MIN_VALUE;
		static const std::string::size_type ITERATORNAME_MAX_LEN;
		static const std::string::size_type EXPANDBETWEEN_MAX_LEN;
		static const std::string::size_type EXPANDBEFORE_MAX_LEN;
		static const std::string::size_type EXPANDFIRST_MAX_LEN;
		static const std::string::size_type EXPANDEACH_MAX_LEN;
		static const std::string::size_type EXPANDLAST_MAX_LEN;
		static const std::string::size_type EXPANDLONE_MAX_LEN;
		static const std::string::size_type EXPANDEMPTY_MAX_LEN;
		static const std::string::size_type EXPANDAFTER_MAX_LEN;
	protected:
		std::string* requiredIteratorName;
		std::string* optionalExpandBetween;
		std::string* optionalExpandBefore;
		std::string* optionalExpandFirst;
		std::string* requiredExpandEach;
		std::string* optionalExpandLast;
		std::string* optionalExpandLone;
		std::string* optionalExpandEmpty;
		std::string* optionalExpandAfter;
	public:
		CFGenKbGelSpreadBuff();
		CFGenKbGelSpreadBuff( const CFGenKbGelSpreadBuff& src );
		virtual ~CFGenKbGelSpreadBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const std::string& getRequiredIteratorName() const;
		virtual const std::string* getRequiredIteratorNameReference() const;
		virtual void setRequiredIteratorName( const std::string& value );

		virtual const std::string& getOptionalExpandBetweenValue() const;
		virtual const std::string* getOptionalExpandBetweenReference() const;
		virtual const bool isOptionalExpandBetweenNull() const;
		virtual void setOptionalExpandBetweenNull();
		virtual void setOptionalExpandBetweenValue( const std::string& value );

		virtual const std::string& getOptionalExpandBeforeValue() const;
		virtual const std::string* getOptionalExpandBeforeReference() const;
		virtual const bool isOptionalExpandBeforeNull() const;
		virtual void setOptionalExpandBeforeNull();
		virtual void setOptionalExpandBeforeValue( const std::string& value );

		virtual const std::string& getOptionalExpandFirstValue() const;
		virtual const std::string* getOptionalExpandFirstReference() const;
		virtual const bool isOptionalExpandFirstNull() const;
		virtual void setOptionalExpandFirstNull();
		virtual void setOptionalExpandFirstValue( const std::string& value );

		virtual const std::string& getRequiredExpandEach() const;
		virtual const std::string* getRequiredExpandEachReference() const;
		virtual void setRequiredExpandEach( const std::string& value );

		virtual const std::string& getOptionalExpandLastValue() const;
		virtual const std::string* getOptionalExpandLastReference() const;
		virtual const bool isOptionalExpandLastNull() const;
		virtual void setOptionalExpandLastNull();
		virtual void setOptionalExpandLastValue( const std::string& value );

		virtual const std::string& getOptionalExpandLoneValue() const;
		virtual const std::string* getOptionalExpandLoneReference() const;
		virtual const bool isOptionalExpandLoneNull() const;
		virtual void setOptionalExpandLoneNull();
		virtual void setOptionalExpandLoneValue( const std::string& value );

		virtual const std::string& getOptionalExpandEmptyValue() const;
		virtual const std::string* getOptionalExpandEmptyReference() const;
		virtual const bool isOptionalExpandEmptyNull() const;
		virtual void setOptionalExpandEmptyNull();
		virtual void setOptionalExpandEmptyValue( const std::string& value );

		virtual const std::string& getOptionalExpandAfterValue() const;
		virtual const std::string* getOptionalExpandAfterReference() const;
		virtual const bool isOptionalExpandAfterNull() const;
		virtual void setOptionalExpandAfterNull();
		virtual void setOptionalExpandAfterValue( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGelSpreadByBetweenIdxKey& rhs );
		bool operator <( const CFGenKbGelSpreadByBeforeIdxKey& rhs );
		bool operator <( const CFGenKbGelSpreadByFirstIdxKey& rhs );
		bool operator <( const CFGenKbGelSpreadByEachIdxKey& rhs );
		bool operator <( const CFGenKbGelSpreadByLastIdxKey& rhs );
		bool operator <( const CFGenKbGelSpreadByLoneIdxKey& rhs );
		bool operator <( const CFGenKbGelSpreadByEmptyIdxKey& rhs );
		bool operator <( const CFGenKbGelInstructionPKey& rhs );
		bool operator <( const CFGenKbGelSpreadBuff& rhs );

		bool operator <=( const CFGenKbGelSpreadByBetweenIdxKey& rhs );
		bool operator <=( const CFGenKbGelSpreadByBeforeIdxKey& rhs );
		bool operator <=( const CFGenKbGelSpreadByFirstIdxKey& rhs );
		bool operator <=( const CFGenKbGelSpreadByEachIdxKey& rhs );
		bool operator <=( const CFGenKbGelSpreadByLastIdxKey& rhs );
		bool operator <=( const CFGenKbGelSpreadByLoneIdxKey& rhs );
		bool operator <=( const CFGenKbGelSpreadByEmptyIdxKey& rhs );
		bool operator <=( const CFGenKbGelInstructionPKey& rhs );
		bool operator <=( const CFGenKbGelSpreadBuff& rhs );

		bool operator ==( const CFGenKbGelSpreadByBetweenIdxKey& rhs );
		bool operator ==( const CFGenKbGelSpreadByBeforeIdxKey& rhs );
		bool operator ==( const CFGenKbGelSpreadByFirstIdxKey& rhs );
		bool operator ==( const CFGenKbGelSpreadByEachIdxKey& rhs );
		bool operator ==( const CFGenKbGelSpreadByLastIdxKey& rhs );
		bool operator ==( const CFGenKbGelSpreadByLoneIdxKey& rhs );
		bool operator ==( const CFGenKbGelSpreadByEmptyIdxKey& rhs );
		bool operator ==( const CFGenKbGelInstructionPKey& rhs );
		bool operator ==( const CFGenKbGelSpreadBuff& rhs );

		bool operator !=( const CFGenKbGelSpreadByBetweenIdxKey& rhs );
		bool operator !=( const CFGenKbGelSpreadByBeforeIdxKey& rhs );
		bool operator !=( const CFGenKbGelSpreadByFirstIdxKey& rhs );
		bool operator !=( const CFGenKbGelSpreadByEachIdxKey& rhs );
		bool operator !=( const CFGenKbGelSpreadByLastIdxKey& rhs );
		bool operator !=( const CFGenKbGelSpreadByLoneIdxKey& rhs );
		bool operator !=( const CFGenKbGelSpreadByEmptyIdxKey& rhs );
		bool operator !=( const CFGenKbGelInstructionPKey& rhs );
		bool operator !=( const CFGenKbGelSpreadBuff& rhs );

		bool operator >=( const CFGenKbGelSpreadByBetweenIdxKey& rhs );
		bool operator >=( const CFGenKbGelSpreadByBeforeIdxKey& rhs );
		bool operator >=( const CFGenKbGelSpreadByFirstIdxKey& rhs );
		bool operator >=( const CFGenKbGelSpreadByEachIdxKey& rhs );
		bool operator >=( const CFGenKbGelSpreadByLastIdxKey& rhs );
		bool operator >=( const CFGenKbGelSpreadByLoneIdxKey& rhs );
		bool operator >=( const CFGenKbGelSpreadByEmptyIdxKey& rhs );
		bool operator >=( const CFGenKbGelInstructionPKey& rhs );
		bool operator >=( const CFGenKbGelSpreadBuff& rhs );

		bool operator >( const CFGenKbGelSpreadByBetweenIdxKey& rhs );
		bool operator >( const CFGenKbGelSpreadByBeforeIdxKey& rhs );
		bool operator >( const CFGenKbGelSpreadByFirstIdxKey& rhs );
		bool operator >( const CFGenKbGelSpreadByEachIdxKey& rhs );
		bool operator >( const CFGenKbGelSpreadByLastIdxKey& rhs );
		bool operator >( const CFGenKbGelSpreadByLoneIdxKey& rhs );
		bool operator >( const CFGenKbGelSpreadByEmptyIdxKey& rhs );
		bool operator >( const CFGenKbGelInstructionPKey& rhs );
		bool operator >( const CFGenKbGelSpreadBuff& rhs );
		cfcore::CFGenKbGelSpreadBuff operator =( cfcore::CFGenKbGelSpreadBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBetweenIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByBeforeIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEachIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByLoneIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelInstructionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGelSpreadBuff& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGelSpreadBuff> {
		typedef cfcore::CFGenKbGelSpreadBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

