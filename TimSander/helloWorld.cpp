// helloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

int multiply(int a, int b)
{
    return a*b;
}

int main()
{
    int c;

    std::cout << "hello world" << std::endl;

    c = multiply(2, 6);

    std::cout << "a * b = " << c << std::endl;

    return 0;
}

// 1. PREPARATION STEPS
//   Get "mingw" compiler zip-archive.
//   Create under drive c: the directory "cip_tools" and extract the "mingw" compiler zip-archive into it.
//   Add the path "C:/cip_tools/mingw/20200319/bin" to the environment variable "Path" on your Windows system.
//   Change to your repository folder where your program files are located.
//   Note: I used e.g. location: "D:\repos_mine\hello-world\JuergenGipser"
//   Open Windows console in your repository folder: "cmd"
//   Run "code ." in the Windows console command prompt.
//   Install following VSCode extensions: "C/C++" and "C/C++ Extension Pack"

// 2. COMPILING helloWorld.cpp and RUNNING helloWorld.exe:
//   Open Terminal in VSCode menu: View=>Terminal.
//   Open "helloWorld.cpp" and press the "Debug/Play button" and select "Run C/C++ File"
//   OR
//   Open "helloWorld.cpp" and press the "Debug/Play button" and select "Debug C/C++ File"
//   OR
//   Run command "g++ .\helloWorld.cpp -o  helloWorld.exe" or
//               "g++ .\*.cpp -o  helloWorld.exe" in case you have more modules to compile and link.
//   Find more info on: https://code.visualstudio.com/docs/cpp/config-mingw
