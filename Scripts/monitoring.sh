#!/bin/bash

set -e

# Declaration of variables

arc=$(uname -a | awk '{print $1" "$2" "$3" "$4" "$5"\n\t\t\t"$6" "$7" "$8" "$9" "$10}')

cpuf=$(lscpu | awk '$1 == "CPU(s):" {print $2}')
cpuv=$(cat /proc/cpuinfo | grep processor | wc -l)
cpuu=$(top -bn1 | grep "Cpu(s):" | \
	sed "s/.*, *\([0-9.]*\)%* id.*/\1/" | \
	awk '{print 100 - $1"%"}')

ram=$(free -m | awk '$1 == "Mem:" {print $3}')
tram=$(free -m | awk '$1 == "Mem:" {print $2}')
uram=$(free -t | awk '$1 == "Mem:" {printf ("%.2f"), $3 / $2 * 100}')

disk=$(df -Bm | grep '^/dev/' | awk '{d += $3} END {print d}')
tdisk=$(df -Bm | grep '^/dev/' | awk '{t += $2} END {print t}')
udisk=$(df -Bm | grep '^/dev/' | \
	awk '{d += $3} {t += $2} END {printf ("%.2f"), d / t * 100}')


lboot=$(who -b | awk '{print $3"\t"$4}')

lvm=$(lsblk | grep lvm | wc -l)
iflvm=$(
if [ "$lvm" == 0 ]; then
	echo No!;
else
	echo Yes!;
fi
)

tcp=$(cat /proc/net/sockstat | awk '$1 == "TCP:" {print $3}')

cuser=$(who | cut -d " " -f1 | sort -u | wc -l)

ip=$(hostname -I)
mac=$(ip link show | grep 'link/ether' | awk '{print $2}')

sudos=$(journalctl -q _COMM=sudo | grep COMMAND | wc -l)

# This is a function In this case it contains a helping window.

help() {
cat << _EOF_

	Monitoring is a tool that automaticatly every 10 minutes shs on screen
	information about the system.

	Available utilities:
		default:	= Defualt option, prints on screen information
				  about the system an other utilities.
		help:	-h	= Prints on scren a helping screen.
		random:	-r	= Prints on screen a random number of much help.
		who:	-w	= Prints on screen who made this. aka: ElPatatin

_EOF_
}

# Simple function that makes operation with the system variables $RANDOM

ran() { 
	rannbr=$(($RANDOM % 10))
	echo ""
	echo "	Te quedan $rannbr anyos de vida. :)"
	echo ""
}

# Function about me

whois() {
	echo ""
	echo "	Este script esta hecho por Cristobal Peset Cruella	(cpeset-c)"
	echo ""
}

if [ "$1" == "-r" ]; then
	ran
	exit
fi

if [ "$1" == "-w" ]; then
	whois
	exit
fi

if [ "$1" == "-h" ]; then
	help
	exit
fi

if [ "$1" == "--help" ]; then
	help
	exit
fi

# System information, where the variables execute.

	wall	"	#Architecture:	$arc
	#CPU:		$cpuf
	#vCPU:		$cpuv
	#RAM:		$ram/$tram MB	($uram%)
	#Disk Usage:	$disk/$tdisk	($udisk%)
	#CPU Usage:	$cpuu
	#Last boot:	$lboot
	#LVM use:	$iflvm		$lvm Active
	#Conn TCP:	$tcp		Connections
	#User log:	$cuser
	#Network IP:	$ip	($mac)
	#Sudo:		$sudos		Commands
	"

exit
