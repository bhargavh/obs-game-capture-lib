# ⚡ obs-game-capture-lib

> The **fastest way** to get game frames — no OBS UI, no overhead, just raw frames at high FPS.

---

## 🎯 What is this?

**`obs-game-capture-lib`** is a lightweight C++ library that uses OBS Studio’s **game capture internals** to provide a **programmatic API** for grabbing frames from any game window — with **low latency**, **high performance**, and **minimal system load**.

If you're building tools for:

- high-FPS gameplay analysis  
- frame-accurate metrics  
- real-time graphics experiments  
- automation or replay systems  

...and you need raw game frames at **realtime speeds**, this is for you.

---

## 🚀 Why It's Better

Unlike traditional screen capture methods (`BitBlt`, `Desktop Duplication`, etc), this library:

- 🧠 Uses **OBS’s game capture** engine (used by millions, optimized for performance)
- 🎮 Captures from **fullscreen**, **borderless**, or **minimized** game windows
- ⚡ Delivers **frames with sub-1ms latency**
- 🪶 Is **lightweight** — no window handles, no UI, no OBS running
- 🔌 Gives you a **clean C++ API** to plug into your frame pipeline

---

## 🔧 How to Use

### Minimal Example

```cpp
#include "game_capture.h"

int main() {
    /*
        Parameters:
        - fov_width:     Width of the capture region (e.g. 1920)
        - fov_height:    Height of the capture region (e.g. 1080)
        - screen_width:  Your screen resolution width
        - screen_height: Your screen resolution height
        - game_name:     Exact window title of the game

        Example: capture 1080p game window titled "SuperFastGame"
    */

    GameCapture capture(1920, 1080, 1920, 1080, "Example Game Window Name");
    cv::Mat frame = capture.get_frame();
    cv::imshow("Captured Frame", frame);
    cv::waitKey(0);
    return 0;
}
