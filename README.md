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

---

## 🏗  Building & Running

<details>
<summary><strong>macOS</strong></summary>

```bash
gcc main.c -o animation \
    -framework OpenGL -framework GLUT \
    -DGL_SILENCE_DEPRECATION   # hides Apple’s deprecation warnings
./animation

