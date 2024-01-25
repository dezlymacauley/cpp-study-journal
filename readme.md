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

### How to run your Rust program
First navigate to the folder where the .ccp file is
`./main`

---

### C++ Programming Course - Beginner to Advanced
https://youtu.be/8jLOx1hD3_o?t=3848

---
