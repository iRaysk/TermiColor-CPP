# ANSI Colors Library for C++
A lightweight header-only C++ library that allows you to print colored and styled text in the terminal using ANSI escape codes.

## 🚀 Features
- Basic colors (30–37)
- Bright colors (90–97)
- Basic background colors (40–47)
- Bright background colors (100–107)
- Text styles (bold, underline, italic, blink, etc.)
- Easy to use (header-only, no build required)

## 📦 Installation
Download or copy the file Colors.h and place it inside your project.  
Then include it in your code:

#include "Colors.h"

## 🧪 Example Usage

#include <iostream>
#include "Colors.h"

int main() {
    using namespace Colors;

    std::cout << red << "This text is red" << reset << std::endl;
    std::cout << boldGreen << "Bold green text" << reset << std::endl;
    std::cout << blueBG << white << "White text on blue background" << reset << std::endl;

    return 0;
}

## 📁 Project Structure
/ANSI-colors-library-cpp  
│── Colors.h  
│── README.md

## 📝 Notes
- Works on terminals that support ANSI escape codes (Linux, macOS, Windows 10+ PowerShell/CMD).  
- No external dependencies.  
- Header-only library — no compilation needed.

## 📄 License
This project is released under the MIT License. Free to use in personal and commercial projects.
