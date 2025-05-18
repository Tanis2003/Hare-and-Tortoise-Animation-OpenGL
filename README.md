# 🐢🐇 Hare-and-Tortoise 2-D Animation (OpenGL / GLUT)

A **small college lab project** for my Computer Graphics course that recreates Aesop’s *“The Tortoise and the Hare”* in real time using C, classic OpenGL, and GLUT.

---

## ✨  Key Computer-Graphics Concepts Demonstrated
| Concept | Where it’s used |
|---------|-----------------|
| **Translation** (`glTranslatef`) | Scroll the parallax background and move characters across the scene |
| **Scaling** (`glScalef`) | Resize trees, clouds, and body parts to create depth and variety |
| **Rotation** (`glRotatef`) | Swing limbs, tilt the tortoise shell, and orient signboards |
| **Immediate-mode primitives** | Draw circles (triangle fans), polygons, and line loops for every element |
| **Orthographic 2-D projection** | Easy pixel-style placement with `gluOrtho2D(0, 640, 0, 480)` |
| **State-driven animation** | Global flags/counters step through *start → run → nap → victory* |

## 📦 Prerequisites – OpenGL & GLUT

Before you can compile this program you only need **two** graphics libraries:

1. **OpenGL**  
   *The low-level library that actually draws pixels.*  
   • Already installed on Windows, macOS, and most Linux distros—nothing extra to download.

2. **GLUT (or its drop-in replacement FreeGLUT)**  
   *A tiny toolkit that opens a window, processes keyboard/mouse input, and repeatedly calls your `display()` function.*  
   • **macOS** – GLUT is bundled with the system.  
   • **Linux** – install it with your package manager, e.g. `sudo apt install freeglut3-dev`.  
   • **Windows** – download the pre-built *freeglut* ZIP, then copy  
     - `glut.h` → into your compiler’s `include\GL\` folder  
     - `glut32.lib` → into `lib\`  
     - `glut32.dll` → next to your `.exe` or `C:\Windows\System32`

That’s it—once OpenGL and GLUT are present, the project will build with a single `gcc` or `cl` command.

> **Platform note:**  
> If you are compiling on **Windows**, replace the line  
> ```c
> #include <GLUT/glut.h>   /* macOS / Linux */
> ```  
> with  
> ```c
> #include <GL/glut.h>     /* Windows */
> ```  
> Users on **macOS** or **Linux** should keep the original `#include <GLUT/glut.h>` line unchanged.

## 📸 Screenshots
<img width="563" alt="Screenshot 2025-05-18 at 3 00 12 PM" src="https://github.com/user-attachments/assets/be2a0eeb-f64b-4575-82bc-3bf325000827" />

<img width="565" alt="Screenshot 2025-05-18 at 3 00 21 PM" src="https://github.com/user-attachments/assets/3f83ebb6-7834-4154-9df1-a2ea62a96e0a" />

<img width="574" alt="Screenshot 2025-05-18 at 3 00 35 PM" src="https://github.com/user-attachments/assets/9ebedc9b-b6b8-47e8-acb4-954c0f056026" />

