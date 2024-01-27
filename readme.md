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

`sudo pacman -S gdb` -- The GNU Debugger

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

### Debugging 

You may also want to add a `-g` flag
it adds debugging symbols to the binary, 
which can be helpful when you need to debug the program using a debugger,
such as gdb (GNU Debugger).

E.g.

`g++ main.cpp -o main -std=c++20 -g`

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
- **01-introduction**

---
