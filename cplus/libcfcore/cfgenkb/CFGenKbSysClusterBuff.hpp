#pragma once

// Description: C++18 specification for a SysCluster buffer object.

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

	class CFGenKbSysClusterPKey;
	class CFGenKbSysClusterByClusterIdxKey;

	class CFGenKbSysClusterBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_SINGLETONID;
		static const std::string COLNAME_CLUSTERID;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int SINGLETONID_INIT_VALUE;
		static const int64_t CLUSTERID_INIT_VALUE;
		static const int SINGLETONID_MIN_VALUE;
		static const int64_t CLUSTERID_MIN_VALUE;
		static const int SINGLETONID_MAX_VALUE;
	protected:
		int32_t requiredSingletonId;
		int64_t requiredClusterId;
		int32_t requiredRevision;
	public:
		CFGenKbSysClusterBuff();

		CFGenKbSysClusterBuff( const CFGenKbSysClusterBuff& src );

		virtual ~CFGenKbSysClusterBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int32_t getRequiredSingletonId() const;
		virtual const int32_t* getRequiredSingletonIdReference() const;
		virtual void setRequiredSingletonId( const int32_t value );

		virtual const int64_t getRequiredClusterId() const;
		virtual const int64_t* getRequiredClusterIdReference() const;
		virtual void setRequiredClusterId( const int64_t value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbSysClusterByClusterIdxKey& rhs );
		bool operator <( const CFGenKbSysClusterPKey& rhs );
		bool operator <( const CFGenKbSysClusterBuff& rhs );

		bool operator <=( const CFGenKbSysClusterByClusterIdxKey& rhs );
		bool operator <=( const CFGenKbSysClusterPKey& rhs );
		bool operator <=( const CFGenKbSysClusterBuff& rhs );

		bool operator ==( const CFGenKbSysClusterByClusterIdxKey& rhs );
		bool operator ==( const CFGenKbSysClusterPKey& rhs );
		bool operator ==( const CFGenKbSysClusterBuff& rhs );

		bool operator !=( const CFGenKbSysClusterByClusterIdxKey& rhs );
		bool operator !=( const CFGenKbSysClusterPKey& rhs );
		bool operator !=( const CFGenKbSysClusterBuff& rhs );

		bool operator >=( const CFGenKbSysClusterByClusterIdxKey& rhs );
		bool operator >=( const CFGenKbSysClusterPKey& rhs );
		bool operator >=( const CFGenKbSysClusterBuff& rhs );

		bool operator >( const CFGenKbSysClusterByClusterIdxKey& rhs );
		bool operator >( const CFGenKbSysClusterPKey& rhs );
		bool operator >( const CFGenKbSysClusterBuff& rhs );
		cfcore::CFGenKbSysClusterBuff operator =( cfcore::CFGenKbSysClusterBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs );
	bool operator <(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs );

	bool operator >(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterByClusterIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterPKey& rhs );
	bool operator >(const  cfcore::CFGenKbSysClusterBuff& lhs, const cfcore::CFGenKbSysClusterBuff& rhs );

	template<> struct hash<cfcore::CFGenKbSysClusterBuff> {
		typedef cfcore::CFGenKbSysClusterBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

