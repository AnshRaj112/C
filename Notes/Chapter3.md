# Chapter 3: Data Types
## Section 3.1: Interpreting Declarations

A distinctive syntactic peculiarity of C is that declarations mirros the use of the declared object as it would be in a normal expression.

The following set of operators with identical precendence and associativity are reused in declarators, namely:

* The unary * "dereference" operator which denotes a pointer;

* The binary [ ] "array subscription" operator which denotes an array;

* The ( 1+n )-arr ( ) "function call" operator which denotes a function;

* The ( ) grouping parentheses which override the precedence and associativity of the rest of the listed operators.

| Operator | Relative Precence | Associativity |
|----------|----------|----------|
| [ ] (array subscription)  | 1  | Left to right  |
| ( ) (function call)  | 1  | Left to right  |
| * (dereference)  | 2  | Right to left  |

When interpreting declarations, we have to start from the identifier outwards and then apply the adjacent operators in the correct order as per the table given above. Each application of an operator can be substituted with the following English words:

| Operator |  Associativity |
|----------|----------|
| thing [X] | LAn array of size X  |
| thing (t1, t2, t3 ) | A function taking t1, t2, t3 and returning...  |
| *thing | A pointer to...  |

It follows that the beginning of the English interpretation will always start with the identifier and will type that stands on the left-hand side of the declaration.

**Examples**

```
char *names[20];
```

[ ] takes precedence over *, so the interpretatin is: `name` is an array of the size 20 of a pointer to `char`

```
char (*place)[10];
```

In case of using parentheses to override the precendence, the * is applied first; `place` is a pointer to an array of size 10 of `char`.

```
int fn(long, short);
```

There is no precendence to worry about here: `fn` is a function taking `long`, `short` and returning `int`.

```
int *fn(void);
```

The ( ) is applied first: `fn` is a function taking `void` and returning a pointer to `int`.

```
int (*fp)(void);
```

Overriding the precedence of ( ): `fp` is a pointer to a function taking `void` and returning `int`.

```
int arr[5][8];
```

Multidimensional array are not an exception to the rule; The [ ] operators are applied in left-to-right order according to the associativity in the table: `arr` is an array of the size 5 of an array of size 8 of `int`.

```
int **ptr;
```

The two dereference operators have equal precendence, so the associativity takes effect. The operators are applied in right-to-left order: `ptr` is a pointer to a pointer to an `int`.

**Multiple Declarations**

The comma (,) can be used as a separator in order to delimit multiple declarations within a single statement. For example:

```
int fn(void), *ptr, (*fp)(int), arr[10][20], num;
```

The declared objects in the above example are:

* fn: a function taking `void` and returning `int`;

* ptr a pointer to an `int`;

* fp: a pointer to a function 
taking `int` and returning `int`;

* arr: an array of size 10 of an array of size 20 of `int`;

* num: `int`.

## Section 3.2: Fixed Width Integer Types

The header <stdint.h> provides serveral fixed-integer type definitions. These types are *optional* and only provided if the platform has an integer type of the corresponding width, and if the corresponding signed type has a two's complement representation of negative values.

```
/* commonly used types included */

uint32_t u32 = 32 /* exactly 32-bits wide */

uint8_t u8 = 255 /* exactly 8-bits wide */

uint64_t i64 = -65 /* exactly 64-bits in two's complement representation */
```

## Section 3.3: Integer types and constants

Signed integers can be of these types (the `int` after `short`, or `long` is optional):

```
signed char c = 127; /* required to be 1 byte, see remarks for further information. */

signed short int si = 32767; /* required to be at least 16 bits. */

signed int i = 32767; /* required to be at least 16 bits */

signed long int li = 2147483647; /* required to be at least 32 bits. */
```

Version ≥ C99

```
signed long long int li = 2147483647; /* required to be at least 64 bits */
``` 

Each of these signed integer types has an unsigned version. 

```
unsigned int i = 65535;

unsigned short = 2767;

unsigned char = 255;
```

For all the types but `char` the `signed` version is assumed if the `signed` or `unsigned` part is omitted. The type `char` constitutes a third character type, different from `signed char` and `unsigned char` and signedness (or not) depends on the platform. 


## Section 3.4: Floating Point Constants

The C language has three mandatory real floating point types, `float`, `double`, and `long double`.

```
float f = 0.314f // Suffix f or F denotes type float

double d = 0.314 // no suffix denotes double

long double ld = 0.314l // suffix L or l denotes long double

/* the different parts of a floating point definition are optional */

double x = 1.; /* valid, fractional part is optional */

double y = .1; /* valid, whole-number part is optional */

/* they can also defined in scientific notation */

double sd = 1.2e3; /* decimal fraction 1.2 is scaled by 10^3, that is 1200.0 */
```

## Section 3.5: String Literals

A string literal in C is sequence of charts, terminated by literal zero.

```
char* str = "hello, world"; /* string literal */

/* string literals can be used to initialize arrays */

char a1[] = "abc"; /* a1 is char[4] holding {'a','b','c','\0'} */

char a2[4] = "abc"; /* same as a1 */

char a3[3] = "abc"; /* a1 is char[3] holding {'a','b','c'}, missing the '\0' */
```