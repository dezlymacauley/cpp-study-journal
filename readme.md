#  C++ Study Journal

---

### How to setup your environment (Arch Linux)

First install these three compilers:

This will let you create binary executables,
that will allow your program to work on Linux, MacOS, and Windows

`sudo pacman -S gcc` -- Linux

`sudo pacman -S clang` -- MacOS

Next install a cross-compiler:

`sudo pacman -S mingw-w64-gcc` -- Windows

The purpose of the cross-compiler is to allow you to compile your code,
and create a .exe file, for is a Windows executable.

Since I am on Linux, the default behavior of the compiler,
is to create a Linux binary.

---

### You also want to include a debugger

`sudo pacman -S gdb` -- The GNU Debugger. 
I usually use this for manual debugging in the terminal. 
Just in case I run into a sitution where the debbugger on my editor,
isn't working.

Next install lldb package:

It is the one that integrates the best with Neovim.
Note: You can setup `gdb` with Neovim but I can't freaking seem,
to get it to work, so I use codelldb instead.

`sudo pacman -S lldb`

To confirm that this was installed correctly and that you have the debugger,
run `lldb --version`


---

### How to compile your code in C++

**To create a Linux Binary**

"g++ name-of-file.cpp -o what-you-want-the-compiled-version-to-be-called"
`g++ -o main.cpp -o main`

---

**To create a MacOS Binary**
`clang++ main.cpp -o main`

---

**To create a Windows 64 bit Binary**

`x86_64-w64-mingw32-g++ main.cpp -o main.exe`


**To create a Windows 32 bit Binary**

`i686-w64-mingw32-g++ main.cpp -o main.exe`

---

### How to compile your code with a specific version of C++

`g++ main.cpp -o main -std=c++20`


---

### How to view the size of your compiled binary:

`du -h name-of-your-binary`


---

### Debugging 

You may also want to add a `-g` flag
it adds debugging symbols to the binary, 
which can be helpful when you need to debug the program using a debugger,
such as gdb (GNU Debugger).

E.g.

Go to the folder where your c++ code is, then run this command.
Don't forget the `-g` flag

This will create a binary executable of your code,
that can be checked by the debugger.

`g++ simple_code.cpp -o simple_code -std=c++20 -g`


How to use the gdb debugger:

`gbd name_of_binary_executable`

You terminal should now be in debugger mode.

It will look like this: 
(gdb)

Next add a break point where your program starts.
In C++ `int main()` is the entry point to your program. 
So your breakpoint in this case would be following line,
after the absolute line number where that function is in your code.

E.g If `int main()` is at line 21, then your breakpoint is at line 22.
`b 22`

If that is too complicated for you.
You can also add breakpoints using the name of a function.

E.g. When in debugger mode type the following

(gdb) `b name-of-function` or `break name-of-function`

You can also run the command `info b` to see how many breakpoints you have.

```
(gdb) info b
Num     Type           Disp Enb Address            Wh
at
1       breakpoint     keep y   0x0000555555555203 in
 main() at newbie_code.cpp:22
        breakpoint already hit 1 time
(gdb) 
```

You can have multiple breakpoints. To go to the set breakpoint. 
`continue`


To to delete a breakpoint like the one above, you can just type `delete 1`

Next: After setting a breakpoint, you can run your program:

(gdb) `run`

You code will run and stop at the breakpoint. E.g. line 22

After this you can type `l` or `list` to view the next part of your code.

You can also type `f` which stands for frame,
this will show you what frame of you program you are paused at. 

If you type `n` or `next` to go to play the next line of your program.

```
(gdb) f
#0  main () at newbie_code.cpp:22
22          int mainVariable = 10;
(gdb) n
23          cout << mainVariable << endl;
(gdb)
```

To check what the value of mainvariable is

(gdb) `print mainVariable` or `p mainVariable`

```
(gdb) print mainVariable 
$1 = 10
```

What this means is that the value of mainVariable is 10


To exit the debbugger press `q` 
You can also type `run`,
to restart your program from the last breakpoint you set.

Let's say you run your code until you get to a point like like 24.
Instead of just pressing next, you could type `step` or `s`,
to analyse the function called fun1();

```
24          fun1();
(gdb) 

```

This is what you should get after running that:

```
(gdb) step
fun1 () at newbie_code.cpp:16
16          int fun1Variable = 15;
(gdb) 
```

You can also use `backtrace` or `bt` to see the flow of execution:

```
(gdb) backtrace
#0  fun2 () at newbie_code.cpp:12
#1  0x00005555555551f8 in fun1 ()
    at newbie_code.cpp:18
#2  0x0000555555555235 in main ()
    at newbie_code.cpp:24
(gdb) 
```

How to read the above:
- You read it from bottom to top.
- You started at #2 the function called: main()
- Then you when to #1 the function called: fun1 ()
- And now you are at #0, which is fun2()

---

### Debugging Part 2

While in the debugger mode...

(gdb) `lay next` 

This will give you a cool layout that let's you see the assembly code.

After this, press enter to see the source code above the assembly code

NOTE: That is it not a 1 to 1 relationship. I.e One line of C++ code,
can equal multiple lines of assembly.

You can either move to then next line of C++ code with `next`,
or you can move to the next line of assembly code with `nexti`.

`nexti` means next instruction.

To refresh the screen (sometimes the formatting gets messed up),
type `ref`

---

### Warnings when compiling

You can add a `-Wall` flag

E.g.

`g++ main.cpp -o main -std=c++20 -Wall`

NOTE: This is case sensitive. Capital W

`-Wall`stands for "Warnings All"

This enables a set of warning messages during compilation.
It stands for "all warnings", 
and can help you catch potential issues in your code.
It's a good practice to include -Wall to get notified about possible problems, 
in your code.

---

### How to run your Rust program
First navigate to the folder where the .ccp file is
`./main`

---

### C++ Programming Course - Beginner to Advanced

https://youtu.be/8jLOx1hD3_o?t=10851
2:13:17 / 1:07:07:29


---

### Beginning C++ Programming - From Beginner to Beyond

Teacher = Dr. Frank Mitropoulos

#### Completed Sections
- **01 Introduction**
- **02 Installation and Setup**
- **03 Curriculum Overview**
- **04 Getting Started**
- **05 Structure of a C++ Program**
- **06 Variables and Constants**
- **07 Arrays and Vectors**
- **08 Statements and Operators**

---

### Reserved words in C++

There are about 90 reserved keywords in C++

https://en.cppreference.com/w/cpp/keyword

---
