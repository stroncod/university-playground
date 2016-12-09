#!/usr/bin/bash

#bash split.sh <nombrearchivo> <numerosplit>

archivo=$1

num_archivos=$2

total_lines=$(gwc -l <${archivo})

#((lines_per_file = (total_lines + num_files - 1) / num_archivos))
((lines_per_file = (total_lines) / num_archivos))

#echo $archivo

for ((VARIABLE=0; VARIABLE < $num_archivos; VARIABLE++))
 do
  if [ $VARIABLE -lt 10 ]
   then
	#echo $archivo
	ghead -n $((VARIABLE * lines_per_file)) $archivo > train0$VARIABLE.txt
	#echo $total_lines","$VARIABLE","$lines_per_file
	#echo $((total_lines - (VARIABLE  + 1)  * lines_per_file))
	gtail -n $((total_lines - (VARIABLE  + 1)  * lines_per_file)) $archivo >> train0$VARIABLE.txt
	gtail -n $((total_lines - VARIABLE  * lines_per_file)) $archivo | ghead -n $lines_per_file > test0$VARIABLE.txt
	#echo $lines_per_file
  else
	ghead -n $((VARIABLE * lines_per_file)) $archivo > train$VARIABLE.txt
	gtail -n $((total_lines - (VARIABLE  + 1)  * lines_per_file)) $archivo >> train$VARIABLE.txt
	gtail -n $((total_lines - VARIABLE  * lines_per_file)) $archivo | ghead -n $lines_per_file > test$VARIABLE.txt
  fi
 done
