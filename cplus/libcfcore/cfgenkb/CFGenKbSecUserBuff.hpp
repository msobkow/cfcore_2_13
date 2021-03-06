#pragma once

// Description: C++18 specification for a SecUser buffer object.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */
#include <cflib/ICFLibPublic.hpp>

#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbSecUserPKey;
	class CFGenKbSecUserByULoginIdxKey;
	class CFGenKbSecUserByEMConfIdxKey;
	class CFGenKbSecUserByPwdResetIdxKey;
	class CFGenKbSecUserByDefDevIdxKey;

	class CFGenKbSecUserBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_SECUSERID;
		static const std::string COLNAME_LOGINID;
		static const std::string COLNAME_EMAILADDRESS;
		static const std::string COLNAME_EMAILCONFIRMUUID;
		static const std::string COLNAME_DFLTDEVUSERID;
		static const std::string COLNAME_DFLTDEVNAME;
		static const std::string COLNAME_PASSWORDHASH;
		static const std::string COLNAME_PASSWORDRESETUUID;
		static const char* S_INIT_CREATEDBY;
		static const char* S_INIT_UPDATEDBY;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const std::string LOGINID_INIT_VALUE;
		static const std::string EMAILADDRESS_INIT_VALUE;
		static const std::string DFLTDEVNAME_INIT_VALUE;
		static const std::string PASSWORDHASH_INIT_VALUE;
		static const std::string::size_type LOGINID_MAX_LEN;
		static const std::string::size_type EMAILADDRESS_MAX_LEN;
		static const std::string::size_type DFLTDEVNAME_MAX_LEN;
		static const std::string::size_type PASSWORDHASH_MAX_LEN;
	protected:
		uuid_t createdByUserId;
		std::chrono::system_clock::time_point createdAt;
		uuid_t updatedByUserId;
		std::chrono::system_clock::time_point updatedAt;
		uuid_t requiredSecUserId;
		std::string* requiredLoginId;
		std::string* requiredEMailAddress;
		uuid_t optionalEMailConfirmUuid;
		uuid_t optionalDfltDevUserId;
		std::string* optionalDfltDevName;
		std::string* requiredPasswordHash;
		uuid_t optionalPasswordResetUuid;
		int32_t requiredRevision;
	public:
		CFGenKbSecUserBuff();

		CFGenKbSecUserBuff( const CFGenKbSecUserBuff& src );

		virtual ~CFGenKbSecUserBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const uuid_ptr_t getCreatedByUserId() const;
		virtual void setCreatedByUserId( const uuid_ptr_t value );
		virtual const std::chrono::system_clock::time_point& getCreatedAt() const;
		virtual void setCreatedAt( const std::chrono::system_clock::time_point& value );
		virtual const uuid_ptr_t getUpdatedByUserId() const;
		virtual void setUpdatedByUserId( const uuid_ptr_t value );
		virtual const std::chrono::system_clock::time_point& getUpdatedAt() const;
		virtual void setUpdatedAt( const std::chrono::system_clock::time_point& value );
		virtual const uuid_ptr_t getRequiredSecUserId() const;
		virtual const uuid_ptr_t getRequiredSecUserIdReference() const;
		virtual void setRequiredSecUserId( const uuid_ptr_t value );
		virtual void generateRequiredSecUserId();

		virtual const std::string& getRequiredLoginId() const;
		virtual const std::string* getRequiredLoginIdReference() const;
		virtual void setRequiredLoginId( const std::string& value );

		virtual const std::string& getRequiredEMailAddress() const;
		virtual const std::string* getRequiredEMailAddressReference() const;
		virtual void setRequiredEMailAddress( const std::string& value );

		virtual const uuid_ptr_t getOptionalEMailConfirmUuidValue() const;
		virtual const uuid_ptr_t getOptionalEMailConfirmUuidReference() const;
		virtual const bool isOptionalEMailConfirmUuidNull() const;
		virtual void setOptionalEMailConfirmUuidNull();
		virtual void setOptionalEMailConfirmUuidValue( const uuid_ptr_t value );
		virtual void generateOptionalEMailConfirmUuid();

		virtual const uuid_ptr_t getOptionalDfltDevUserIdValue() const;
		virtual const uuid_ptr_t getOptionalDfltDevUserIdReference() const;
		virtual const bool isOptionalDfltDevUserIdNull() const;
		virtual void setOptionalDfltDevUserIdNull();
		virtual void setOptionalDfltDevUserIdValue( const uuid_ptr_t value );
		virtual void generateOptionalDfltDevUserId();

		virtual const std::string& getOptionalDfltDevNameValue() const;
		virtual const std::string* getOptionalDfltDevNameReference() const;
		virtual const bool isOptionalDfltDevNameNull() const;
		virtual void setOptionalDfltDevNameNull();
		virtual void setOptionalDfltDevNameValue( const std::string& value );

		virtual const std::string& getRequiredPasswordHash() const;
		virtual const std::string* getRequiredPasswordHashReference() const;
		virtual void setRequiredPasswordHash( const std::string& value );

		virtual const uuid_ptr_t getOptionalPasswordResetUuidValue() const;
		virtual const uuid_ptr_t getOptionalPasswordResetUuidReference() const;
		virtual const bool isOptionalPasswordResetUuidNull() const;
		virtual void setOptionalPasswordResetUuidNull();
		virtual void setOptionalPasswordResetUuidValue( const uuid_ptr_t value );
		virtual void generateOptionalPasswordResetUuid();

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbSecUserByULoginIdxKey& rhs );
		bool operator <( const CFGenKbSecUserByEMConfIdxKey& rhs );
		bool operator <( const CFGenKbSecUserByPwdResetIdxKey& rhs );
		bool operator <( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator <( const CFGenKbSecUserPKey& rhs );
		bool operator <( const CFGenKbSecUserBuff& rhs );

		bool operator <=( const CFGenKbSecUserByULoginIdxKey& rhs );
		bool operator <=( const CFGenKbSecUserByEMConfIdxKey& rhs );
		bool operator <=( const CFGenKbSecUserByPwdResetIdxKey& rhs );
		bool operator <=( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator <=( const CFGenKbSecUserPKey& rhs );
		bool operator <=( const CFGenKbSecUserBuff& rhs );

		bool operator ==( const CFGenKbSecUserByULoginIdxKey& rhs );
		bool operator ==( const CFGenKbSecUserByEMConfIdxKey& rhs );
		bool operator ==( const CFGenKbSecUserByPwdResetIdxKey& rhs );
		bool operator ==( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator ==( const CFGenKbSecUserPKey& rhs );
		bool operator ==( const CFGenKbSecUserBuff& rhs );

		bool operator !=( const CFGenKbSecUserByULoginIdxKey& rhs );
		bool operator !=( const CFGenKbSecUserByEMConfIdxKey& rhs );
		bool operator !=( const CFGenKbSecUserByPwdResetIdxKey& rhs );
		bool operator !=( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator !=( const CFGenKbSecUserPKey& rhs );
		bool operator !=( const CFGenKbSecUserBuff& rhs );

		bool operator >=( const CFGenKbSecUserByULoginIdxKey& rhs );
		bool operator >=( const CFGenKbSecUserByEMConfIdxKey& rhs );
		bool operator >=( const CFGenKbSecUserByPwdResetIdxKey& rhs );
		bool operator >=( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator >=( const CFGenKbSecUserPKey& rhs );
		bool operator >=( const CFGenKbSecUserBuff& rhs );

		bool operator >( const CFGenKbSecUserByULoginIdxKey& rhs );
		bool operator >( const CFGenKbSecUserByEMConfIdxKey& rhs );
		bool operator >( const CFGenKbSecUserByPwdResetIdxKey& rhs );
		bool operator >( const CFGenKbSecUserByDefDevIdxKey& rhs );
		bool operator >( const CFGenKbSecUserPKey& rhs );
		bool operator >( const CFGenKbSecUserBuff& rhs );
		cfcore::CFGenKbSecUserBuff operator =( cfcore::CFGenKbSecUserBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs );
	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs );

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs );
	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs );

	template<> struct hash<cfcore::CFGenKbSecUserBuff> {
		typedef cfcore::CFGenKbSecUserBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

