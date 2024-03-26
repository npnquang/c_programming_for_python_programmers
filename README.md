# C Programming for Python Programmers

This training will cover:
1. Types, Operators, and Expressions
2. Branching and Iteration
3. Functions
4. Scope and Extent
5. Pointers
6. Arrays and Strings
7. Dynamic Memory
***

## Hello World

```
#include <stdio.h>

void main()
{
    printf("Hello World \n");
}
```

All C programs have main() as the entry-point function. The braces indicate the extent of the function block. When a function completes, the
program returns to the calling function. In the case of **main()**, the program terminates and control returns to the environment in which the program was executed. The integer return value of **main()** indicates the program’s exit status to the environment, with 0 meaning normal termination.

C is a free-form language, the program is not affected by whitespace in most cases. A statement is terminated by a semicolon and not a newline. 

## Variables and Types

C is a types language. Every variable in C is assigned a distinct type that dictates the range of values it can hold, the manner in which its data is stored in memory, and the permissible operations that can be performed on it. 

| Types         | Size (Bytes)      |
| ------------- | ----------------- |
| char          |       1           |
| int           |       4           |
| short int     |       2           |
| long int      |       8           |
| float         |       4           |
| double        |       8           |
| lonh double   |       16          |

All variables must be declared before they are used. They must be declared at the top of a block, a
section of code enclosed in brackets { and }, before any statements.

### Signed and Unsigned variables

A signed type can represent negative values (default option). The most-significant-bit (MSB) of the signed number is its sign-bit, and the value is typically encoded in 2’s-complement binary. An unsigned type is always non-negative, and the MSB is part of the numerical value—doubling the maximum
representable value compared to an equivalent signed type. 

For example, a 16-bit signed short can represent the numbers −32768 to 32767 (−2 <sup>15</sup> to 2<sup>15</sup> − 1, one bit is used to denote the sign), while a 16-bit unsigned short can represent the numbers 0 to 65535 (0 to 2<sup>16</sup>−1)

## Operators

The syntax for arithmetic and relational operators in C are similar to python in almost all cases. The logical operators in C are as follows:

| Python         |      C           |
| ------------- | ----------------- |
| and           |       &&          |
| or            |       \|\|        |

## Branching

### if Condition
```
if condition:
    # body of if statement
```

```
if (condition) {
    # body of if statement
}
```

The main differnce between an if statement in Python and C is that In C the condition should be enclosed in an opening  and closing paranethis and the body should be enclosed in a opening and closing curly braces.

### if-else Ladder

```
if condition:
    # body of if statement
elif condition:
    # body of else-if statement
else:
    # body of else statement
```

```
if ( condition ) {
    # body of if statement 
}
else if ( condition ) {
    # body of else-if statement
}
else {
    # body of else statement
}
```

The applies to if-else ladder with the additionbal caveat that **elif** is replaced by **else if**. 

### Conditional expression

```
variable = (condition) ? Expression 1 : Expression 2;
```

Conditional expression is a construct available in C. If the condition is evaluated to true the first expression is evaluated if not the second expression is evaluated. 

### Switch Statement

```
switch(value) {

    case value1: case body
                 break;

    case value2: case body
                 break;

    case value1: case body
        break;

    default: case body
        break;
}
```

In **switch** statement the block whose value gets matched to the value passed to the switch command gets evaluated. The break statement after each case block is important or else all the staements after the qualifying case will also get evaluated. 

## Loops

In Python the loops can be used as an iterator throgh different data staructures, while in C this is not possible. In C, loops are used as a control structure to manage statements that are repeated. This also means that in C the exit and entry to the loop body are based on an expression evaluation.

In addition, C also offeres a **do-while** loop. While the **for** loop and **while** loop are entry controlled - the condition to enter the loop body is checked in the beginning of the loop execution. The do-wile loops is exit controlled - the condition to enter the loop body is checked at the end of loop execution. Which means that the loop is executed at least once. 