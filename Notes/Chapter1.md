# Chapter 1: Getting started with C Language

## Section 1.1: Hello World

To create a simple C program which prints *"Hello World!"* on screen, we create a new file (e.g. hello.c - the file extension must be .c) containing the following source code:

```
#include <stdio.h>

int main(void){
    puts("Hello World!");
    return 0;
}
```

**puts can be used instead of printf for strings in C with creating a new line**

```
#include <stdio.h>
```

This line tells the compiler to include the contents of standard library file `stdio.h` in the program. Headers are usually files containing function declarations, macros and data types, and we must **include** the header file before we can use them. 

This line include `stdio.h` so it can call the function `puts()`.

```
int main(void)
```

This line starts the definition of a function. It states the name of function (main), the type, and the number of arguments it expects (`void`, meaning none), and the type of value value that this function returns (`int`). 

**Program executuon starts in the main() function**

```
{
    ...
}
```

The curly braces are used in pair to indicate where a block of code begins and end. They can be used in a lot of ways, but in this case they indicate where the function begins and ends.

```
puts("Hello World!");
```

The line calls the `puts()` function to output (the screen, by default), followed by a new line.

The string to be output is included within the parentheses. 

`"Hello World!"` is the string that will be written to the screen. In C, every string literal value must be inside the double quotes `"..."`

**In C programs, every statement needs to be terminated by a semi-colon (i.e. ;)**.

```
return 0;
```

When we define main(), we declare it as a function returning an `int`, meaning it needs to return an integer. In this example, we are returning the integer value 0, which is used to indicate the program exited successfully.

After the `return 0;` statement, the execution process will terminate.

### Compile Using GCC

GCC (GNU Compiler Collection) is a widely used C compiler. 

```
gcc hello.c -o hello
```
this is the command to run the compile the *hello.c* file to an executable *hello* **binary file** if no errors are found in the source code (hello.c). 

We can also use the warning options like `-Wall -Wextra -Werror`, that helps to identify problems that can cause the program to fail or product exprected results. 

```
gcc -Wall -Wextra -Werror -h hello hello.c
```

## Section 1.2: Original "Hello World!" in K&R C

The following is the original "Hello World!" program from the book **The C Programming Language**. 

```
Version = K&R
#include <stdio.h>

main(){
    printf("Hello World!\n");
}
```

The recommended and most protable from of main for hosted system is `int main (void)` when the program **does not use any command line arguments**, or `int main(int argc, char **argv)` 
### Program Termination

A return from the initial call to the main function is equivalent to calling the `exit` function with the value returned by the `main` function as its argument. If the `main` function executes a return that specified no value, the termination status return to the host environment is undefined. 

### The Return Statement

If a `return` statement without an express is executed, and the value of the function call is used by the called, the behavior is undefined. Reaching the } that terminates a function is equivalent to executing a `return` statement without an expression. 

### Program Terminantion

If the return type of the main function is a type compatible with `int`, a return from the inital call to the main function is equivalent to calling the `exit` function with the value returned by the `main` function as its argument; reaching the } that terminates the main function returns a value of 0. If the return type is not compatible with `int`, the termination status returned to the host environment is unspecified. 