#pragma once

/*
 *  MSS Code Factory CFCore 2.13 MssCF
 *
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

namespace cfcore {

	class MssCFGenSwitchLimb
	{
		protected:
			std::string _KeyName;
			std::string _MacroName;

		public:

			static const std::string CLASS_NAME;

			MssCFGenSwitchLimb(
				const std::string& keyName,
				const std::string& macroName );
			virtual ~MssCFGenSwitchLimb();

			virtual const std::string& getKeyName() const;
			virtual const std::string& getMacroName() const;

			virtual size_t hashCode() const;
			virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs );
	bool operator <=(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs );
	bool operator ==(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs );
	bool operator !=(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs );
	bool operator >=(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs );
	bool operator >(const  cfcore::MssCFGenSwitchLimb& lhs, const cfcore::MssCFGenSwitchLimb& rhs );

	template<> struct hash<cfcore::MssCFGenSwitchLimb> {
		typedef cfcore::MssCFGenSwitchLimb argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}
