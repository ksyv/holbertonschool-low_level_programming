<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

# Resources

## Table of Contents :

  - [0. ](#subparagraph0)
  - [1. ](#subparagraph1)
  - [2. ](#subparagraph2)
  - [3. ](#subparagraph3)
  - [4. ](#subparagraph4)
  - [5. ](#subparagraph5)

## Resources
### Read or watch:
* [Google](/rltoken/K6QcR1Dp4e5u67E586ooiA)
* [Youtube](/rltoken/cdSMJd0abHiCWCYwt6_Dmw)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* Look for the right source of information without too much help
* How to manipulate bits and use bitwise operators

## Requirements
### General
* Allowed editors:vi,vim,emacs
* All your files will be compiled on Ubuntu 20.04 LTS usinggcc, using the options-Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* AREADME.mdfile, at the root of the folder of the project is mandatory
* Your code should use theBettystyle. It will be checked usingbetty-style.plandbetty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed aremalloc,freeandexit. Any use of functions likeprintf,puts,calloc,reallocetc… is forbidden
* You are allowed to use_putchar
* You don’t have to push_putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, themain.cfiles are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our ownmain.cfiles at compilation. Ourmain.cfiles might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function_putcharshould be included in your header file calledmain.h
* Don’t forget to push your header file
* All your header files should be include guarded

## Task
### 0.  <a name='subparagraph0'></a>

Write a function that converts a binary number to an <code>unsigned int</code>.

* Prototype: <code>unsigned int binary_to_uint(const char *b);</code>
* where <code>b</code> is pointing to a string of <code>0</code> and <code>1</code> chars
* Return: the converted number, or 0 if


  * there is one or more chars in the string <code>b</code> that is not <code>0</code> or <code>1</code>
  * <code>b</code> is <code>NULL</code>

```
julien@ubuntu:~/Binary$ cat 0-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/Binary$
```

---

### 1.  <a name='subparagraph1'></a>

Write a function that prints the binary representation of a number.

* Prototype: <code>void print_binary(unsigned long int n);</code>
* Format: see example
* You are not allowed to use arrays
* You are not allowed to use <code>malloc</code>
* You are not allowed to use the <code>%</code> or <code>/</code> operators

```
julien@ubuntu:~/Binary$ cat 1-main.c 
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/Binary$ ./b 
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/Binary$
```

---

### 2.  <a name='subparagraph2'></a>

Write a function that returns the value of a bit at a given index.

* Prototype: <code>int get_bit(unsigned long int n, unsigned int index);</code>
* where <code>index</code> is the index, starting from <code>0</code> of the bit you want to get
* Returns: the value of the bit at index <code>index</code> or <code>-1</code> if an error occured

```
julien@ubuntu:~/Binary$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c    
julien@ubuntu:~/Binary$ ./c
1
1
0
julien@ubuntu:~/Binary$
```

---

### 3.  <a name='subparagraph3'></a>

Write a function that sets the value of a bit to <code>1</code> at a given index.

* Prototype: <code>int set_bit(unsigned long int *n, unsigned int index);</code>
* where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set
* Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred

```
julien@ubuntu:~/Binary$ cat 3-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
julien@ubuntu:~/Binary$ ./d
1056
1024
99
julien@ubuntu:~/Binary$
```

---

### 4.  <a name='subparagraph4'></a>

Write a function that sets the value of a bit to <code>0</code> at a given index.

* Prototype: <code>int clear_bit(unsigned long int *n, unsigned int index);</code>
* where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set
* Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred

```
julien@ubuntu:~/Binary$ cat 4-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
julien@ubuntu:~/Binary$ ./e
0
0
96
julien@ubuntu:~/Binary$
```

---

### 5.  <a name='subparagraph5'></a>

Write a function that returns the number of bits you would need to flip to get from one number to another.

* Prototype: <code>unsigned int flip_bits(unsigned long int n, unsigned long int m);</code>
* You are not allowed to use the <code>%</code> or <code>/</code> operators

```
julien@ubuntu:~/Binary$ cat 5-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
julien@ubuntu:~/Binary$ ./f
2
5
3
1
julien@ubuntu:~/Binary$
```

---


## Authors
Ksyv - [GitHub Profile](https://github.com/ksyv)
