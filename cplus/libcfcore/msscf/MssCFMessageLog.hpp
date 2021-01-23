#pragma once

/*
 *  MSS Code Factory CFCore 2.13 MssCF
 *
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 */

#include <iostream>
#include <fstream>

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

namespace cfcore {

	class MssCFMessageLog : public cflib::ICFLibMessageLog {

		private:
			std::string* backlog = new std::string();

			/**
			 *	Handle for the current file output stream.
			 */
			std::ofstream* logFile = NULL;

			/**
			 *	What is the current indent level for logging?
			 */
			int indentLevel = 0;

		public:

			/**
			 *	Default constructor.
			 */
			MssCFMessageLog();
			virtual ~MssCFMessageLog();

			/**
			 *	Get the current log indent level.
			 */
			virtual int getMessageLogIndent() const;

			/**
			 *	Indent the logging messages another level
			 */
			virtual void dedent();

			/**
			 *	Indent the logging messages another level
			 */
			virtual void indent();

			/**
			 *	Get an PrintStream that wraps this log
			 */
			virtual std::ofstream* getPrintStream() const;

			/**
			 *	Log a message
			 *
			 *	@param		msg		String
			 */
			virtual void message( const std::string& msg );

			//	OLD API's that need to go away

			/**
			 *	Open the specified file for logging
			 *
			 *	@param	fileName	The name of the file to open as a log.
			 */
			virtual void openLogFile( const std::string& fileName );

			/**
			 *	Close the log file.
			 */
			virtual void closeLogFile();
	};
}
