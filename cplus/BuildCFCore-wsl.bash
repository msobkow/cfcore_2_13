#!/bin/bash
#
#	com.github.msobkow.CFCore
#
#	Copyright (c) 2020 Mark Stephen Sobkow
#	
#	This file is part of MSS Code Factory.
#	
#	MSS Code Factory is free software: you can redistribute it and/or modify
#	it under the terms of the GNU Lesser General Public License as published by
#	the Free Software Foundation, either version 3 of the License, or
#	(at your option) any later version.
#	
#	MSS Code Factory is distributed in the hope that it will be useful,
#	but WITHOUT ANY WARRANTY; without even the implied warranty of
#	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#	GNU Lesser General Public License for more details.
#	
#	You should have received a copy of the GNU Lesser General Public License
#	along with MSS Code Factory.  If not, see https://www.gnu.org/licenses/.
#	
#	Donations to support MSS Code Factory can be made at
#	https://www.paypal.com/paypalme2/MarkSobkow
#	
#	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
#
#	Manufactured by MSS Code Factory 2.12
#
Revision=$1
MAJOR_VERSION=2
MINOR_VERSION=13
rm -f libcfcore*.gz *.deb *.build *.dsc *.log *.changes ex.cmd
pushd libcfcore
	if [ -f Makefile ]; then
		make distclean
	fi
popd
	if [ ! -d /usr/bin/msobkow ]; then
		sudo mkdir /usr/include/msobkow
	fi
	sudo chmod 755 /usr/bin/msobkow
	if [ ! -d /usr/bin/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION} ]; then
		sudo mkdir /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}
	fi
	sudo chmod 755 /usr/bin/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}
	if [ ! -d /usr/include/msobkow ]; then
		sudo mkdir /usr/include/msobkow
	fi
	sudo chmod 755 /usr/include/msobkow
	if [ ! -d /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION} ]; then
		sudo mkdir /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}
	fi
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}
	if [ ! -d /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkb ]; then
		sudo mkdir /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkb
	fi
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkb
	if [ ! -d /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkbobj ]; then
		sudo mkdir /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkbobj
	fi
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkbobj
	if [ ! -d /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkbram ]; then
		sudo mkdir /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkbram
	fi
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkbram
	if [ ! -d /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/msscf ]; then
		sudo mkdir /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/msscf
	fi
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/msscf
pushd libcfcore
	autoreconf -fi
	aclocal
	autoconf
	automake
	./configure --prefix=/usr --disable-static CFLAGS='-g3 -Og -D_DEBUG ' CXXFLAGS='-g3 -Og -D_DEBUG -std=c++2a -I/usr/include/msobkow/${MAJOR_VERSION).0.${MINOR_VERSION} -I/usr/include/msobkow/${MAJOR_VERSION).0.${MINOR_VERSION} '
	#./configure --prefix=/usr --disable-static CFLAGS='-O2 -DNDEBUG ' CXXFLAGS='-O2 -DNDEBUG -std=c++2a -I/usr/include/msobkow/${MAJOR_VERSION).0.${MINOR_VERSION} -I/usr/include/msobkow/${MAJOR_VERSION).0.${MINOR_VERSION} '
	make clean
	time make
	sudo make install
	sudo rm -Rf /usr/include/cfgenkb* /usr/include/msscf
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkb
	sudo sh -c "cd /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkb && chmod 644 *.hpp"
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkbobj
	sudo sh -c "cd /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkbobj && chmod 644 *.hpp"
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkbram
	sudo sh -c "cd /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfgenkbram && chmod 644 *.hpp"
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/msscf
	sudo sh -c "cd /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/msscf && chmod 644 *.hpp"
	sudo chmod 755 /usr/share/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/xsd
	sudo chmod 644 /usr/share/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/xsd/*.xsd
	sudo chmod 755 /usr/lib/*cfcore.la
	sudo chmod 755 /usr/lib/*cfcore.so*
	sudo ldconfig
popd
