<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

# Resources

## Table of Contents :

  - [0. make -f 0-Makefile](#subparagraph0)
  - [1. make -f 1-Makefile](#subparagraph1)
  - [2. make -f 2-Makefile](#subparagraph2)
  - [3. make -f 3-Makefile](#subparagraph3)
  - [4. A complete Makefile](#subparagraph4)
  - [5. make -f 100-Makefile](#subparagraph5)

## Resources
### Read or watch:
* [Makefile](https://www.google.com/search?q=makefile)
* [Makefiletutorial](https://makefiletutorial.com/)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* What aremake, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

## Requirements
### General
* Allowed editors:vi,vim,emacs
* OS: Ubuntu 20.04 LTS
* Version ofgcc: 9.3.0
* Version ofmake: GNU Make 4.2.1
* All your files should end with a new line
* AREADME.mdfile, at the root of the folder of the project, is mandatory

## Task
### 0. make -f 0-Makefile <a name='subparagraph0'></a>

Create your first Makefile.

Requirements:

* name of the executable: <code>school</code>
* rules: <code>all</code>

  * The <code>all</code> rule builds your executable
* variables: none

```
julien@ubuntu:~/Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
julien@ubuntu:~/Makefiles$ ./school 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/Makefiles$
```

---

### 1. make -f 1-Makefile <a name='subparagraph1'></a>

Requirements:

* name of the executable: <code>school</code>
* rules: <code>all</code>

  * The <code>all</code> rule builds your executable
* variables: <code>CC</code>, <code>SRC</code>

  * <code>CC</code>: the compiler to be used
  * <code>SRC</code>: the <code>.c</code> files

```
julien@ubuntu:~/Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/Makefiles$
```

---

### 2. make -f 2-Makefile <a name='subparagraph2'></a>

Create your first useful Makefile.

Requirements:

* name of the executable: <code>school</code>
* rules: <code>all</code>

  * The <code>all</code> rule builds your executable
* variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>

  * <code>CC</code>: the compiler to be used
  * <code>SRC</code>: the <code>.c</code> files
  * <code>OBJ</code>: the <code>.o</code> files
  * <code>NAME</code>: the name of the executable
* The <code>all</code> rule should recompile only the updated source files
* You are not allowed to have a list of all the <code>.o</code> files

```
julien@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ echo "/* School */" >> main.c
julien@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$
```

---

### 3. make -f 3-Makefile <a name='subparagraph3'></a>

Requirements:

* name of the executable: <code>school</code>
* rules: <code>all</code>, <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code>

  * <code>all</code>: builds your executable
  * <code>clean</code>: deletes all Emacs and Vim temporary files along with the executable
  * <code>oclean</code>: deletes the object files
  * <code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files
  * <code>re</code>: forces recompilation of all source files
* variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>

  * <code>CC</code>: the compiler to be used
  * <code>SRC</code>: the <code>.c</code> files
  * <code>OBJ</code>: the <code>.o</code> files
  * <code>NAME</code>: the name of the executable
  * <code>RM</code>: the program to delete files
* The <code>all</code> rule should recompile only the updated source files
* The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail
* You are not allowed to have a list of all the <code>.o</code> files

```
julien@ubuntu:~//Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school.c
main.c
main.c~
m.h
julien@ubuntu:~/Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school
school.c
school.o
main.c
main.c~
main.o
m.h
julien@ubuntu:~/Makefiles$ make clean -f 3-Makefile 
rm -f *~ school
julien@ubuntu:~/Makefiles$ make oclean -f 3-Makefile 
rm -f main.o school.o
julien@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make fclean -f 3-Makefile 
rm -f *~ school
rm -f main.o school.o
julien@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$ make re -f 3-Makefile
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$
```

---

### 4. A complete Makefile <a name='subparagraph4'></a>

Requirements:

* name of the executable: <code>school</code>
* rules: <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>oclean</code>, <code>re</code>

  * <code>all</code>: builds your executable
  * <code>clean</code>: deletes all Emacs and Vim temporary files along with the executable
  * <code>oclean</code>: deletes the object files
  * <code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files
  * <code>re</code>: forces recompilation of all source files
* variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>, <code>CFLAGS</code>

  * <code>CC</code>: the compiler to be used
  * <code>SRC</code>: the <code>.c</code> files
  * <code>OBJ</code>: the <code>.o</code> files
  * <code>NAME</code>: the name of the executable
  * <code>RM</code>: the program to delete files
  * <code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code>
* The <code>all</code> rule should recompile only the updated source files
* <p>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</p>
* <p>You are not allowed to have a list of all the <code>.o</code> files</p>

```
julien@ubuntu:~/Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/Makefiles$
```

---

### 5. make -f 100-Makefile <a name='subparagraph5'></a>

Requirements:

* name of the executable: <code>school</code>
* rules: <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>oclean</code>, <code>re</code>

  * <code>all</code>: builds your executable
  * <code>clean</code>: deletes all Emacs and Vim temporary files along with the executable
  * <code>oclean</code>: deletes the object files
  * <code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files
  * <code>re</code>: forces recompilation of all source files
* variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>, <code>CFLAGS</code>

  * <code>CC</code>: the compiler to be used
  * <code>SRC</code>: the <code>.c</code> files
  * <code>OBJ</code>: the <code>.o</code> files
  * <code>NAME</code>: the name of the executable
  * <code>RM</code>: the program to delete files
  * <code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code>
* The <code>all</code> rule should recompile only the updated source files
* The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail
* You are not allowed to have a list of all the <code>.o</code> files
* You have to use <code>$(RM)</code> for the cleaning up rules, but you are not allowed to set the <code>RM</code> variable
* You are not allowed to use the string <code>$(CC)</code> more than once in your Makefile
* You are only allowed to use the string <code>$(RM)</code> twice in your Makefile
* You are not allowed to use the string <code>$(CFLAGS)</code> (but the compiler should still use the flags you set in this variable)
* You are not allowed to have an <code>$(OBJ)</code> rule
* You are not allowed to use the <code>%.o: %.c</code> rule
* Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
* Your Makefile should not compile if the header file <code>m.h</code> is missing

---


## Authors
Ksyv - [GitHub Profile](https://github.com/ksyv)
