##### 0. Preprocessor Write a script that runs a C file through the preprocessor and save the result into another file. - The C file name will be saved in the variable $CFILE -    The output should be saved in the file c

> 1. We use *gcc -E* to tell gcc command that we only want to perform pr-processing
> 2. We apply it on our file *gcc -E $CFILE
> 3. Then we output the result in the file c through -o option *gcc -E $CFILE -o c*
	
#####  1. Compiler : Write a script that compiles a C file but does not link. -The C file name will be saved in the variable $CFILE-The output file should be named the same as the C file, but with the extension .o instead of .c. -Example: if the C file is main.c, the output file should be main.o
> *gcc -c $CFILE*
