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

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <msscf/MssCFMessageLog.hpp>

namespace cfcore {

	/**
	 *	Default constructor.
	 */
	MssCFMessageLog::MssCFMessageLog() {
		indentLevel = 0;
	}

	MssCFMessageLog::~MssCFMessageLog() {
		if( backlog != NULL ) {
			delete backlog;
			backlog = NULL;
		}
	}

	/**
	 *	Get the current log indent level.
	 */
	int MssCFMessageLog::getMessageLogIndent() const {
		return( indentLevel );
	}

	/**
	 *	Indent the logging messages another level
	 */
	void MssCFMessageLog::dedent() {
		if( indentLevel > 0 ) {
			indentLevel --;
		}
		else {
			indentLevel = 0;
		}
	}

	/**
	 *	Indent the logging messages another level
	 */
	void MssCFMessageLog::indent() {
		indentLevel ++;
	}

	/**
	 *	Get an PrintStream that wraps this log
	 */
	std::ofstream* MssCFMessageLog::getPrintStream() const {
		return( logFile );
	}

	/**
	 *	Log a message
	 *
	 *	@param		msg		String
	 */
	void MssCFMessageLog::message( const std::string& msg ) {

		std::chrono::system_clock::time_point time_now = cflib::CFLib::getUTCTimestampInstance();
		std::string buff = cflib::CFLibXmlUtil::formatTimestamp( time_now );
		buff.append( " " );
		for( int i = 0; i < indentLevel; i ++ ) {
			buff.append( "\t" );
		}
		buff.append( msg );
		if( msg.length() > 0 ) {
			if( '\n' != msg[ msg.length() - 1 ] ) {
				buff.append( "\n" );
			}
		}

		bool wroteSomewhere = false;

		if( ! wroteSomewhere ) {
			std::cout.write( buff.c_str(), buff.length() );
			std::cout.flush();
		}
	}

	//	OLD API's that need to go away

	/**
	 *	Open the specified file for logging
	 *
	 *	@param	fileName	The name of the file to open as a log.
	 */
	void MssCFMessageLog::openLogFile( const std::string& fileName ) {
	}

	/**
	 *	Close the log file.
	 */
	void MssCFMessageLog::closeLogFile() {
	}
}

