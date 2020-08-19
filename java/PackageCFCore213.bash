#!/bin/bash
#
Revision=$1
Build=`echo $Revision | cut --delimiter='-' -f 1`
if [ ! -d ../installer ]; then
	mkdir ../installer
fi
if [ "$Revision" == "" ]; then
	echo "ERROR: Revision (argument 1) not specified" 1>&2
else
	archiveFile="../installer/cfcore_2_13_${Revision}-DualLGPLv3-java-installer.zip"
	rm -f ${archiveFile}
	rm -f bin/*.jar
	cp ~/.m2/repository/org/msscf/msscf/v2_13/org.msscf.msscf.v2_13.cfcore*/2.13.${Build}/*-2.13.${Build}.jar bin
	zip -q9 ${archiveFile} ChangeLog *.txt LICENSE bin/*.jar bin/*.txt bin/xsd/*.xsd
	echo "Packaged ${archiveFile}"
	ls -l ${archiveFile}
fi
