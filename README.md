```
████████╗███████╗██████╗ ███╗   ███╗██╗ ██████╗ ██████╗ ██╗      ██████╗ ██████╗ 
╚══██╔══╝██╔════╝██╔══██╗████╗ ████║██║██╔════╝██╔═══██╗██║     ██╔═══██╗██╔══██╗
   ██║   █████╗  ██████╔╝██╔████╔██║██║██║     ██║   ██║██║     ██║   ██║██████╔╝
   ██║   ██╔══╝  ██╔══██╗██║╚██╔╝██║██║██║     ██║   ██║██║     ██║   ██║██╔══██╗
   ██║   ███████╗██║  ██║██║ ╚═╝ ██║██║╚██████╗╚██████╔╝███████╗╚██████╔╝██║  ██║
   ╚═╝   ╚══════╝╚═╝  ╚═╝╚═╝     ╚═╝╚═╝ ╚═════╝ ╚═════╝ ╚══════╝ ╚═════╝ ╚═╝  ╚═╝
                                                                                 
```

### **Modern ANSI Coloring Library for C++**
Header-only • Fast • Clean • Cross-platform  

---

## 🌈 About TermiColor

**TermiColor** is a lightweight and modern **C++ ANSI styling library**, built to simplify terminal colors and text formatting using clean and intuitive constants.

✔ *Header-only*  
✔ *No dependencies*  
✔ *Simple API*  
✔ *Full color + style coverage*  
✔ *Cross-platform (Linux/macOS/Windows 10+)*  

---

## 📦 Installation

You can install TermiColor in **two ways**:

---

### **1️⃣ Clone the repository (recommended)**

```bash
git clone https://github.com/iRaysk/TermiColor-CPP.git
```

Then include the header:

```cpp
#include "termicolor.h"
```

Make sure the file is inside your project directory.

---

### **2️⃣ Manual installation (simple)**

1. Click **Download ZIP** in GitHub  
2. Extract it  
3. Copy `termicolor.h` into your project  
4. Include it normally:

```cpp
#include "termicolor.h"
```

No extra setup needed.

---

## 🚀 Quick Example

```cpp
#include <iostream>
#include "termicolor.h"

int main() {
    using namespace termicolor;

    std::cout << red << "Error: something went wrong!" << reset << "\n";
    std::cout << boldGreen << "Operation successful!" << reset << "\n";
    std::cout << yellowBG << black << " WARNING " << reset << "\n";

    return 0;
}
```

---

## 🎨 Features

### **✔ Text Styles**
- `bold`, `dim`, `italic`, `underline`, `blink`, `reverse`, `hidden`, `strike`

### **✔ Basic Colors (30–37)**
- `red`, `green`, `yellow`, `blue`, `purple`, `cyan`, `white`

### **✔ Bright Colors (90–97)**
- `bRed`, `bGreen`, `bYellow`, `bBlue`, etc.

### **✔ Background Colors**
- `redBG`, `greenBG`, `blueBG`, etc.

### **✔ Bright Backgrounds (100–107)**
- `bRedBG`, `bGreenBG`, etc.

### **✔ Bold Variants**
- `boldRed`, `boldGreen`, `boldBlue`, etc.

### **✔ Reset**
- `reset`

---

## 🔧 How It Works

TermiColor uses standardized **ANSI Escape Sequences** to modify terminal output.

Examples:

```
\033[31m  → red
\033[1m   → bold
\033[0m   → reset
```

These sequences are supported by:
- Linux terminals
- macOS Terminal / iTerm
- Windows 10+ (ANSI enabled by default)

They allow fast, zero-overhead styling.

---

## 🖥 Compatibility

| Platform | Support |
|---------|---------|
| **Linux** | ✔ Full support |
| **macOS** | ✔ Full support |
| **Windows Terminal** | ✔ Full support |
| **PowerShell (new)** | ✔ Full support |
| **Old CMD** | ✖ Not supported |

---

## 🤝 Contributing

You’re welcome to contribute!

Ideas you can help add:
- TrueColor (24-bit RGB)
- Utility functions (e.g., colorize(text, red))
- Windows auto-detection
- Style combinations

---

## 📄 License

This project is licensed under **MIT License**.  
You can freely use it in personal or commercial software.

---

## ⭐ Support the Project

If TermiColor helped you, consider giving it a **⭐ on GitHub**.  
It encourages development and future updates!
