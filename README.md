# C Helpers

Compile file:
gcc file_name -o test

Run file and interact:
./test

| File name        		| Description 												   |
| --------------------- |------------------------------------------------------------- |
| 0_hello_world.c 		| - Hello world to C |
| 1_variables.c 		| - Using variables. Compile with -lm |
| 2_data_structures.c	| - Using basic data structures (pointers, array unit) |
| 3_conditionals.c		| - Using if and switch-case |
| 4_loops.c				| - Using loops (While, do and For) |
| 5_functions_methods.c | - Using functions and methods |
| 6_records.c 			| - Create structures and Inheritance |
| 7_libraries.c 		| - Using libraries (time, math and random) |
| 8_io.c 				| - Read standard input and manipulate files |
| 9_value_transform.c	| - Value to string and string to value functions |
| persons.h				| - Class created to be exported - Declaration |
| person.c				| - Class created to be exported - Implementation |
| 10_importing_files.c	| - Import file |

Compile the last one using:
gcc person.h person.c 10_importing_files.c -o test