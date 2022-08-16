# Design Patterns Study

Repository to study design pattern and another subjects about Object Oriented Programming using C++.

**note:** As a study project, there are lots of things to optimize and best practices to implement. I just used this to help me to study how design pattern works and some concepts about SOLID and c++ OOP.

## 🚀 Starting

Git clone and install the compiler and you are ready build and run this project.

### 📋 requirements

This project is developed using VSCode.

* Using VSCode
    MSYS2.
    Mingw 64.
    C/C++ VSCode extention.

* Visual Studio
    Just open the folder as a solution project.


### 🔧 Installing

To compile and run this project you will need mingw 64 installed in your develop environment.

At first you will need to install the compiler:

You should install it through [MSYS2](https://www.mingw-w64.org/downloads/) as I did.
You can use this document to guide you: [How to install](https://docs.epics-controls.org/projects/how-tos/en/latest/getting-started/installation-windows-msys2.html)

Set path as global:

To use the commands to build an run the project you need to add the bin folder into your global path of your OS.
Test it with `g++ --version` command into your terminal.

After that you are ready to run the project.

### ⚙️ Runing the project

**Command line build and run**

In the root folder open a terminal type the followed commands.

Build:

`g++ -fdiagnostics-color=always -g main.cpp -static -o filename-for-your-output.exe`

Run:

`./filename-for-your-output.exe`

**You also can run this using the VSCode commands**

In .vscode > launch.json and task.json there are some configuratuions that you can use to build automaticaly the code with ctrl+shift+b using VSCode.

**launch.json**: This file tells VSCode the pathing to your builded file into the project.

With ctrl+spacebar int this file using VSCode, you can set C/C++ (Windows) Lauch configuration and fill the values to match with your develop environment.

set the name of your output builded file in this configuration. "program": "${workspaceFolder}/"yourmainfilebuilded".exe".

**task.json**: This file tells VSCode information about how to compile your project and witch compile it will use.

"command" is the path to g++.exe or gpp.exe command in your mingw64 compiller installed previously.
"args" are the command to build the project. Remember to add "foldername/*.cpp", for each new folder added in your project. Besides that the compiler wont compile other files.

**After those configurations you can use the debug tool of VSCode. Click on the line number to set a breakpoint and presse F5 to start the debug tool.**

## ⚙️ Test run

For now, there is no test lib installed. I Just used lose functions writed in main.cpp file.


## 🛠️ Project builded with

Mencione as ferramentas que você usou para criar seu projeto

* [C/C++](https://en.cppreference.com/w/) - Main Coding Language
* [MinGW-w64](https://www.mingw-w64.org/) - Runtime environment


## 📌 Version

Besides git there is no vertion manager.

## ✒️ Author

* **Gabriel Lucas Rocha** - *Developer* - [Gabriel Rocha](https://github.com/XDYuuki)

## 🎁 Expressions of gratitude

* Thank you to access this project. As a studying project I know that there are many things to optimize and things that might be wrong, but this project helps me understand how some design patterns can be really usefull. Also taught me more about SOLID concepts that will make my coding better from now.
If this project help you even a little bit I will be happy for that. 
Sorry about the terrible english that I used to write this README. I am improving that too 🤓.

And Once more. Thank you for your time and I holp that this project helps you somehow to understand design patterns and C++ as It helped me.

---
⌨️ Best Regards 🐱‍👤 by: [Gabriel Lucas Rocha](https://github.com/XDYuuki) 😊