#pragma once

// Description: C++18 specification for a SecSession buffer object.

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

	class CFGenKbSecSessionPKey;
	class CFGenKbSecSessionBySecUserIdxKey;
	class CFGenKbSecSessionBySecDevIdxKey;
	class CFGenKbSecSessionByStartIdxKey;
	class CFGenKbSecSessionByFinishIdxKey;
	class CFGenKbSecSessionBySecProxyIdxKey;

	class CFGenKbSecSessionBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_SECSESSIONID;
		static const std::string COLNAME_SECUSERID;
		static const std::string COLNAME_SECDEVNAME;
		static const std::string COLNAME_START;
		static const std::string COLNAME_FINISH;
		static const std::string COLNAME_SECPROXYID;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const std::string SECDEVNAME_INIT_VALUE;
		static std::chrono::system_clock::time_point START_INIT_VALUE;
		static const std::string::size_type SECDEVNAME_MAX_LEN;
	protected:
		uuid_t requiredSecSessionId;
		uuid_t requiredSecUserId;
		std::string* optionalSecDevName;
		std::chrono::system_clock::time_point requiredStart;
		std::chrono::system_clock::time_point* optionalFinish;
		uuid_t optionalSecProxyId;
		int32_t requiredRevision;
	public:
		CFGenKbSecSessionBuff();

		CFGenKbSecSessionBuff( const CFGenKbSecSessionBuff& src );

		virtual ~CFGenKbSecSessionBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const uuid_ptr_t getRequiredSecSessionId() const;
		virtual const uuid_ptr_t getRequiredSecSessionIdReference() const;
		virtual void setRequiredSecSessionId( const uuid_ptr_t value );
		virtual void generateRequiredSecSessionId();

		virtual const uuid_ptr_t getRequiredSecUserId() const;
		virtual const uuid_ptr_t getRequiredSecUserIdReference() const;
		virtual void setRequiredSecUserId( const uuid_ptr_t value );
		virtual void generateRequiredSecUserId();

		virtual const std::string& getOptionalSecDevNameValue() const;
		virtual const std::string* getOptionalSecDevNameReference() const;
		virtual const bool isOptionalSecDevNameNull() const;
		virtual void setOptionalSecDevNameNull();
		virtual void setOptionalSecDevNameValue( const std::string& value );

		virtual const std::chrono::system_clock::time_point& getRequiredStart() const;
		virtual const std::chrono::system_clock::time_point* getRequiredStartReference() const;
		virtual void setRequiredStart( const std::chrono::system_clock::time_point& value );

		virtual const std::chrono::system_clock::time_point& getOptionalFinishValue() const;
		virtual const std::chrono::system_clock::time_point* getOptionalFinishReference() const;
		virtual const bool isOptionalFinishNull() const;
		virtual void setOptionalFinishNull();
		virtual void setOptionalFinishValue( const std::chrono::system_clock::time_point& value );

		virtual const uuid_ptr_t getOptionalSecProxyIdValue() const;
		virtual const uuid_ptr_t getOptionalSecProxyIdReference() const;
		virtual const bool isOptionalSecProxyIdNull() const;
		virtual void setOptionalSecProxyIdNull();
		virtual void setOptionalSecProxyIdValue( const uuid_ptr_t value );
		virtual void generateOptionalSecProxyId();

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbSecSessionBySecUserIdxKey& rhs );
		bool operator <( const CFGenKbSecSessionBySecDevIdxKey& rhs );
		bool operator <( const CFGenKbSecSessionByStartIdxKey& rhs );
		bool operator <( const CFGenKbSecSessionByFinishIdxKey& rhs );
		bool operator <( const CFGenKbSecSessionBySecProxyIdxKey& rhs );
		bool operator <( const CFGenKbSecSessionPKey& rhs );
		bool operator <( const CFGenKbSecSessionBuff& rhs );

		bool operator <=( const CFGenKbSecSessionBySecUserIdxKey& rhs );
		bool operator <=( const CFGenKbSecSessionBySecDevIdxKey& rhs );
		bool operator <=( const CFGenKbSecSessionByStartIdxKey& rhs );
		bool operator <=( const CFGenKbSecSessionByFinishIdxKey& rhs );
		bool operator <=( const CFGenKbSecSessionBySecProxyIdxKey& rhs );
		bool operator <=( const CFGenKbSecSessionPKey& rhs );
		bool operator <=( const CFGenKbSecSessionBuff& rhs );

		bool operator ==( const CFGenKbSecSessionBySecUserIdxKey& rhs );
		bool operator ==( const CFGenKbSecSessionBySecDevIdxKey& rhs );
		bool operator ==( const CFGenKbSecSessionByStartIdxKey& rhs );
		bool operator ==( const CFGenKbSecSessionByFinishIdxKey& rhs );
		bool operator ==( const CFGenKbSecSessionBySecProxyIdxKey& rhs );
		bool operator ==( const CFGenKbSecSessionPKey& rhs );
		bool operator ==( const CFGenKbSecSessionBuff& rhs );

		bool operator !=( const CFGenKbSecSessionBySecUserIdxKey& rhs );
		bool operator !=( const CFGenKbSecSessionBySecDevIdxKey& rhs );
		bool operator !=( const CFGenKbSecSessionByStartIdxKey& rhs );
		bool operator !=( const CFGenKbSecSessionByFinishIdxKey& rhs );
		bool operator !=( const CFGenKbSecSessionBySecProxyIdxKey& rhs );
		bool operator !=( const CFGenKbSecSessionPKey& rhs );
		bool operator !=( const CFGenKbSecSessionBuff& rhs );

		bool operator >=( const CFGenKbSecSessionBySecUserIdxKey& rhs );
		bool operator >=( const CFGenKbSecSessionBySecDevIdxKey& rhs );
		bool operator >=( const CFGenKbSecSessionByStartIdxKey& rhs );
		bool operator >=( const CFGenKbSecSessionByFinishIdxKey& rhs );
		bool operator >=( const CFGenKbSecSessionBySecProxyIdxKey& rhs );
		bool operator >=( const CFGenKbSecSessionPKey& rhs );
		bool operator >=( const CFGenKbSecSessionBuff& rhs );

		bool operator >( const CFGenKbSecSessionBySecUserIdxKey& rhs );
		bool operator >( const CFGenKbSecSessionBySecDevIdxKey& rhs );
		bool operator >( const CFGenKbSecSessionByStartIdxKey& rhs );
		bool operator >( const CFGenKbSecSessionByFinishIdxKey& rhs );
		bool operator >( const CFGenKbSecSessionBySecProxyIdxKey& rhs );
		bool operator >( const CFGenKbSecSessionPKey& rhs );
		bool operator >( const CFGenKbSecSessionBuff& rhs );
		cfcore::CFGenKbSecSessionBuff operator =( cfcore::CFGenKbSecSessionBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs );
	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs );

	template<> struct hash<cfcore::CFGenKbSecSessionBuff> {
		typedef cfcore::CFGenKbSecSessionBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

