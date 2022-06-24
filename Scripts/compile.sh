#!/bin/bash

set -e

all() {

	cc -c *.c && ar -rcs libft.a *.o

}

compile() {

cc -Wall -Werror -Wextra *.c -o out; ./out

}

simple() {

cc *.c -o out

}

complete() {

cc -o2 -Wall -Wextra -Werror *.c -o out; ./out | cat -e

}

out() {

./out | cat -e

}

help() {

cat << _EOF_

 Compile is a script that automates de procedures of compiling and executing C programs.

 Commands:
	Default	= Compile a program with the expected flags and runs it.

	-a	= Compile all programs in the current directory .c and creates a
		  library so it can be use it everywhere the users wants. Cool?
	[--all]

	-c	= Compile a program with all the posibilites and expected flags.
		  This opttion runs the program.
	[--complete]

	-h	= Prints this very same text. A helping window
	[--help]
	
	-o	= It doesn't compile anything. 
		  Just runs the program if theres any output.
	[--output]

	-s	= Compile all programs in the current directory .c with the 
		  minimum posibilities. This option doesn't run anything.
	[--simple]

								by: Cristóbal Peset Cruella.

_EOF_

}

if [ "$1" == "-a" ] || [ "$1" == "--all" ]; then
	all
	exit
fi

if [ "$1" == "-c" ] || [ "$1" == "--complete" ]; then
	complete
	exit
fi

if [ "$1" == "-s" ] || [ "$1" == "--simple" ]; then
	simple
	exit
fi

if [ "$1" == "-o" ] || [ "$1" == "--output" ]; then
	out
	exit
fi

if [ "$1" == "-h" ] || [ "$1" == "--help" ]; then
	help
	exit
fi

if [ -n "$1" ]; then
	echo "There's have been an error. Try -help to find all posible flags for this script."
	exit
fi

compile
exit
