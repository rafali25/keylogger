# Keylogger

This **Keylogger** program runs in the background and logs all keyboard inputs and certain mouse clicks to a `log.txt` file. The file is saved in the same directory as the `main.exe` executable.

> **Disclaimer**: This project is intended for educational and ethical testing purposes only. Unauthorized use of keyloggers on others' devices is illegal and unethical.

## Project Structure
- **main.cpp**: The primary source code file that contains the keylogging functionality. It listens to keyboard and mouse inputs and logs them to `log.txt`.

## Features
- **Logs Keyboard Input**: Captures and records all keyboard presses, including special keys (e.g., Backspace, Enter, Shift).
- **Captures Mouse Clicks**: Logs left-clicks, right-clicks, and mouse scroll actions.
- **Runs in Background**: Uses `FreeConsole()` to hide the console window, allowing the program to run without any visible interface.
- **Saves Logs**: Appends all inputs to a `log.txt` file located in the same directory as the executable (`main.exe`).

## How It Works
The `main.cpp` code includes a function `save(int _key, char *file)` that logs each keypress to a specified file. In `main()`, a loop continuously checks for key presses and saves them to `log.txt` when detected.

### Key Logging
Different key events are mapped to human-readable strings. For example:
- `VK_BACK` is logged as `[bckspc]`
- `VK_RETURN` is logged as `[enter]`
- `VK_LBUTTON` (left mouse click) is logged as `[Lclick]`

The program captures other keys and special keys in a similar format.

### Background Execution
After launching, the program hides the console window using `FreeConsole()`. This allows it to run in the background without user interference.

## How to Build and Run
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/Keylogger.git
   cd Keylogger
