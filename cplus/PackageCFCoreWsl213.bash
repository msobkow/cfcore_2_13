#!/bin/bash
Revision=$1
if [ "$Revision" == "" ]; then
	echo "ERROR: Revision (argument 1) not specified" 1>&2
else
	export Revision
	cd $MSSCFHOME/cfcore_2_13/cplus
	if [ ! -d ../installer ]; then
		mkdir ../installer
	fi
	chmod 755 ../installer
	ZipFile="../installer/cfcore_2_13_${Revision}-wsl-debug-installer.zip"
	export ZipFile
	rm -f ${ZipFile}
	rm -Rf cfcore-2.13.${Revision}-wsl
	mkdir cfcore-2.13.${Revision}-wsl
	chmod 755 cfcore-2.13.${Revision}-wsl
	echo "Preparing cfcore-2.13.${Revision}-wsl ..."
	pushd cfcore-2.13.${Revision}-wsl
		cp ../lgpl-3.0.txt ../LICENSE .
		git log 2>&1 >ChangeLog
		mkdir lib
		chmod 755 lib
		cp /usr/lib/libcfcore.la /usr/lib/libcfcore.so.2.0.13 lib
		chmod 755 lib/*.so.*
		chmod 644 lib/*.la
		strip lib/*.so.*
		mkdir include
		chmod 755 include
		mkdir include/msobkow
		chmod 755 include/msobkow
		mkdir include/msobkow/2.0.13
		chmod 755 include/msobkow/2.0.13
		cp ../lgpl-3.0.txt ../LICENSE include/msobkow/2.0.13
		chmod 644 include/msobkow/2.0.13/*
		mkdir include/msobkow/2.0.13/cfgenkb
		chmod 755 include/msobkow/2.0.13/cfgenkb
		cp /usr/include/msobkow/2.0.13/cfgenkb/*.hpp include/msobkow/2.0.13/cfgenkb
		chmod 644 include/msobkow/2.0.13/cfgenkb*/*.hpp
		mkdir include/msobkow/2.0.13/cfgenkbram
		chmod 755 include/msobkow/2.0.13/cfgenkbram
		cp /usr/include/msobkow/2.0.13/cfgenkbram/*.hpp include/msobkow/2.0.13/cfgenkbram
		chmod 644 include/msobkow/2.0.13/cfgenkbram*/*.hpp
		mkdir include/msobkow/2.0.13/msscf
		chmod 755 include/msobkow/2.0.13/msscf
		cp /usr/include/msobkow/2.0.13/msscf/*.hpp include/msobkow/2.0.13/msscf
		chmod 644 include/msobkow/2.0.13/msscf*/*.hpp
		mkdir share
		chmod 755 share
		mkdir share/msobkow
		chmod 755 share/msobkow
		mkdir share/msobkow/2.0.13
		chmod 755 share/msobkow/2.0.13
		cp ../lgpl-3.0.txt ../LICENSE share/msobkow/2.0.13
		chmod 644 share/msobkow/2.0.13/*
		mkdir share/msobkow/2.0.13/xsd
		chmod 755 share/msobkow/2.0.13/xsd
		cp /usr/share/msobkow/2.0.13/xsd/cfgenkb*.xsd share/msobkow/2.0.13/xsd
		chmod 644 share/msobkow/2.0.13/xsd/*.xsd
	popd
	echo "Packaging cfcore-2.13.${Revision}-wsl ..."
	zip -q9r ${ZipFile} cfcore-2.13.${Revision}-wsl
	rm -Rf cfcore-2.13.${Revision}-wsl
	echo "Packaged ${ZipFile}"
	ls -l ${ZipFile}
fi
