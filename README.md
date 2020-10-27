# printf

In this projected, we have created the printf function with the use of the standard library.

## Available Specifiers

%d and %i - print an integer

%c - print single character

%s - print string

%r - print string in reverse

%R - print string in rot13

%S - print string, but replace certain ASCII values with their hexadecimal counterparts

%b - print integer in binary

%x and %X - print integer in hexadecimal lowercase and uppercase respectively

%o - print integer in octal

%u - print an unsigned integer

## File Contents

0-printf.c - this file holds the definition of the custom putchar and printf functions

1-d_i.c - contains the code that allows the printing of digits and integers

15-rot.c - contains the code that converts a string into rot13

3-print_unsigned_ints.c - contains the code that enables the printing of unsigned ints

get_op.c - this file checks the format character and returns the appropriate function pointer. It also contains the functions for the following specifiers: d, i, c, s, r, S, and %

holberton.h - this is the header file of the project

main.c - this is file that tests the function

man_3_printf - man page

## Project Task Requirements

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS
Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called holberton.h
Dont forget to push your header file
All your header files should be include guarded
Note that we will not provide the _putchar function for this project

Github
There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

Authorized functions and macros

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

## Project Tasks

[Mandatory]
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You dont have to reproduce the buffer handling of the C library printf function
You dont have to handle the flag characters
You dont have to handle field width
You dont have to handle precision
You dont have to handle the length modifiers


[Mandatory]
1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:
d
i
You dont have to handle the flag characters
You dont have to handle field width
You dont have to handle precision
You dont have to handle the length modifiers


[Mandatory]
2. Just because it's in print doesn't mean it's the gospel

Create a man page for your function.

File: man_3_printf


[Advanced]
3. With a face like mine, I do better in print

Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary


[Advanced]
4. What one has not experienced, one will never understand in print

Handle the following conversion specifiers:
u
o
x
X
You dont have to handle the flag characters
You dont have to handle field width
You dont have to handle precision
You dont have to handle the length modifiers


[Advanced]
5. Nothing in fine print is ever good news

Use a local buffer of 1024 chars in order to call write as little as possible.


[Advanced]
6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print

Handle the following conversion specifier: p.
You dont have to handle the flag characters
You dont have to handle field width
You dont have to handle precision
You dont have to handle the length modifiers


[Advanced]
7. My weakness is wearing too much leopard print

Handle the following custom conversion specifier:
S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)


[Advanced]
8. The big print gives and the small print takes away

Handle the following flag characters for non-custom conversion specifiers:
+
space
#


[Advanced]
9. Sarcasm is lost in print

Handle the following length modifiers for non-custom conversion specifiers:
l
h
Conversion specifiers to handle: d, i, u, o, x, X


[Advanced]
10. Print some money and give it to us for the rain forests

Handle the field width for non-custom conversion specifiers.


[Advanced]
11. The negative is the equivalent of the composer's score, and the print the performance 

Handle the precision for non-custom conversion specifiers.


[Advanced]
12. It's depressing when you're still around and your albums are out of print

Handle the 0 flag character for non-custom conversion specifiers.


[Advanced]
13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection

Handle the - flag character for non-custom conversion specifiers.


[Advanced]
14. Print is the sharpest and the strongest weapon of our party

Handle the following custom conversion specifier:
r : prints the reversed string


[Advanced]
15. The flood of print has turned reading into a process of gulping rather than savoring 

Handle the following custom conversion specifier:
R: prints the rot13'ed string


[Advanced]
16. *

All the above options work well together.
