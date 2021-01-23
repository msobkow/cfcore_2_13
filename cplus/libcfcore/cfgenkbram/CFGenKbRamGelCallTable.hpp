#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GelCall.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>


namespace cfcore {

	class CFGenKbRamGelCallTable
	: public virtual cfcore::ICFGenKbGelCallTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbGelCallByCacheIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>*>* dictByCacheIdx;
		std::map<cfcore::CFGenKbGelCallBySeqIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>*>* dictBySeqIdx;
		std::map<cfcore::CFGenKbGelCallByCallInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>*>* dictByCallInstIdx;
		std::map<cfcore::CFGenKbGelCallByPrevInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>*>* dictByPrevInstIdx;
		std::map<cfcore::CFGenKbGelCallByNextInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>*>* dictByNextInstIdx;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGelCallTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGelCallTable();

		virtual cfcore::CFGenKbGelCallBuff* createGelCall( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCallBuff* Buff );

		virtual cfcore::CFGenKbGelCallBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual cfcore::CFGenKbGelCallBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readDerivedByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId );

		virtual cfcore::CFGenKbGelCallBuff* readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual cfcore::CFGenKbGelCallBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual cfcore::CFGenKbGelCallBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGelCallBuff* readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> readBuffByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> pageBuffByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> pageBuffBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> pageBuffByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> pageBuffByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> pageBuffByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId );

		virtual cfcore::CFGenKbGelCallBuff* updateGelCall( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCallBuff* Buff );

		virtual void deleteGelCall( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGelCallBuff* Buff );
		virtual void deleteGelCallByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId );

		virtual void deleteGelCallByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCallByCacheIdxKey* argKey );

		virtual void deleteGelCallBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argSeqInstTenantId,
			const int64_t* argSeqInstGelCacheId,
			const int64_t* argSeqInstId );

		virtual void deleteGelCallBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCallBySeqIdxKey* argKey );

		virtual void deleteGelCallByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argCallInstTenantId,
			const int64_t* argCallInstGelCacheId,
			const int64_t* argCallInstId );

		virtual void deleteGelCallByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCallByCallInstIdxKey* argKey );

		virtual void deleteGelCallByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argPrevInstTenantId,
			const int64_t* argPrevInstGelCacheId,
			const int64_t* argPrevInstGelInstId );

		virtual void deleteGelCallByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCallByPrevInstIdxKey* argKey );

		virtual void deleteGelCallByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argNextInstTenantId,
			const int64_t* argNextInstGelCacheId,
			const int64_t* argNextInstGelInstId );

		virtual void deleteGelCallByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelCallByNextInstIdxKey* argKey );

		virtual void deleteGelCallByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId );

		virtual void deleteGelCallByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionPKey* argKey );

		virtual void deleteGelCallByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGelCallByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey );

		virtual void deleteGelCallByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId );

		virtual void deleteGelCallByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey );

		virtual void deleteGelCallByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId );

		virtual void deleteGelCallByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
